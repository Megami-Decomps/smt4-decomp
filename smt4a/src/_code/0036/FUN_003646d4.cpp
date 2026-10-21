/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003646d4` (_code @ 0x3646d4, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_mapEnemy; /* 0x5806d4 */


unsigned int FUN_003646d4(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0x1f;
  if (param_1 == 0) {
    temp_v2 = 0x1e;
  }
  if ((param_1 >= 2) && (param_1 == 2)) {
    temp_v2 = 0x10;
  }
  temp_v0 = 0;
  while ((temp_v1 = g_mapEnemy + temp_v0 * 0x188, *(char *)(temp_v1 + 0x34) == '\0' ||
         (*(int *)(temp_v1 + 0xb8) != temp_v2))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x28) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
