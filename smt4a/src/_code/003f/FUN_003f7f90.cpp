/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f7f90` (_code @ 0x3f7f90, 0x200 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int efctSetSpeed(void);
int renderCtxResetColorScale(int);
int FUN_0016c560(int);
int FUN_001835b4(int, int, int, unsigned int, unsigned int, int);
int FUN_003f66dc(int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
extern unsigned int vec2GetXInt(int);
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_003f66dc. */


unsigned int FUN_003f7f90(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  
  if (*(unsigned int *)(param_1 + 0x14) >= 2) {
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
    temp_v2 = vec2GetXInt(param_1 + 0x16c);
    temp_v3 = vec2GetYInt(param_1 + 0x16c);
    FUN_003f66dc(param_1,temp_v2,temp_v3);
    switch(*(unsigned int *)(param_1 + 0x14)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 9:
    case 10:
    case 0xb:
      break;
    default:
      efctSetSpeed();
      FUN_001835b4(2,0x31,0xac,temp_v2,temp_v3,0x33);
      efctSetSpeed();
    }
    efctSetSpeed();
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
    FUN_0016c560(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
  }
  return 0;
}

} /* extern "C" */
