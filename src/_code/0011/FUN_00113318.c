/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113318` (_code @ 0x113318, 0x3d0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern int DAT_0043e278; /* 0x43e278 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b9708. */
/* Supplied declaration required: FUN_002b9cf8. */
/* Supplied declaration required: FUN_002ba46c. */
/* Supplied declaration required: FUN_002ba520. */
extern unsigned int FUN_002bef70(int);
extern int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002c1d3c. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


void FUN_00113318(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  
  temp_v5 = DAT_0044ea00;
  temp_v0 = DAT_0043e278;
  temp_v1 = param_1;
  if (DAT_0043e278 != 0) {
    temp_v1 = (unsigned int)*(unsigned char *)(DAT_0043e278 + 0x25);
  }
  if (DAT_0043e278 != 0 && temp_v1 != 0) {
    temp_v2 = FUN_002c5f7c(1,0);
    piVar7 = (int *)(temp_v5 + 0x124c);
    temp_v3 = *piVar7;
    temp_v4 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 + 1;
    piVar7[temp_v3 + 3] = temp_v2;
    if (*(char *)(temp_v5 + 0x1264) != '\0' || temp_v4 != temp_v2) {
      (**(romwright_code **)(temp_v5 + 0x1268))();
      *(unsigned char *)(temp_v5 + 0x1264) = 0;
    }
    temp_v5 = DAT_0044ea00;
    temp_v2 = FUN_002c5fa4(6,7,0);
    piVar7 = (int *)(temp_v5 + 0x12ac);
    temp_v3 = *piVar7;
    temp_v4 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 + 1;
    piVar7[temp_v3 + 3] = temp_v2;
    if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v4 != temp_v2) {
      (**(romwright_code **)(temp_v5 + 0x12c8))();
      *(unsigned char *)(temp_v5 + 0x12c4) = 0;
    }
    FUN_002c3ba8(DAT_0044ea00);
    temp_v6 = *(float *)(temp_v0 + 0x28);
    FUN_002ba46c(DAT_0044ea00);
    temp_v5 = DAT_0043e278;
    temp_v10 = 0;
    temp_v9 = 400.0f;
    VectorSignedToFloat((int)temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = 2.0f;
    FUN_002b9cf8();
    if ((param_1 == 0) && (*(char *)(temp_v5 + 0xf2c) != '\0')) {
      temp_v5 = *(int *)(temp_v5 + 8);
    }
    else {
      temp_v5 = *(int *)(temp_v5 + 4);
    }
    *(unsigned int *)(temp_v5 + 0x3c) = 1;
    temp_v8 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v5 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(unsigned int *)(temp_v5 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v5 + 0x40) = 1;
    temp_v8 = (temp_v9 / temp_v7) / temp_v8;
    FUN_002c1d3c(DAT_0044ea00);
    FUN_002ba520(0xffffffff);
    FUN_002bf710();
    FUN_002bf460(2,0x1d,2000,(int)temp_v6,0,0xb,temp_v10,temp_v8);
    FUN_002bf710();
    temp_v6 = *(float *)(temp_v0 + 0x2c);
    FUN_002ba46c(DAT_0044ea00);
    temp_v5 = DAT_0044ea00;
    temp_v2 = FUN_002c5fa4(6,1,0);
    piVar7 = (int *)(temp_v5 + 0x12ac);
    temp_v3 = *piVar7;
    temp_v4 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 + 1;
    piVar7[temp_v3 + 3] = temp_v2;
    if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v4 != temp_v2) {
      (**(romwright_code **)(temp_v5 + 0x12c8))();
      *(unsigned char *)(temp_v5 + 0x12c4) = 0;
    }
    temp_v5 = 0;
    do {
      VectorSignedToFloat((int)temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002b9708(temp_v0 + temp_v5 * 0x8c + 0x54);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x18);
    if (*(char *)(temp_v0 + 0x24) == '\0') {
      temp_v5 = FUN_002bef7c(temp_v0 + 0xe00);
      temp_v10 = FUN_002bef70(temp_v0 + 0xe00);
      FUN_002bf558(2,0x1d,10,temp_v5 + (int)temp_v6,temp_v10,0x15);
    }
    temp_v0 = DAT_0044ea00;
    piVar7 = (int *)(DAT_0044ea00 + 0x12ac);
    temp_v5 = *piVar7;
    temp_v2 = piVar7[temp_v5 + 2];
    *piVar7 = temp_v5 - 1;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != piVar7[temp_v5 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    temp_v0 = DAT_0044ea00;
    piVar7 = (int *)(DAT_0044ea00 + 0x12ac);
    temp_v5 = *piVar7;
    temp_v2 = piVar7[temp_v5 + 2];
    *piVar7 = temp_v5 - 1;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != piVar7[temp_v5 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    temp_v0 = DAT_0044ea00;
    piVar7 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v5 = *piVar7;
    temp_v2 = piVar7[temp_v5 + 2];
    *piVar7 = temp_v5 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar7[temp_v5 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
  }
  return;
}
