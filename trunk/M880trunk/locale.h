/*************************************************
                                           
 ZEM 200                                          
                                                    
 locale.h the header file for Multi-language                               
                                                      
 Copyright (C) 2005-2006, ZKSoftware Inc.      		
                                                      
*************************************************/
#ifndef _LOCALE_H_
#define _LOCALE_H_

#include "arca.h"

//�������֧��
//
#define LID_INVALID	-1
#define LID_SYMBOL	255
#define LID_UNICODE2	254
#define LID_ROM		0
#define LID_ISO8859_1	1
#define LID_ISO8859_2	2
#define LID_ISO8859_3	3
#define LID_ISO8859_4	4
#define LID_ISO8859_5	5
#define LID_ISO8859_6	6
#define LID_ISO8859_7	7
#define LID_ISO8859_8	8
#define LID_ISO8859_9	9
#define LID_ISO8859_10	10
#define LID_ISO8859_11	11
#define LID_ISO8859_13	13
#define LID_ISO8859_14	14
#define LID_ISO8859_15	15
#define LID_ISO8859_16	16
#define LID_KOI8_R	12
#define LID_THAI	LID_ISO8859_11
#define LID_ENGLISH	LID_ISO8859_1

#define LID_GB2312	21
#define LID_GB18030	22
#define LID_UTF8	23
#define LID_GB23122	24	//ֻ�����ֿ�
#define LID_BIG5	25

#define LID_CP1250	50	//	 Central Europe
#define LID_CP1251	51	//	 Cyrillic		
#define LID_CP1252	52	//	 Latin I		
#define LID_CP1253	53	//	 Greek			
#define LID_CP1254	54	//	 Turkish		
#define LID_CP1255	55	//	 Hebrew		
#define LID_CP1256	56	//	 Arabic
#define LID_CP1257	57	//	 Baltic		
#define LID_CP1258	58	//	 Vietnam	
#define LID_CP874	LID_THAI
#define LID_CP949	59	//	Koren
#define LID_KOR		LID_CP949
#define LID_JOHAB	61	//������ĸ��ֻ�����ֿ�
#define LID_SJIS	60	// Japanese
#define LID_JAPANESE	LID_SJIS

typedef struct _fontlib_{
	unsigned char *buffer; //font data buffer
	int width;  //�ַ��Ŀ��
	int height;	//�ֿ�ĸ߶�
	unsigned short firstchar;
	int size;	//����ַ�����firstchar+size-1������ַ�
	int symbolcount;//�����ַ�������
	int compressed;
	unsigned short *offset;	//�ַ�λ��ƫ������
	unsigned char *bits;	//�ַ���������
	int codeid;	//���뷽��
}TFontLib;

typedef int (* fGetTextWidthFun)(void *LangDriver, char *Text);
typedef int (* fGetTextHeightFun)(void *LangDriver, char *Text);
typedef char* (* fGetTextDotsFun)(void *LangDriver, char *Text, char *Dots, int *DotsSize, int *ByteCount);
typedef char* (* fGetNextTextFun)(void *LangDriver, char *Text, int Width);

typedef struct _LangDriver_{
	int CharHeight;
	int CharWidth;
	int LanguageID;
	int Bidi;	///˫���Ӿ�˳��֧��, ����ʾ���Ӣ�ĺͰ�����������
	int RightToLeft; //Arabic �� Hebrew �Ǵ��ҵ�����ʾ����ʾ֧��
	fGetTextWidthFun		GetTextWidthFun;
	fGetTextHeightFun		GetTextHeightFun;
	fGetTextDotsFun			GetTextDotsFun;
	fGetNextTextFun			GetNextTextFun;
	TFontLib	*FontLib;
}TLangDriver, *PLangDriver;

extern TLangDriver *gLangDriver;
extern TLangDriver *gSymbolDriver;
extern TLangDriver *gROMDriver;

//����
int SetDefaultLanguage(int LocaleID, int RowHeight);
PLangDriver CreateLanguageDriver(int LocaleID, char *FontName, int FontSize);
void FreeLanguageDriver(PLangDriver LangDriver);

PLangDriver CreateLanguage_LT(int LangID, char *FontName, int FontSize);	//���ֵ��ֽ��ַ���
PLangDriver CreateLanguage_SYM(int LangID, char *FontName, int FontSize);	//����
PLangDriver CreateLanguage_ROM(int LangID);									//����СӢ������
PLangDriver CreateLanguage_BIG5(int LangID, char *FontName, int FontSize);	//BIG5 ��ķ�������
PLangDriver CreateLanguage_SJIS(int LangID, char *FontName, int FontSize);	//Shift JIS �������
PLangDriver CreateLanguage_CP949(int LangID, char *FontName, int FontSize);	//Windows CP949 ����ĺ�����
PLangDriver CreateLanguage_CN(int LangID, char *FontName, int FontSize);	//GB2312����ļ�������
PLangDriver CreateLanguage_UTF8(int LangID, char *FontName, int FontSize);	//UTF8����Ľ��ַ�����Ŀǰֻ֧�ְ���ַ�

//ȡ��ǰϵͳ��������
int GetDefaultLanguage(void);

char *GetCharDotsEN(char ch, char *Dots);

//ȡ�ı������ؿ��
#define GetTextWidth(Text) gLangDriver->GetTextWidthFun(gLangDriver,Text)

//ȡ�ı������ظ߶�
#define GetTextHeight(Text) gLangDriver->GetTextHeightFun(gLangDriver,Text)

//ȡ�ı���һ���ַ����ַ�����
//Text - ��ѯ�ı�
//Dots - �����ŵĻ�����
//DotsSize - [IN]���������� [OUT]ʵ�ʵĵ����ֽ���
//ByteCount - ��һ���ı���ռ���ֽ���, ���ı���������Ϊ0; ���б��������<0
//Modify - �ı����α�־
//[RET] ��һ���ַ���λ��
#define GetTextDots(Text, Dots, DotsSize, ByteCount) gLangDriver->GetTextDotsFun(gLangDriver, Text, Dots, DotsSize, ByteCount)

//ȡ�����趨��ȵ���һ���ı�λ��
#define GetNextText(Text, Width) gLangDriver->GetNextTextFun(gLangDriver, Text, Width)

//ȡ�ı������ؿ��
int GetTextWidth_Default(void *BasedLangDriver, char *Text);
//ȡ�ı������ظ߶�
int GetTextHeight_Default(void *BasedLangDriver, char *Text);
//ȡ�����趨��ȵ���һ���ı�λ��
char* GetNextText_Default(void *BasedLangDriver, char *Text, int Width);
char* GetNextText_EUC(void *BasedLangDriver, char *Text, int Width);
PLangDriver CreateLanguage_Default(int LangID);

BYTE *LoadFontLib(char *FontName, TFontLib *FontLib);
unsigned char *FullFontDots16(TFontLib *FontLib, unsigned short code, unsigned char *Dots);
TFontLib *LoadOldFont(void);

unsigned short *StrToUCS2(int LangID, char *str);
unsigned short * GetTextDots_UCS2(unsigned short *Text, char *Dots, int *DotsSize, int *WordCount);

BYTE *LoadFile(char *FileName, int *FileSize);

unsigned short *bidi_l2v(const unsigned short *uscbuf, int orientation);

/*
�ļ���
====================
GB2312.UNI	GB2312 -> UNICODE ��ת����
GB2312.FT	GB2312 ���ֿ�
hz2.dat		�ɰ汾���ֿ⣬��������ͷ��塢һЩ���ŵȣ�GB2132���ڲ�����
UNI2.FT		Unicode �ֿ⣬ȫ���ַ�
LATIN.UNI	Latin��ĸ������ַ�����Unicode��ת����
ffiso.dat	Latin��ĸ������ַ�����Unicode��ת�����Լ�Unicode�ֿ�
B8.FT		Unicode �ֿ⣬����ַ�
B8_%X.FT	�ض�������ֿ⣬����ַ�
BIG5.UNI	BIG5 -> UNICODE ��ת����(Windows Codepage 950)
BIG5.FT		BIG5 ���ֿ�(Windows Codepage 950)BYTE *LoadFile(char *FileName, int *FileSize)
SJIS.UNI	Shift JIS -> Unicode ��ת����(Windows Codepage 932)
SJIS.FT		Shift JIS ���ֿ�(Windows Codepage 932)
KOR.UNI		Korean -> Unicode ��ת����(Windows Codepage 949)
KOR.FT		Korean ���ֿ�(Windows Codepage 949)
JOHAB.CD	Korean KSC->Johab ��ת����
JOHAB.FT	Korean Johab�ֿ�
SYM.FT		�����ֿ�
TEXT.R		�ַ�����Դ
DEF.OPT		����Ĭ������
*/

/*
Delphi �ַ�������
==============================
ANSI_CHARSET = 0;
DEFAULT_CHARSET = 1;
SYMBOL_CHARSET = 2;
SHIFTJIS_CHARSET = $80;
HANGEUL_CHARSET = 129;
GB2312_CHARSET = 134;
CHINESEBIG5_CHARSET = 136;
OEM_CHARSET = 255;
JOHAB_CHARSET = 130;
HEBREW_CHARSET = 177;
ARABIC_CHARSET = 178;
GREEK_CHARSET = 161;
TURKISH_CHARSET = 162;
VIETNAMESE_CHARSET = 163;
THAI_CHARSET = 222;
EASTEUROPE_CHARSET = 238;
RUSSIAN_CHARSET = 204;
MAC_CHARSET = 77;
BALTIC_CHARSET = 186;

Windows Code pages
===================================
SBCS (Single Byte Character Set) Codepages
?	1250 (Central Europe)
?	1251 (Cyrillic)
?	1252 (Latin I)
?	1253 (Greek)
?	1254 (Turkish)
?	1255 (Hebrew)
?	1256 (Arabic)
?	1257 (Baltic)
?	1258 (Vietnam)
?	874 (Thai)
Top of pageTop of page
DBCS (Double Byte Character Set) Codepages

In these graphical representations, leadbytes are indicated by light gray background shading. Each of these leadbytes hyperlinks to a new page showing the 256 character block associated with that leadbyte. Unused leadbytes are identified by a darker gray background.
?	932 (Japanese Shift-JIS)
?	936 (Simplified Chinese GBK)
?	949 (Korean)
?	950 (Traditional Chinese Big5)

*/
/*

* ISO 8859-1 (Latin-1) - ��ŷ����
* ISO 8859-2 (Latin-2) - ��ŷ����
* ISO 8859-3 (Latin-3) - ��ŷ���ԡ�������Ҳ���ô��ַ�����ʾ��
* ISO 8859-4 (Latin-4) - ��ŷ����
* ISO 8859-5 (Cyrillic) - ˹��������
* ISO 8859-6 (Arabic,178) - ��������		
* ISO 8859-7 (Greek) - ϣ����
* ISO 8859-8 (Hebrew, 177) - ϣ������(�Ӿ�˳��)
*		ISO 8859-8-I - ϣ������(�߼�˳��)

* ISO 8859-9 (Latin-5 �� Turkish) - ����Latin-1�ı�������ĸ���ߣ���������������ĸ��
* ISO 8859-10 (Latin-6 �� Nordic) - ���ն������壬��������Latin-4��
* ISO 8859-11 (Thai) - ̩���̩����TIS620��׼�ּ��ݻ�������
* ISO 8859-13 (Latin-7 �� Baltic Rim) - ���޵ĺ�����
* ISO 8859-14 (Latin-8 �� Celtic) - ����������
* ISO 8859-15 (Latin-9) - ��ŷ���ԣ�����Latin-1Ƿȱ�ķ��Ｐ������������ĸ���Լ�ŷԪ(�1�7)���š�

* Windows CP1250-CP1258

---------Table Charsets aliases---------------------
armscii-8 armscii-8 
Big5 big-5, big-five, big5, bigfive, cn-big5, csbig5 
Big5-HKSCS big5-hkscs, big5_hkscs, big5hk, hkscs 
cp1026 1026, cp-1026, cp1026, ibm1026 
cp1133 1133, cp-1133, cp1133, ibm1133 
cp437 437, cp437, ibm437 
cp500 500, cp500, ibm500 
cp850 850, cp850, cspc850multilingual, ibm850 
cp852 852, cp852, ibm852 
cp855 855, cp855, ibm855 
cp857 857, cp857, ibm857 
cp860 860, cp860, ibm860 
cp861 861, cp861, ibm861 
cp862 862, cp862, ibm862 
cp863 863, cp863, ibm863 
cp864 864, cp864, ibm864 
cp865 865, cp865, ibm865 
cp866 866, cp866, csibm866, ibm866 
cp866u 866u, cp866u 
cp869 869, cp869, csibm869, ibm869 
cp874 874, cp874, cs874, ibm874, windows-874 
cp875 875, cp875, ibm875, windows-875 
cp950 950, cp950, windows-950 
EUC-JP cseucjp, euc-jp, euc_jp, eucjp, x-euc-jp 
EUC-KR cseuckr, euc-kr, euc_kr, euckr 
GB2312 chinese, cn-gb, csgb2312, csiso58gb231280, euc-cn, euc_cn, euccn, gb2312, gb_2312-80, iso-ir-58 
GBK cp936, gbk, windows-936 
geostd8 geo8-gov, geostd8 
IBM037 037, cp037, csibm037, ibm037 
ISIRI3342 isiri-3342, isiri3342 
ISO-2022-JP csiso2022jp, iso-2022-jp 
ISO-8859-1 cp819, csisolatin1, ibm819, iso-8859-1, iso-ir-100, iso8859-1, iso_8859-1, iso_8859-1:1987, l1, latin1 
ISO-8859-10 csisolatin6, iso-8859-10, iso-ir-157, iso8859-10, iso_8859-10, iso_8859-10:1992, l6, latin6 
ISO-8859-11 iso-8859-11, iso8859-11, iso_8859-11, iso_8859-11:1992, tactis, tis-620, tis620 
ISO-8859-13 iso-8859-13, iso-ir-179, iso8859-13, iso_8859-13, l7, latin7 
ISO-8859-14 iso-8859-14, iso-ir-199, iso8859-14, iso_8859-14, iso_8859-14:1998, l8, latin8 
ISO-8859-15 iso-8859-15, iso-ir-203, iso8859-15, iso_8859-15, iso_8859-15:1998 
ISO-8859-16 iso-8859-16, iso-ir-226, iso8859-16, iso_8859-16, iso_8859-16:2000 
ISO-8859-2 csisolatin2, iso-8859-2, iso-ir-101, iso8859-2, iso_8859-2, iso_8859-2:1987, l2, latin2 
ISO-8859-3 csisolatin3, iso-8859-3, iso-ir-109, iso8859-3, iso_8859-3, iso_8859-3:1988, l3, latin3 
ISO-8859-4 csisolatin4, iso-8859-4, iso-ir-110, iso8859-4, iso_8859-4, iso_8859-4:1988, l4, latin4 
ISO-8859-5 csisolatincyrillic, cyrillic, iso-8859-5, iso-ir-144, iso8859-5, iso_8859-5, iso_8859-5:1988 
ISO-8859-6 arabic, asmo-708, csisolatinarabic, ecma-114, iso-8859-6, iso-ir-127, iso8859-6, iso_8859-6, iso_8859-6:1987 
ISO-8859-7 csisolatingreek, ecma-118, elot_928, greek, greek8, iso-8859-7, iso-ir-126, iso8859-7, iso_8859-7, iso_8859-7:1987 
ISO-8859-8 csisolatinhebrew, hebrew, iso-8859-8, iso-ir-138, iso8859-8, iso_8859-8, iso_8859-8:1988 
ISO-8859-9 csisolatin5, iso-8859-9, iso-ir-148, iso8859-9, iso_8859-9, iso_8859-9:1989, l5, latin5 
KOI-7 iso-ir-37, koi-7 
KOI8-R cskoi8r, koi8-r 
KOI8-U koi8-u 
MacArabic macarabic 
MacCE cmac, macce, maccentraleurope, x-mac-ce 
MacCroatian maccroation 
MacCyrillic maccyrillic, x-mac-cyrillic 
MacGreek macgreek 
MacGujarati macgujarati 
MacHebrew machebrew 
MacIceland macisland 
MacRoman csmacintosh, mac, macintosh, macroman 
MacRomania macromania 
MacThai macthai 
MacTurkish macturkish 
Shift_JIS csshiftjis, ms_kanji, s-jis, shift-jis, shift_jis, sjis, x-sjis 
sys-int sys-int 
tscii tscii 
US-ASCII ansi_x3.4-1968, ascii, cp367, csascii, ibm367, iso-ir-6, iso646-us, iso_646.irv:1991, us, us-ascii 
UTF-16BE utf-16, utf-16be, utf16, utf16be 
UTF-16LE utf-16le, utf16le 
UTF-8 utf-8, utf8 
VISCII csviscii, viscii, viscii1.1-1 
windows-1250 cp-1250, cp1250, ms-ee, windows-1250 
windows-1251 cp-1251, cp1251, ms-cyr, win-1251, win1251, windows-1251 
windows-1252 cp-1252, cp1252, ms-ansi, windows-1252 
windows-1253 cp-1253, cp1253, ms-greek, windows-1253 
windows-1254 cp-1254, cp1254, ms-turk, windows-1254 
windows-1255 cp-1255, cp1255, ms-hebr, windows-1255 
windows-1256 cp-1256, cp1256, ms-arab, windows-1256 
windows-1257 cp-1257, cp1257, winbaltrim, windows-1257 
windows-1258 cp-1258, cp1258, windows-1258 

1097 	 IBM ���ʣ���˹�/��˹��
1098 	IBM ���ʣ���˹�/��˹�� (PC)

*/
#endif
