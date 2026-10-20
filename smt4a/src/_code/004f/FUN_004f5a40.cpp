/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f5a40` (_code @ 0x4f5a40, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);

/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_003e8430(void);


int FUN_004f5a40(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 0x1f54) != 0) {
    FUN_0014aa78();
    temp_v0 = FUN_003e8430();
    if (temp_v0 == 0) {
      temp_v0 = (int)*(short *)(*(int *)(param_1 + 0x1f54) + 0x196);
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
