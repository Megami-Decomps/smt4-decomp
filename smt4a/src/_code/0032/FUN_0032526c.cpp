/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032526c` (_code @ 0x32526c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_mapEnemy; /* 0x5806d4 */


unsigned int FUN_0032526c(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while ((temp_v1 = g_mapEnemy + temp_v0 * 0x188, *(char *)(temp_v1 + 0x34) == '\0' ||
         ((temp_v1 = *(int *)(temp_v1 + 0x1b0), temp_v1 != 0 && (temp_v1 < 0xb))))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x28) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
