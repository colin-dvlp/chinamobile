/*************************************************
                                           
 ZEM 200                                          
                                                    
 kb.h the header file of kb.c                             
                                                      
 Copyright (C) 2003-2005, ZKSoftware Inc.      		
                                                      
*************************************************/
                                                                                                               
#ifndef _KB_H_
#define _KB_H_

#include "arca.h"

#define FunKeyCount 24

#define IKey0		0
#define IKeyMenu 	10
#define IKeyOK		11
#define IKeyESC		12
#define IKeyUp		13
#define IKeyDown 	14
#define IKeyPower 	15
#define IKeyOTIn 	16	//�Ӱ���
#define IKeyOTOut 	17	//�Ӱ��� 
#define IKeyTIn 	18	//�������
#define IKeyTOut 	19	//���
#define IKeyIn		20	//�ϰ�
#define IKeyOut		21	//�°�
#define IKeyBell	22	//Bell
#define IKeyDuress      23	//в�ȱ���

#define KeyLayout_BioClockII 	0
#define KeyLayout_BioClockIII 	1
#define KeyLayout_F4 		2
#define KeyLayout_A6 		3

//�ú������ؼ��Ķ�Ӧ���ܣ�SecondFun���صڶ�����
int GetKeyChar(int key, int *SecondFun);
int GetPowerKeyCode(void); 
int GetStateKeyCode(int keychar);

BYTE *GetKeyStr(BYTE *Buffer, BYTE *Key);
BOOL ProcStateKey(int i);

//��Ⲣ���ص�ǰ�ļ�ֵ �ӽ���
//Detect and return current key value
BOOL CheckKeyPad(void);
//void GetKeyFromWiegand(int WiegandKey);

//�����̵���ȡ����ֵ
//main procedure call this function from msg.c to get key value
int GetKeyPadValue(unsigned char* KeyValue);

void SetKeyLayouts(char *Buffer);

#endif
