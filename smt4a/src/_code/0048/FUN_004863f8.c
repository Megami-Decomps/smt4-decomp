/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004863f8` (_code @ 0x4863f8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00163aa4. */
extern int FUN_0048e40c(void);


void FUN_004863f8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0048e40c();
  if (temp_v0 != 0) {
    FUN_00163aa4();
    if (*(char *)(param_1 + 0x112a) != '\0') {
      *(unsigned int *)(param_1 + 4) = 2;
      *(unsigned int *)(param_1 + 8) = 0;
    }
  }
  return;
}
