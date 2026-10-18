/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dd800` (_code @ 0x4dd800, 0x504 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern int DAT_0057113c; /* 0x57113c */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_0014bef4(unsigned int);
extern int FUN_001633a0(unsigned int);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_004a9308. */
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: FUN_004e0114. */
/* Supplied declaration required: FUN_004e5a90. */
/* Supplied declaration required: FUN_004e5b5c. */
/* Supplied declaration required: FUN_004e6880. */
/* Supplied declaration required: FUN_004e7c04. */
/* Supplied declaration required: FUN_004e8454. */
/* Supplied declaration required: FUN_004e8b54. */
/* Supplied declaration required: FUN_004e9168. */
/* Supplied declaration required: FUN_004e9f74. */
/* Supplied declaration required: FUN_004eb838. */
/* Supplied declaration required: FUN_004fd508. */


void FUN_004dd800(int *param_1,unsigned int *param_2)

{
/* irregular: 2 goto(s); 15 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [20];
  char temp_v9;
  
  temp_v1 = FUN_001633a0(99);
  if (temp_v1 < 10) {
    if ((*param_2 & 0x1080) == 0) {
      temp_v5 = 0x32;
    }
    else {
      temp_v5 = 0;
    }
    FUN_004c9160(0x29,param_2[8],0,1);
    FUN_004fd508(temp_v5,param_2,0,param_2[9],1);
    FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
    temp_v1 = DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254;
LAB_004ddb40:
    *(unsigned char *)(temp_v1 + 9) = 0x1d;
  }
  else {
    if (temp_v1 < 0x46) {
      piVar3 = param_1;
      FUN_004e8b54(param_1,param_2);
      if (piVar3 == (int *)0x0) {
        temp_v1 = FUN_0014bef4(99);
        if (temp_v1 < 0x19) {
          if ((*param_2 & 0x1080) == 0) {
            temp_v5 = 0x32;
          }
          else {
            temp_v5 = 0;
          }
          FUN_004c9160(0x29,param_2[8],0,1);
          FUN_004fd508(temp_v5,param_2,0,param_2[9],1);
          FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
          temp_v1 = DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254;
          goto LAB_004ddb40;
        }
        goto LAB_004ddb48;
      }
      FUN_004e8454(param_1);
      temp_v6 = 0;
      temp_v7 = 0;
      FUN_004e9168(param_1,param_2[8],piVar3,&temp_v6,&temp_v7);
      if (temp_v6 == 1) {
        temp_v6 = 0;
      }
      else if (temp_v6 == 0) {
        temp_v6 = 1;
      }
      FUN_004e7c04(param_1,temp_v6);
      temp_v2 = param_2[10];
      *(unsigned short *)(temp_v2 + 0x1be) = 2;
      *(short *)(temp_v2 + 0x1c0) = (short)piVar3;
      FUN_003e8bb0(temp_v8,*param_1,param_2[8]);
      if (temp_v7 != 0) {
        if (temp_v7 == 1 || temp_v7 == 2) {
          FUN_004e9f74(param_1,temp_v6);
        }
      }
      else {
        FUN_001aba54();
        if ((piVar3[0xf] & 0x7fU) != 0) {
          temp_v2 = piVar3[0xf] & 0x7f;
          if (temp_v2 != 4) {
            if (temp_v2 != 0x16) {
              if (temp_v2 != 0x1c) {
                if (temp_v2 != 0x1f) {
                  FUN_004e5b5c(param_1);
                }
                else {
                  FUN_004e6880(param_1,0x1f);
                }
              }
              else {
                FUN_004e6880(param_1,0x1c);
              }
            }
            else {
              FUN_004e6880(param_1,0x16);
            }
          }
          else {
            FUN_004e5a90(param_1,4);
          }
        }
        else {
          FUN_004e5b5c(param_1);
        }
      }
      temp_v1 = 0;
      temp_v3 = 0x6d;
      do {
        temp_v3 = temp_v3 - 1;
        temp_v4 = temp_v1 * 0x1d0 + 0x50;
        temp_v1 = temp_v1 + 1;
        temp_v2 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4);
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) = temp_v2 & 0xfffffffb;
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) = temp_v2 & 0xfffffff3;
      } while (temp_v3 != 0);
      FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
      FUN_004eb838(param_1,param_2);
      *(unsigned char *)((int)param_2 + 0x59d) = 1;
      temp_v2 = param_2[8];
      temp_v5 = 0x28;
    }
    else {
LAB_004ddb48:
      FUN_004e8454(param_1);
      temp_v0 = (*(unsigned int *)param_2[8] & DAT_00571168) != 0 ||
              (DAT_0057116c & ((unsigned int *)param_2[8])[1]) != 0;
      FUN_004e7c04(param_1,temp_v0);
      temp_v2 = param_2[10];
      *(unsigned short *)(temp_v2 + 0x1be) = 1;
      FUN_003e8bb0(&temp_v6,*param_1,param_2[8]);
      if ((*(unsigned short *)((unsigned char *)&temp_v6 + 2)) == 1) {
        *(unsigned short *)(temp_v2 + 0x1c0) = 2;
      }
      else {
        *(unsigned short *)(temp_v2 + 0x1c0) = 1;
      }
      if (temp_v9 != '\0') {
        if (temp_v9 != '\x01') {
          if (temp_v9 == '\x02') {
            FUN_004e9f74(param_1,temp_v0,2);
          }
        }
        else {
          FUN_004e9f74(param_1,temp_v0,1);
        }
      }
      else {
        FUN_004e5b5c(param_1);
      }
      temp_v1 = 0;
      temp_v3 = 0x6d;
      do {
        temp_v3 = temp_v3 - 1;
        temp_v4 = temp_v1 * 0x1d0 + 0x50;
        temp_v1 = temp_v1 + 1;
        temp_v2 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4);
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) = temp_v2 & 0xfffffffb;
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) = temp_v2 & 0xfffffff3;
      } while (temp_v3 != 0);
      FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
      FUN_004eb838(param_1,param_2);
      *(unsigned char *)((int)param_2 + 0x59d) = 1;
      temp_v2 = param_2[8];
      temp_v5 = 0x27;
    }
    FUN_004c9160(temp_v5,temp_v2,0,1);
  }
  if (((DAT_0057116c | DAT_00571174) & ((unsigned int *)param_2[8])[1]) != 0 ||
      ((DAT_00571168 | DAT_00571170) & *(unsigned int *)param_2[8]) != 0) {
    return;
  }
  FUN_004a9308(DAT_0057a9c8,(short)param_2[0xb],0);
  return;
}
