/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285e44` (_code @ 0x285e44, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int FUN_001dfc64(); /* 0x1dfc64 */
extern int FUN_002db92c(); /* 0x2db92c */

/* Supplied declaration required: FUN_002459d8. */
extern int FUN_00294090(int, unsigned int);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_00285e44(int param_1,int param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x98,1);
  FUN_002c4938();
  piVar1[8] = 0x3f800000;
  piVar1[9] = 0;
  piVar1[10] = 0x3e800000;
  piVar1[4] = param_3;
  piVar1[1] = 0x1f;
  piVar1[2] = param_2;
  *(unsigned char *)(piVar1 + 0xc) = 0;
  temp_v0 = param_1;
  FUN_002459d8();
  piVar1[0x13] = -(unsigned int)*(unsigned short *)(temp_v0 + 0x22);
  temp_v0 = FUN_002c1d5c();
  if (temp_v0 != 0) {
    piVar1[3] = 1;
  }
  else {
    temp_v0 = FUN_00294090(piVar1[0x13],1);
    piVar1[0x12] = temp_v0;
    piVar1[3] = 2;
  }
  if (param_3 < -99) {
    temp_v0 = 0x10;
  }
  *piVar1 = param_1;
  if (-100 < param_3) {
    if (param_3 < -0x3b) {
      temp_v0 = 3;
    }
    else if (param_3 >= 100) {
      temp_v0 = 0x11;
    }
    else if (param_3 >= 0x28) {
      temp_v0 = 4;
    }
    else if (param_3 < 0) {
      temp_v0 = 0x12;
    }
    else {
      temp_v0 = 5;
    }
  }
  piVar1[0xe] = temp_v0;
  piVar1[6] = 0x3ea8f5c3;
  FUN_002c5788("EVE_2dTex",2,0,0,FUN_001dfc64,FUN_002db92c,piVar1);
  return;
}
