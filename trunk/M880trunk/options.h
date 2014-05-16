/*************************************************

  ZEM 200

  options.h header file for options

  Copyright (C) 2003-2005, ZKSoftware Inc.

  $Log: options.h,v $
  Revision 5.19  2006/03/04 17:30:09  david
  Add multi-language function

  Revision 5.18  2005/12/22 08:54:23  david
  Add workcode and PIN2 support

  Revision 5.17  2005/11/06 02:41:34  david
  Fixed RTC Bug(Synchronize time per hour)

  Revision 5.16  2005/09/19 10:01:59  david
  Add AuthServer Function

  Revision 5.15  2005/08/13 13:26:14  david
  Fixed some minor bugs and Modify schedule bell

  Revision 5.14  2005/08/04 15:42:53  david
  Add Wiegand 26 Output&Fixed some minor bug

  Revision 5.13  2005/08/02 16:07:51  david
  Add Mifare function&Duress function

  Revision 5.12  2005/07/14 16:59:50  david
  Add update firmware by SDK and U-disk

  Revision 5.11  2005/07/07 08:09:05  david
  Fixed AuthServer&Add remote register

  Revision 5.10  2005/06/29 20:21:46  david
  Add MultiAuthServer Support

  Revision 5.9  2005/06/16 23:27:49  david
  Add AuthServer function

  Revision 5.8  2005/06/10 17:10:59  david
  support tcp connection

  Revision 5.7  2005/06/02 20:11:09  david
  Fixed SMS bugs and Add Power Button Control function

  Revision 5.6  2005/05/20 23:41:04  david
  Add USB support for SMS

  Revision 5.5  2005/04/27 00:15:34  david
  Fixed Some Bugs

  Revision 5.4  2005/04/24 11:11:28  david
  Add advanced access control function

  Revision 5.3  2005/04/07 17:01:43  david
  Modify to support A&C and 2 row LCD

 *************************************************/

#ifndef _OPTIONS_H_
#define _OPTIONS_H_

#include "arca.h"
#include "langres.h"

#define STA_IDLE	0	//	�ȴ�״̬��
#define	STA_ENROLLING	1	//	�Ǽ�ָ��״̬��
#define	STA_VERIFYING	2	//	ʶ��ָ��״̬��
#define	STA_MENU	3	//	ִ���˻�����˵�
#define	STA_BUSY	4	//	��æ�ڴ�����������
#define STA_WRITEMIFARE 5       // 	�ȴ�д��״̬

#define TYPE_SLAVE_ID   101

//iCLSRW
#define COM1 1
#define COM2 2
#define COM3 3

#define VALUE_BUFFERLEN 	1024
#define VALUE_BUFFERCACHE 	4096
#define MAX_OPTION_SIZE		(8*1024)
#define MAX_AUTOALARM_CNT 	8

#define ATTLOGLIMIT 		50000
#define USERLIMIT		3000

#ifdef ZEM600
#define VOICE_LOW       50
#define VOICE_MIDDLE    80
#define VOICE_HEIGH     99
#endif
extern int gMachineState;

extern int battery_fd;  // �ļ����
extern unsigned char battery_state;  // ��⵽��ر仯ʱ��Ϊ���ⶪʧ��Ϣ���Ͷ��⼸�Σ����⣬���ڼ���ص����ֵ

/*
 *	1. Ver 6.50 ��������Ver 6.50 )��ǰ�ģ�ֻ֧��9.0�㷨��
 *	2. Ver 6.50 ������Ver 6.50 )�� Ver 6.60��������Ver 6.60���ģ��Ǿɵ�10.0֧�ֹ̼���
 *	3. Ver 6.60 ������Ver 6.60 )֮��ģ���֧����10.0�Ĺ̼���
 *	��10.0�;�10.0��ȴ��
 *		��10.0�洢�ʹ���ָ�Ƶ�ʱ�򣬶��ǰ�һ���û���ָ��ģ���fingerIDȫ������0������
 *	Ҳ����ͬһ���û���ָ��ģ��ʵ����ֻ��һ���ļ���
 *	  ��10.0��ָ��ģ�壬��ָ��ģ�崦��ʽ��9.0һ����ÿ��ָ�ƶ���һ��fingerID���洢������
 *	����ͳ��ָ�ƣ�Ҳ���㴦���̨��֤��в��ָ��,ADMS����ȴ���
 *	��ע�����������Ҫ���ڿ�������Լ��Ž������������ִ���10.0��ָ�ƣ����Ҽ�����ǰ�Ĺ̼���
 *	4.Ver 6.70 BS���ڹ̼�������Ŀ����BS���湦��
 */
//#define MAINVERSION "Ver 6.50 "__DATE__
// #define MAINVERSION "Ver 6.60 "__DATE__	//2009��11��17�Ÿ���
#define MAINVERSION "Ver 6.70 "__DATE__	//2011��8��30��


//#define MAINVERSIONTFT  "Ver 6.4.1(build 01)"  //add 3 and 3.5 in one code
//#define MAINVERSIONTFT  "Ver 6.4.1(build 02)" //fix some bug for test department 2009-11-25
//#define MAINVERSIONTFT  "Ver 6.4.1(build 03)" //add wiegand and fix hang device bug 2009-11-28
//#define MAINVERSIONTFT  "Ver 6.4.1(build 04)" //fix wiegand bug for verify
//#define MAINVERSIONTFT  "Ver 6.4.1(build 05)" //fix wiegand, default and other 2009-11-29
//#define MAINVERSIONTFT  "Ver 6.4.1(build 06)" //���ĸ����ϴ���ʱ�򣬳��ֶδ�������⣬�Լ�����һЩ����2009-12-01
//#define MAINVERSIONTFT  "Ver 6.4.1(build 07)" //���İ����Լ���ز��֣����ҽ����һЩ�򵥵�Bug  2009-12-02
//#define MAINVERSIONTFT  "Ver 6.4.1(build 08)" //��������������������⣬���webserver�Լ��̼��Ե������ڴ������  2009-12-03-01
//#define MAINVERSIONTFT  "Ver 6.4.1(build 09)" //���������֤��ʽʱ����״̬���Ե�������޸Ĳ��ֽ��棬�����ڿ��ڼ�¼��ѯ���޸�menu���棬ȥ��U�̵�������޷�ʹ�ÿ�ݼ���bug��2009-12-03-03
//#define MAINVERSIONTFT  "Ver 6.4.1(build 10)" //�������camera��ת�����⣬���о���ͼƬ�Ḳ�ǰ�ť�����⣬���о����㷨���ļ�û��ˢ��ָ�Ƽ�¼����2009-12-03-04
//#define MAINVERSIONTFT  "Ver 6.4.1(build 11)"
//#define MAINVERSIONTFT  "Ver 6.4.1(build 12)"
//#define MAINVERSIONTFT  "Ver 6.4.1(build 13)"
//#define MAINVERSIONTFT  "Ver 6.4.1(build 14)"
//#define MAINVERSIONTFT  "Ver 6.4.1(build 15)"	//��������Ǽ�ָ��ɾ�����������⣬���ʱ�����������⡣
//#define MAINVERSIONTFT  "Ver 6.4.1(build 16)"	//���wifi ���������ͼƬ��ʾ�ص���������Ƭˢ��ʱ�ڴ�й©�������Զ�����Դ���16���ַ��������ϴ��û����ҵ�����
//��������Ǽǵ�ʱ�����ָ���������������ʱ�򣬹̼�����ʾ���ذ���ָ�����ǽ���û���Ƴ���bug
//����򿪺�̨��֤��ʱ�򣬽��治ˢ�µ�bug, ������������ʱ�䲻��ˢ�£����治����������������Ѿ������
//#define MAINVERSIONTFT  "Ver 6.4.1(build 17)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 18)"	//�����9.0�����������µĹ̼���û������������棬3.5���������Ĭ�϶���U�̹��ܡ�
//#define MAINVERSIONTFT  "Ver 6.4.1(build 19)"	//��������Ǽ����ⲻ���˳������������鿴���ڼ�¼��ʱ�򣬿���״̬�������bug,
//#define MAINVERSIONTFT  "Ver 6.4.1(build 20)"	//���ı�����Ƭ��ʱ��ʹ�������ļ��д洢�ķ�ʽ���棬����ʹ��ֻ��һ���ļ��У�����������⡣
//#define MAINVERSIONTFT  "Ver 6.4.1(build 21)"	//
//#define MAINVERSIONTFT  "Ver 6.4.1(build 22)"    //change update firmware show lcd error
//#define MAINVERSIONTFT  "Ver 6.4.1(build 23)"   //�����̨��֤��ʱ�����ĵط�20091221
//#define MAINVERSIONTFT  "Ver 6.4.1(build 24)" 	//���sensor�кڱߵ��������Ӳ��� sensorOffsetY��Ĭ��Ϊ10
/*
   1��ADMS �ϴ��û�ָ��bug�� ɾ��ȫ������ bug
   2���޸� 10.0ָ�� bug
   3���޸� ��Ƶ������ ���ܳ��ֵ� bug
   4.	�޸�дָ�ƿ��ٶ���������
   */
//  #define MAINVERSIONTFT  "Ver 6.4.1(build 25)" 	//
/*
   1. GPRS
   2. ADMS
   3. Wiegand out 
   */
//#define MAINVERSIONTFT  "Ver 6.4.1(build 26)"		
//#define MAINVERSIONTFT  "Ver 6.4.1(build 27)"  //��Ҫ���GPRS���֣��ƽ����Բ�
//#define MAINVERSIONTFT  "Ver 6.4.1(build 28)" //���B3������power���ػ����ڰ�power�����ܿ����������ʱ���幦�ܸı�������������Bug
//#define MAINVERSIONTFT  "Ver 6.4.1(build 29)" //�����ADMS����ͬʱ��TTS���ܣ�������WEBSERVER��IP��ַ�󷵻������棬����menu������������������
//#define MAINVERSIONTFT  "Ver 6.4.1(build 30)" //�����TTS���ܣ�����ʱ����������
//#define MAINVERSIONTFT  "Ver 6.4.1(build 31)" //����ڴ������������ӦԽ��Խ������
//#define MAINVERSIONTFT  "Ver 6.4.1(build 32)" //fix a bug for Photo ID
//#define MAINVERSIONTFT  "Ver 6.4.1(build 33)" //20100221 ���wifi��ͨ�����⣬���Ľ������ã�������̲�����Ǽ���MF����ʱ��3����������ʾͼ����ƫ�Ƶ����⡣
//#define MAINVERSIONTFT  "Ver 6.4.1(build 34)" //20100223 ����wifi�̼������Բ�
//#define MAINVERSIONTFT  "Ver 6.4.1(build 35)" //20100224 ����wifi�̼������Բ�
//#define MAINVERSIONTFT  "Ver 6.4.1(build 36)" //20100225 ����wifi�̼������Բ�,������óɹ���ģʽ��û�����벻ͨ�����⡣
//#define MAINVERSIONTFT  "Ver 6.4.1(build 37)" //20100301 wifi���ò�����ֱ��������£���һ��bug, ���о���������ϵ�������
//#define MAINVERSIONTFT  "Ver 6.4.1(build 38)" //20100303 ��ʱ��������Ϸ������ᷢ�������⡣������ͻ�����Ver 6.4.1(build 33)
//#define MAINVERSIONTFT  "Ver 6.4.1(build 39)" //20100316   add face(For FS1000 --------imagic)
//#define MAINVERSIONTFT  "Ver 6.4.1(build 40)" //20100316   fixed  FS1000 LED
//#define MAINVERSIONTFT  "Ver 6.4.1(build 41)" //20100311 fix extend bell for command 4
//#define MAINVERSIONTFT  "Ver 6.4.1(build 42)"
//#define MAINVERSIONTFT  "Ver 6.4.1(build 43)" //20100406 �������bug��1��3������ʾ�Ƿ񱣴�Ի������ʧЧ2���˵�-ϵͳ����-ϵͳ�������޸����ú�OK��ʾ"��������Ч"����
/****************************************
 ** �ύ�ߣ�������
 ** ���ڣ�2010��4��9��
 ** ���ADMS�ϴ�һ���û��������ϴ������⣬���Ҳ�Ż�������ͷ����
 ****************************************/
//#define MAINVERSIONTFT  "Ver 6.4.1(build 44)"
/****************************************
 ** ������������
 ** ���ڣ�2010��4��12��
 ** �������״̬��ʾ�����⣬
 ** main.c ����static int procmainstatekey(HWND hWnd,int index1)
 ** ���� TextOut(hdc,x+(130-strlen((char *)temp)*8)/2,y+8,(char *)temp);
 ** ΪTextOut(hdc,x+(130-strlen((char *)mystkey.stateName)*8)/2,y+8,(char *)temp);
 ****************************************/
//#define MAINVERSIONTFT  "Ver 6.4.1(build 45)" 
/****************************************
 ** �ύ���ڣ�2010��4��20��
 ** �ύ�ߣ���ΰ
 ** ��ҪĿ�ģ����ͨ��PUSH-SDK���ؿ�����Ƭ���ܡ�
 ** �汾�ţ�Ver 6.4.1(build 46)
 ** �����ļ�Ϊ��
 ** flashdb.h flashdb.c gridview.c libcam.h(�Ű������)��options.h options.c
 ** ssrvfwin.c ./iclock/checklog.c ./iclock/http.c ./iclock/iclok.h ./iclock/iclockprx.c
 ** SVN  -r 1158

 ****************************************/
/*******************************************************************
 ** �ύ���ڣ�2010��5��11��
 ** �ύ�ߣ���ΰ
 ** ��ҪĿ�ģ��޸Ķ�����Դ��ڵ�����
 **		1,����������ĳЩĳЩ������ʾ��ȫ����ʾ����ȷ������
 **		2,̩�￼�ں�Muen�鿴���ڼ�¼����������
 ** �汾�ţ�Ver 6.4.1(build 47)
 ** �����ļ�Ϊ��
 ** logquery.c  ssrsystem1.c ssrcgroupmng.c main.c ssrsystem3.c  ssrstkey.c
 ** 
 ** SVN  -r 1264
 ****************************************/

//#define MAINVERSIONTFT  "Ver 6.4.1(build 47)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 54)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 57)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 58)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 61)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 62)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 63)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 64)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 65)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 66)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 67)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 68)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 69)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 70)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 71)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 72)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 73)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 74)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 75)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 92)" 
//#define MAINVERSIONTFT  "Ver 6.4.1(build 98)" 
/*******************************************************************
 ** �ύ���ڣ�2011��8��30��
 ** �ύ�ߣ���С��
 ** ��ҪĿ�ģ�
 **		1.BS���ڹ̼�������Ŀ��������
 **
 ** �汾�ţ�Ver 6.5.0(build 99)
 ** 
 ****************************************/
//#define MAINVERSIONTFT  "Ver 6.5.1(build 99)" 
/*******************************************************************
 ** �ύ���ڣ�2011��9��17��
 ** �ύ�ߣ���С��
 ** ��ҪĿ�ģ�
 **1.�Ӹ������ָ�뱻free���ε����⣬���򱨴�Ϊ
 *** glibc detected *** ./main: double free or corruption (!prev): 0xxxxx ***
 Aborted
 **2.����������쳣���߷�������ʱʱ����ؿ��ںͺ�̨�ȶԷ�Ӧ��������
 **�汾�ţ�Ver 6.5.2(build 100)
 ** 
 ****************************************/
//#define MAINVERSIONTFT  "Ver 6.5.2(build 100)" 
/*******************************************************************
 ** �ύ���ڣ�2011��9��17��
 ** �ύ�ߣ���С��
 ** ��ҪĿ�ģ�
 **1.BS����������Ŀ�ύ�����̼��汾
 **�汾�ţ�Ver 6.5.2(build 100)
 ** 
 ****************************************/
//#define MAINVERSIONTFT  "Ver 6.5.3(build 102)" 
/*******************************************************************
 ** �ύ���ڣ�2011��9��17��
 ** �ύ�ߣ���С��
 ** ��ҪĿ�ģ�
 **1.�Ż�U���ϴ��û���Ϣ�ٶ�
 **
 **2.�Ż��豸����������·������������ٶ�
 **�汾�ţ�Ver 6.5.3(build 103)
 ** 
 ****************************************/
//#define MAINVERSIONTFT  "Ver 6.5.3(build 103)" 
/*******************************************************************
 ** �ύ���ڣ�2011��10��28��
 ** �ύ�ߣ���С��
 ** ��ҪĿ�ģ�
 **1.������3G���ܣ�ʹ��libmodem.so��֧��GPRS��CDMA��WCDMA��TDS-CDMA
 **�汾�ţ�Ver 6.5.4(build 104)
 ** 
 ****************************************/
//#define MAINVERSIONTFT  "Ver 6.5.4(build 104)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 105)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 106)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 107)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 108)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 109)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 110)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 111)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 112)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 113)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 114)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 115)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 116)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 139)"
//#define MAINVERSIONTFT  "Ver 6.5.4(build 140)"
#define MAINVERSIONTFT  "Ver 6.5.4(build 142-A0433-02)"

#define DeviceVender "ZKSoftware Inc."
#define AuthorName "Chen Shukai"
#define ProductTime (LoadStrOld("~ProductTime")?LoadStrOld("~ProductTime"):"2004-01-01 20:20:20")
#define SerialNumber (LoadStrOld("~SerialNumber")?LoadStrOld("~SerialNumber"):"0")
#define OEMVendor (LoadStrOld("~OEMVendor")?LoadStrOld("~OEMVendor"):DeviceVender)
#define DeviceName (LoadStrOld("~DeviceName")?LoadStrOld("~DeviceName"):"SSR")
#define AlgVer (LoadStrOld("~AlgVer")?LoadStrOld("~AlgVer"):"ZKF2004-5.04")

//dsl 2011.5.7
//#define FORFACTORY

enum __SHORT_KEY_{
	STK_UNDEFINED=0,
	STK_STATE,
	STK_WORKCODE,
	STK_EMS,
	STK_HELP,
	STK_UPDTHEME,
	STK_USERMGMT,
	STK_NEWUSER,
	STK_MANAGEUSER,
	STK_COMMMGMT,
	STK_NETWORK,
	STK_RS232,
	STK_SECURITY,
	STK_SYSTEM,
	STK_SYSTEMSET,
	STK_DATA,
	STK_UPDATE,
	STK_KEYBOARD,
	STK_DISPLAY,
	STK_POWERMGMT,
	STK_RESET,
	STK_BELL,
	STK_DATETIME,
	STK_PENDRIVE,
	STK_DWNRECORD,
	STK_DWNUSER,
	STK_UPLUSER,
	STK_UPLPICTURE,
	STK_DWNEMS,
	STK_UPLEMS,
	STK_UPLTHEME,
	STK_AUTOTEST,
	STK_RECORD,
	STK_SYSINFO,
	STK_TIMEZONE,
	STK_HOLIDAY,
	STK_GROUP,
	STK_UNLOCKGROUP,
	STK_ACCESS,
	STK_DURESS=39,

	STK_FUN,	//40
	STK_VERIFY,
	STK_GMATCH,
	STK_GROUP1,
	STK_GROUP2,
	STK_GROUP3,
	STK_GROUP4,
	STK_GROUP5,

};
//==========================================================

#define TTS_OPTION

typedef struct __OPTIONS__{
	int Language;					//Language of display messages
	BYTE MAC[6];					//Ethrenet MAC
	BYTE CardKey[6];
	BYTE IPAddress[4];				//Network IP Address
	int DeviceID;					//Device ID for 485 connection
	int MThreshold, EThreshold, VThreshold;		//Fingerprint Matching threshold, Fingerprint Enroll threshold
	unsigned int LastAttLog;			//Last AttLog index
	int UDPPort;					//UDP Port Number for communication
	int OImageWidth, OImageHeight, OTopLine, OLeftLine;  //Original fingerprint size and corner for capturing
	int CPX[4],CPY[4];				//correct distorted image parameters
	int ZF_WIDTH,ZF_HEIGHT;
	int MSpeed;					//fingerprint match speed 0-low, 1-high, 2-auto
	int AttState;
	int MaxUserCount;				//unit is 100
	int MaxAttLogCount;				//unit is 10000
	int MaxFingerCount;				//unit is 100
	int AlarmAttLog;
	int AlarmOpLog;
	int AlarmReRec;					//Recheck time
	int RS232BaudRate;				//0x23
	int RS232CRC;
	int RS232Stop;
	int WEBPort;
	int ShowState;
	int KeyLayout;
	int VoiceOn;
	int AutoPowerOff; 				//�Զ��ػ�ʱ��
	int AutoPowerOn;				//�Զ�����ʱ��
	int AutoPowerSuspend;				//�Զ�����ʱ��
	int AutoAlarm[MAX_AUTOALARM_CNT];		//�Զ�����ʱ��
	int IdlePower;					//�����Զ�����-1���Զ��ػ�-0
	int IdleMinute;					//����ʱ��
	int ShowScore;					//show the verification score for fingerprint matching.
	int NetworkOn, RS232On, RS485On;		//�Ƿ�����̫���硢RS232��RS485����
	int NetworkFunOn, LockFunOn, RFCardFunOn; 	//�Ƿ������/�Ž���0-�ޣ�1-���Ž���2-�߼��Ž���/��Ƶ������
	int One2OneFunOn, PowerMngFunOn;	 	//�Ƿ��1:1����,��Դ������
	int NewFPReader;
	int ShowName;
	int UnlockPerson;				//ͬʱ����������
	int ShowCheckIn;				//�Ƿ���ʾ���°�״̬
	int OnlyPINCard;				//����֤���뿨
	int IsTestMachine;				//�Ƿ�����û���
	int MustChoiceInOut;				//�Ƿ����ѡ�����״̬
	//�ܹ��Զ�����	int CMOSSensorDevAddr;		//CMOS Sensor Chip IIC Device Address: 0x42-OV7620, 0x22-Hy7131
	int HiSpeedNet;					//100M Ethernet
	int MenuStyle;					//�˵����
	int CanChangeCardKey;				//�Ƿ�����ı俨����
	int Must1To1;					//�Ƿ�ֻ����һ��һ�ȶ�
	int LCDModify;
	int ComKey;					//��������
	int MustEnroll;					//������ע���û�,�ȶԺ������Ч�����ڱ�Ļ����ϵǼǵ�ָ�ƿ����Բ��ڱ�����ע�ἴ��ʹ��
	int TimeOutMenu;				//�˵��ĳ�ʱʱ��
	int TimeOutPin;					//�俼�ں���ĳ�ʱʱ��
	int TimeOutState;				//����״̬�ĳ�ʱʱ��
	int SaveAttLog;					//�Ƿ񱣴���֤��¼
	int RS232Fun;					//RS232�ӿڹ��ܣ�0-�ޣ�1-����APIͨѶ��2-��ID���
	int IsModule;					//�Ƿ�ģ��
	int ShowSecond;					//�Ƿ���ʾ��
	int RFCardSecStart;				//Mifare Card ��ʼ���ָ�����ݵ�����
	int RFCardSecLen;				//Mifare Card ���ָ�����ݵ�������
	int RFCardFPC;					//Mifare Card ���ָ�Ƶĸ���
	int PIN2Width;					//PIN2����ַ���� <=5��ʾ��֧��PIN2��  2147483647=0x7FFFFFF
	int DateFormat;					//Date Format
	int OPLogMask1;					//
	int OPLogMask2;					//
	int AutoState[4*4];				//�Զ�״̬ת����ʱ��
	int DelayCount, IncThr, TopThr, MinThr;		//ָ�Ƽ��ķ�ֵ����
	int MaxNoiseThr, MinMinutiae, MaxTempLen;	//�������ָ��ͼ��������ֵ,
	int SaveBitmap;					//Save bmp format finger image or not
	BYTE GATEIPAddress[4];				//Gateway IP Address
	int TCPPort;					//TCP port for communication
	int RISServerTCPPort;					// net TCP port
	BYTE NetMask[4];				//Network mask address
	BYTE AuthServerIP[4];				//Identification Server
	int AuthServerEnabled;				//Identification Server enabled 0-only local 1-network->local 2-only network 3-local->network
	int IsOnlyRFMachine;				//Only RF machine not fingerprint
	int IsOnlyOneSensor;				//Only One Sensor
	int OS;						//Current OS 0=NONE 1=LINUX
	int IsWiegandKeyPad;				//use wiegand keypad or not
	int AutoStateFunOn;				//�Զ�״̬ת������
	int EnrollCount;  	                     	//register finger count
	int IsSupportSMS;				//SMS Enable or Disable
	int IsSupportUSBDisk;				//Support USB DISK
	int AdminCnt;                               	//ͬʱ��֤����Ա�ĸ���
	int AutoAlarmDelay;				//Auto Alarm delay time(second)
	int MultiLanguage;				//support select language
	int LockPowerButton;				//Lock Power Button
	int ModemEnable;
	int IsSupportModem;				//support modem connection
	int ModemModule;					// 1 - Q24PL  2 - EM560  3 - EM660  4 - EM770/W
	int IsSupportAuthServer;			//support AuthServer
	int AuthServerTimeOut;				//TimeOut for AuthServer
	int IsSupportMF;				//support mifare
	int AutoAlarmTimes;				//Auto Alarm Times
	int IsACWiegand;				//whether output access control wiegand 26bit
	int DNSCheckInterval;				//Refresh AuthServer List interval times unit:minute
	int AutoUploadAttlog;				//Automate upload Attlog seconds
	int DisableNormalUser;				//Disable normal user
	int KeyPadBeep;					//press key to play beep voice.
	int WorkCode;					//support work code
	int MaxUserFingerCount;				//default=10
	int AttLogExtendFormat;				//Extend attendance logs storage format
	int CompressAttlog;				//whether compress attendance logs or not(only valid for old AttLog format)
	int ASDewarpedImage;				//whether dewarp the image for auth server
	int ProcessImage;				//processing image with light check
	int IsFlashLed;					//whether flash green led or not
	int DisableRootPassword;			//disabled Setup root password by CommKey
	int IsSupportMP3;				//support MP3
	int MifareAsIDCard;				//Mifare Card as ID Card
	int PlayGroupVoice;				//when verified play voice by its group
	int PlayTZVoice;				//when verified play voice by time zone
	BYTE WebServerIP[4];				//Network IP Address
	int WebServerPort;				//Network Port
	int AudioVol;					//Audio volumn
	int AutoAlarmAudioVol;				//Auto alarm audio volume
	int DHCP;					//DHCP enable or disable
	int AutoSyncTimeFunOn;				//Synchronize time from remote time server
	int AutoSyncTime;				//Schedule time for synchronize
	BYTE TimeServerIP[4];				//Time Server IP Address
	int CameraFunOn;				//take a photo from camera
	int StartUpNotify;                              //�𶯹㲥��BIT0-BT232, BIT1-NETWORK
	int AdvanceMatch;				//support 1:G 1:H
	int I1ToNFrom;                                  //1��N From (minimum user PIN for identification)
	int I1ToNTo;                                    //1��N To (maximum user PIN for identification)
	int I1ToH;                                    	//1��H
	int I1ToG; 					//1��G
	int TwoLineLCM;					//TWO LINE SMALL LCM
	int ErrTimes;					//Error times for pressing finger
	int UserExtendFormat;				//extend user data information
	U32 CMOSGC; 					//0-AUTO; 1-255 for RGB
	int RefreshUserData;				//Auto refresh user data from authserver
	int DisableAdminUser;				//Disable administrator verification
	int IClockFunOn;				//iClock functions
	BYTE ProxyServerIP[4];				//Proxy server ip address
	int ProxyServerPort;				//Proxy server port
	int IsSupportC2;				//support C2 controller or not
	int EnableProxyServer;				//Enable ProxyServer
	int WorkCodeFunOn;
	int MustChoiceWorkCode;				//��֤ʱ�Ƿ����ѡ��WorkCode(liming)
	int ViewAttlogFunOn;                            //View attlog funtion
	int IsInit;
	int Saved;
	int SSRFunOn;					//whether have ssr funtion
	int HzImeOn;					//t9 hz ime
	int PinPreAdd0;					//����λ�������Ƿ���ʾ0
	int SetGatewayWaitCount;                        //Wait seconds to retry setup gateway
	int IsSupportHID;                               //support iClass
	int FPRetry;					//1:1ָ����֤���Դ���
	int AdmRetry;					//����Ա��֤���Դ���
	int PwdRetry;					//������֤���Դ���
	int InterStyle;					//������
	int LogoTime;					//ͼƬѭ�����
	int ClockTime;					//ʱ����ʾ��ʱ
	int SMSTime;
	//liming
	int ShortKeyCount;				//��ݼ�����
	int AlarmMaxCount;
	int AlarmPlayTimes;
	int AutoAlarmFunOn;				//Auto alarm function enabled or disable
	int SMSCount;
	int TFTKeyLayout;				//0:iclock200/300,1:hit-1-2,2:iclock400/500
	int MustCheckWorkCode;				//�����WORKCODE�Ƿ�����ڱ���
	int USB232On;					//
	int USB232FunOn;				//
	int IMEFunOn;					//1:�������뷨��0:�ر����뷨
	int Brightness;					//��Ļ����
	int LcdMode;					//��ʾ��ģʽ 1:֧�ֱ������(iF4),0:��֧�ֱ������
	int OpenDoorDelay;                              //�Ŵ���ʱ
	int DuressHelpKeyOn;                            //��~K�������� ��/��
	int Duress1To1;                                 //1��1��ʽ���� ��/��
	int Duress1ToN;                                 //1��N��ʽ���� ��/��
	int DuressPwd;                                  //Password��ʽ��������
	int DuressAlarmDelay;                           //�Զ�����ʱ�� 0��255��
	int DoorSensorMode;                             //door sensor �Ŵſ��ط�ʽ 0-NO 1-NC ������ʾ������Ŵ�
	int LockOn;                                     //��������ʱ��
	int DoorSensorTimeout;                          //�Ŵű�����ʱAlarm signal will be raise when door sensor open
	int DoorCloseTimeZone;				//����ʱ���
	int DoorOpenTimeZone;				//����ʱ���
	int IsHolidayValid;				//�ڼ����Ƿ���Ч
	int ExtWGInFunOn;
	int WiegandID;
	int iCLASSAsIDCard;				//ICLASS����Ϊ��ͨID��
	int IsSupportiCLSRW;				//�Ƿ�֧��iclass��
	int iCLASSCardType;				//iclass������
	int AntiPassbackFunOn;                          //0֧�ַ�Ǳ,1��֧�ַ�Ǳ
	int AntiPassbackOn;                             //0 ����Ǳ;1������Ǳ������������ܳ���2���뷴Ǳ�������г������룻
	int MasterState; //���ӻ�ͨѶ��������״̬,������Ϊ0,��ӻ�Ϊ1,������Ϊ1��ӻ�Ϊ0,��Ϊ-1�����Ӷ�Ϊ������ǰ��״̬gOptions.AttState��
	int IsSupportWIFI;      //ccc
	int wifidhcpfunon;      //ccc
	int PrinterFunOn;                       //�Ƿ��д�ӡ������
	int PrinterOn;                          //��ӡ�����ܣ�0���ޣ�1����������ڣ�2��ESC��Star��ӡ
	int AuthServerREQ;      		//���������Ƿ�����ʱ����
	//        int ModemKeepLive;      		//�Ƿ񱣳�����״̬ 0=�Ҷ� 1=����
	//	int GPRSFrequency;			//GPRSƵ��
	int AuthServerCheckMode;        	//�������������,0:TCP/UDPͨ��У�飬1:GSMͨ�Ŵ���У�飬2:pushsdkͨ�ŷ�ʽ
	int AuthServerIPType;			//��������ַ����
	int RedialTimeInterval; 		//�ز�ʱ����
	int RedialCount;                	//�ز�����
	//        int isgprstest;
	int ReconnectInterval;
	int ShowPhoto;				//�Ƿ���ʾ�û���Ƭ
	int IsSupportPhoto;			//֧����Ƭ��ʾ����
	int WiegandOutType;			//Wiegand������ͣ�0=PIN��1=CardNumber
	int WiegandInType;			//Wiegand�������ͣ�0=PIN; 1=CardNumber
	int isSupportAlarmExt;			//�Ƿ����ⲿ����
	int CameraOpen;				//�Ƿ�֧��Camera
	int CameraBright;                         //����ͷ����
	int CameraContrast;                       //����ͷ�Աȶ�
	int PicQuality;                           //����ͷץͼ����
	int CameraScene;                         //����ͷ�������ã����ڣ�����)
	int CapturePic;                         //ץ��ͼ��
	int CapturevfTimes;                     //ץ����֤��ͨ������
	int CaptureAlarm;               	//���տռ侯��
	BYTE pingtestip[4];
	int IMESwitchKey;			//���뷨���ؼ�
	int SwitchAttStateByTimeZone;		//
	int NotShowRecordInfo;			//����ʾ��¼��Ϣ
	int DaylightSavingTimeFun;                       //�Ƿ���ʾ֧������ʱ��,
	int DaylightSavingTimeOn;                      //�Ƿ�֧������ʱ��
	int CurTimeMode;			//1��ǰΪ����ʱ��2��ǰ��������ʱ
	int DaylightSavingTime;			//��������ʱ��ʱ��
	int StandardTime;			//���������ʱ��ʱ��
	int FpSelect;				//�Ƿ���ʾָ��ͼ��
	int AlwaysShowState;			//��Զ��ʾ״̬ͼ
	int AttUseTZ;				//������ʱ������ƴ�
	int MachineGroup;			//������(IDT Limited����)
	int HasFPThreshold;
	int NoFPThreshold;
	int UseNewBell;				//�Ƿ�ʹ��������ģʽ
	int HavePowerKey;			//�Ƿ��е�Դ��
	int LockPowerKey;			//�Ƿ������ػ���
	int LimitFpCount;			//ϵͳָ�������,��ָ��������������ʱֻ��1:1�ȶ�(<MaxFingerCount)
	int ExAlarmDelay;			//�ⲿ�������ʱ��(��)
	int DelRecord;				//Del Record Count if full
	int ApiPort;				//HTTP_SDK DataApi Service Port
	int RSize;
	int ShowStyle;	//add by jazzy 2008.07.28 for arabic right to left show
	//zsliu add
	int isUseHejiraCalendar;//user Hejira Calendar's flag �ж��Ƿ�ʹ����������
	int IR_SensorOn;                        // �Ƿ�֧��IR Sensor
	int IRSS_BLSwitch;			//���⿪��
	int IRSS_BLOffR;                                //���ⰵֵ
	int IRSS_BLOnR;                                 //������ֵ
	int IRSS_BLDlyT;                                //������ʱʱ�䣨�Զ������ʱ��
	int IRSS_AutoCon;                               //�Զ����� [7:5] ����� [4:3] ������ [2] �Զ�����[1] �Զ����Ʊ��� [0] �ϵ�״̬
	int IRSS_Range;                                 // �жϷ��ȣ��Զ����Ʋ�����
	int BatteryInfo;	//add cn 2009-03-04
	/*
	 * ScreenAddress=2 ��ʾȷ������Ҫ��ת��
	 * ScreenAddress=0����1��ʾ��ת�������������ֵ���������Ҫ��ֵΪ1����0���з�ת��
	 * �����ת���ɹ��Ļ������������0��1���в�������
	 * ע�⣺��ת����Ҫ���������������κ󷽿���Ч��
	 */
	int ScreenAddress;	// add cn 2009-03-04
	int isRotateCamera;   	//add by cn
	int IsSupportExtBell;     //add by lyy
	int DetectFpAlg;
	int ZKFPVersion;
	int FingerSensitivity;	//0,1,2->low,middle,high
	int FPRotation;

	//ŷ�濼�ڻ��Ĳ������ж��Ƿ���ŷ�濼�ڻ�
	int EuropeDevice;//add by mjh
	int RotateDev;//for iclcok990 camera


	//zsliu add for 3���3.5�����ĺϲ�����
	/*
	 * ��MulAlgVer=0	//��֧�ֵ�һָ���㷨
	 * ��MulAlgVer=1	//֧�ֶ���ָ���㷨��Ŀǰ֧��9.0��10.0�㷨�����л�
	 * ���������Ҫ֧��9.0�Ĺ̼����������£�ZKFPVersion=9�����ҡ�MulAlgVer=0
	 * ���������Ҫ֧��10.0�Ĺ̼����������£�ZKFPVersion=10�����ҡ�MulAlgVer=0
	 * �����Ҫ֧��10.0/9.0֮������л��Ĺ̼������������£���MulAlgVer=1
	 */
	int MulAlgVer;
	int FP10DBVersion;
	/*
	 * supportLCDType=0  //֧��3������̼�
	 * supportLCDType=1  //֧��3.5������̼�
	 * supportLCDType=2  //�ȷ�����չ����
	 */
	int supportLCDType;
	//�˵������ƫ����,����Ҫ���棬ȫ����ʱ����
	int MenuOffset;
	//���ƽ����ƫ����,����Ҫ���棬ȫ����ʱ����
	int ControlOffset;
	//��Ļ���,����Ҫ���棬ȫ����ʱ����
	int LCDWidth;
	//��Ļ�߶�,����Ҫ���棬ȫ����ʱ����
	int LCDHeight;
	//���������������ʾ��ƫ����,����Ҫ���棬ȫ����ʱ����
	int MainVerifyOffset;
	//��Ҫ���ָ����ģ�������ʾ��Yλ�õ�ƫ������Ĭ����10
	int sensorOffsetY;
	//�б��ļ��
	int GridWidth;
	//��������
	int keyboardStyle;

	// GPRS  ��һЩ����
	int EchoFailRestart;
	int EchoInterval;
	int EchoAction;
	int EchoType;
	int WGPassThrough;

	//ADMS
	int IclockSvrFun;       	//charge open ADMS or not; 1 is open, 0 is close.
	int iClockServerStatus;
	int iClockErrorStatus;


	//д����ʾ��delayʱ��������Ϊ��λ
	int WriteLCDDelay;              //add by zhc 2008.11.25 

	int ttsIntegralPointOpen;	//TTS integral point give the correct time

	//���ջ������ܱ��濼����Ƭ�����ֵ
	int maxCaptureCount;		//max capture picture, default 8000

	TTS_OPTION int TTS_S;
	TTS_OPTION int TTS_VERIFY;
	TTS_OPTION int TTS_SMS;
	TTS_OPTION int TTS_LOGO;
	TTS_OPTION int TTS_ENROLL;
	TTS_OPTION int TTS_REC;
	TTS_OPTION int TTS_KEY;
	TTS_OPTION int TTS_STATE;
	TTS_OPTION int TTS_TIME;
	TTS_OPTION int TTS_MENU;

	int FreeTime;		//free time
	//��������������ӶϿ���ʱ���Ƿ���Ҫ�ر�beep��
	int EnableCommEndBeep;	//enable commu end beep
	//������Ƶ��ʾ�Ƿ���ת�Ĳ�������Ҫ��Ϊ���ڵǼ��û���ʱ��
	//��֧�ִ˹��ܣ���Ҫ���ε�,�����������ý�����Ҫ�˹��ܣ�Ĭ��Ϊ1��
	int enableVideoRotate;
	/*
	 * ��������������Ҫ��Բ����бȽ�����ļ��̶����õģ��ڹ̼���������ӳ�书�ܣ�
	 * KeyType=1 ����B3�������͵Ļ�������Щ�Ƕ���
	 * KeyType=2 ����ICS01�������͵Ļ�������Щ�Ƕ���
	 * 
	 * 
	 */
	int KeyType;

	//add by caona for face
	int FaceFunOn;
	int DefFaceGroup;
	int FaceVThreshold;
	int FaceMThreshold;
	int MaxFaceCount;
	int FaceRegMode;
	int FaceExposoure;
	int FaceExposRang;
	int VideoGain;
	int VideQuality;
	//int UploadPhoto;	//seiya dlphoto end
	int IsUploadPhotoOnly;  //when open ADMS, if 1, All functions of ADMS except upload photo can be used; if 0, all can be used.
	BYTE DNS[4];				//DNS
	int IsSupportDNS;
	int RS232FunOn;
	int RS485FunOn;
	BYTE IclockSvrURL[128];
	int WebServerURLModel;
	int IsSupportFlowCtrl;
	BYTE OptionsPassword[64];
	int IsRotatePhoto;
	/*��ؿ���,add by yangxiaolong,2011-06-14,start*/
	int RemoteAttFunOn;		//��ؿ��ڿ��أ�1:open��0:close.Ĭ��Ϊ��
	int RmUserSaveTime;		//��ؿ����û�����ʱ�䣬����Ϊ��λ��Ĭ��Ϊ5��
	/*��ؿ���,add by yangxiaolong,2011-06-14,end*/
	int USBCheckTime; //add by lihm	 �������һ��U�̼��
	int USBFileCount; //add by lihm ���ZEM510 /proc/bus/usb/001 ��û�в�U��ʱ�м���Ŀ¼
	int USBCheckOn; //add by lihm  U�̼�⹦�ܿ���
	/*����pushsdk�Ը߼��Ž���֧�֣�add by yangxiaolong,2011-9-26,start*/
	int PushLockFunOn;	// 1,֧�֣�0��֧��
	/*����pushsdk�Ը߼��Ž���֧�֣�add by yangxiaolong,2011-9-26,end*/
	int DownloadNewLog;
	/*support RS485 reader*/
	int RS485Port;
	int InBIOComType;
	int Reader485FunOn;
	int Reader485On;
	/*end rs485*/
	int ZEM800Platform;
	int VideoWidth;
	int VideoHeight;
	int WifiModule;
	int LoopWriteRecordOn; 		/*When the record capacity is full, Overwrite the old record*/
	int BitsInvertCardModule;
	int CardNumberParity;
	/**************************************************
	 *Number printed on the card . 0010930095  166.51119
	 *Number Reading by want : 16651119
	 *parameter explain:
	 *cardNum int : the card number is 0010930095
	 *readCardStyle int : the style for read cardnum;
	 *explain:
	 *IDCardStyle=0 read card num is 0010930095
	 *IDCardStyle=1 read card num is 16651119
	 *IDCardStyle=2 read card num is 51119
	 ***************************************************/
	int IDCardStyle;
	int StartPosition;		// The start position of the card number,1 means staring from the first digit in a selected
	int CardNumberLen;		// The length of the card number.
	int DelPictureCnt;		//When picture capacity is full, auto delete xxx the old picture
	int IsWGSRBFunOn;		//support srb fun
	int SRBOn;				//srb on
	int SRBType;			//srb type
	int FingerMaxRotation;	//֧��ָ����ת��������,��Χ��0��180������ת��Ĭ��ֵ30��֧��360����ת������ֵΪ180.
	int RegistOpenFlag;
	int MFCardError;
	int ReadCardInterval;
}TOptions, *POptions;

#define optoffset(field) offsetof(TOptions, field)

POptions LoadOptions(POptions opts);
POptions SaveOptions(POptions opts);
POptions GetDefaultOptions(POptions opts);

typedef int (*StrConvertFun)(char *str, BYTE *value);
typedef char *(*StrFormatFun)(char *str, BYTE *value);
//new options
typedef struct __OPTIONSRESSTR__{
	char *OptionName;
	int OptionLong;
	char DefaultValue[256];
	int IsNeedRestoreFactory;
	int Offset;
	StrConvertFun Convertor;
	StrFormatFun Formator;
	int IsEncrypt;
}TOptionsResStr,*POptionsResStr;
typedef struct __OPTIONSRESINT__{
	char *OptionName;
	int DefaultValue;
	int IsNeedRestoreFactory;
	int Offset;
	int MenuResID;
	int MaxValue;
	int MinValue;
	int IsEncrypt;
}TOptionsResInt,*POptionsResInt;

#define OPTIONSRESSTRCOUNT		(sizeof(OptionsResStr)/sizeof(OptionsResStr[0]))
extern TOptionsResStr OptionsResStr[];
#define OPTIONSRESINTCOUNT		(sizeof(OptionsResInt)/sizeof(OptionsResInt[0]))
extern TOptionsResInt OptionsResInt[];
POptionsResInt QueryOptResByOffset(int Offset);

BOOL SaveStr(const char *name, const char *value, int SaveTrue);
BOOL RemoteSaveStr(const char *name, const char *value, int SaveTrue);
BOOL LoadStr(const char *name, char *value);
BOOL LoadCaseStr(const char *name, char *value);
int LoadStrFromFile(int fd, const char *name, char *value, BOOL ExitSign, int offset);
char *LoadStrOld(const char *name);
char* LoadStrByID(int ID);
//char* LoadStrByIDDef(int ID, const char *defStr);
char* LoadStrByIDDef(int ID, char *defStr);
char* LoadStrByIDPad(int ID, int Len);
char* LoadStringLng(const char *Name, int LngID);
int LoadInteger(const char *Name, int DefaultValue);
int SaveInteger(const char *Name, int Value);
//���ڴ洮�б���ɾ��ָ���ַ���
U32 PackStrBuffer(char *Buffer, const char *name, int size);
char* GetYesNoName(int Yes);
int InitOptions(void);

extern TOptions gOptions;

#define IsNetSwitch "IsNetSwitch"
#define PLATFORM "~Platform"
#define LIMITWIDTH 5
#define OldLog 1
#define OldExlog 2
#define PWDLIMITLEN 8
#define PINLIMITLEN 23
#define VERIFYONETOONE 1
#define VERIFYPWD 2

int FormatDate(char *buf, int index, int y, int m, int d);
int FormatDate2(char *buf, int index, int m, int d);
extern char *DateFormats[];

int GetFileLength(int fd);
void TruncOptionAndSaveAs(char *buffer, int size);

void SelectLanguage(char Language);
int GetDefaultLocaleID(void);
char *GetLangName(char LngID);
int GetSupportedLang(int *LngID, int MaxLngCnt);

char *GetSMS(int UserID);

BOOL ReadOneLine(int fd, char *dest, int *size);
void SplitByChar(char *buffer, char *name, char * value, char DeliChar);

int ClearAllACOpt(int All);
int ClearOptionItem(char *name);

BOOL UpdateNetworkInfoByDHCP(char *dhcp);

#ifndef URU
int ReadSensorOptions(POptions opts);
int WriteSensorOptions(POptions opts, int Rewrite);
int EEPROMWriteOpt(BYTE * data, int size, int Rewrite);
#endif

char *GetCardKeyStr(char *Buffer, BYTE *Key);
//2007.07.23
int tftnewlng;
int tftlocaleid;	//add by jazzy 2008.07.24 for mul language

int issimcardright; //add by lyy for check sim card 2009.06.12

//add by jazzy 2009.05.06
#define DELALLPASSPIC "rm -rf %scapture/pass && sync && mkdir %scapture/pass && sync"
#define DELALLBADPIC  "rm -rf %scapture/bad && sync &&  mkdir %scapture/bad && sync"
#define DELALL  "rm -rf %s && sync &&  mkdir %s && sync"

#define MAX_CHAR_WIDTH 100

int initLCDTypeOptions();
//if no language will load this defaultlanguage, name "DefaultLanguage"
char* LoadDefaultLanguageByID(int LanguageID);
void ExecuteActionForOption(const char *name, const char *value);

char * ipformat(char *str, BYTE *value);

#define LOG_VALID               0
#define LOG_REPEAT              1
#define LOG_INVALIDTIME         2
#define LOG_INVALIDCOMBO        4
#define LOG_INVALIDUSER         8
#define LOG_ANTIPASSBACK        512             //��Ǳ

#endif

