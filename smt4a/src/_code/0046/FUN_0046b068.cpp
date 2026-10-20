/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046b068` (_code @ 0x46b068, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(...);
int renderCtxResetColorScale(...);
int FUN_0016c4b8(...);
int skinObjectUpdateMatrices(...);
int FUN_00183bb0(...);
int FUN_0046a108(...);

typedef struct fn_0046b068_arg0 fn_0046b068_arg0;
struct fn_0046b068_arg0 {
    unsigned char pad_0x0[0x11d8];
    undefined4 field_0x11d8; /* +0x11d8 */
    undefined4 field_0x11dc; /* +0x11dc */
    undefined4 field_0x11e0; /* +0x11e0 */
    undefined4 field_0x11e4; /* +0x11e4 */
    undefined1 field_0x11e8; /* +0x11e8 */
};

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0046a108. */


void FUN_0046b068(fn_0046b068_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  FUN_00157558(g_renderCtx);
  FUN_00183bb0();
  temp_v0 = g_renderCtx;
  temp_v1 = FUN_001692ac(1,0);
  piVar5 = (int *)(temp_v0 + 0x1258);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  FUN_0016c4b8(g_renderCtx,0);
  FUN_0046a108(param_1);
  temp_v0 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1258);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  skinObjectUpdateMatrices(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return;
}

} /* extern "C" */
