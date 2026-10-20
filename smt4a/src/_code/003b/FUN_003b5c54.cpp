/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b5c54` (_code @ 0x3b5c54, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0040619c(int, int);

extern int g_lmapMainState; /* 0x580238 */

/* Supplied declaration required: FUN_0040619c. */


void FUN_003b5c54(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  
  if (g_lmapMainState != 0) {
    temp_v1 = g_lmapMainState + param_1 * 0x88;
    piVar3 = (int *)(g_lmapMainState + 0x4ef8);
    if (param_2 != 0) {
      if (*(char *)(temp_v1 + 0x4f85) != '\0') {
        return;
      }
      *(unsigned char *)(temp_v1 + 0x4f85) = 1;
      if (*(char *)(temp_v1 + 0x4f84) == '\0') {
        return;
      }
      temp_v1 = *(int *)(*piVar3 + 8);
      FUN_0040619c(temp_v1,param_1);
      temp_v0 = *(unsigned int *)(temp_v1 + 4) & 0xfffffffc;
    }
    else {
      if (*(char *)(temp_v1 + 0x4f85) == '\0') {
        return;
      }
      *(unsigned char *)(temp_v1 + 0x4f85) = 0;
      if (*(char *)(temp_v1 + 0x4f84) == '\0') {
        return;
      }
      temp_v1 = *(int *)(*piVar3 + 8);
      FUN_0040619c(temp_v1,param_1);
      temp_v0 = *(unsigned int *)(temp_v1 + 4) | 3;
    }
    *(unsigned int *)(temp_v1 + 4) = temp_v0;
  }
  return;
}

} /* extern "C" */
