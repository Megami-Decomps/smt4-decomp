/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ccd74` (_code @ 0x2ccd74, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004009d0(unsigned int, int);

/* Supplied declaration required: FUN_004009d0. */
extern int FUN_004bcbb4(void);


void FUN_002ccd74(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((param_1 != 0) && (temp_v0 = FUN_004bcbb4(), temp_v0 <= *(short *)(param_1 + 0x2c))) {
    FUN_004009d0(param_2,0);
  }
  return;
}

} /* extern "C" */
