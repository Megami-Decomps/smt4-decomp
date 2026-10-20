/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00331110` (_code @ 0x331110, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162e8c(void);
int FUN_003fd7c0(unsigned int, int, int);

extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: FUN_00162e8c. */
/* Supplied declaration required: FUN_003fd7c0. */


unsigned int FUN_00331110(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_00162e8c();
  temp_v0 = g_lmapScene;
  *(unsigned int *)(g_lmapScene + 0x1d0) = 0xc;
  *(unsigned char *)(temp_v0 + 0x23d) = 1;
  *(unsigned int *)(temp_v0 + 0x228) = 1;
  *(unsigned int *)(temp_v0 + 0x240) = 0;
  FUN_003fd7c0(*(unsigned int *)(*(int *)(temp_v0 + 0x180) + 4),0,2);
  temp_v0 = g_lmapScene;
  *(unsigned int *)(g_lmapScene + 0x1d4) = 0;
  *(unsigned int *)(temp_v0 + 0x248) = 0;
  *(unsigned int *)(temp_v0 + 0x238) = 1;
  FUN_003fd7c0(*(unsigned int *)(*(int *)(temp_v0 + 0x18c) + 4),0,2);
  return 1;
}

} /* extern "C" */
