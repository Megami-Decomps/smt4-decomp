/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a86bc` (_code @ 0x1a86bc, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004474d8; /* 0x4474d8 */

/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_001a86bc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(DAT_004474d8 + 0xc) != 0) {
    FUN_002a775c();
    *(unsigned int *)(DAT_004474d8 + 0xc) = 0;
  }
  if (*(int *)(DAT_004474d8 + 0x10) != 0) {
    FUN_002a775c();
    *(unsigned int *)(DAT_004474d8 + 0x10) = 0;
  }
  if (*(int *)(DAT_004474d8 + 0x20) != 0) {
    FUN_002c415c();
    temp_v0 = DAT_004474d8;
    *(unsigned int *)(DAT_004474d8 + 0x20) = 0;
    *(unsigned int *)(temp_v0 + 0x24) = 0;
  }
  if (*(int *)(DAT_004474d8 + 0x28) != 0) {
    FUN_002c415c();
    temp_v0 = DAT_004474d8;
    *(unsigned int *)(DAT_004474d8 + 0x28) = 0;
    *(unsigned int *)(temp_v0 + 0x2c) = 0;
  }
  return;
}
