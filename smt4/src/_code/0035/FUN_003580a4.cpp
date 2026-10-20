/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003580a4` (_code @ 0x3580a4, 0x458 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238f4c(int *, int);
int FUN_0024ee68(int);
int FUN_002ad66c(unsigned char **, int *);
int FUN_002c4938(int *, int);
int FUN_002c567c(int *);
int nn_cec_CTR_MessageBox_GetMessageBoxNum(int *, int);
int rt_memcpy(int *, int, int);

typedef int romwright_code(...);
/* stack frame of param_13: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_13_stack;

extern unsigned char DAT_004656d0; /* 0x4656d0 */
extern signed char DAT_004656d1; /* 0x4656d1 */

/* Supplied declaration required: FUN_00238f4c. */
/* Supplied declaration required: FUN_0024ee68. */
/* Supplied declaration required: FUN_002ad66c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c567c. */
extern unsigned int FUN_0035782c(void);
extern unsigned int nn_cec_CTR_Base64Str2CecTitleId(unsigned char *);
/* Supplied declaration required: nn_cec_CTR_MessageBox_GetMessageBoxNum. */
extern unsigned int nn_cec_CTR_MessageBox_ReadOutBoxIndex(unsigned int);
extern unsigned int nn_cec_CTR_MessageBox_SetMessageBoxData(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int nn_cec_CTR_MessageBox_WriteBoxInfo(unsigned int, int, unsigned int, unsigned int *);
extern unsigned int nn_cec_CTR_MessageBox_WriteMessageBoxInfo(unsigned int);
extern unsigned int nn_cec_CTR_MessageBox_WriteMessageBoxList(unsigned int);
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_003580a4(int *param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,unsigned int param_6,
                 unsigned int param_7,unsigned int param_8,int param_9,int param_10,unsigned int param_11,
                 unsigned int param_12,unsigned int param_13)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int *piVar3;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char *temp_v3;
  int temp_v4;
  int iStack_58;
  int temp_v5;
  unsigned int uStack_4c;
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [4];
  int temp_v8;
  unsigned int uStack_3c;
  int *piStack_34;
  unsigned int uStack_30;
  int temp_v9;
  int temp_v10;
  
  piStack_34 = param_1;
  uStack_30 = param_2;
  temp_v9 = param_3;
  temp_v10 = param_4;
  temp_v0 = FUN_0035782c();
  if (param_2 == 0) {
    temp_v0 = 0xc8810bea;
  }
  DAT_004656d1 = '\x01';
  param_1[1] = param_2;
  if (param_2 == 0) {
    return temp_v0;
  }
  temp_v0 = param_9 + param_10;
  temp_v2 = temp_v0 >= 0x100000;
  temp_v1 = temp_v0 == 0x100000;
  if (temp_v0 < 0x100001) {
    temp_v2 = param_11 >= 0x63;
    temp_v1 = param_11 == 99;
  }
  if (!temp_v2 || temp_v1) {
    temp_v2 = param_12 >= 0x63;
    temp_v1 = param_12 == 99;
    if (param_12 < 100) {
      temp_v2 = param_13 >= 0x19000;
      temp_v1 = param_13 == 0x19000;
    }
    if (!temp_v2 || temp_v1) {
      temp_v0 = 0;
      if (param_11 != 0) {
        temp_v0 = param_12;
      }
      if ((param_11 != 0 && temp_v0 != 0) && ((param_9 != 0 && param_10 != 0) && param_13 != 0)) {
        if (temp_v10 != 0) {
          piVar2 = param_1;
          nn_cec_CTR_MessageBox_GetMessageBoxNum(param_1,0);
          piVar3 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            do {
              temp_v0 = nn_cec_CTR_Base64Str2CecTitleId((unsigned char *)(param_1 + (int)piVar3 * 4 + 7));
              if (temp_v0 >> 8 == param_2 >> 8) {
                if (DAT_004656d1 != '\0') {
                  FUN_0024ee68(0);
                }
                param_1[1] = 0;
                return 0xc8e10868;
              }
              piVar3 = (int *)((int)piVar3 + 1);
            } while (piVar3 < piVar2);
          }
          piVar2 = param_1;
          nn_cec_CTR_MessageBox_GetMessageBoxNum(param_1,1);
          if (piVar2 < (int *)0xc) {
            param_1[0x81] = param_9;
            temp_v3 = temp_v7;
            param_1[0x83] = param_11;
            param_1[0xed] = param_10;
            param_1[0xef] = param_12;
            param_1[0x86] = param_13;
            param_1[0xf2] = param_13;
            (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],0xb,8);
            temp_v3 = temp_v6;
            (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],0xc,8);
            nn_cec_CTR_MessageBox_WriteBoxInfo((unsigned int)param_1,0,(unsigned int)(param_1 + 0x7f),(unsigned int *)(param_1 + 0x87));
            temp_v3 = temp_v6;
            (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],0xd,8);
            nn_cec_CTR_MessageBox_WriteBoxInfo((unsigned int)param_1,1,(unsigned int)(param_1 + 0xeb),(unsigned int *)(param_1 + 0xf3));
            temp_v3 = (unsigned char *)0x0;
            temp_v0 = (**(romwright_code **)(*param_1 + 0x28))(param_1,param_1[1],0,0);
            if ((temp_v0 & 0x80000000) == 0) {
              nn_cec_CTR_MessageBox_ReadOutBoxIndex((unsigned int)param_1);
            }
            FUN_002c4938(param_1 + 0x67,0x60);
            *(unsigned short *)(param_1 + 0x67) = 0x6363;
            param_1[0x68] = param_2;
            *(unsigned char *)((int)param_1 + 0x1a9) = 1;
            param_1[0x69] = temp_v9;
            *(unsigned char *)(param_1 + 0x6a) = 1;
            rt_memcpy(param_1 + 0x6b,temp_v10,0x20);
            FUN_002c567c(&temp_v8);
            temp_v5 = temp_v8;
            uStack_4c = uStack_3c;
            FUN_002ad66c(&temp_v3,&temp_v5);
            param_1[0x74] = (int)temp_v3;
            param_1[0x75] = temp_v4;
            param_1[0x76] = iStack_58;
            temp_v0 = nn_cec_CTR_MessageBox_WriteMessageBoxInfo((unsigned int)param_1);
            if ((int)temp_v0 < 0) {
              temp_v3 = (unsigned char *)0x0;
              temp_v4 = 0;
              (**(romwright_code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
              nn_cec_CTR_MessageBox_WriteMessageBoxList((unsigned int)param_1);
              FUN_00238f4c(param_1,0);
            }
            else {
              temp_v0 = nn_cec_CTR_MessageBox_WriteMessageBoxList((unsigned int)param_1);
              if ((int)temp_v0 < 0) {
                temp_v3 = (unsigned char *)0x0;
                temp_v4 = 0;
                (**(romwright_code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
                nn_cec_CTR_MessageBox_WriteMessageBoxList((unsigned int)param_1);
                FUN_00238f4c(param_1,0);
              }
              else {
                if (param_8 >= 0x81) {
                  temp_v0 = 0xc8e1086a;
                }
                else {
                  temp_v0 = nn_cec_CTR_MessageBox_SetMessageBoxData((unsigned int)param_1,0x6e,param_7,param_8);
                }
                if ((int)temp_v0 < 0) {
                  temp_v3 = (unsigned char *)0x0;
                  temp_v4 = 0;
                  (**(romwright_code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
                  nn_cec_CTR_MessageBox_WriteMessageBoxList((unsigned int)param_1);
                  FUN_00238f4c(param_1,0);
                }
                else {
                  temp_v0 = nn_cec_CTR_MessageBox_SetMessageBoxData((unsigned int)param_1,0x65,param_5,param_6);
                  if ((temp_v0 & 0x80000000) == 0) {
                    DAT_004656d0 = 1;
                    return 0;
                  }
                  temp_v3 = (unsigned char *)0x0;
                  temp_v4 = 0;
                  (**(romwright_code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
                  nn_cec_CTR_MessageBox_WriteMessageBoxList((unsigned int)param_1);
                  FUN_00238f4c(param_1,0);
                }
              }
            }
            if (DAT_004656d1 != '\0') {
              FUN_0024ee68(0);
            }
            param_1[1] = 0;
            return temp_v0;
          }
          if (DAT_004656d1 != '\0') {
            FUN_0024ee68(0);
          }
          param_1[1] = 0;
          return 0xc8e10867;
        }
        param_1[1] = 0;
        return 0xe0e10bfd;
      }
    }
  }
  FUN_0024ee68(0);
  param_1[1] = 0;
  return 0xe0e10bfd;
}

} /* extern "C" */
