/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123b88` (_code @ 0x123b88, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *g_gfxReleaseCallback; /* 0x44e334 */


void FUN_00123b88(unsigned int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  romwright_code *pcVar4;
  
  piVar3 = (int *)param_1[2];
  temp_v0 = piVar3[6];
  if (temp_v0 == 0x2010000) {
    *piVar3 = 0;
    piVar3[1] = 0;
    return;
  }
  pcVar4 = g_gfxReleaseCallback;
  if (temp_v0 < 0x2010000) {
    if (temp_v0 != 0x1010000) {
      if (temp_v0 != 0x1020000 && temp_v0 != 0x1030000) {
        *piVar3 = 0;
        piVar3[1] = 0;
        return;
      }
      if (*piVar3 != 0 && g_gfxReleaseCallback != (romwright_code *)0x0) {
        (*g_gfxReleaseCallback)(piVar3[5],0x102,*param_1);
      }
      if (piVar3[1] != 0) {
        pcVar4 = g_gfxReleaseCallback;
      }
      if (piVar3[1] == 0 || pcVar4 == (romwright_code *)0x0) {
        *piVar3 = 0;
        piVar3[1] = 0;
        return;
      }
    }
    else if ((piVar3[1] == 0) || (g_gfxReleaseCallback == (romwright_code *)0x0)) {
      *piVar3 = 0;
      piVar3[1] = 0;
      return;
    }
    temp_v1 = *param_1;
    temp_v0 = 0x10000;
  }
  else {
    if ((temp_v0 != 0x2020000 && temp_v0 != 0x2030000) || (*piVar3 == 0 || g_gfxReleaseCallback == (romwright_code *)0x0))
    {
      *piVar3 = 0;
      piVar3[1] = 0;
      return;
    }
    temp_v1 = *param_1;
    temp_v0 = piVar3[5];
  }
  (*pcVar4)(temp_v0,0x102,temp_v1);
  *piVar3 = 0;
  piVar3[1] = 0;
  return;
}

} /* extern "C" */
