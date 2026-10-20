/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221ddc` (_code @ 0x221ddc, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e314(unsigned int);
int FUN_0016c4b8(int, int);

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0014e314. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */


void FUN_00221ddc(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  
  temp_v3 = *param_1;
  temp_v0 = *(unsigned char *)((int)param_1 + 3);
  FUN_0016c4b8(g_renderCtx,0);
  temp_v1 = g_renderCtx;
  temp_v2 = FUN_001692ac(1,0);
  piVar7 = (int *)(temp_v1 + 0x1258);
  temp_v4 = *piVar7;
  temp_v5 = piVar7[temp_v4 + 2];
  *piVar7 = temp_v4 + 1;
  piVar7[temp_v4 + 3] = temp_v2;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v5 != temp_v2) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  FUN_0014e314((temp_v3 << 0x18) | (((temp_v3 >> 8) & 0xff) << 0x10) | (((temp_v3 >> 0x10) & 0xff) << 8) |
               (unsigned int)temp_v0);
  temp_v1 = g_renderCtx;
  piVar7 = (int *)(g_renderCtx + 0x1258);
  temp_v2 = *piVar7;
  temp_v4 = piVar7[temp_v2 + 2];
  *piVar7 = temp_v2 - 1;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v4 != piVar7[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  return;
}

} /* extern "C" */
