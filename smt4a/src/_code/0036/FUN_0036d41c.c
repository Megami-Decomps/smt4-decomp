/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036d41c` (_code @ 0x36d41c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f390; /* 0x57f390 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001469a8. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_002e3140. */


void FUN_0036d41c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f390;
  if (DAT_0057f390 != 0) {
    software_interrupt(0x24);
    if (*(int *)(DAT_0057f390 + 0xd34) < 0) {
      FUN_002e3140();
    }
    *(unsigned char *)(temp_v0 + 0xd38) = 1;
    FUN_001a0d08();
    if (*(int *)(temp_v0 + 0xd34) != 0) {
      software_interrupt(0x23);
      *(int *)(temp_v0 + 0xd34) = 0;
    }
    FUN_001469a8(temp_v0 + 0xd3c);
    if (*(int *)(temp_v0 + 0xd54) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0xd54) = 0;
    }
    *(unsigned int *)(temp_v0 + 0xd30) = 0xffffffff;
  }
  return;
}
