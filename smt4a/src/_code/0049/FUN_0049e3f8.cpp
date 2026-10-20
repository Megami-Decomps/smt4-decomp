/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049e3f8` (_code @ 0x49e3f8, 0x650 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164168(...);
int FUN_001677c0(void);
int FUN_00168770(void);
int FUN_00168e00(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_001879d0(...);
int FUN_002a4860(...);
int FUN_002c2c68(...);
int FUN_00348ed0(...);
int FUN_0049ec78(...);
int FUN_0049ef38(...);
int SBORROW4(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00164168. */
extern int FUN_001654d8(int);
extern int FUN_001654e4(int);
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00168770. */
/* Supplied declaration required: FUN_00168e00. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_002a4860. */
/* Supplied declaration required: FUN_002c2c68. */
/* Supplied declaration required: FUN_00348ed0. */
/* Supplied declaration required: FUN_0049ec78. */
/* Supplied declaration required: FUN_0049ef38. */


void FUN_0049e3f8(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  
  temp_v1 = FUN_001654d8(param_1 + 0x2c8);
  temp_v2 = FUN_001654e4(param_1 + 0x2c8);
  FUN_001677c0();
  temp_v15 = 0x3e80000000000000;
  FUN_001879d0(DAT_0059dbb4);
  temp_v13 = (float)((unsigned long long)temp_v15 >> 0x20);
  FUN_001879d0(DAT_0059dbb4);
  FUN_001835b4(2,0x33,6,temp_v1 + (int)temp_v13,temp_v2,0x65);
  if (*(char *)(param_1 + 4) == '\b' || *(char *)(param_1 + 4) == '\t') {
    temp_v13 = (float)((unsigned long long)temp_v15 >> 0x20);
    FUN_001879d0(DAT_0059dbb4);
    temp_v8 = 0;
    do {
      FUN_001835b4(2,0x33,temp_v8 + 0x2a,temp_v1 + (int)temp_v13,temp_v2,0x65);
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 4);
  }
  temp_v13 = (float)((unsigned long long)temp_v15 >> 0x20);
  FUN_001879d0(DAT_0059dbb4);
  FUN_001835b4(2,0x33,5,temp_v1 + (int)temp_v13,temp_v2,0x67);
  temp_v8 = 0;
  do {
    temp_v3 = param_1 + temp_v8 * 0x1c;
    piVar10 = (int *)(temp_v3 + 0x98);
    temp_v0 = *(char *)(temp_v3 + 0xa0);
    if (temp_v0 != '\0') {
      if (temp_v0 != '\x01') {
        if ((((temp_v0 == '\x02') && (piVar10 != (int *)0x0)) &&
            (*piVar10 <= *(int *)(param_1 + 0x188) + 9)) &&
           (*(int *)(param_1 + 0x188) <= *(int *)(temp_v3 + 0x9c))) {
          temp_v4 = FUN_001834a4(0x33,8);
          temp_v10 = *(int *)(temp_v3 + 0xb0);
          temp_v4 = (*piVar10 - *(int *)(param_1 + 0x188)) *
                  (int)*(short *)(*(int *)(temp_v4 + 0xc) + 2) + temp_v2;
          temp_v9 = FUN_001834a4(0x33,5);
          temp_v3 = DAT_0059dbb4;
          temp_v12 = 0;
          if (*(int *)(DAT_0059dbb4 + *(int *)(DAT_0059dbb4 + 0x1318) * 4 + 0x1320) == 3) {
            temp_v7 = DAT_0059dbb4 + 0x1318 + *(int *)(DAT_0059dbb4 + 0x1318) * 4;
            temp_v6 = *(int *)(temp_v7 + 8);
            *(unsigned int *)(temp_v7 + 8) = 0;
            if (*(char *)(temp_v3 + 0x1330) != '\0' || temp_v6 != 0) {
              (**(romwright_code **)(temp_v3 + 0x1334))();
              *(unsigned char *)(temp_v3 + 0x1330) = 0;
            }
            temp_v12 = 1;
          }
          FUN_00168e00((int)*(short *)(temp_v9 + 8),(int)*(short *)(temp_v9 + 10),
                       (int)**(short **)(temp_v9 + 0xc),(int)(*(short **)(temp_v9 + 0xc))[1]);
          if (temp_v10 != 2) {
            if (temp_v10 == 1) {
              FUN_0049ef38(param_1,piVar10,temp_v1,temp_v4,0x6a);
            }
          }
          else {
            FUN_0049ec78(param_1,piVar10,temp_v1,temp_v4,0x6a);
          }
          temp_v3 = DAT_0059dbb4;
          if (temp_v12) {
            piVar10 = (int *)(DAT_0059dbb4 + 0x1318);
            temp_v4 = piVar10[*piVar10 + 2];
            piVar10[*piVar10 + 2] = 3;
            if (*(char *)(temp_v3 + 0x1330) != '\0' || temp_v4 != 3) {
              (**(romwright_code **)(temp_v3 + 0x1334))();
              *(unsigned char *)(temp_v3 + 0x1330) = 0;
            }
          }
          FUN_00168770();
          FUN_001677c0();
        }
      }
      else {
        temp_v13 = (float)((unsigned long long)temp_v15 >> 0x20);
        FUN_001879d0(DAT_0059dbb4);
        temp_v4 = 0;
        do {
          temp_v10 = FUN_001834a4(0x33,temp_v4 + 9);
          temp_v7 = *(int *)(param_1 + 0x188);
          temp_v11 = *piVar10;
          temp_v6 = temp_v7 + temp_v4;
          temp_v12 = SBORROW4(temp_v11,temp_v6);
          temp_v9 = temp_v11 - temp_v6;
          if (temp_v11 <= temp_v6) {
            temp_v7 = *(int *)(temp_v3 + 0x9c);
          }
          if (temp_v11 <= temp_v6) {
            temp_v12 = SBORROW4(temp_v6,temp_v7);
            temp_v9 = temp_v6 - temp_v7;
          }
          if (temp_v9 < 0 != temp_v12) {
            if (-1 < *(int *)(temp_v3 + 0xa4)) {
              FUN_00164168(*(unsigned int *)(param_1 + *(int *)(temp_v3 + 0xa4) * 4 + 0x88),
                           (int)*(short *)(temp_v10 + 8) + temp_v1 + (int)temp_v13,
                           *(short *)(temp_v10 + 10) + temp_v2,0x6a,6,temp_v6 - temp_v11);
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 9);
      }
    }
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 5);
  temp_v10 = param_1 + 0x124;
  temp_v13 = 0.25f;
  FUN_001879d0(DAT_0059dbb4,temp_v1,temp_v2,param_1);
  FUN_001677c0();
  temp_v1 = temp_v1 + (int)temp_v13;
  FUN_001835b4(2,0x33,7,temp_v1,temp_v2,0xc9);
  FUN_001835b4(2,0x33,0x12,temp_v1,temp_v2,0xc9);
  temp_v9 = 0;
  temp_v8 = FUN_001834a4(0x33,0x13);
  temp_v3 = FUN_002c2c68(temp_v10);
  temp_v4 = FUN_00348ed0(temp_v10);
  if (temp_v4 >= temp_v3) {
    temp_v3 = (int)*(short *)(*(int *)(temp_v8 + 0xc) + 2);
  }
  else {
    temp_v5 = FUN_002c2c68(temp_v10);
    temp_v14 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v13 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v8 + 0xc) + 2),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v13 = temp_v13 / temp_v14;
    temp_v5 = FUN_00348ed0(temp_v10);
    temp_v14 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = (int)(temp_v14 * temp_v13);
    if (temp_v3 < 1) {
      temp_v3 = 1;
    }
    temp_v5 = FUN_002a4860(temp_v10);
    temp_v14 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (int)(temp_v14 * temp_v13);
    temp_v4 = FUN_002a4860(temp_v10);
    temp_v6 = FUN_00348ed0(temp_v10);
    temp_v10 = FUN_002c2c68(temp_v10);
    if ((temp_v4 + temp_v6 == temp_v10) &&
       (temp_v4 = (int)*(short *)(*(int *)(temp_v8 + 0xc) + 2), temp_v9 + temp_v3 < temp_v4)) {
      temp_v9 = temp_v4 - temp_v3;
    }
  }
  temp_v4 = DAT_0059dbb4;
  temp_v12 = 0;
  if (*(int *)(DAT_0059dbb4 + *(int *)(DAT_0059dbb4 + 0x1318) * 4 + 0x1320) == 3) {
    temp_v6 = DAT_0059dbb4 + 0x1318 + *(int *)(DAT_0059dbb4 + 0x1318) * 4;
    temp_v10 = *(int *)(temp_v6 + 8);
    *(unsigned int *)(temp_v6 + 8) = 0;
    if (*(char *)(temp_v4 + 0x1330) != '\0' || temp_v10 != 0) {
      (**(romwright_code **)(temp_v4 + 0x1334))();
      *(unsigned char *)(temp_v4 + 0x1330) = 0;
    }
    temp_v12 = 1;
  }
  FUN_00168e00(*(short *)(temp_v8 + 8) + temp_v1,(int)*(short *)(temp_v8 + 10) + temp_v2 + temp_v9,
               (int)**(short **)(temp_v8 + 0xc),temp_v3);
  FUN_001835b4(2,0x33,0x13,temp_v1,temp_v2,0xce);
  temp_v1 = DAT_0059dbb4;
  if (temp_v12) {
    piVar10 = (int *)(DAT_0059dbb4 + 0x1318);
    temp_v2 = piVar10[*piVar10 + 2];
    piVar10[*piVar10 + 2] = 3;
    if (*(char *)(temp_v1 + 0x1330) != '\0' || temp_v2 != 3) {
      (**(romwright_code **)(temp_v1 + 0x1334))();
      *(unsigned char *)(temp_v1 + 0x1330) = 0;
    }
  }
  FUN_00168770();
  FUN_001677c0();
  return;
}

} /* extern "C" */
