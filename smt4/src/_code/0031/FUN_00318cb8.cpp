/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318cb8` (_code @ 0x318cb8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a775c(void);

extern int FUN_0028522c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a775c. */


void FUN_00318cb8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (*(short *)(param_2 + 0xc) == 3) {
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_002a775c();
    }
    temp_v0 = FUN_0028522c(*(unsigned int *)(param_2 + 0x54),0);
    *(int *)(param_1 + 0x54) = temp_v0;
    *(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)(temp_v0 + 8) + 0x2c) + 0x220) + 8) + 0x28) = 1
    ;
  }
  *(unsigned short *)(param_1 + 0xc) = *(unsigned short *)(param_2 + 0xc);
  return;
}

} /* extern "C" */
