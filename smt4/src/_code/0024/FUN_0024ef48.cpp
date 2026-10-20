/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024ef48` (_code @ 0x24ef48, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a72c0(int);
int FUN_002a775c(void);

/* Supplied declaration required: FUN_002a72c0. */
/* Supplied declaration required: FUN_002a775c. */


void FUN_0024ef48(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_002a72c0(0);
  }
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    if (*(int *)(temp_v1 + 0x10) != 0) {
      FUN_002a775c();
      *(unsigned int *)(temp_v1 + 0x10) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  return;
}

} /* extern "C" */
