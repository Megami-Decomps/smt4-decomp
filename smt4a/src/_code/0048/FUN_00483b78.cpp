/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00483b78` (_code @ 0x483b78, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(...);
int FUN_00164b5c(...);
int efctSetSpeed(...);
int renderCtxResetColorScale(...);
int FUN_0016c4b8(...);
int skinObjectUpdateMatrices(...);
int FUN_001835b4(...);
int FUN_00183bb0(...);
int FUN_004845ac(...);

typedef struct fn_00483b78_arg0 fn_00483b78_arg0;
struct fn_00483b78_arg0 {
    unsigned char pad_0x0[0x20];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x7];
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x7b];
    unsigned char field_0xa4; /* +0xa4 */
    unsigned char pad_0xa5[0x7];
    unsigned char field_0xac; /* +0xac */
    unsigned char pad_0xad[0x112b];
    undefined4 field_0x11d8; /* +0x11d8 */
    undefined4 field_0x11dc; /* +0x11dc */
    undefined4 field_0x11e0; /* +0x11e0 */
    undefined4 field_0x11e4; /* +0x11e4 */
    undefined1 field_0x11e8; /* +0x11e8 */
};

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_004845ac. */


void FUN_00483b78(fn_00483b78_arg0 *param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  FUN_00157558(g_renderCtx);
  FUN_00183bb0();
  temp_v0 = g_renderCtx;
  temp_v2 = FUN_001692ac(1,0);
  piVar6 = (int *)(temp_v0 + 0x1258);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  FUN_0016c4b8(g_renderCtx,0);
  efctSetSpeed();
  FUN_00164b5c(2,0x23,0,*(unsigned int *)&param_1->field_0xac,0,0xb);
  FUN_001835b4(2,0x23,0x3d,*(unsigned int *)&param_1->field_0xa4,0,0xb);
  FUN_001835b4(2,0x23,0x3e,*(unsigned int *)&param_1->field_0xa4,0,0xb);
  temp_v1 = param_1->field_0x20;
  if (param_1->field_0x28 != '\0') {
    temp_v1 = temp_v1 + '\x04';
  }
  FUN_004845ac(param_1,temp_v1);
  efctSetSpeed();
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x1258);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  skinObjectUpdateMatrices(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return;
}

} /* extern "C" */
