/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040223c` (_code @ 0x40223c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);
int FUN_003595cc(void);
int FUN_004511d8(int);

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_003595cc. */
/* Supplied declaration required: FUN_004511d8. */


void FUN_0040223c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_003595cc();
    FUN_004511d8(param_1 + 0xc);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    if (*(int *)(temp_v1 + 0x10) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v1 + 0x10) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  return;
}

} /* extern "C" */
