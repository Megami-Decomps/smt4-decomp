/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032cef8` (_code @ 0x32cef8, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */


void FUN_0032cef8(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  temp_v0 = g_renderCtx;
  piVar4 = (int *)(g_renderCtx + 0x12b8);
  temp_v1 = *piVar4;
  temp_v2 = piVar4[temp_v1 + 2];
  *piVar4 = temp_v1 + 1;
  piVar4[temp_v1 + 3] = param_1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != param_1) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  return;
}

} /* extern "C" */
