/******************************************************************************
Write by Ming	2009-3-23
*******************************************************************************
ʹ��ע������:
1.��VS1003B.c���趨��ʹ������
2.�ڳ���ʼӦ���Ƚ��г�ʼ������
******************************************************************************/
#ifndef _VS1003B_H_
#define _VS1003B_H_

#include "../MyType.h"

void VS1003B_WriteCMD(uchar addr,uint dat);//��VS1003Bд�Ĵ���
uint VS1003B_ReadCMD(uchar addr);//��VS1003B�Ĵ���
void VS1003B_Fill2048Zero();//��VS1003B����2048������0
void VS1003B_Write32B(uchar * buf);//��VS1003B����32�ֽ����ݣ�����Ϊ�����׵�ַ
void VS1003B_SoftReset();//����λ
uchar VS1003B_NeedData();//���VS1003B�Ƿ���Ҫ���ݣ�����1--��Ҫ��0--����Ҫ
void VS1003B_SetVolume(uint vol_val);//�趨����
uchar VS1003B_Init();//��ʼ��VS1003B,����0--�ɹ���1--ʧ��

#endif //end of _VS1003B_H_