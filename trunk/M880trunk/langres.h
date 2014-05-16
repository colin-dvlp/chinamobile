#ifndef _LANGRES_H__
#define _LANFRES_H__

/*
L/_XXX_=RRR

        LΪ���������Դ��ʶ�������ڶ���һ�������ַ�����Դ����ͬ������ʹ�ò�ͬ�ı�ʶ��
��Ϊһ���ַ����������ַ����䷶Χ�ǣ�0x21~0x7E �У���ȥ["],[/],[=]�����ַ������92
���ַ���XXX ���ַ�����ţ�RRR �Ƕ�Ӧ���ַ�����

�������Ѿ�����ı�ʶ��
*/

#define LanguageTraditionalChinese 	'T'  //BIG5����
#define LanguageSimplifiedChinese 	'S'
#define LanguageEnglish			'E'
#define LanguageThailand		'L'
#define LanguageIndonesian 		'I'
#define LanguageJapanese 		'J'
#define LanguageKorean 			'K'
#define LanguageMalaysia 		'M'
#define LanguageVietnamese 		'V'
#define LanguageTurkish			't'
#define LanguageSpa                     'a'
#define LanguageSpaHit                  'b'
#define LanguageArab                    'B'
#define LanguageHebRew                  'H'
#define LanguagePers                    'A'
#define LanguageFra                     'F'
#define LanguageCze                     'Z'


//�ַ�����ű�
#define MSG_LANG_ID 		0       //����Դ�����������ţ��μ�"locale.h"
#define MSG_LANG_NAME           1       //����Դ���������ƣ�<=4 BYTE
#define MSG_LANG_NAME_ENG       2       //����Դ���������Ƶ�Ӣ�ı�ʾ��<=4 BYTE
//#define MSG_LANG_REPLACE        3       //�����Ե���Ҫ�滻���ԡ�
#define MID_OS_LANGUAGE 5		//"����\t%s"
#define HID_RESTART				6        	//��������������Ч

//LCD Hint messages
//#define HINT_START	10
//#define HID_SYSTEM	10+1)		//"ָ�ƿ���ϵͳ"
#define HID_CANCEL      11          //"ȡ��"    //modify by jazzy 2008.12.02 for 479--ȷ�� 11��ȡ��  63���� 64����
#define HID_PLACEFINGER	12		//"�밴��ָ"
//#define HID_HWID		13		//"HardWare ID"
//#define HID_LICENSE		14		//"Please input license"
//#define HID_LICENSEFAIL	15		//"license check failed"
#define HID_QUALITY		16		//"ָ������"
//#define HID_DELALLDATA	17	
//#define HID_NOLICENSE   18      //"no license for ZKFinger10.0"
#define HID_PIN2		19		//"����"
//#define HID_PLACECNT	10+10)		//"�� %d ��"
//#define HID_FINGEREXISTS	10+11)
//#define HID_ENROLLFAIL	10+12)
//#define HID_ENROLLOK	10+13)
//#define HID_NOSPACE	10+14)
//#define HID_UIDERROR	10+15)		//"����"
//#define HID_YESNO	10+16)		//"��ESC   ��OK"
//#define HID_SAVECANCEL	10+17)		//"��ЧESC  ����OK"
//#define HID_OKCANCEL	10+18)		//�˳� ESC  ����OK
#define HID_WELCOME	29		//"��ӭ"
#define HID_DAY0	30		//"������"
#define HID_DAY1	31		//"����һ"
#define HID_DAY2	32		//"���ڶ�"
#define HID_DAY3	33		//"������"
#define HID_DAY4	34		//"������"
#define HID_DAY5	35		//"������"
#define HID_DAY6	36		//"������"
#define HID_VADMIN	37		//"������ȷ��"
//#define HID_ENROLLNEWQ	10+28)		//"�µǼǣ�"
//#define HID_ENROLLNEW	10+29)		//"�µǼ�"
#define HID_ENROLLNUM		40		//"�ǼǺ���"
//#define HID_LEAVEFINGER	41		//"���뿪��ָ"
#define HID_PLACEFINGER2	42	//"��ڶ��ΰ���ָ"
#define HID_PLACEFINGER3	43	//"������ΰ���ָ"
//#define HID_FINGERIDFMT	44		//"%05d-%d"
//#define HID_CONTINUE	10+35)		//"������"
//#define HID_UIDFMT	10+36)		//"%05d"
#define HID_ENROLLBACKUP	47	//"���ݵǼ�"
//#define HID_USERPWDFMT	10+38		//"%05d-P"
#define HID_INPUTPWD		49		//"��������"
#define HID_VERINPUTPWD		50		//"����ȷ��"
//#define HID_ADMINPRIV		51		//"��������Ȩ"
#define HID_VERDELETE		52		//"ɾ����"
#define HID_NOTENROLLED		53		//"�޵Ǽ�����!"
#define HID_NOATTLOG		54		//"�޿��ڼ�¼"
//#define HID_HINTTIME		55		//"����ESC  ��һ��OK"
#define HID_WAITING			56		//"�����У����Ե�"
#define HID_ERRORPIN		57		//"�ǼǺ������"
#define HID_REFINGER		58		//"ָ���ظ�"
#define HID_INPUTAGAIN		59		//"���������룡"
//#define HID_LNGSCH			10+50)		//"����"
//#define HID_LNGTCH			10+51)		//"����"
//#define HID_LNGENG			10+52)		//"ENG"
#define HID_YES				63		//"��"
#define HID_NO				64		//"��"
#define HID_NOTHING			65		//"��"
//#define HID_THANK			66		//"лл��"
#define HID_ALREADY			67		//"��ǩ����лл��"
//#define HID_AGAIN			68		//"���������룡"
#define HID_EXCEEDFINGER	69	//"�ѵǼ�10öָ��"
#define HID_SCIN			70		//"�ϰ�ǩ��
#define HID_SCOUT			71		//"�°�ǩ��"
#define HID_SOUT			72		//"���"
#define HID_SBACK			73		//"�������"
#define HID_SOCIN			74		//"�Ӱ�ǩ��"
#define HID_SOCOUT			75		//"�Ӱ�ǩ��"
//#define HID_SOPENLOCK		76		//"����"
#define HID_SVERIFY			77		//"��֤"
//#define HID_VF				78			//"ָ��ȷ��"
#define HID_VFFAIL			79		//"�����°���ָ��"
//#define HID_VP			80			//"����ȷ��"
#define HID_VPFAIL			81		//"�������"
//#define HID_VREP			82		//"��ȷ�ϣ�"
//#define HID_CONTINUEESC	83		//"�˳�ESC ����OK"
//#define HID_SAVEQ			84		//"���棿"
#define HID_VSUCCESS		85		//"ȷ�ϳɹ���"
#define HID_ACCESSDENY		86		//"�Ƿ�����"
//#define HID_POWEROFF		87		//"�ػ�\t%s"
#define HID_SUSPEND			88		//"����\t%s"
//#define HID_ESC			10+79)			//"�˳�ESC"
//#define HID_TSTLCD		10+80)		//��ǰLCD
//#define HID_TSTLCD_LF		10+81)		//��������
//#define HID_TSTLCD_RF		10+82)		//��������
//#define HID_TSTLCD_UF		10+83)		//��������
//#define HID_TSTLCD_DF		10+84)		//��������
//#define HID_TSTLCD_LE		10+85)		//������
//#define HID_TSTLCD_RE		10+86)		//������
//#define HID_TSTLCD_UE		10+87)		//������
//#define HID_TSTLCD_DE		10+88)		//������
//#define HID_CONTINUEOK	10+89)		//����OK

//#define HID_KEYNAME_MENU	10+90)	//MENU
//#define HID_KEYNAME_OK	10+91)		//OK
//#define HID_KEYNAME_ECS	10+92)		//ESC
//#define HID_KEYNAME_UP	10+93)		//�ϼ�ͷ
//#define HID_KEYNAME_DOWN	10+94)	//�¼�ͷ
//#define HID_KEYNAME_LEFT	10+95)	//���ͷ
//#define HID_KEYNAME_RIGHT	10+96)	//�Ҽ�ͷ
//#define HID_KEYNAME_POWER	10+95)	//���µ�Դ
//#define HID_KEYNAME_ANYKEY	10+99)	//���������ʾ
//#define HID_KEYNAME_NUMBER	10+100)//����
//#define HID_PLAYVOICEINDEX  10+101)	//���ŵ� %d ������
//#define HID_TEST_FLASH_CQ1   10+102)	//����FLASHʱ��
//#define HID_TEST_FLASH_CQ2   10+103)	//��Ҫ����Դ��ť
//#define HID_TESTING   10+104)		//���ڲ��ԡ���
//#define HID_TEST_FLASH_RES   10+105)	//����:%d����:%d
//#define HID_FINISH   10+106)		//��ɣ�
//#define HID_TEST_OK    10+107)		//������
//#define HID_TEST_BAD    10+108)	//��������������
#define HID_PREPOWEROFF		119	//׼���ػ�����
#define HID_PRI_NONE		120		//��ͨ�û�
//#define HID_PRI_ENROLL    	121	//�Ǽ�Ա
#define HID_PRI_ADMIN		122	//����Ա
#define HID_PRI_SUPERVISOR	123	//��������Ա
#define HID_PRI_INVALID		124	//��ֹ�û�
//#define HID_PRI   10+115)	//Ȩ��
#define HID_1TO1			126		//1:1 Verifying
#define HID_EXCEED			127	//Exceed space
#define HID_LEFTSPACE		128		//left space %d
//#define HID_OKPWD 10+119) 		//OK for pwd
//#define HID_OTAPOWER 10+120) 		//���ö�ʱ������
#define HID_DEL_FP			131		//Delete Fingerprint
#define HID_DEL_PWD			132 		//Delete Password
//#define HID_DEL_USR			133 		//Delete User
#define HID_WORKING			134	//������....
//#define HID_CARDFP			135	//�ȶԿ���ָ��
#define HID_INVALIDCARD		136	//��Ч��
//#define HID_CANCELKEY		137	//�����ȡ��
#define HID_SHOWCARD		138	//���ʾ��
#define HID_WRITE_OK		139	//д���ɹ�
#define HID_WRITE_ERROR		140	//д��ʧ��
//#define HID_NOFINGER		141	//δ�Ǽ�ָ��
#define HID_FLASHERROR		142	//�洢������
#define HID_CARD			143	//����֤
#define HID_MUSTINOUT		144	//����ѡ�����״̬
//#define HID_TZDEF			10+135	//ʱ���%d����
//#define HID_GTZ			10+136		//��%dĬ��ʱ���
//#define HID_ULG			10+137		//���%d
//#define HID_TZI			10+138		//ʱ���%d
//#define HID_UAOPT	10+139)	//�û�%05d�Ž�
//#define HID_SHORTWEEK	10+140)	//���ڵĶ�����
//#define HID_TZNUM	10+141)	//ʱ��α��
//#define HID_GRPNUM	10+142)	//����acc
#define HID_INVALIDTIME		153	//�Ƿ�ʱ�η���
#define HID_OS_MUST1TO1		154	//��������ID
//#define HID_NEWENROLLNUM 10+145)	//�º���
#define HID_CARD_NOTENROLLED 156	//��δ�Ǽ�
//#define HID_CARD_ENROLLED 10+147)	//���ѵǼ�
//#define HID_CARD_NO	10+148)	//����:
//#define HID_AUTO_STATE	10+149)
//#define HID_NUM	10+150)
//#define HID_STATE	10+151)
//#define HID_LNGTHAI	10+152)	//̩��
//#define HID_SHUTDOWNING 10+153)        //%s ���ػ�
//#define HID_SUSPENDING 10+154) 	//%s ������
#define HID_ALARM_STRIPE		165       //���������
#define HID_ALARM_DOOR			166        	//�ű������
//#define HID_ALARM_LOWBATTERY 10+157) 	//��ص�ѹ����
//#define HID_ALARM_INDOOROPEN 10+158)   //���ſ��ؿ���
//#define HID_DSM 10+159)  		//�Ŵſ���ģʽ������;����;��
#define HID_DOOR_OPEN			170  	//���Ѵ�
#define HID_DOOR_CLOSE			171 	//���ѹر�
#define HID_MUSER_OPEN1			172        //���û�����
#define HID_MUSER_OPEN2			173        //�Ƿ��������
//#define HID_UNREGALL 10+165)   	//ȫ�������
//#define HID_LNGINDON 10+166)   	//ӡ����
//#define HID_TSTLCD_1 10+167) 	//LCD���Ե�һ��
//#define HID_TSTLCD_2 10+168) 	//LCD���Ե�һ��
//#define HID_1TOG     10+169) 	//1:G�ȶ�

//#define MENU_START 200
//#define MID_MENU 200+1)	//"�˵�"
//#define MID_DATA 200+2)	//"���ݹ���"
//#define MID_HIDE 200+3)	
//#define MID_OPTIONS 200+4)	//"����"
//#define MID_SYSINFO 200+5)	//"ϵͳ��Ϣ"
//#define MID_DATA_EUSER 200+6)	//"�û��Ǽ�"
//#define MID_DATA_EADMIN 200+7)	//"�����ߵǼ�"
//#define MID_DATA_DEL 200+8)		//"ɾ���Ǽ�����"
#define MID_DATA_EU_FINGER		209	//"ָ�ƵǼ�"
#define MID_DATA_EU_PWD			210		//"����Ǽ�"
//#define MID_DATA_EU_FP 200+11)		//"ָ�Ƽ�����"
//#define MID_OPTIONS_SYSTEM 200+12)	//"ϵͳ����"
//#define MID_OPTIONS_REC 200+13)		//"��¼����"
//#define MID_OPTIONS_COMM 200+14)	//"ͨѶ����"
//#define MID_OS_ADMINNUMBER 200+15)	//"����������\t%d"
//#define MID_OS_DEVNUMBER		216	//"����\t%d"
//#define MID_OS_TIME 200+17)		//"ʱ������"
#define MID_OS_LOCK			219		//"������\t%s"
//#define MID_OS_AUTOPOWER 200+20)	//"�Զ���Դ����\t%s"
//#define MID_OR_AADMINLOG 200+21)	//"�����¼����\t%d"
//#define MID_OR_AATTLOG 200+22)		//"���ڼ�¼����\t%d"
//#define MID_OR_REREC 200+23)		//"�ظ�ȷ��ʱ��\t%d"
//#define MID_OC_BAUDRATE 200+24)		//"������\t%d"
//#define MID_OC_CRC 200+25)		//"��żУ��\t%s"
//#define MID_OC_STOP 200+26)		//"ֹͣλ\t%d"
//#define MID_SYSINFO_USER 200+27)	//"�û��Ǽ�\t%d"
//#define MID_SYSINFO_FINGER 200+28)	//"ָ�ƵǼ�\t%d"
//#define MID_SYSINFO_ATTLOG 200+29)	//"���ڼ�¼\t%d"
//#define MID_SYSINFO_ADMIN 200+30)	//"�����ߵǼ�\t%d"
//#define MID_SYSINFO_PWD 200+31)		//"����Ǽ�\t%d"
//#define MID_SYSINFO_ADMINLOG 200+32)	//"�����¼\t%d"
//#define MID_DATA_VATTLOG 200+33)	//"�鿴���ڼ�¼"
//#define MID_DATA_VADMINLOG 200+34)	//"�鿴�����¼"
//#define MID_DATA_DELLOG 200+35)		//"ɾ��ȫ����¼"
//#define MID_NET_UDPPORT 200+36)		//"����˿�"
//#define MID_NET_WEBPORT 200+37)		//"Web�˿�"
//#define MID_NET_MAC 200+38)		//"MAC��ַ"
#define MID_NET_IP				239		//"IP��ַ"
//#define MID_OPTIONS_NET 200+40)		//"��������"
//#define MID_OSA_POWEROFF		241	//"�ػ�\t%s"
//#define MID_OSA_SUSPEND			242	//"����\t%s"
//#define MID_OSA_POWERON			243	//"����\t%s"
//#define MID_OSA_IDLE			244	//"��������\t%s
//#define MID_OSA_IDLETIME		245	//"����ʱ��\t%s"
//#define HMID_SHOWSCORE			246	//��ʾ����
//#define HMID_MATCHSCORE 200+47) //ƥ�䷧ֵ
//#define HMID_NOISETHRESHOLD 200+48)//������ֵ
//#define HMID_MATCHSPEED 200+49)	//���ٱȶ�
//#define HMID_VOICEON			250	//������ʾ
//#define HMID_NOFINGER_THRESHOLD 200+51)		//��ָ�Ʒ�ֵ
//#define HMID_HASFINGER_THRESHOLD 200+52)	//��ָ�Ʒ�ֵ
//#define HMID_TOPFINGER_THRESHOLD 200+53)	//��ָ�Ʒ�ֵ
//#define MID_AUTOTEST 200+54)	//�Զ�������
//#define MID_AT_FLASH 200+55)	//FLASH���
//#define MID_AT_LCD 200+56)	//Һ�����
//#define MID_AT_VOICE 200+57)	//�������acc
//#define MID_AT_KEYPAD 200+58)	//���̼��
//#define MID_AT_ALL 200+59)	//ALL
//#define MID_AT_RTC 200+60)	//ʵʱʱ��
//#define MID_AT_FINGER 200+61)	//ָ�Ʋɼ���
//#define MID_OC_NETOFF			262	//������̫����
//#define MID_OC_RS232OFF			263	//����RS232ͨ��
//#define MID_OC_RS485OFF			264	//����RS485ͨ��
//#define MID_OS_ADVANCE 200+65)	//�߼�����
//#define MID_OS_INIT	200+66)		//��������
//#define MID_OI_ENNUM	200+67)		//�ɵǼ�ָ��
//#define MID_OI_ALNUM	200+68)		//�ɱ����¼
//#define MID_OI_NET				269		//���繦��
//#define MID_OI_LOCK	200+70)		//���ع���
//#define MID_OI_RFCARD	200+71)		//��Ƶ������
//#define MID_OI_PROTIME	200+72)		//����ʱ��
//#define MID_OI_INITDEV	200+73)		//�豸��ʼ��
//#define MID_CLEAR_DATA	200+74)		//Clear Data
//#define MID_OS_RESTORE	200+75)		//Restore Default Options
//#define MID_OS_VERSCORE	200+76)		//1:1 Verify Score
//#define MID_CLEAR_ADMIN	200+77)		//�������Ա
//#define MID_INFO_RES	200+78)		//ʣ��������Ϣ
#define MID_IR_FINGER			279		//ָ����AttLog
//#define MID_IR_ATTLOG	200+80)		//�����¼
//#define MID_INFO_DEV 	200+81)		//�豸��Ϣ
//#define MID_OI_PT	200+82)		//��������
//#define MID_OI_SN	200+83)		//���к�
//#define MID_OI_OEM	200+84)		//������
//#define HMID_TDFINGER_THRESHOLD 200+85)		//HasFingerThresholdDiff
//#define HMID_NEWFPR	200+86)		//���ɼ���
//#define HMID_DEVTYPE 200+87)	//����
//#define MID_OI_1TO1 200+88)	//1:1����
//#define MID_OI_ATTSTATE 200+89)	//����״̬����
//#define MID_OI_SHOWNAME 200+90)	//��ʾ��������
//#define MID_OI_POWERMNG 291	//��Դ������
//#define MID_OI_PN	200+92)	//Device Name
//#define MID_OS_LOCKUSERS 200+93)//unLock Users
//#define MID_DC_ENROLL	200+94)	//�Ǽ�ָ�ƿ�
//#define MID_DC_REG	200+95)	//ע��ָ�ƿ�
//#define MID_DC_CREATE	200+96)	//����ָ�ƿ�
//#define MID_DC_EMPTY	200+97)	//���ָ�ƿ�
//#define MID_DC_UNREG	200+98)	//ע��ָ�ƿ�
//#define MID_DATA_CARD	200+99)	//ָ�ƿ�����

//#define MID_DC_DUMPFP	200+100)//���ƿ���ָ��
//#define MID_DC_MOVEFP	200+101)//ת��ָ�Ƶ�����
//#define MID_DC_PIN	200+102)//���뿨
//#define MID_OC_PINCARD	303			//����֤���뿨
//#define MID_OI_FWVER	200+104)//�̼��汾��
//#define MID_OI_ALGVER	200+105)//�㷨�汾��
//#define MID_OA_FPKEY	200+106)//ָ�ƿ�����
#define MID_OS_CUST	307//��������
//#define MID_OS_HIGHSPEED	200+108)//��������
//#define MID_OA_OPTION	200+109)	//�Ž���������
//#define MID_OA_TZDEF	200+110)	//ʱ��ζ���
//#define MID_OA_ULGRP	200+111)	//������϶���
//#define MID_OA_UAOPT	200+112)	//�û��Ž�����
//#define MID_OA_GTZ	200+113)	//��Ĭ��ʱ���
//#define MID_OA_GRP	200+114)	//��������
//#define MID_OS_MUST1TO1 315	//��������ID
//#define MID_OS_COMKEY	200+116)	//��������
//#define MID_OC_MUSTENROLL	317//��ֹδע�Ῠ
//#define MID_OA_UDT	200+118)//ʹ����ʱ��
//#define MID_CARD_REG	200+119)	//��Ƶ���Ǽ�
//#define MID_CARD_UNREG	200+120)	//��Ƶ��ע��
//#define MID_OSA_ALARM	200+121)	//��ʱ����
//#define MID_AUTO_STATE	200+124)	//��ʱ״̬װ��
//#define MID_AO_IMGCOH 	200+125)    //ָ��ͼ��������
//#define MID_AO_ALARMOFF 200+126)    //�������
#define MID_AC_DSD 	327    //�Ŵ���ʱ
#define MID_AC_DSM 	328    //�Ŵſ���ģʽ
//#define MID_OSA_ALARM_DELAY 200+129) //
//#define MID_OSA_ALARM_NAME 200+130) //
//#define MID_AD_DURESSFINGER 200+131)    //в��ָ�ƹ���
#define MID_AD_DURESSHELP 332     //��~K�������� ��/��
#define MID_AD_DURESS11  333        //1��1��ʽ���� ��/��
#define MID_AD_DURESS1N  334        //1��N��ʽ���� ��/��
#define MID_AD_DURESSAD     335
//#define MID_ADF_ENROLL 200+136) 	//�µǼ�в��ָ��
//#define MID_ADF_REG 200+137)    	//в��ָ�ƶ���
//#define MID_ADF_UNREG 200+138)  	//ȡ��в��ָ��
//#define MID_ADF_UNREGALL 200+139)       //ȡ��ȫ��
//#define MID_AD_DURESS 200+140)  	//в�ȱ���
#define MID_AD_DURESSPWD  341       //PWD��ʽ���� ��/��
#define MID_LOCK_POWER	  342    	//LOCK POWER BUTTON
#define MID_POWER_OFF	 343    	//Shut Down
//#define MID_OS_1TON_FROM 200+144)       //1:N From
//#define MID_OS_1TON_TO 	200+145) 	//1:N To
//#define MID_OS_1TOH 	346 	//"S/_346_=ǰ����ID��",
//#define MID_OS_1TOG 	347 	//"S/_347_=����1:G",
//#define MID_OI_1TON 	348 	//"S/_348_=1��Nָ��",

#define MID_USERMNG 359
#define MID_AD_ADDUSER 360
//#define MID_AD_BROWSEUSER 200 + 161)
//#define MID_AD_DEPTMNG 200 + 162)
#define MID_SETTING 363
//#define MID_AD_SCHCLASS 364
//#define MID_AD_ATTRULE 200 + 165)
//#define MID_AD_CPNAME 366
#define MID_ATTQUERY  367
//#define MID_AD_LOGQUERY 200 + 168)
//#define MID_AD_ATTEXPQUERY 200 + 169)
//#define MID_AD_DEVINFOQ 200 + 170)
//#define MID_ATTPRINT 200 + 171)
//#define MID_OKBACK 372
//#define MID_VIEW 200 + 173)
#define MID_EDIT 374
//#define MID_NEW 375
//#define MID_NEWSCH 200 + 176)
//#define MID_SCH1 200 + 177)
//#define MID_SCH2 200 + 178)
//#define MID_SCH3 200 + 179)
//#define MID_SCH4 200 + 180)
//#define MID_SCHNAME 200+181)
//#define MID_DUTYONTM 200 + 182)
//#define MID_DUTYOFFTM 200 + 183)
#define MID_DEL 384
//#define MID_ALLDEL 385
#define MID_ACNO 386
#define MID_NAME 387
//#define MID_DEPT 388
#define MID_AUTH 389
//#define MID_APPLYTODEP 200 + 190)
//#define MID_APPLYTOONE 200 + 191)
//#define MID_APPLYTOALL 200 + 192)
#define MID_NONESET 393
//#define MID_OPSET 394)
//#define MID_HADSET 200 + 195)
#define MID_FINGER 396
#define MID_PWD 397
//#define MID_APPLYTO 398
#define MID_ALL 399

//#define MID_ENROLL_SUCESS 200 + 200)
//#define MID_DELALLUSER 200 + 201)
//#define MID_DEL_SCH 200 + 202)
//#define MID_DEL_ALLSCH 200 + 203)
//#define MID_SCHHADUSE 200 + 204)
//#define MID_CANNOTDEL 200 + 205)
//#define MID_SETCPNAME 200 + 206)
//#define MID_LATETM 200 + 207)
//#define MID_EARLYTM 200 + 208)
//#define MID_CALUUNIT 200 + 209)
//#define MID_DUTYUNIT 200 + 210)
//#define MID_LATEUNIT 200 + 211)
//#define MID_EARLYUNIT 200 + 212)
//#define MID_LOSTUNIT 200 + 213)
//#define MID_UNITTIMES 200 + 214)
//#define MID_UNITMINUTE 200 + 215)
//#define MID_UNITHOUR 200 + 216)
//#define MID_UNITDAY 200 + 217)
//#define MID_UNITWORKDAY 200 + 218)
//#define REP_TOPREP 200 + 219)
#define REP_ATTLOG 420
//#define REP_ATTABNOR 200 +221)
//#define REP_TIMEQSET 200 + 222)
#define REP_ATTTMST  423
#define REP_ATTTMED 424
//#define REP_ATTDATASEL 200 + 225)
//#define REP_BYONEUSER 200 + 226)
//#define REP_OUTTOUDISK 200 +227)
//#define T9_TOPHINT 200 +228)
//#define T9_BOTTOMHINT 200 +229)
//#define MID_OTHERSET 200+230)
//#define MID_EDITNAME 200+231)
//#define REP_RPOUT 200+232)
//#define MID_ONEDEPMOVE 200+233)
//#define MID_DEPMOVE 200 +234)
#define MID_NOACNOHINT	435
#define REP_DATE		436
//#define REP_CINTM 200 + 237)
//#define REP_COUTTM 200 + 238)
//#define REP_ABNOR 200 + 239)
//#define REP_TMLENG 200 + 240)
//#define REP_OT 441
//#define REP_SPEYDAY 200 + 242)
//#define REP_OTHER 200 + 243)
//#define REP_MUSTIN 200 + 244)
//#define REP_MUSTOUT 200 + 245)
//#define REP_ATTSTAT 200 + 246)
#define MID_DELUSER 447
#define MID_EDITUSER 448
//#define MID_DATETO 200 + 249)
//#define MID_USERQUERY 200+250)
//#define MID_ZHIDAN 451
//#define MID_ALLDELUSER 200+252)
//#define MID_ALLDELSCH 200+253)
//#define MID_SCHERROR 200+254)
//#define REP_MONTH 455
//#define MID_SCHHADDEL 200+256)
//#define MID_USERHADDEL 200+257)
//#define MID_ACNOWIDTH 200+258) //����λ��
//#define MID_ACNOPRE0 200+259)  //����ǰ׺��0
//#define MID_NOSPACE 200+260)   //���������̫��
//#define MID_QYAGAIN 200+261) //�����²�ѯ
//#define MID_RFCARD 200+262) //��Ӧ��
#define MID_ATT  463 //����
//#define MID_STAFF 200+264) //Ա��
//#define MID_CALU 465 //ͳ��
//#define MID_CANCELENROLL 200+266)//ȡ���Ǽ�
#define MID_REGFP 467//�Ǽ�ָ��
#define MID_REGPWD 468//�Ǽ�����
#define MID_SAVE 469//����
#define MID_EXIT 470//�˳�
#define MID_SAVEDATA 471//������ʾ
#define MID_GOONINPUT		472//���棬�Ƿ��������
//#define MID_OK 473//ȷ��
#define MID_EMPTYPWD 474//����������
#define MID_NOTSAMEPWD 475//���벻һ��
#define MID_CHOOSEUSER 476//��ѡ���û�
//#define MID_CHOOSEDEL 200+277)//ɾ������ѡ��
#define MID_USEBASE 478//�û�������Ϣ
#define MID_REMOVEHINT 479//ȷ��ɾ������������
//#define MID_REMOVEGOON 200+280)//�����ɹ� �Ƿ����?
#define MID_QUERYUSER 481//�����û�
#define MID_QUERYNONE 482//�޸�����ҽ��
#define MID_STATUS 483//״̬
#define MID_ERRORTIME 484//״̬
//#define MID_VERIFYMODE 200+285)//��֤��ʽѡ��
#define MID_DAY 486//��
#define MID_HOUR 487//Сʱ
#define MID_RECTOTAL 488//��¼��
//#define MID_ONETOONEHINT 200+289)//1:1��ʾ
//#define MID_PWDHINT 200+290)//������֤��ʾ
#define MID_PWDLEN 491//���볤��
#define MID_FPLEN 492//ָ����
#define MID_FPOK 493//�Ǽǳɹ�,�����Ǽ�
#define MID_FPFULL 494//�Ǽ���
#define MID_APPNAME 495//ϵͳ����
//#define MID_EXITASK 200+296)//�����˳���?
#define MID_WAIT 497//������������
#define MID_FPHADDEL 498//ָ����ɾ��
#define MID_PWDHADDEL 499//������ɾ�� 

#define MID_MON		500		//�� 
#define MID_WORKCODE	501	//WORK CODE
//#define MID_BUTTONBEEP 	500+2) 	//button beep
//#define MID_AT_MP3	500+3)	//mp3 hint
//#define MID_ADV_VOICETZ	500+4)	//voice time zone 
//#define MID_OSA_WEBSERVERIP 500+5) 	//web server ip
//#define MID_ADV_AUDIOVOL 500+6)	//adjust audio volume
//#define HID_PLUGPENDRIVE 500+7)	//PLS PLUG PEN DRIVE
#define HID_DOWNLOADING_DATA 508       //Downloading DATA
//#define HID_PENDRIVE_NOEXIST 500+9)	//PEN DRIVER NO EXIST
//#define HID_COPYDATA_FAILURE 500+10)	//COPY DATA FAILURE
//#define HID_COPYDATA_SUCCEED 500+11)	//COPY DATA SUCCEED
//#define HID_MOUNTING_PENDRV 500+12)	//Mounting PenDrive
//#define HID_FIRMWARE_ITEM 500+13)	//Firmware item(files)
//#define HID_SELECT_ITEM 500+14)	//select item for update
#define HID_PLACEFINGER4 515    	//"����Ĵΰ���ָ"
//#define HID_CONTINUECANCEL 500+16)	//�˳�ESC ����OK
#define HID_CHGPWD 517          	//change password
//#define HID_CHGCARDNUM 500+18) 	//change card number
//#define MID_DOWNLOAD_ATT 500+19)	//download attlog
//#define MID_DOWNLOAD_USR 500+20)	//download usr info
//#define MID_UPLOAD_USR	500+21)	//upload usr info
//#define MID_PENDRV_MNG	500+22)	//pen drive manage
#define MID_GATEWAY_IP	523	//gateway
#define MID_NETMASK_ADDR 524	//Network mask
//#define MID_OI_USERNUM	500+25)	//Users
//#define MID_TWOSENSOR	500+26)	//Two sensor
//#define MID_UPDATE_FIRMWARE 500+27)	//update firmware
//#define MID_UPLOAD_SMS 	500+28)    	//upload SMS
//#define MID_DOWNLOAD_SMS 500+29)   	//download SMS
//#define MID_MODEM	500+30) 	//use Modem or not
#define MID_AUTHSERVER	531     	//use AuthServer or not
#define MID_AUTHSERVER_IP 532    	//AuthServer IP
#define MID_AUTHSERVER_REGISTER	533 	//REMOTE REGISTER
#define MID_AUTHSERVER_ERROR	534 	//REMOTE AUTHSERVER ERROR
//#define MID_AUTOBELL_DELAY	500+35) 	//Auto ALARM delay times
#define MID_NET_DHCP		536 	//Auto ALARM delay times
//#define HID_NET_DHCPHINT	537 	//DHCP Running
//#define MID_TIME_SET		500+38) 	//Set time Manualy
//#define MID_TIME_SYNC		500+39)	//Synchronize time
//#define MID_TIME_SERVER		500+40)	//Time server ip address
//#define HID_TIME_SYNCHINT	500+41)	//Time synchronize hint
//#define MID_AD_ERRPRESS		542	//press finger n times failed to Alarm
//#define MID_OA_VERIFYTYPE	500+43)	//User verify type
//#define MID_OA_GVERIFYTYPE	500+44)	//Group verify type
//#define MID_OA_VSHINT		500+45)	//
//#define HID_OA_NOEQUAL		500+46)	//
//#define MID_OA_GRPVS		500+47)	//whether use Group Verify Type or not
//#define MID_PROXY_IP		500+48)	//proxy server ip address
//#define MID_PROXY_PORT		500+49)	//proxy server port
//#define MID_PROXY_SERVER	500+50)	//PROXY SERVER enable
#define MID_FINGER_SENSITIVITY	572	//Finger Sensitivity

#define MID_ENROLLING		600    //��У��ָ��
#define MID_PAGEUP			601       //��һҳ:
#define MID_PAGEDOWN		602     //��һҳ:
#define MID_DETAILREC		603   //��ϸ��¼
#define HIT_USER1           604     //�����û�
#define HIT_USER2           605     //�����û�
#define HIT_USER            606     //User Manager
#define HIT_COMM            607     //Comm.
#define HIT_SYSTEM          608     //System
#define HIT_DATETIME        609     //Date/Time
#define HIT_DATA            610     //Data Manager
#define HIT_AUTO            611     //Auto Test
#define HIT_RECORD          612     //record
#define HIT_INFO            613     //System Info
#define HIT_COMM1           614     //Network
#define HIT_COMM2           615     //RS232/485
#define HIT_COMM3           616     //Security
#define HIT_SYSTEMSET       617     //Setting
#define HIT_SYSTEM1         618     //System
#define HIT_SYSTEM2         619     //Date Manager
#define HIT_SYSTEM4         620     //Update
#define HIT_SYSTEM5         621     //Keyboard
#define HIT_SYSTEM6         622     //Display
#define HIT_SYSTEM7         623     //Misc Setting
#define HIT_SYSTEM8         624     //Reset
#define HIT_OK              625     //OK(M/<-)
#define HIT_CANCEL          626     //Back(ESC)
#define HIT_RUN             627     //Message
#define HIT_RIGHT           628     //Change Saved Successfully!
#define HIT_ERR             629     //Warning
#define HIT_ERROR0          630     //The input data error!
#define HIT_NETERROR1       631     //IP address error!
#define HIT_NETERROR2       632     //Subnet Mask error
#define HIT_NETERROR3       633     //Gateway error!
#define HIT_RSERROR         634     //RS232 AND RS485 select error
#define HIT_DATE            635     //Date & Time Setting
#define HIT_DATE1           636     //Date
#define MID_YEAR			637	//��
#define MID_MONTH			638	//��
#define MID_DAY1			639	//��
#define MID_TIME			640	//ʱ��
#define MID_HOUR1			641	//ʱ
#define MID_MINUTE			642	//��
#define HIT_DATE8           643     //Second
#define HIT_UDATA           644     //PenDrive
#define HIT_UDATA1          645     //Download Attlog
#define HIT_UDATA2          646     //Download User
#define HIT_UDATA3          647     //Upload User
#define HIT_UDATA4          648     //Upload Picture
#define HIT_AUTO0           650     //All Test
#define HIT_AUTOS           651     //Auto Test
#define HIT_AUTO1           652     //TFT Test
#define HIT_AUTO2           653     //Audio Test
#define HIT_AUTO3           654     //Sensor Test
#define HIT_AUTO4           655     //keyboard Test
#define HIT_AUTO5           656     //RTC Test

#define MID_LOCAL_IP		658     //IP Address
#define HIT_COMM1NET2       659     //Subnetmask
#define HIT_COMM1NET3       660     //Gateway
#define HIT_COMM1NET4       661     //NetSpeed

#define HIT_COMM2SER1       663     //Baudrate

#define HIT_COMM3LINK1      665     //DeviceID
#define HIT_COMM3LINK2      666     //Password
#define HIT_COMM3LINK3      667     //(1-254)
#define HIT_COMM3LINK4      668     //(Max 6 digit)
#define HIT_SYSTEM1SET1     669     //Threshold(1:1)
#define HIT_SYSTEM1SET2     670     //Date Fmt
#define HIT_SYSTEM1SET5     671     //Keybeep
#define HIT_SYSTEM1SET6     672     //Voice
#define HIT_SYSTEM1SET7     673     //Vol.
#define HIT_SYSTEM2INFO     674     //Are you sure?

#define HIT_SYSTEM2DATA2    677     //Delete Attlog
#define HIT_SYSTEM2DATA3    678     //Delete All
#define HIT_SYSTEM2DATA4    679     //Clear Purview
#define HIT_SYSTEM2DATA5    680     //Deleted
#define HIT_SYSTEM2DATA6    681     //Clear successful!
#define HIT_SYSTEM2DATA7    682     //Delete picture

#define HIT_SYSTEM3ITEM1    684     //Sleep Time
#define HIT_FREETIME        685     //M(0:Always On)

#define HIT_SYSTEM3ITEM6    687     //Log Alert
#define HIT_SYSTEM3ITEM7    688     //ReCheck Min
#define HIT_SYSTEM5KEY      689     //Key State
#define HIT_SYSTEM5KEY1     690     //Check-In
#define HIT_SYSTEM5KEY2     691     //CheckOut
#define HIT_SYSTEM5KEY3     692     //OT-In
#define HIT_SYSTEM5KEY4     693     //OT-Out
#define HIT_SYSTEM5KEY5     694     //BreakOut
#define HIT_SYSTEM5KEY6     695     //Break-In
#define HIT_SPEED1          696     //Auto
#define HIT_SPEED2          697     //100M
#define HIT_SPEED3          698     //10M
#define HIT_SWITCH1         699     //ON

#define HIT_SWITCH2         700     //OFF
#define HIT_FREESET1        701     //Sleep
#define HIT_FREESET2        702     //Shutdown
#define HIT_AUTOTESTINFO    703     //Press'OK'Continue,'ESC'quit
#define HIT_AUTOTESTINFOEX  704     //ESC:quit

#define HIT_INFO2           711     //Records
#define HIT_INFO3           712     //Device
#define HIT_INFO4           713     //SysInfo
#define HIT_INFO5           714     //DeviceName
#define HIT_INFO6           715     //Serial Num
#define HIT_INFO7           716     //Alg Version
#define HIT_INFO8           717     //Firmware Ver
#define HIT_INFO9           718     //Vendor
#define HIT_INFO10          719     //Manu Time

#define HIT_INFO12          721     //Used
#define HIT_INFO13          722     //Admin:
#define HIT_INFO14          723     //Pwd:
#define HIT_INFO15          724     //Free
#define HIT_INFO16          725     //FP:
#define HIT_INFO17          726     //Record:

#define HIT_INFO19          728     //User:
#define HIT_UINFO3          729     //Downloading,wait....
#define HIT_UINFO4          730     //Uploading,wait....
#define HIT_UINFO5          731     //Download Complate!
#define HIT_UINFO6          732     //Upload Complate!
#define HIT_UINFO7          733     //PenDrive Not find!

#define HIT_UINFO9          735     //Updateing,wait....

#define HIT_UINFO13         737     //Update Successfully!
#define HIT_UINFO14         738     //Data fail!
#define HIT_UINFO15         739     //Processing Picture,wait....
#define HIT_UINFO16         740     //Picture Not find!

#define HIT_KEY1            743     //ShutDown Key
#define HIT_KEY2            744     //BackSpace Key
#define HIT_KEY3            745     //Up Cursor
#define HIT_KEY4            746     //Down Cursor
#define HIT_KEY5            747     //Left Cursor
#define HIT_KEY6            748     //Right Cursor
#define HIT_NULLKEY         749     //None
#define HIT_KEYINFO         750     //Key set error!
#define HIT_UPIC1           751     //Browse
#define HIT_UPIC2           752     //Curr(%d/%d)
#define HIT_UPIC3           753     //Update(OK)
#define HIT_UPIC4           754     //Next
#define HIT_UPIC5           755     //Prev
#define HIT_UPIC6           756     //Upload Complate!
#define HIT_UPIC7           757     //Uploading picture.
#define HIT_SNDINFO         758     //Play Voice
#define HIT_DPIC1           759     //Delete
#define HIT_DPIC2           760     //Delete All
#define HIT_DPIC3           761     //Delete Complate!
#define HIT_DPIC4           762     //Deleting...
#define HIT_DPICINFO        763     //Not find pictrue!
#define HIT_UPDATEINFO      764     //Reset Complate!
#define HIT_MACINFO         765     //MAC Address
#define HIT_INFO20          766     //User:
#define MID_DOWNLOAD_PHOTO	767
#define MID_LOAD_PHOTO		768
#define HIT_UPEKINITOK      769     //Sensitivity
#define HIT_UPEKINITFAIL    770     //InitFPD

#define MID_INTERFACE		800 //������
#define MID_FPRETRY			801 //1:1���Դ���
#define MID_PWDRETRY		802  //�������Դ���
#define MID_CLOCKSTYLE		803 //ʱ��ѡ��
#define MID_PICTIME			804 //ͼƬѭ�����
#define MID_CLOCKTIME		805 //ʱ����ʾ��ʱ
#define MID_RIGHT			806 //�ɹ���ʾ
#define MID_RUN				807 //���óɹ�
#define MID_WARNING			808 //����
#define MID_INVALIDDATA		809 //���ݷǷ���ʾ
#define MID_DATARANGE		810 //���ݷ�Χ 
#define MID_INVALIDDATA2	811     //���ݷǷ���ʾ2
#define MID_RETRYPWD		812	//��������������
#define MID_SECOND			813	//��
#define MID_ALARM			814	//����
#define MID_ALARMTIME		815	//����ʱ��
#define MID_ALARMWAVE		816	//����
#define MID_ALARMSTART		817	//����
#define MID_ALARMEDIT		818	//����༭
#define MID_ALARMWVSEL		819	//����ѡ��
#define MID_ALARMSTATUS		820	//����״̬
#define MID_ALARMSTART1		821	//����
#define MID_ALARMSTOP		822	//�ر�
#define MID_TIMEERROR		823	//����ʱ���ظ������������ã�
#define MID_ALARMSETTING	824 //��������
#define MID_ALARMVOL		825 //��������
#define HIT_USER3           826     //����Ϣ
#define HIT_USER5           827     //Access
#define MID_SMSCHECK		828 //�鿴
#define MID_SMSMENU			829 //�˵�
#define MID_SMSPRIVATE		830 //����
#define MID_SMSCOMMON		831 //����
#define MID_SMSADD			832 //����
#define MID_SMSEDIT			833 //�༭
#define MID_SMSDEL			834 //ɾ��

#define MID_SMSSTARTTIME	836 //��ʼʱ��
#define MID_SMSMINUTE		837 //����
#define MID_SMSTYPE			838 //����
#define MID_SMSEDITCAPTION	839 //�༭����
#define MID_SMSTIMELEN		840	//��Чʱ��
#define MID_SMSTYPE1		841 //��Ϣ����
#define MID_SMSEDITCAPTION1 842 //����Ϣ
#define MID_SMSRESERVED		843 //����
#define MID_SMSSEND			844 //ָ���û�
#define MID_SMSDELETEHIT	845 //ȷ��Ҫɾ������Ϣ��
#define MID_SMSNOTSEND		846 //δ����
#define MID_SMSCONTENTHIT	847 //����Ϣ����
#define MID_SMSSENDCAPTION	848 //�ַ�����Ϣ

#define MID_SMSSELECT		850 //ѡ��/ȡ��
#define MID_SMSCANCEL		851 //�˳�
//#define MID_SMSNOUSERHINT 800+52) //û��ѡ���κ��û�...
//#define MID_MIFCARDLABEL 800+53) //ID��
//#define MID_MIFCARDREG 800+54) //�Ǽǿ�
#define MID_WKCDEDIT		855 //�༭workcode
#define MID_WKCDADD			856	//����workcode
#define MID_WKCDCODE		857	//����
#define MID_WKCDKEY			858	//��ݼ�
#define MID_WKCDNAME		859 //����
#define MID_WKCDCHGTIME		860 //�Զ��л�
//#define MID_WKCDDOORFUN 800+61) //�Ž�����
#define MID_WKCDDOORON		862 //����
#define MID_WKCDDOOROFF		863 //�ر�
#define MID_SHORTKEY01		864	//F1 
#define MID_SHORTKEY02		865 	//F2
#define MID_SHORTKEY03		866 	//F3
#define MID_SHORTKEY04		867 	//F4
#define MID_SHORTKEY05		868 	//F5
#define MID_SHORTKEY06		869 	//F6
#define MID_SHORTKEY07		870 	//F7
#define MID_SHORTKEY08		871 	//F8
#define MID_SHORTKEY09		872      	//*��(pageup)
#define MID_SHORTKEY10		873      	//#��(pagedown)
#define MID_SHORTKEY11		874      	//�˸��
#define MID_SHORTKEY12		875       //�Ϲ���
#define MID_SHORTKEY13		876      	//�¹���
#define MID_SHORTKEY14		877      	//�����
#define MID_SHORTKEY15		878     	//�ҹ���
#define MID_WKCDKEY71		879	//PageUp 
#define MID_WKCDKEY72		880 	//pageDown
#define MID_WKCDDELETE 881 //ȷ��ɾ����workcode����
#define MID_ALARM_TIMES 882 //�������
//#define MID_WKCDKEYREPEAT 800+83) //��ݼ��ظ���������ѡ��!
#define MID_WKCDINPUT 884 //������workcode
#define MID_WKCDACTIMEHINT 885 
#define MID_WKCDCODEREPEAT 886
#define MID_WKCDNAMEREPEAT 887
#define MID_SMSCONTENTEMPTY 888
#define MID_ALARMVOLHINT 889
#define MID_ALARMVOLADV 890
//#define MID_WKCDDELHINT 800+91)
#define MID_SMSCOUNTHINT 892
#define MID_SMSTIMEHINT 893
#define MID_SMSCOUNT 894
#define MID_SMSTIAO 895
#define MID_SMSCURINDEX 896
#define MID_SMSALLHINT 897	//ͨ ֪
//#define MID_SMSUSERHINT 800+98)	//����Ϣ
#define MID_KEYTESTHINT1 899
#define MID_KEYTESTHINT2 900
#define MID_SMSCHECKHINT 901
#define MID_DATASMSDOWNLOAD 902
#define MID_DATASMSLOAD 903
#define MID_WKCDEMPTYHINT 904
#define MID_LOGHINTOTHER 905
#define MID_NOWKCDHINT 906
#define MID_SHORTKEYFUN 907
#define MID_STKEYFUN1 908	//δ����
#define MID_STKEYFUN2 909	//���ܼ�
#define MID_STKEYFUN3 910	//WorkCode
#define MID_STKEYFUN4 911	//�鿴����Ϣ
#define MID_STATECODEERROR 912
#define MID_STATECODEREPEAT 913
#define MID_STATENAMEREPEAT 914
#define MID_STKEYFUNREPEAT 915
#define MID_IMEMETHOD1 916	//ƴ��
#define MID_IMEMETHOD2 917	//Ӣ��
#define MID_IMEMETHOD3 918	//����
#define MID_BRIGHT_ADV 919      //��Ļ���ȵ���
#define MID_BRIGHT_HINT 920     //��Χ10%��100%
#define MID_WKCDKEY73 921 	//Esc
#define MID_WKCDKEY74 922 	//M/Enter
#define MID_WKCDKEY75 923 	//0
#define MID_PRINTER     924     //��ӡ
#define MID_PT_MODE     925     //ģʽ
#define MID_PT_HINT     926     //�Ƿ��ӡ���ڼ�¼?

//IKIOSK����=============================================
#define MID_IKIOSK			930
#define MID_IKIOSK_SMSDELAY		970
#define MID_IKIOSK_FUNLIMIT		971
#define MID_IKIOSK_THEME		972
#define MID_IKIOSK_REBOOT		973
#define IKIOSK_STKEY_COUNT		40		//��ݹ�������
//#define IKIOSK

#ifdef IKIOSK
#define HIT_IKIOSK_KEYFUN0    930
#define HIT_IKIOSK_KEYFUN1  931
#define HIT_IKIOSK_KEYFUN2  932
#define HIT_IKIOSK_KEYFUN3  933
#define HIT_IKIOSK_KEYFUN4  934
#define HIT_IKIOSK_KEYFUN5  935
#define HIT_IKIOSK_KEYFUN6  936
#define HIT_IKIOSK_KEYFUN7  937
#define HIT_IKIOSK_KEYFUN8  938
#define HIT_IKIOSK_KEYFUN9  939
#define HIT_IKIOSK_KEYFUN10 940
#define HIT_IKIOSK_KEYFUN11 941
#define HIT_IKIOSK_KEYFUN12 942
#define HIT_IKIOSK_KEYFUN13 943
#define HIT_IKIOSK_KEYFUN14 944
#define HIT_IKIOSK_KEYFUN15 945
#define HIT_IKIOSK_KEYFUN16 946
#define HIT_IKIOSK_KEYFUN17 947
#define HIT_IKIOSK_KEYFUN18 948
#define HIT_IKIOSK_KEYFUN19 949
#define HIT_IKIOSK_KEYFUN20 950
#define HIT_IKIOSK_KEYFUN21 951
#define HIT_IKIOSK_KEYFUN22 952
#define HIT_IKIOSK_KEYFUN23 953
#define HIT_IKIOSK_KEYFUN24 954
#define HIT_IKIOSK_KEYFUN25 955
#define HIT_IKIOSK_KEYFUN26 956
#define HIT_IKIOSK_KEYFUN27 957
#define HIT_IKIOSK_KEYFUN28 958
#define HIT_IKIOSK_KEYFUN29 959
#define HIT_IKIOSK_KEYFUN30 960
#define HIT_IKIOSK_KEYFUN31 961
#define HIT_IKIOSK_KEYFUN32 962
#define HIT_IKIOSK_KEYFUN33 963
#define HIT_IKIOSK_KEYFUN34 964
#define HIT_IKIOSK_KEYFUN35 965
#define HIT_IKIOSK_KEYFUN36 966
#define HIT_IKIOSK_KEYFUN37 967
#define HIT_IKIOSK_KEYFUN38 968
#define HIT_IKIOSK_KEYFUN39 969
#endif



//�Ž�����<liming>
//#define SSR_DOOR	1000
#define MID_USER_DOOR	1001	//�û��Ž�
#define MID_USER_ID		1002	//�û����
#define MID_USER_GP		1003	//��������
#define MID_USER_VRTP	1004	//��֤��ʽ
#define MID_USER_GVRTP	1005	//����֤��ʽ
#define MID_USER_USETZ	1006	//ʹ��ʱ���
#define MID_USER_GTZ	1007	//��ʱ���
#define MID_USER_DTZ	1008	//�Զ���ʱ���
#define MID_USER_TZ		1009	//ʱ���
#define MID_USER_DURFP	1010	//в��ָ��
#define MID_USER_DURFPM	1011	//����в��ָ��
#define MID_USER_FPS	1012	//ָ����
#define MID_FP_HINT1	1013	//һ��ָ��
#define MID_FP_HINT2	1014	//в��ָ��
#define MID_LIST_CAPTION 1015	//���    ����
#define MID_DF_CC		1016	//����/ȡ��
#define MID_ENROLL_FP	1017	//�Ǽ�ָ��
#define MID_CANCEL_ALL	1018	//ȡ��ȫ��
#define MID_DFP_SAVE	1019	//����
#define MID_SAVE_HINT1	1020	//��ѡ�����û�ж��壬�Ƿ��壿
#define MID_SAVE_HINT2	1021	//��ѡ���ʱ���û�ж��壬�Ƿ��壿
#define MID_LOCK_OP1	1022	//ʱ�������
#define MID_LOCK_OP2	1023	//�ڼ�������
#define MID_LOCK_OP3	1024	//��ʱ�������
#define MID_LOCK_OP4	1025	//�����������
#define MID_LOCK_OP5	1026	//�Ž��������
#define MID_LOCK_OP6	1027	//в�ȱ�������
#define MID_TZ_SY		1028	//:
#define MID_TZ_TO		1029	//��
#define MID_SAVE_HINT3	1030	//�����ѱ��棬�Ƿ����?
#define MID_SAVE_HINT4	1031	//�����Ѹ��ģ��Ƿ񱣴�?
#define MID_SAVE_HINT5	1032	//ʱ��α�Ų���ȷ��
#define MID_SAVE_HINT6	1033	//û�ж���ʱ��Σ��Ƿ�ʹ����ʱ��Σ�
#define MID_GP_INDEX	1034	//���
#define MID_GP_DEFTZ	1035	//Ĭ��ʱ���
#define MID_GP_DELHINT	1036	//ȷ��Ҫɾ��������
#define MID_GP_ADD	1037	//������
#define MID_GP_EDIT	1038	//�༭��
#define MID_GP_HD	1039	//�ڼ���
#define MID_HD_VALID	1040	//��Ч
#define MID_HD_INVALID	1041	//��Ч
#define MID_SAVE_HINT7	1042	//�������ô���
#define MID_SAVE_HINT8	1043	//���Ѵ��ڣ��Ƿ񸲸�
#define MID_SAVE_HINT9	1044	//û������ʱ���
#define MID_HTZ_DATES	1045	//��ʼ����
#define MID_HTZ_DATEE	1046	//��ֹ����
#define MID_HTZ_DELHINT	1047	//ȷ��ɾ���˽�����?
#define MID_SAVE_HINT10	1048	//����Ѵ��ڣ�
#define MID_SAVE_HINT11	1049	//�ڼ��ձ�����ô���
#define MID_HTZ_ADD	1050	//�����ڼ���
#define MID_HTZ_EDIT	1051	//�༭�ڼ���
#define MID_HTZ_DATE	1052	//��ֹ����
#define MID_REC_FULL	1053	//��¼���Ѵﵽ���ֵ��
#define MID_LOCK_GP	1054	//���
#define MID_GROUP	1055	//��
#define MID_MEMBER	1056	//��Ա
#define MID_SAVE_HINT12	1057	//����Ѵ��ڣ�
#define MID_SAVE_HINT13	1058	//��ϱ�����ô���
#define MID_SAVE_HINT14	1059	//û�����ó�Ա
#define MID_SAVE_HINT15	1060	//������,�Ƿ����?
#define MID_LOCKGP_ADD	1061	//��ӿ������
#define MID_LOCKGP_EDIT	1062	//�༭�������
#define MID_ALARM_DELAY	1063	//�Ŵű�����ʱ
#define MID_ALARM_COUNT	1064	//������������
#define MID_CLOSE_TZ	1065	//����
#define MID_OPEN_TZ	1066	//����
#define MID_HTZ_VALID	1067	//�ڼ����Ƿ���Ч
#define MID_TZ_SAME	1068	//ʱ��γ�ͻ��
#define MID_TIMES	1069	//��
#define MID_STKEYFUN5	1070	//������
#define MID_CLEARALARM	1071	//�Ƿ�������?
#define MID_GP_DELHINT1	1072	//��������ʹ��,����ɾ��!
#define MID_ANTIPASSBACK 1073	//�Ƿ�����

//#define HID_CARD_INTERFACE      1080
#define MID_CARD                1080    //��
#define MID_ENROLL_CARD         1081  //�Ǽǿ�
#define MID_CHANGE_CARD         1082  //���Ŀ�
#define MID_REGED_CARD          1083  //���ѵǼ�
#define MID_PLACE_CARD          1084  //���ʾ��
#define MID_ERROR_CARD          1085  //������
#define MID_CARD_NUM            1086  //ID:
#define MID_CARD_SUCC           1087  //�Ǽǳɹ�
#define MID_CARD_OPT            1088 //�˳�������
#define MID_RF_CARD             1089  //RFC
#define MID_DEL_CARD            1090 //Delete RFCard number
#define MID_DEL_RF              1091 //Del RFCard
#define MID_HIDHADDEL			1092 //����ɾ��

#define SSR_CARD	1100
#define MID_CARD_MNG	1100	//������
#define MID_CARD_OP1	1101	//�ǼǺ��뿨
#define MID_CARD_OP2	1102	//�Ǽ�ָ�ƿ�
#define MID_CARD_OP3	1103	//��տ���Ϣ
#define MID_CARD_OP4	1104	//���ƿ���Ϣ
#define MID_CARD_OP5	1105	//����������
#define MID_INPUT_CODE	1106	//�����뿨���룬OKȷ��
#define MID_CARD_CODE	1107	//����
#define MID_CARD_SUC	1108	//�Ǽǳɹ����Ƿ񱣴�����?
#define MID_MF_OK	1109	//����[OK],�˳�[ESC]
#define MID_MFCP_OK	1110	//�������ݳɹ�
#define MID_MF_SAVEOK	1111	//����ɹ���
#define MID_MF_SAVEFL	1112	//����ʧ�ܣ�
#define MID_MFCP_FAIL	1113	//��������ʧ�ܣ�
#define MID_MFCP_HINT	1114	//�ɹ�����%döָ��
#define MID_MFCP_QUEST	1115	//ָ���ظ����Ƿ񸲸�?
#define MID_MFCP_QUEST2	1116	//�û����ڣ��Ƿ񸲸�����?
#define MID_ONLY_PIN	1117	//ֻ��֤����
#define MID_MFC_PWD	1118	//ָ�ƿ�����
#define MID_MFCP_OP1	1119	//ֻ�����û���Ϣ
#define MID_MFCP_OP2	1120	//�����û���Ϣ��ָ��
#define MID_CRTMF_HINT1	1121	//�û���Ϣ����,�Ƿ��Ƶ���?
#define MID_CRTMF_HINT2	1122	//��ָ������,�Ƿ�Ǽ���ָ��?
#define MID_CLNMF_HINT1	1123	//�ɹ�����û���Ϣ
#define MID_CLNMF_HINT2	1124	//����û���Ϣʧ��
#define MID_CRTMF_HINT3	1125	//�Ǽ�ָ�ƿ�ʧ
#define MID_CLNMF_HINT3	1126	//�Ƿ������������˿���Ӧ���û���Ϣ?
#define MID_MFCP_HINT1	1127	//�����û���Ϣʧ��
#define MID_MFCP_HINT2	1128	//����ָ��ʧ��
#define MID_SAVE_LOCAL	1129	//���뱣����Ϣ������
#define MID_VF_FAILED	1130	//��֤ʧ��
#define MID_GP_MEMBER	1131	//������ϳ�Ա
#define MID_GP_VF	1132	//�����֤
#define MID_FPCARD_VF	1133	//ָ�ƿ�
#define MID_ADUSER_HINT 1134	//����֤��Ϣ��������Ϊ����Ա!
#define MID_CLNMF_HINT4	1135	//�������...

//#define SSR_WIFI		1139
#define MID_WIFI_SETTING	1139	//������������		
#define MID_WIFI_ID			1140	//����ʶ��ID
#define MID_WIFI_MODE		1141	//����ģʽ
#define MID_WIFI_INFRA		1142	//Infra
#define MID_WIFI_ADHOC		1143	//Adhoc
#define MID_WIFI_AUTH		1144	//��֤����
#define MID_WIFI_OPEN		1145	//OPEN
#define MID_WIFI_SHARED		1146	//SHARED
#define MID_WIFI_WEPAUTO	1147	//WEPAUTO
#define MID_WIFI_WPAPSK		1148	//WPAPSK
#define MID_WIFI_WPA2PSK	1149	//WPA2PSK
#define MID_WIFI_WPANONE	1150	//WPANONE
#define MID_WIFI_ENCRYP		1151	//���ܷ�ʽ
#define MID_WIFI_NONE		1152	//NONE
#define MID_WIFI_WEP		1153	//WEP
#define MID_WIFI_TKIP		1154	//TKIP
#define MID_WIFI_AES		1155	//AES
#define MID_WIFI_PWDTYPE	1156	//��������
#define MID_WIFI_PWDFMT1	1157	//64bit(104+24) 10λ16��������
#define MID_WIFI_PWDFMT2	1158	//128bit(104+24) 26λ16��������
#define MID_WIFI_PWDFMT3	1159	//64bit(40+24) 5λASCII�ַ�
#define MID_WIFI_PWDFMT4	1160	//128bit(104+24) 13λASCII�ַ�
#define MID_WIFI_PWDWEP		1161	//WEP
#define MID_WIFI_PWDWPA		1162	//WPA
#define MID_WIFI_PWDSET		1163	//��������
#define MID_WIFI_MANUIP		1164	//�ֶ�����
#define MID_WIFI_IP			1165	//ָ��IP
#define MID_WIFI_PWDIDX		1166	//�������

//#define SSR_ANTIPB		1170	
#define MID_ANTI_FUN		1170	//��Ǳ����
#define MID_ANTI_WAY		1171	//��Ǳ����
#define MID_ANTI_NONE		1172	//����Ǳ
#define MID_ANTI_OUT		1173	//����Ǳ			//fix by luoxw
#define MID_ANTI_IN			1174	//�뷴Ǳ			//fix by luoxw
#define MID_ANTI_LOCAL		1175	//����״̬
#define MID_CTRL_OUT		1176	//���Ƴ���
#define MID_CTRL_IN			1177	//��������
#define HIT_COMM4           1178    //WiFi Setup
#define HIT_COMM5           1179    //Wirless LAN

#define MID_WFINFO_NAME		1180	//������������
#define MID_WFINFO_SSID		1181	//��������(SSID)
#define MID_WFINFO_SINGLE	1182	//�ź�ǿ��
#define MID_WFINFO_HINT		1183	//����������������...
#define MID_WFINFO_REFRESH	1184	//ˢ���б�
#define MID_WIFI_ERR1		1185	//����ʶ��ID����Ϊ��!
#define MID_WIFI_ERR2		1186	//���볤�Ȳ���ȷ!
#define MID_WIFI_HINT2		1187 //8��64λASCII�ַ���16������
#define MID_WIFI_ERR3		1188	//�����ַ����Ͳ���ȷ!
#define MID_WIFI_DHCPERR	1189	//��ȡIP��ַʧ��!

#define MID_GPRS		1190
#define MID_GPRS_MODEM		1191	//Modem����
#define MID_GPRS_CONNECT	1192	//�Ƿ�����
#define MID_GPRS_APN		1193	//APN����
#define MID_GPRS_USER		1194	//�û�����
#define MID_GPRS_PWD		1195	//��������
#define MID_GPRS_NMB		1196	//�������
#define MID_GPRS_RCT		1197	//�ز����
#define MID_GPRS_RCC		1198	//�ز�����
#define MID_GPRS_ONLINE		1199	//��������
#define MID_GPRS_UPT		1200	//�ϴ���¼���
#define MID_GPRS_CHKMODE	1201	//������ʽ
#define MID_GPRS_REQT		1202	//��Ӧʱ��
#define MID_GPRS_TOT		1203	//��ʱʱ��
#define MID_GPRS_SAT		1204	//��������ַ����
#define MID_GPRS_IP		1205	//IP
#define MID_GPRS_DNS		1206	//DNS
#define MID_GPRS_URL		1207	//URL
#define MID_GPRS_TYPE1		1208	//GPRS
#define MID_GPRS_TYPE2		1209	//CDMA
#define MID_GPRS_WIN		1210	//��������
#define MID_GPRS_ADVANCE	1211	//�߼�����
#define MID_GPRS_ERR		1212	//APN���Ʋ���Ϊ��!
#define MID_GPRS_TYPE3		1213	//WAN
#define MID_GPRS_DNSERR		1214	//DNS��ַ���Ϸ�!

#define MID_WG_SETTING		1215	//Τ������
#define MID_WG_SETOUT		1216	//�������
#define MID_WG_SETIN		1217	//��������
#define MID_WG_DEFFMT		1218	//�Ѷ����ʽ
#define MID_WG_FMT1		1219	//Wiegand 26 with sitecode
#define MID_WG_FMT2		1220	//Wiegand 34 with sitecode
#define MID_WG_FMT3		1221	//Wiegand 26 without sitecode
#define MID_WG_FMT4		1222	//Wiegand 34 without sitecode
#define MID_WG_FAILID		1223	//ʧ��ID
#define MID_WG_SITECODE		1224	//��λ��
#define MID_WG_DURESSID		1225	//в��ID
#define MID_WG_OEMCODE		1226	//OEM��
#define MID_WG_PULSWIDTH	1227	//������
#define MID_WG_PULSINTERVAL	1228	//������
#define MID_WG_US		1229	//΢��
#define MID_WG_DEFAULT		1230	//Ĭ��ֵ
#define MID_WG_USRFMT		1231	//�Զ����ʽ
#define MID_WG_BITCOUNT		1232	//Bitλ��
#define MID_WG_OUTPUT		1233	//�������
#define MID_WG_INPUT		1234	//��������
#define MID_WG_INOUT		1235	//���뷴Ǳ
#define MID_GPRS_FREQUENCY	1236	//Ƶ��
#define MID_BELL_EXT		1237	//�ⲿ����
#define MID_GPRS_ON		1238	//GPRS����
#define MID_QUERY_ATTLOG	1239	//��ѯ���ڼ�¼
#define MID_QUERY_SET		1240	//��ѯ������Ƭ
#define MID_QUERY_SET1		1241	//ɾ��������Ƭ
#define MID_QUERY_SET2		1242	//��ѯʧ����Ƭ
#define MID_QUERY_SET3		1243	//ɾ��ʧ����Ƭ
#define MID_PHOTO_DEL		1244	//ȫ��ɾ��
#define MID_PHOTO_HINT1		1245	//����ɾ����Ƭ,���Ժ�...
#define MID_PHOTO_HINT2		1246	//���ڶ�ȡ��Ƭ,���Ժ�...
#define MID_PHOTO_VIEW		1247	//Ԥ��
#define MID_CAMERA_EN		1248	//����
#define MID_CAMERA_IN		1249	//����
#define MID_CAMERA_OUT		1250	//����
#define MID_CAMERA_MODE		1251	//����ģʽ
#define MID_CAMERA_MODE1	1252	//������
#define MID_CAMERA_MODE2	1253	//����
#define MID_CAMERA_MODE3	1254	//���ղ�����
#define MID_CAMERA_MODE4	1255	//��ͨ������
#define MID_CAMERA_MODE5	1256	//ʹ��ȫ������
#define MID_CAMERA_WARN		1257	//���տռ侯��
#define MID_CAMERA_WARN1	1258	//���մ洢�ռ䲻��
#define MID_CAMERA_WARN2	1259	//���մ洢�ռ���
#define MID_VIDEO_SETTING	1260	//��Ƶ����
#define MID_VIDEO_ADJUST	1261	//������Ƶ����
#define MID_VIDEO_BRIGHTNESS	1262	//����
#define MID_VIDEO_CONTRAST	1263	//�Աȶ�
#define MID_VIDEO_QULITY	1264	//����
#define MID_VIDEO_QLOW		1265	//��
#define MID_VIDEO_QMID		1266	//��
#define MID_VIDEO_QHIGHT	1267	//��
#define MID_PATH_ERROR		1268	//������Ƭ�ļ���ʧ��!
#define MID_CAPTURE_HINT	1269	//���ճɹ�!
#define MID_DELPHOTO_HINT	1270	//��Ƭ��ɾ��
#define MID_DOWN_ATTPIC		1271	//���ؿ�����Ƭ
#define MID_DOWN_BADPIC		1272	//���غ�������Ƭ
#define MID_CLEAR_DOWN		1273	//ɾ����������Ƭ
#define MID_NOCLEAR_DOWN	1274	//��ɾ����������Ƭ
#define MID_USB_UPLOAD		1275	//�ϴ�����
#define MID_USB_DOWNLOAD	1276	//��������
#define MID_DOWNALL_PIC		1277	//����ȫ����Ƭ
#define MID_FPIMG		1278	//ָ��ͼ����ʾ
#define MID_FPREGSHOW		1279	//�Ǽ���ʾ
#define MID_FPVFSHOW		1280	//�ȶ���ʾ
#define MID_FPSHOW		1281	//�Ǽ�,�ȶ���ʾ
#define MID_FPNONESHOW		1282	//ָ�Ǽ�,�ȶԲ���ʾ

#define MID_DAYLIGHTSAVINGTIMEON        1283  //����ʱ
#define MID_DAYLIGHTSAVINGTIME          1284    //����ʱ��ʼ
#define MID_STANDARDTIME                1285    //����ʱ����
#define MID_RESTOREPARA                1286    //�ָ�ȫ����������
#define MID_RESTORESHORTKEY		1287	//�ָ����̶�������)
#define MID_RESTOREALARM		1288	//�ָ���������
#define MID_RESTORELOCKFUN		1289	//�ָ��Ž�����
#define MID_RESTOREOTHER		1290	//�ָ���������

#define MID_MUSTCHOICESTATE		1300	//����ѡ����״̬!
#define MID_TIMEOFFOUT			1301	//TimeOff-OT
#define MID_TIMEOFFIN			1302	//TimeOff-IN
#define HIT_ERR_SELUSER     1303
#define MID_UPDATE_OPT      1334
#define MID_UPDATE_OPTFIR   1336
#define MID_UPFAILD_OPTFW   1337

#define MID_WIFI_ERR4		1339	//���������� Liaozz 20081009 fix bug 1008:3
#define MID_WIFI_ERR5		1340	//������IP Liaozz 20081011 fix bug 1010:1

#define MID_MUST121	1400
#define MID_MUST121_NO	1401
#define MID_MUST121_YES 1402


//#define MID_IRSENSOR_BL_SWITCH  1403  //  �ɼ�������
//#define MID_IRSENSOR_BL_ON      1404  //  �Զ���Ӧ
//#define MID_IRSENSOR_BL_OFF     1405  //  ��������
#define MID_VIDEO_ROTATE 	1406

#define MID_TTS_OPEN        	1408	//TTS Open State when 2:00 or 3:00

#define MID_GPRS_SETTING        1415    //GPRS����
#define MID_GPRS_FLOW           1416
#define MID_GPRS_AUTH_NORMAL    1417    //��ͨ
#define MID_GPRS_AUTH_SECURE    1418    //��ȫ
#define GPRS_INFO               1419
#define MID_MODEM_MODEL         1420    //Modem �ͺ�
#define MID_MODEM_COPS          1421    //�ƶ�������
#define MID_MODEM_REGSTATUS     1422    //ע��״̬
#define MID_MID_PPP_FLOW        1349    //GPRS����
#define MID_PPP_RESETFLOW       1424    //GPRS��������

#define MID_SIM_REG_NOT_SEARCH  1425
#define MID_SIM_REG_OK          1426
#define MID_SIM_REG_SEARCHING   1427
#define MID_SIM_REG_DENIED      1428
#define MID_SIM_REG_UNKNOWN     1429
#define MID_SIM_REG_ROAMING     1430
#define MID_SIM_REMOVED         1431
#define MID_SIM_PIN_ERROR       1432

#define MID_GPRS_DETACH         1433
#define MID_GPRS_DETACH_SURE    1434
#define MID_GPRS_ATTATCH        1435
#define MID_GPRS_ATTATCH_SURE   1436
#define MID_GPRS_RESTART        1437
#define MID_GPRS_RESTART_SURE   1438
#define MID_GPRS_TX             1365		//����
#define MID_GPRS_RX             1366		//����
#define MID_GPRS_DETACHED       1441
#define MID_PPP_FLOW_RESET      1442
#define MID_GPRS_ATTACHING      1443
#define MID_GPRS_SUCCESS        1444
#define MID_GPRS_FAIL           1445
#define MID_GPRS_RESTARTING     1446
#define MID_GPRS_NORNETWORK     1447
#define MID_GPRS_INIT_MODEM     1448
#define MID_GPRS_OPEN_ERR       1449
#define MID_GPRS_ATCMD_ERR      1450
#define MID_GPRS_DISCONNECTED   1451
#define MID_GPRS_DETACH_FAIL    1452
#define MID_GPRS_SIGNAL		1453

#define MID_DNS			1500
#define MID_DNS_ERROR		1501

#define MID_IP_MODEL		1502
#define MID_URL_MODEL		1503

//FOR 3g
#define MID_MODEM_TX             		1439		//����
#define MID_MODEM_RX            	 	1440		//����
#define MID_MODEM_MOBILENET		2003		//�ƶ�����
#define MID_MODEM_HTSERVER		2004		//����������
#define MID_MODEM_UNAVAILABE		2005		//ģ�鲻����
#define MID_MODEM_INITING			2006		//ģ���ʼ����
#define MID_MODEM_INITFAIL			2007		//ģ���ʼ��ʧ��
#define MID_MODEM_MODULE_READY	2008		//ģ���Ѿ���
#define MID_MODEM_SIM_UNREADY	2009		//SIM��δ����
#define MID_MODEM_SIM_UNDETECTE	2010		//δ��⵽SIM��
#define MID_MODEM_SIM_LOCED		2011		//SIM����ס
#define MID_MODEM_SIM_READY		2012		//SIM�Ѿ���
#define MID_MODEM_CONNECTING		2013		//�����С�����
#define MID_MODEM_UNKNOWNSTATUS	2014		//δ֪״̬
#define MID_MODEM_NOSERVICE		2015		//�޷���
#define MID_MODEM_CDMA20001X		2016		//CDMA20001X
#define MID_MODEM_CDMA2000EVDO	2017		//CDMA2000EVDO
#define MID_MODEM_MIXMODE			2018		//���ģʽ
#define MID_MODEM_UNKNOWE		2019		//δ֪
#define MID_MODEM_GSM				2020		//GSM
#define MID_MODEM_EDGE			2021		//EDGE
#define MID_MODEM_WCDMA			2022		//WCDMA
#define MID_MODEM_HSDPA			2023		//HSDPA
#define MID_MODEM_HSUPA			2024		//HSUPA
#define MID_MODEM_HSDPAHSUPA		2025		//HSDPAHSUPA
#define MID_MODEM_TDSCDMA		2026		//TDSCDMA
#define MID_MODEM_ONLINETIME		2027		//����ʱ��
#define MID_MODEM_DAY				2028		//��
#define MID_MODEM_HOUR			2029		//Сʱ
//end 3g

//For face
#define MID_FACE                2119    //face
#define MID_FACE_VERIFY         2120    //face identify
#define FACE_REG                2121    //face register
#define FACE_REG_PREPARE        2122    //face register ,please prepare
#define FACE_CHG_POS            2123    //Please change posture or change distance
#define FACE_NEAR               2124    //Please near
#define FACE_FAR                2125    //Please far
#define FACE_EXPOSOURE          2126    //face exposoure
#define FACE_GLOBALGAIN         2127    //video gain
#define FACE_REG_FRONT          2128    //
#define FACE_REG_SCREEN         2129
#define FACE_REG_LEFT           2130
#define FACE_REG_RIGHT          2131
#define FACE_REG_CAMERA         2132
#define FACE_FACESET            2133    //face param setting
#define MID_STKEYFUN6           2134    //switch workmode
#define MID_G_FACE              2135    //1:G face
#define MID_DEF_FG              2136    //default face group
#define MID_ONE_FACE            2137    //1:1 face
#define MID_VF_MAIN             2138    //input group or pin2
#define MID_STKEYFUN10          2139    //face group 1
#define MID_STKEYFUN11          2140    //face group 2
#define MID_STKEYFUN12          2141    //face group 3
#define MID_STKEYFUN13          2142    //face group 4
#define MID_STKEYFUN14          2143    //face group 5
#define FACE_CUR_GROUP          2144    //cur group
#define MID_FACE_FINGER         2145    //face +finger
#define MID_FACE_REGMODE        2146    //face register
#define MID_FACE_REGFP          2147    //must register finger
#define MID_FACE_INFO           2148    //face info
#define MID_DEL_FACE            2149    //del facetemp
#define MID_FACEHADDEL          2150    //del facetemp ok
#define MID_DEL_ORGDATA         2151    //Wether to del. the original data
#define MID_FACE_TEST           2152    //face test
#define MID_FACE_SCORE          2153    //score
#define MID_FACE_SET            2154    //face param setting
#define MID_FACE_VTH            2155    //face 1:1 score
#define MID_FACE_MTH            2156    //face 1:G score
//end face

#define HIT_BAT_STR1        	2110
#define HIT_BAT_STR2        	2111
#define HIT_BAT_STR3        	2112
#define HIT_BAT_STR5        	2114
#define HIT_BAT_STR6        	2115
//web server
#define MID_WENSERVER_SETUP 	2116
#define MID_WENSERVER       	2117
#define MID_WENSERVER_PROXY 	2118


#define HID_PRI_ENROLL    	2802	//�Ǽ�Ա
//485 Reader
#define HID_485READER           2896 //
#define HID_NOTOFF              2897 //can not trun off hint.

#define PID_PHOTO_MNG		2898//������Ƭ����
#define PID_PHOTO_DEL_TIME	2899//ɾ���趨ʱ���֮ǰ��Ƭ
#define PID_PHOTO_DEL		2900//ɾ����Ƭ
#define PID_PHOTO_AUTO_CNT	2901//�Զ�ɾ����Ƭ��
#define PID_PHOTO_NOTICE	2902//��Ƭ�ﵽ�������ʱ�Զ�ɾ����Ƭ

#define MID_SRB_FUN         2903//SRB����

#define MID_PHOTO_UPLOAD	2904//��Ƭ�ϴ�
#define MID_PHOTO_SERVER	2905//��Ƭ������
#endif

