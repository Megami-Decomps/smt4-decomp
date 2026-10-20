/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137ea0` (_code @ 0x137ea0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00140e00(void);

extern unsigned char DAT_0057f699; /* 0x57f699 */
extern unsigned char g_gameDataBlocks; /* 0x57f698 */

/* Supplied declaration required: FUN_00140e00. */


void FUN_00137ea0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x18)) = (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x18)) & ~param_1;
  if ((*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x18)) != 0) {
    DAT_0057f699 = 0;
    FUN_00140e00();
    return;
  }
  DAT_0057f699 = 1;
  FUN_00140e00();
  return;
}

} /* extern "C" */
