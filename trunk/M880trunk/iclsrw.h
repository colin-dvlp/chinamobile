#ifndef _iCLASS_CARD_H_
#define _iCLASS_CARD_H_

#include "zlg500b.h"
#include "serial.h"

#ifndef BYTE
#define BYTE unsigned char 
#endif 

#ifndef NOFINGERTAG
#define NOFINGERTAG  0xFF
#endif

/* iCLASS card type with memory configuration */
#define CT_2K 4					//card type:2k bits with 2 application areas
#define CT_16K_2 6				//card type:16k bits with 2 application areas
#define CT_16K_16 0				//card type:16k bits with 16 application areas
#define CT_32K_BOOK_16K_2 7		//card type:32k bits with current book 16k/2
#define CT_32K_BOOK_16K_16 1	//card type:32k bits with current book 16k/16

#define iCLSOP_READ	0		//����������
#define iCLSOP_WRITE	1		//д���ݵ�����
#define iCLSOP_EMPTY	2		//��տ�������

#define iCLSCARD_ERROR_KEY        -2      //����Ȩʧ��
#define iCLSCARD_ERROR_READ       -1      //������
#define iCLSCARD_ERROR_UNKNOWN    -4      //δ֪��
#define iCLSCARD_ERROR_LIMITED    -5      //���޿����ÿ������ڴ˻���ʹ��
#define iCLSCARD_ERROR_EMPTY      -3      //�տ�
#define iCLSCARD_ERROR_DATA       -6     	//���ڵ����ݴ���
#define iCLSCARD_ERROR_WRITE      -7      //д����
#define iCLSCARD_ERROR_FREE       -8      //���ϵı����ռ䲻��
#define iCLSFCARD_ERROR_OK         0       //������ȷ

int iCLSInit(serial_driver_t *serial);
int iCLSCheckCard(U8 *sn);

int iCLSRead(PFPCardOP fpdata, int OnlyPINCard);
int iCLSWrite(PFPCardOP fpdata);
int iCLSEmpty(void);
int iCLSGetResSize(void);

#endif


