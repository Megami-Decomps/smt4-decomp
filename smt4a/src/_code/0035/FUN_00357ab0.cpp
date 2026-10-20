/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357ab0` (_code @ 0x357ab0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_naviMain; /* 0x587f28 */


void FUN_00357ab0(unsigned int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = g_naviMain;
  temp_v1 = param_1[1];
  temp_v2 = param_1[2];
  *(unsigned int *)(g_naviMain + 0x1c) = *param_1;
  *(unsigned int *)(temp_v0 + 0x20) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x24) = temp_v2;
  *(unsigned char *)(temp_v0 + 9) = 1;
  return;
}

} /* extern "C" */
