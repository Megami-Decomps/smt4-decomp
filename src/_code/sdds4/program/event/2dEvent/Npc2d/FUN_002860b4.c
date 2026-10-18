/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002860b4` (_code @ 0x2860b4, 0x124 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int FUN_001dfb60(); /* 0x1dfb60 */
extern int FUN_002db8c4(); /* 0x2db8c4 */

/* Supplied declaration required: FUN_00245b44. */
extern int FUN_00294334(int, unsigned int);
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002c4b30. */
extern int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */


void FUN_002860b4(int param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)FUN_002c4b84(0x100,0x100,0,0x98,1);
  FUN_002c4b30(piVar1,0x98);
  piVar1[8] = 0x3f800000;
  piVar1[9] = 0;
  piVar1[10] = 0x3e800000;
  piVar1[4] = param_3;
  piVar1[1] = 0x1f;
  piVar1[2] = param_2;
  *(unsigned char *)(piVar1 + 0xc) = 0;
  temp_v0 = param_1;
  FUN_00245b44();
  piVar1[0x13] = -(unsigned int)*(unsigned short *)(temp_v0 + 0x22);
  temp_v0 = FUN_002c1f28();
  if (temp_v0 != 0) {
    piVar1[3] = 1;
  }
  else {
    temp_v0 = FUN_00294334(piVar1[0x13],1);
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
  FUN_002c5978("EVE_2dTex",2,0,0,FUN_001dfb60,FUN_002db8c4,piVar1);
  return;
}
