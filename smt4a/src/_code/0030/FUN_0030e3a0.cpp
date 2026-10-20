/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e3a0` (_code @ 0x30e3a0, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00126950(int, int *);
int FUN_00126aec(int, int, int);
int FUN_0030e2f4(int, int, int);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_00126950. */
/* Supplied declaration required: FUN_00126aec. */
/* Supplied declaration required: FUN_0030e2f4. */


void FUN_0030e3a0(int param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v7 = -1;
  temp_v5 = *param_2;
  temp_v4 = ((int *)param_2[2])[3];
  temp_v3 = *(int *)param_2[2];
  *(unsigned int *)(param_1 + 0x1454) = 0x23d;
  *(unsigned int *)(param_1 + 0x1450) = 0;
  for (temp_v2 = 0; temp_v2 < temp_v4; temp_v2 = temp_v2 + 1) {
    if (*(short *)(temp_v5 + temp_v2 * 4) != 0) {
      temp_v6 = *(int *)(param_1 + 0x1450) + 1;
      *(int *)(param_1 + 0x1450) = temp_v6;
      *(int *)(temp_v6 * 4 + param_1 + 0xb5c) = temp_v2;
      *(unsigned char *)(param_1 + temp_v2 + 0x1458) = 0;
      temp_v7 = temp_v2;
    }
    else {
      *(unsigned short *)(temp_v2 * 4 + temp_v5 + 2) = 0;
    }
  }
  while (*(int *)(param_1 + 0x1450) < 2) {
    if (temp_v7 < 2) {
      temp_v2 = temp_v7 + 1;
      temp_v7 = temp_v2;
    }
    else {
      temp_v2 = 0;
    }
    temp_v6 = *(int *)(param_1 + 0x1450) + 1;
    *(int *)(param_1 + 0x1450) = temp_v6;
    *(int *)(temp_v6 * 4 + param_1 + 0xb5c) = temp_v2;
    *(unsigned short *)(temp_v5 + temp_v2 * 4) = 1;
    *(unsigned char *)(param_1 + temp_v2 + 0x1458) = 0;
    *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) - 1;
    if (temp_v3 != 0) {
      *(unsigned int *)(param_1 + 0x16ac) =
           *(int *)(param_1 + 0x16ac) - (unsigned int)*(unsigned short *)(temp_v2 * 4 + temp_v3 + 2);
    }
  }
  param_2[1] = temp_v7;
  for (temp_v2 = *(int *)(param_1 + 0x1450) / 2; 0 < temp_v2; temp_v2 = temp_v2 - 1) {
    FUN_0030e2f4(param_1,temp_v5,temp_v2);
  }
  do {
    temp_v2 = *(int *)(param_1 + 0x1450);
    temp_v6 = *(int *)(param_1 + 0xb60);
    *(int *)(param_1 + 0x1450) = temp_v2 - 1;
    *(unsigned int *)(param_1 + 0xb60) = *(unsigned int *)(temp_v2 * 4 + param_1 + 0xb5c);
    FUN_0030e2f4(param_1,temp_v5,1);
    temp_v3 = *(int *)(param_1 + 0x1454);
    temp_v2 = *(int *)(param_1 + 0xb60);
    *(int *)(param_1 + 0x1454) = temp_v3 - 1;
    *(int *)(temp_v3 * 4 + param_1 + 0xb58) = temp_v6;
    temp_v3 = *(int *)(param_1 + 0x1454);
    *(int *)(param_1 + 0x1454) = temp_v3 - 1;
    *(int *)(temp_v3 * 4 + param_1 + 0xb58) = temp_v2;
    *(short *)(temp_v5 + temp_v4 * 4) = *(short *)(temp_v5 + temp_v6 * 4) + *(short *)(temp_v5 + temp_v2 * 4);
    temp_v1 = *(unsigned char *)(param_1 + temp_v6 + 0x1458);
    temp_v0 = *(unsigned char *)(param_1 + temp_v2 + 0x1458);
    if (temp_v1 < temp_v0) {
      temp_v1 = temp_v0;
    }
    *(unsigned char *)(param_1 + temp_v4 + 0x1458) = temp_v1 + 1;
    *(short *)(temp_v2 * 4 + temp_v5 + 2) = (short)temp_v4;
    *(short *)(temp_v5 + temp_v6 * 4 + 2) = (short)temp_v4;
    *(int *)(param_1 + 0xb60) = temp_v4;
    temp_v4 = temp_v4 + 1;
    FUN_0030e2f4(param_1,temp_v5,1);
  } while (*(int *)(param_1 + 0x1450) >= 2);
  temp_v2 = *(int *)(param_1 + 0x1454);
  *(int *)(param_1 + 0x1454) = temp_v2 - 1;
  *(unsigned int *)(temp_v2 * 4 + param_1 + 0xb58) = *(unsigned int *)(param_1 + 0xb60);
  FUN_00126950(param_1,param_2);
  FUN_00126aec(temp_v5,temp_v7,param_1 + 0xb3c);
  return;
}

} /* extern "C" */
