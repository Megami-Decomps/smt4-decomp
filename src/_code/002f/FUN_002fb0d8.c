/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb0d8` (_code @ 0x2fb0d8, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_loadlong (CALLOTHER). */
/* Supplied declaration required: FUN_00246a98. */
/* Supplied declaration required: FUN_002b0908. */
extern int *FUN_002b5498(int, unsigned int, unsigned int, int);


int * FUN_002fb0d8(int *param_1)

{
/* irregular: irregular input(s): in_cr1, in_fpscr, in_pc; 6 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  romwright_code *pcVar4;
  unsigned int unaff_r5;
  int in_pc;
  unsigned int in_fpscr;
  unsigned int in_cr1;
  
  if ((int)param_1 < 0xf0) {
    return param_1;
  }
  piVar1 = (int *)0x14a;
  if (((int)param_1 < 0x14b) &&
     ((piVar1 = (int *)0xff, (int)param_1 < 0x137 ||
      (piVar1 = (int *)((0x136 - (int)param_1) * 0x20 + 0xff), -1 < (int)piVar1)))) {
    FUN_00246a98((unsigned int)piVar1 & 0xff);
    piVar1 = param_1 + -0x3c;
    if ((int)piVar1 >= 6) {
      piVar1 = (int *)0x5;
    }
    temp_v0 = ((int)piVar1 * 0xf0) / 5;
    if (temp_v0 < 0xf0) {
      temp_v1 = (0xf0 - temp_v0) / 2;
    }
    else {
      temp_v1 = 0;
    }
    FUN_002b0908(2,10,37000,0,temp_v1,400,temp_v0,0xb);
    temp_v0 = (int)param_1 - 0xf5;
    if (temp_v0 >= 9) {
      temp_v0 = 8;
    }
    pcVar4 = (romwright_code *)0x0;
    temp_v0 = (int)(temp_v0 * 0xf0 + ((unsigned int)(temp_v0 * 0xf0 >> 0x1f) >> 0x1d)) >> 3;
    if (temp_v0 < 0xf0) {
      temp_v1 = (0xf0 - temp_v0) / 2;
    }
    else {
      temp_v1 = 0;
    }
    FUN_002b0908(2,10,0x9089,0,temp_v1,400,temp_v0,0xb);
    VectorUnsignedToFloat(0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    coprocessor_loadlong(0,in_cr1,in_pc + 4);
    temp_v0 = (*pcVar4)(0);
    if (temp_v0 == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)FUN_002b5498(temp_v0,unaff_r5,0,temp_v2 << 4);
    }
    (**(romwright_code **)(*piVar1 + 0x24))(piVar1,unaff_r5);
    return piVar1;
  }
  return piVar1;
}
