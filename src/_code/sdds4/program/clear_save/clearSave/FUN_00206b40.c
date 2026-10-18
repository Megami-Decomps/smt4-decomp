/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00206b40` (_code @ 0x206b40, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043de80; /* 0x43de80 */

/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_002a497c. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002aeb2c. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */


void FUN_00206b40(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  FUN_002aeb2c(2,0x83);
  FUN_002a497c(0x3c);
  FUN_00291be8();
  FUN_00291a5c();
  if (*(int *)(temp_v0 + 0x8c) != 0) {
    FUN_002a755c();
    *(unsigned int *)(temp_v0 + 0x8c) = 0;
  }
  if (*(int *)(temp_v0 + 0x88) != 0) {
    FUN_002c4360();
    *(unsigned int *)(temp_v0 + 0x88) = 0;
  }
  if (*(int *)(temp_v0 + 0x90) != 0) {
    FUN_002c4360();
    *(unsigned int *)(temp_v0 + 0x90) = 0;
  }
  if (DAT_0043de80 != 0) {
    FUN_002c4360();
    DAT_0043de80 = 0;
  }
  return;
}
