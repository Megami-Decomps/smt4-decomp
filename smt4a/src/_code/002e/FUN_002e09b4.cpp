/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e09b4` (_code @ 0x2e09b4, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013ebd8(void);
int FUN_001883b0(int, unsigned char [500], int);
int FUN_002e0e04(int, unsigned char [500], int);

/* Supplied declaration required: FUN_0013ebd8. */
/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: FUN_002e0e04. */


int FUN_002e09b4(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [500];
  
  FUN_002e0e04(param_2,temp_v1,0);
  if (param_2 != 0) {
    if (param_3 != 1) {
      *(unsigned int *)(param_1 + 0x14) = 0;
      *(unsigned int *)(param_1 + 0x18) = 0;
      *(unsigned int *)(param_1 + 0xc) = 0;
      temp_v0 = param_1 + 8;
      *(unsigned int *)(param_1 + 0x10) = 0;
      FUN_001883b0(temp_v0,temp_v1,1);
    }
    else {
      *(unsigned int *)(param_1 + 0x14) = 0;
      *(unsigned int *)(param_1 + 0x18) = 0;
      *(unsigned int *)(param_1 + 0xc) = 0;
      temp_v0 = param_1 + 8;
      *(unsigned int *)(param_1 + 0x10) = 0;
      FUN_001883b0(temp_v0,temp_v1,2);
    }
    FUN_0013ebd8();
    return temp_v0;
  }
  FUN_0013ebd8();
  return -0x1f1fb944;
}

} /* extern "C" */
