/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00284fdc` (_code @ 0x284fdc, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e416c(void);

extern unsigned char g_gameDataBlocks; /* 0x57f698 */

/* Supplied declaration required: FUN_003e416c. */


void FUN_00284fdc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x2db8) = *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x2db4);
  *(unsigned int *)(temp_v0 + 0x2d68) = 0;
  *(unsigned int *)(temp_v0 + 0x2d6c) = 0;
  *(unsigned int *)(temp_v0 + 0x2d70) = 0;
  *(unsigned int *)(temp_v0 + 0x2d74) = 0;
  *(unsigned short *)(temp_v0 + 0x2d78) = 0;
  FUN_003e416c();
  return;
}

} /* extern "C" */
