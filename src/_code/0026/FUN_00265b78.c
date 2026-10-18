/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00265b78` (_code @ 0x265b78, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447060; /* 0x447060 */


void FUN_00265b78(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = DAT_00447060;
  if (DAT_00447060 == 0) {
    return;
  }
  temp_v1 = DAT_00447060 + param_1 * 0x88;
  if (param_2 != 0) {
    if (*(char *)(temp_v1 + 0xb31) != '\0') {
      return;
    }
    temp_v2 = 1;
    *(unsigned char *)(temp_v1 + 0xb31) = 1;
    if (*(char *)(temp_v1 + 0xb30) == '\0') {
      return;
    }
  }
  else {
    if (*(char *)(temp_v1 + 0xb31) == '\0') {
      return;
    }
    temp_v2 = 0;
    *(unsigned char *)(temp_v1 + 0xb31) = 0;
    if (*(char *)(temp_v1 + 0xb30) == '\0') {
      return;
    }
  }
  *(unsigned char *)(*(int *)(**(int **)(temp_v0 + 0xa9c) + param_1 * 4) + 0x1f6) = temp_v2;
  return;
}
