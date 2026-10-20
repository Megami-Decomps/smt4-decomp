/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_TransferMemoryBlock_Finalize` (_code @ 0x1b5ae4, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c6df4(int);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001c6df4. */


void nn_os_TransferMemoryBlock_Finalize(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      if (*(char *)(param_1 + 0x18) == '\0') {
        *(unsigned int *)(param_1 + 8) = 0;
        *(unsigned int *)(param_1 + 0xc) = 0;
      }
      else {
        software_interrupt(0x20);
        FUN_001c6df4(param_1);
      }
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      software_interrupt(0x23);
      *(int *)(param_1 + 0x14) = 0;
    }
  }
  return;
}

} /* extern "C" */
