/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273f5c` (_code @ 0x273f5c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028975c(int, int, int);

/* Supplied declaration required: FUN_0028975c. */


void FUN_00273f5c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_0028975c(temp_v0 + 0x310,0,1);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  return;
}

} /* extern "C" */
