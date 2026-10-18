/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027376c` (_code @ 0x27376c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00580c8c; /* 0x580c8c */

/* Supplied declaration required: FUN_0019c8c0. */


void FUN_0027376c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00580c8c + param_1 * 100;
  if (*(int *)(temp_v0 + 0x68) != 0) {
    *(unsigned char *)(temp_v0 + 0x6c) = 1;
    FUN_0019c8c0(*(unsigned int *)(temp_v0 + 0x68));
    return;
  }
  return;
}
