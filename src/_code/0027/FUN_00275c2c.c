/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275c2c` (_code @ 0x275c2c, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e278; /* 0x43e278 */

/* Supplied declaration required: FUN_002c0a6c. */


void FUN_00275c2c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e278;
  *(unsigned char *)(DAT_0043e278 + 0xe8c) = 0;
  if (*(int *)(temp_v0 + 0xfdc) != 0) {
    FUN_002c0a6c();
    *(unsigned int *)(temp_v0 + 0xfdc) = 0;
  }
  if (*(int *)(temp_v0 + 0xfe8) != 0) {
    FUN_002c0a6c();
    *(unsigned int *)(temp_v0 + 0xfe8) = 0;
  }
  if (*(int *)(temp_v0 + 0xfe4) != 0) {
    FUN_002c0a6c();
    *(unsigned int *)(temp_v0 + 0xfe4) = 0;
  }
  return;
}
