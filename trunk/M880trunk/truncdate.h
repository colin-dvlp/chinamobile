#ifndef __TRUNCDATE_H__
#define __TRUNCDATE_H__


#include "exfun.h"
#include <stdlib.h>
#include "main.h"


Clock* ChrisToHejira(Clock *chrisClock);  //����ת��������
Clock* HejiraToChris(Clock *hejiraClock);  //��������ת����

TTime * ChrisToHejiraTTime(TTime *christm);  //����ת��������
TTime * HejiraToChrisTTime(TTime *hejiratm);  //��������ת����


#endif

