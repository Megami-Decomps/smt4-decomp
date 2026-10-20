/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046a868` (_code @ 0x46a868, 0x23c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e314(unsigned int);
int FUN_00157558(int);
int efctSetSpeed(void);
int renderCtxResetColorScale(int);
int FUN_0016c4b8(int, int);
int skinObjectUpdateMatrices(int);
int FUN_00183bb0(void);
int FUN_0046868c(unsigned int *);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014e314. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: efctSetSpeed. */
extern unsigned int FUN_00168854(unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_00183bb0. */
extern unsigned int FUN_00184df8(unsigned int);
/* Supplied declaration required: FUN_0046868c. */


void FUN_0046a868(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  
  if ((int)param_1[1] < 3) {
    return;
  }
  FUN_00157558(g_renderCtx);
  FUN_00183bb0();
  efctSetSpeed();
  temp_v0 = g_renderCtx;
  temp_v1 = FUN_001692ac(1,0);
  piVar6 = (int *)(temp_v0 + 0x1258);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v4 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  if ((*param_1 & 0x200) != 0) {
    FUN_0046868c(param_1);
  }
  temp_v0 = g_renderCtx;
  if ((*param_1 & 0x80) != 0) {
    temp_v5 = VectorFloatToUnsigned((float)param_1[0x80] * 192.0f,3);
    temp_v1 = FUN_001692ac(1,0);
    piVar6 = (int *)(temp_v0 + 0x1258);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    FUN_0016c4b8(g_renderCtx,0);
    temp_v2 = FUN_00168854(*(unsigned int *)(g_renderCtx + 0x52c));
    VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = FUN_00184df8(*(unsigned int *)(g_renderCtx + 0x52c));
    VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0014e314(temp_v5 & 0xff);
    temp_v0 = g_renderCtx;
    piVar6 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar6;
    temp_v3 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
  }
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x1258);
  temp_v1 = *piVar6;
  temp_v3 = piVar6[temp_v1 + 2];
  *piVar6 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  FUN_00183bb0();
  efctSetSpeed();
  skinObjectUpdateMatrices(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return;
}

} /* extern "C" */
