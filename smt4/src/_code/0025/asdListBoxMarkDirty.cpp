/* NON_MATCHING: romwright 0.5.0 decompilation of `asdListBoxMarkDirty` (_code @ 0x259b50, 0x258 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024ee4c(unsigned char *, unsigned char *);
int FUN_002be624(...);
int FUN_002c30c4(...);
int SUB84(double, int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
extern unsigned char LAB_00259da8; /* 0x259da8 */
extern unsigned char LAB_00259dac; /* 0x259dac */
extern unsigned char LAB_00259db4; /* 0x259db4 */
extern unsigned char LAB_00259dbc; /* 0x259dbc */
extern unsigned char LAB_00259dc4; /* 0x259dc4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB84 (SUBPIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0024ee4c. */
/* Supplied declaration required: FUN_002be624. */
extern int *jobGetWork(void);
/* Supplied declaration required: FUN_002c30c4. */


void asdListBoxMarkDirty(void)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char *unaff_r8;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [264];
  unsigned long long temp_v9;
  
  piVar1 = (int *)jobGetWork();
  temp_v0 = FUN_002c30c4(piVar1 + 0x23);
  temp_v3 = *piVar1;
  temp_v4 = temp_v3 != 0;
  if (temp_v4) {
    unaff_r8 = temp_v8;
  }
  temp_v7 = VectorSignedToFloat(temp_v0 * piVar1[0x16],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (unsigned long long)temp_v7;
  while (temp_v4) {
    temp_v0 = *(int *)(temp_v3 + 8);
    if (piVar1[0x1f] != 0) {
      temp_v1 = (*(romwright_code *)piVar1[0x20])(temp_v0 + 6);
      switch(*(unsigned char *)(temp_v0 + 4)) {
      case 1:
        FUN_002be624(temp_v8,&LAB_00259da8,temp_v0 + 0x106);
        temp_v0 = (*(romwright_code *)piVar1[0x20])(temp_v8);
        temp_v1 = temp_v0 + temp_v1 + piVar1[0x16];
        break;
      case 2:
        FUN_0024ee4c(unaff_r8,&LAB_00259dac);
        temp_v0 = (*(romwright_code *)piVar1[0x20])(temp_v8);
        temp_v1 = temp_v0 + temp_v1 + piVar1[0x16];
        break;
      case 3:
        if (*(char *)(temp_v0 + 5) != '\0') {
          FUN_002be624(temp_v8,&LAB_00259db4,*(unsigned int *)(temp_v0 + 0x208));
          temp_v0 = (*(romwright_code *)piVar1[0x20])(temp_v8);
          temp_v1 = temp_v0 + temp_v1 + piVar1[0x16];
        }
        else {
          FUN_002be624(temp_v8,&LAB_00259dbc,*(unsigned int *)(temp_v0 + 0x208));
          temp_v0 = (*(romwright_code *)piVar1[0x20])(temp_v8);
          temp_v1 = temp_v0 + temp_v1 + piVar1[0x16];
        }
        break;
      case 4:
        FUN_002be624(temp_v8,&LAB_00259dc4,SUB84((double)*(float *)(temp_v0 + 0x20c),0),
                     (int)((unsigned long long)(double)*(float *)(temp_v0 + 0x20c) >> 0x20));
        temp_v0 = (*(romwright_code *)piVar1[0x20])(temp_v8);
        temp_v1 = temp_v0 + temp_v1 + piVar1[0x16];
      }
    }
    else {
      temp_v1 = FUN_002c30c4(temp_v0 + 6);
      temp_v2 = piVar1[0x16];
      temp_v1 = temp_v1 * temp_v2;
      switch(*(unsigned char *)(temp_v0 + 4)) {
      case 1:
        temp_v0 = FUN_002c30c4(temp_v0 + 0x106);
        temp_v1 = (temp_v0 + 1) * piVar1[0x16] + temp_v1;
        break;
      case 2:
        temp_v1 = temp_v1 + temp_v2 * 6;
        break;
      case 3:
        if (*(char *)(temp_v0 + 5) == '\0') {
          temp_v2 = temp_v2 * 9;
        }
        else {
          temp_v2 = temp_v2 * 0xb;
        }
        temp_v1 = temp_v1 + temp_v2;
        break;
      case 4:
        temp_v1 = temp_v1 + temp_v2 * 8;
      }
    }
    temp_v3 = *(int *)(temp_v3 + 0x18);
    temp_v5 = (float)VectorSignedToFloat(temp_v1 + 4,(unsigned char)(in_fpscr >> 0x16) & 3);
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v5 <= (float)temp_v9) << 0x1d);
    if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
      temp_v7 = VectorSignedToFloat(temp_v1 + 4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (unsigned long long)temp_v7;
    }
    temp_v7 = (unsigned int)temp_v9;
    temp_v4 = temp_v3 != 0;
  }
  piVar1[0x14] = temp_v7;
  temp_v3 = piVar1[0x1b];
  if (piVar1[0x1a] <= piVar1[0x1b]) {
    temp_v3 = piVar1[0x1a];
  }
  temp_v6 = (float)VectorSignedToFloat(piVar1[0x17],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorSignedToFloat(piVar1[0x17] * temp_v3 + 4,(unsigned char)(in_fpscr >> 0x16) & 3);
  piVar1[0x15] = (int)(temp_v5 + temp_v6);
  return;
}

} /* extern "C" */
