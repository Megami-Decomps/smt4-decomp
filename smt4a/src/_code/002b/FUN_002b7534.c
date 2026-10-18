/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7534` (_code @ 0x2b7534, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00580c8c; /* 0x580c8c */

/* Supplied declaration required: FUN_001836b0. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_002b7534(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = DAT_00580c8c + temp_v1 * 100;
    if (*(int *)(temp_v0 + 0x68) != 0) {
      FUN_001836b0();
      *(unsigned int *)(temp_v0 + 0x68) = 0;
      *(unsigned char *)(temp_v0 + 0x6c) = 0;
    }
    if (*(int *)(temp_v0 + 100) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 100) = 0;
      *(unsigned char *)(temp_v0 + 0x6c) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  if (DAT_00580c8c != 0) {
    FUN_0019a5a0();
    DAT_00580c8c = 0;
  }
  return;
}
