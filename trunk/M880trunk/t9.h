#ifndef	__T9_h__
#define	__T9_h__

HWND T9IMEWindow(HWND hosting, int lx, int ty, int rx, int by, int imemode);

/*���ּ�����*/
#define myKEY_0	48
#define myKEY_1	49
#define myKEY_2	50
#define myKEY_3	51
#define myKEY_4	52
#define myKEY_5	53
#define myKEY_6	54
#define myKEY_7	55
#define myKEY_8	56
#define myKEY_9	57

/*��������*/
#define MAX_PY_SAME	4	//һ�鰴��ʱ���ֵ����ƴ������
#define MAX_PY_LENGTH	6	//ƴ���������Ϊ6����ĸ
#define MAX_KEY_CHAR	9	//ÿ����������Ӧ8����ĸ
#define MAX_HZ_COUNT	110	//һ��ƴ����Ӧ�ĺ����������Ϊ110��
#define MAX_ROW_COUNTS	9	//ÿҳ��ʾ���ָ���
#define MAX_PAGES_COUNTS (MAX_HZ_COUNT%MAX_ROW_COUNTS==0)?(MAX_HZ_COUNT/MAX_ROW_COUNTS):((MAX_HZ_COUNT/MAX_ROW_COUNTS)+1)	//���ҳ��

#endif
