/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049f488` (_code @ 0x49f488, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int efctSetSpeed(void);
int renderCtxResetColorScale(int);
int FUN_0049d244(int, unsigned int, unsigned int);
int FUN_0049e3f8(int);

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
extern unsigned int vec2GetXInt(int);
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0049d244. */
/* Supplied declaration required: FUN_0049e3f8. */


unsigned int FUN_0049f488(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  
  if (*(char *)(param_1 + 4) != '\0' && *(char *)(param_1 + 4) != '\x02') {
    FUN_00157558(g_renderCtx);
    temp_v0 = g_renderCtx;
    temp_v1 = FUN_001692ac(1,0);
    piVar7 = (int *)(temp_v0 + 0x1258);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v5 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    temp_v2 = vec2GetXInt(param_1 + 0x23c);
    temp_v3 = vec2GetYInt(param_1 + 0x23c);
    FUN_0049d244(param_1,temp_v2,temp_v3);
    switch(*(unsigned char *)(param_1 + 4)) {
    case 5:
    case 6:
    case 8:
    case 9:
      FUN_0049e3f8(param_1);
    }
    efctSetSpeed();
    temp_v0 = g_renderCtx;
    piVar7 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar7;
    temp_v4 = piVar7[temp_v1 + 2];
    *piVar7 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v4 != piVar7[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    temp_v0 = g_renderCtx;
    temp_v1 = packNibblesAndByte(6,7,0);
    piVar7 = (int *)(temp_v0 + 0x12b8);
    temp_v4 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x12d4))();
      *(unsigned char *)(temp_v0 + 0x12d0) = 0;
    }
    renderCtxResetColorScale(g_renderCtx);
  }
  return 0;
}

} /* extern "C" */
