/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00345cd4` (_code @ 0x345cd4, 0x24c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00145e24(int, unsigned int);
int renderCtxResetColorScale(int);
int skinObjectUpdateMatrices(int);
int FUN_00182540(void);
int requestDispatch(void);
int FUN_00300100(int);
int FUN_00409718(int);

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */
extern signed char g_effectEditor; /* 0x59dbe0 */
extern int DAT_0059dbf0; /* 0x59dbf0 */
extern int DAT_0059dc00; /* 0x59dc00 */
extern int DAT_0059dc0c; /* 0x59dc0c */

/* Supplied declaration required: FUN_00145e24. */
extern unsigned int FUN_00152f54(void);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_00182540. */
/* Supplied declaration required: requestDispatch. */
/* Supplied declaration required: FUN_00300100. */
/* Supplied declaration required: FUN_00409718. */


void FUN_00345cd4(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x11f8);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 + 1;
  piVar6[temp_v2 + 3] = 0;
  if (*(char *)(temp_v0 + 0x1210) != '\0' || temp_v3 != 0) {
    (**(romwright_code **)(temp_v0 + 0x1214))();
    *(unsigned char *)(temp_v0 + 0x1210) = 0;
  }
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
  temp_v0 = g_renderCtx;
  temp_v3 = *(int *)(g_renderCtx + 0x12b8);
  piVar6 = (int *)(g_renderCtx + 0x12b8);
  temp_v2 = *(int *)(g_renderCtx + temp_v3 * 4 + 0x12c0);
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  if (g_effectEditor != '\0') {
    FUN_00409718(g_renderCtx);
  }
  else {
    temp_v1 = FUN_00152f54();
    FUN_00145e24(g_renderCtx,temp_v1);
  }
  FUN_00300100(1);
  if (DAT_0059dc00 != 0) {
    requestDispatch();
  }
  if (DAT_0059dbf0 != 0) {
    FUN_00182540();
  }
  if (DAT_0059dc0c != 0) {
    requestDispatch();
  }
  renderCtxResetColorScale(g_renderCtx);
  skinObjectUpdateMatrices(g_renderCtx);
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x11f8);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1210) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1214))();
    *(unsigned char *)(temp_v0 + 0x1210) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x1258);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x12b8);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  return;
}

} /* extern "C" */
