/* 3DES����/�����㷨 */
#ifndef __DES_H__
#define __DES_H__

enum{ENCRYPT, DECRYPT};

/* ENCRYPT:����, DECRYPT:����
 ���������(Out)�ĳ��� >= ((datalen+7)/8)*8, ����datalen�������8�ı�������С������
 In����=Out,��ʱ��/���ܺ󽫸������뻺����(In)������
 ��keylen>8ʱϵͳ�Զ�ʹ��3��DES��/����,����ʹ�ñ�׼DES��/����.����16�ֽں�ֻȡǰ16�ֽ�*/
int Encrypt_Des(char *Out, char *In, long datalen, const char *Key, int keylen, int Type);

#endif

