/* NON_MATCHING: romwright 0.5.0 decompilation of `VX2DecoderRelease` (_code @ 0x1f36e8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002580c4(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002580c4. */


void VX2DecoderRelease(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002580c4(*param_1);
  if (param_1[1] != 0) {
    temp_v0 = 0;
    if (temp_v0 < (unsigned int)param_1[2]) {
      do {
        FUN_002580c4(*(unsigned int *)(param_1[1] + temp_v0 * 4));
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (unsigned int)param_1[2]);
    }
    FUN_002580c4(param_1[1]);
    return;
  }
  return;
}

} /* extern "C" */
