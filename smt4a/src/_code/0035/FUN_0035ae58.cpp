/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ae58` (_code @ 0x35ae58, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */


void FUN_0035ae58(int param_1,int param_2,unsigned int param_3,int param_4,int param_5)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  
  temp_v0 = g_renderCtx;
  temp_v2 = 0x140;
  if (param_5 == 0) {
    temp_v2 = 400;
  }
  temp_v1 = temp_v2 - (param_1 + param_3);
  param_2 = (0xf0 - param_4) - param_2;
  if ((int)temp_v1 < 0) {
    param_3 = param_3 + temp_v1;
    if ((int)param_3 < 0) {
      param_3 = 0;
    }
    temp_v1 = 0;
  }
  if (param_2 < 0) {
    param_4 = param_4 + param_2;
    if (param_4 < 0) {
      param_4 = 0;
    }
    param_2 = 0;
  }
  temp_v1 = temp_v1 | (param_2 << 0x10);
  piVar5 = (int *)(g_renderCtx + 0x1338);
  temp_v3 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v1;
  if (*(char *)(temp_v0 + 0x1350) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1354))();
    *(unsigned char *)(temp_v0 + 0x1350) = 0;
  }
  temp_v0 = g_renderCtx;
  param_3 = param_3 | (param_4 << 0x10);
  piVar5 = (int *)(g_renderCtx + 0x1358);
  temp_v1 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = param_3;
  if (*(char *)(temp_v0 + 0x1370) != '\0' || temp_v1 != param_3) {
    (**(romwright_code **)(temp_v0 + 0x1374))();
    *(unsigned char *)(temp_v0 + 0x1370) = 0;
  }
  return;
}

} /* extern "C" */
