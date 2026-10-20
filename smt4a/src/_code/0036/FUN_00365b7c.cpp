/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00365b7c` (_code @ 0x365b7c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002d23f0(unsigned int);

/* Supplied declaration required: FUN_002d23f0. */


void FUN_00365b7c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  temp_v2 = *param_1;
  do {
    temp_v0 = temp_v2 + temp_v1 * 0x194;
    if ((*(char *)(temp_v0 + 0x1dc) != '\0') && (*(int *)(temp_v0 + 0x1e0) == 3)) {
      FUN_002d23f0(*(unsigned int *)(temp_v0 + 0x200));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x80);
  return;
}

} /* extern "C" */
