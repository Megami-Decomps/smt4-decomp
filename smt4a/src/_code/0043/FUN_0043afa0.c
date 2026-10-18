/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043afa0` (_code @ 0x43afa0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00647634; /* 0x647634 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int FUN_0043b2a4(unsigned int, unsigned int);


unsigned int FUN_0043afa0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 4) < 1) {
    temp_v0 = 0xd8a0a064;
  }
  else {
    software_interrupt(0x23);
    if (DAT_00647634 == '\0') {
      temp_v0 = 0xd8a0a3f8;
      *(unsigned int *)(param_1 + 4) = 0;
    }
    else {
      temp_v0 = FUN_0043b2a4(0x64765c,*(unsigned int *)(param_1 + 4));
      *(unsigned int *)(param_1 + 4) = 0;
    }
  }
  return temp_v0;
}
