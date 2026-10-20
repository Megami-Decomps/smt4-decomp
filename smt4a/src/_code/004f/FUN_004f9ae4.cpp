/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f9ae4` (_code @ 0x4f9ae4, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(...);

/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_003e8430(void);


int FUN_004f9ae4(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x1f54);
  if ((temp_v0 != 0) && (-1 < *(short *)(temp_v0 + 400))) {
    FUN_0014aa78();
    temp_v0 = FUN_003e8430();
    if (temp_v0 != 0) {
      return 0;
    }
    if (param_2 != 0) {
      FUN_0014aa78(0);
      temp_v0 = FUN_003e8430();
      if (temp_v0 != 0) {
        return -1;
      }
    }
    return (int)*(short *)(*(int *)(param_1 + 0x1f54) + 400);
  }
  return -1;
}

} /* extern "C" */
