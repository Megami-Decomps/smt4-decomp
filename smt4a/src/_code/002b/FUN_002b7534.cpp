/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7534` (_code @ 0x2b7534, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001836b0(int);
int asdMemFree(int);

extern int DAT_00580c8c; /* 0x580c8c */

/* Supplied declaration required: FUN_001836b0. */
/* Supplied declaration required: asdMemFree. */


void FUN_002b7534(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 100 + DAT_00580c8c + 0xc;
    if (*(int *)(temp_v0 + 0x5c) != 0) {
      FUN_001836b0(*(int *)(temp_v0 + 0x5c));
      *(unsigned int *)(temp_v0 + 0x5c) = 0;
      *(unsigned char *)(temp_v0 + 0x60) = 0;
    }
    if (*(int *)(temp_v0 + 0x58) != 0) {
      asdMemFree(*(int *)(temp_v0 + 0x58));
      *(unsigned int *)(temp_v0 + 0x58) = 0;
      *(unsigned char *)(temp_v0 + 0x60) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  if (DAT_00580c8c != 0) {
    asdMemFree(DAT_00580c8c);
    DAT_00580c8c = 0;
  }
  return;
}

} /* extern "C" */
