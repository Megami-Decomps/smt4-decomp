/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00244848` (_code @ 0x244848, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001836b0(void);
int FUN_0019a5a0(void);

/* Supplied declaration required: FUN_001836b0. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00244848(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1 + param_2 * 4;
  if (*(int *)(temp_v0 + 0x68) != 0) {
    FUN_001836b0();
    *(unsigned int *)(temp_v0 + 0x68) = 0;
    *(unsigned char *)(temp_v0 + 0x6c) = 0;
  }
  if (*(int *)(temp_v0 + 100) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(temp_v0 + 100) = 0;
    *(unsigned char *)(temp_v0 + 0x6c) = 0;
  }
  return;
}

} /* extern "C" */
