/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240578` (_code @ 0x240578, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002405d8; /* 0x2405d8 */
extern unsigned char LAB_002405f8; /* 0x2405f8 */

/* Supplied declaration required: FUN_00252538. */
/* Supplied declaration required: FUN_002c4b30. */


unsigned char * FUN_00240578(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [128];
  
  FUN_002c4b30(temp_v0,0x80);
  if (*(int *)(param_1 + 0xc0) >= 0) {
    FUN_00252538(temp_v0,0x80,&LAB_002405d8);
  }
  else if (-1 < *(int *)(param_1 + 0xc4)) {
    FUN_00252538(temp_v0,0x80,&LAB_002405f8);
  }
  return temp_v0;
}
