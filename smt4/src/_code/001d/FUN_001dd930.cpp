/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dd930` (_code @ 0x1dd930, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00334e18(void);

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */

/* Supplied declaration required: FUN_00334e18. */


void FUN_001dd930(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x9870) = *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x986c);
  *(unsigned int *)(temp_v0 + 0x981e) = 0;
  *(unsigned int *)(temp_v0 + 0x9822) = 0;
  *(unsigned int *)(temp_v0 + 0x9826) = 0;
  *(unsigned int *)(temp_v0 + 0x982a) = 0;
  *(unsigned short *)(temp_v0 + 0x982e) = 0;
  FUN_00334e18();
  return;
}

} /* extern "C" */
