/*************************************************
                                           
 ZEM 200                                          
                                                    
 utils.h 
                                                      
 Copyright (C) 2003-2004, ZKSoftware Inc.      		
                                                      
*************************************************/

#ifndef _utils_h
#define _utils_h

#include "stdarg.h"
#include "arca.h"

#define BYTE2M (2*1024*1024)

int systemEx(char * CmdString);

U32 GetTickCount1(void);
U32 GetUS();
char *GetEnvFilePath(const char *EnvName, const char *filename, char *fullfilename);
void SetMACAddress(unsigned char *MAC);
void SetIPAddress(char *Action, unsigned char *ipaddress);
void RebootMachine(void);
BOOL SetGateway(char *Action, unsigned char *ipaddress);
void SetNetworkPara(BYTE *ipaddress, BYTE *netmask, BYTE *gateway);
void SetNetworkIP_MASK(BYTE *ipaddress, BYTE *netmask);

int getnetisalive(const char *netname);

int Decode16(char *String, char* Data);
char *ConvertMonth(char *version, char *iversion);

void doPrint(char * buffer, char * fmt, va_list ap);

int Hex2Char(char *s);

char *nstrcpy(char *Dest, const char *Source, int size);
int nstrcmp(const char *s1, const char *s2, int size);
BYTE *nmemcpy(BYTE *Dest, const BYTE *Source, int size);
int nmemcmp(const BYTE *s1, const BYTE *s2, int size);
int nmemset(BYTE *Dest, BYTE Data, int Size);

char* SPadCenterStr(char *buf, int size, const char *s);
char* SPadRightStr(char *buf, int size, const char *s);
char *Pad0Num(char *buf, int size, int value);
char *Pad0Str(char *buf, int size, char *value);
char *TrimRightStr(char *buf);
char *TrimLeftStr(char *buf);
char *TrimLeft0(char *buf);
char *TrimStr(char *buf);

int SearchIndex(char **Items, const char *Text, int ItemCount);

//--------�ַ���ת������-------------
//�ַ���strת�����޷�������*value���ɹ�����0��ʧ�ܷ��ط���
int strtou32(const char *str, unsigned int *value);
//�ַ���ת����IP��ַ
int str2ip(char* str, BYTE* ip);
//�ַ���ת����MAC��ַ
int str2mac(char* str, BYTE* mac);
int str2int(char *buf, int DefaultValue);
//16�����ַ���strת�����޷�������*value���ɹ�����0��ʧ�ܷ��ط���
int HexStrToInt(const char *str, int *value);
//�ַ���pת�����޷����������أ�Next����p����ֵ�����ĵ�ַ
int StrValue(const char *p, int *Next);
//16�����ַ���pת�����޷����������أ�Next����p����ֵ�����ĵ�ַ
int HexStrValue(const char *p, int *Next);

//-- ������ �ָ���������-----------
//��p�и��Ƶ�index��ֵ��buf��,���ظ��Ƶ��ַ����ĳ���
int SCopyStrFrom(char *buf, char *p, int index);
//�������б����ַ�����InvalidInt��ʾҪȥ����������PackInvalidInt��ʾ�Ƿ�ѹ������ķָ�����
int SaveIntList(char *buf, int *INTs, int Count, int InvalidIntO_RDONLY, int PackInvalidInt);
//ȥ���ַ����п�ͷ����β���ظ��ķָ����ţ������ش����ĳ���
int SPackStr(char *buf);
//����p�б��ָ���ַ����ĸ���
int SCountStr(char *p);
//����p�е�index��ֵ��������ʽ������Next�з��ظ���ֵ�Ľ�����ַ
int SIntValueFrom(char *p, int index, int *Next);
//����p�е�index��ֵ��16��ֵ����������ʽ������Next�з��ظ���ֵ�Ľ�����ַO_RDONLY
int SHexValueFrom(char *p, int index, int *Next);

//����̶����ȵ��ַ�����Ϊ0�������ַ��������ر����ĳ���
void StringEncode(char *buf, char *str, int size);
//����0�������ַ���Ϊ�̶������ַ��������ؽ����ĳ���
int StringDecode(char *buf, char *str);
//��16�����ַ�����
int EncodeHex(BYTE *String, BYTE *Data, int Size);


void SetBit(BYTE *Buffer, int Index);
void ClearBit(BYTE *Buffer, int Index);
int GetBit(BYTE *Buffer, int Index);
void memor(char *s1, char *s2, int len);

BOOL SaveMACToFlash(const char *MAC);
void RedBootMac(const char *serialnumber);
void SetRootPwd(int comkey);

int GetSensorSerialNumber(char *TitleStr, char *IDStr);
//void SaveMACAddr(void);

void SyncTimeByTimeServer(BYTE *TimeServerIP);

int str2cardkey(char *str, BYTE* cardkey);

void ExportProxySetting(void);

BOOL SaveLOGOToFlash(int offset, char *config, int size);

void SetGSMCDMAPara(int ModemType);

typedef struct {
    unsigned char *buffer;
    int bufferSize;
    unsigned char *bufPtr, *bufEnd;
	int isRom;
}TBuffer;


TBuffer *createRomBuffer(unsigned int Address, int size);
TBuffer *createRamBuffer(int size);
TBuffer *createFileBuffer(const char *fileName);
void freeBuffer(TBuffer *buffer);
unsigned char readByte(TBuffer *buffer);
unsigned short readWord(TBuffer *buffer);
unsigned int readDWord(TBuffer *buffer);
int offsetOfBuffer(TBuffer *buffer);
int resOfBuffer(TBuffer *buffer);
int seekBuffer(TBuffer *buffer, int position);
int seekSetBuffer(TBuffer *buffer, int position);
unsigned int hashBuffer(TBuffer *buffer);
int  setwifipara(void);
int setup_auth_dns(void);
int check_battery_voltage(int *voltage);
#ifdef ZEM600
BOOL SetScreenAddressToFlash(const char *Rote);
#else
BOOL SetScreenAddressToFlash(void);
#endif
void DecomposeStr(char *InputStr, char *delim, char (*OutStr)[],int size);
void set_wifi_rausb0_flag(int value);

/*dsl 2012.4.19*/
int kill_pidfile(char *pidfile);
int _eval(char *const argv[], char *path, int timeout, int *ppid);
unsigned int hashBufferLog(int fd, unsigned char *key, int keySize);
void SetDNServerAddress(unsigned char *DNServeraddress);
BOOL SetScreenTypeToFlash(const char *LCDType);
#endif

