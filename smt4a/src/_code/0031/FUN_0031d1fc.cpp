/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d1fc` (_code @ 0x31d1fc, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memclr(int, int);

extern unsigned char g_gameDataBlocks; /* 0x57f698 */

/* Supplied declaration required: rt_memclr. */


void FUN_0031d1fc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x2db4) = 0;
  *(unsigned int *)(temp_v0 + 0x2db8) = 0;
  rt_memclr(temp_v0 + 0x2d68,0x4c);
  return;
}

} /* extern "C" */
