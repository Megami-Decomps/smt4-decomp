/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00411458` (_code @ 0x411458, 0x234 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int renderCtxResetColorScale(int);
int FUN_0016c560(int);
int FUN_003fba4c(int, unsigned int, unsigned int, int *, int, int);
int VectorFloatToUnsigned(double, int);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_00387580(unsigned int);
/* Supplied declaration required: FUN_003fba4c. */


void FUN_00411458(int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  float temp_v7;
  float temp_v8;
  
  temp_v3 = g_renderCtx;
  if (*param_1 != 1 && *param_1 != 2) {
    temp_v0 = FUN_001692ac(5,1);
    piVar4 = (int *)(temp_v3 + 0x1258);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1274))(temp_v0);
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
    temp_v3 = g_renderCtx;
    temp_v0 = FUN_00387580(6);
    piVar4 = (int *)(temp_v3 + 0x1278);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1290) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1294))(temp_v0);
      *(unsigned char *)(temp_v3 + 0x1290) = 0;
    }
    temp_v0 = 0;
    temp_v7 = 1.0f;
    temp_v8 = 255.0f;
    temp_v3 = 0;
    do {
      temp_v1 = param_2 + temp_v3 * 0x10;
      if (*(int *)(temp_v1 + 0x4d78) != 0) {
        temp_v2 = VectorFloatToUnsigned(temp_v7 * temp_v8,3);
        temp_v6 = VectorFloatToUnsigned(temp_v7 * temp_v8,3);
        temp_v4 = VectorFloatToUnsigned(temp_v7 * temp_v8,3);
        temp_v5 = VectorFloatToUnsigned(temp_v7 * temp_v8,3);
        FUN_003fba4c(*(int *)(temp_v1 + 0x4d78),*(unsigned int *)(temp_v1 + 0x4d7c),
                     *(unsigned int *)(temp_v1 + 0x4d80),param_1 + temp_v0 * 7 + 0xd,
                     temp_v5 + (temp_v4 + (temp_v6 + temp_v2 * 0x100) * 0x100) * 0x100,0);
        temp_v0 = temp_v0 + 1;
      }
      temp_v1 = g_renderCtx;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0xc);
    piVar4 = (int *)(g_renderCtx + 0x1278);
    temp_v3 = *piVar4;
    temp_v0 = piVar4[temp_v3 + 2];
    *piVar4 = temp_v3 - 1;
    if (*(char *)(temp_v1 + 0x1290) != '\0' || temp_v0 != piVar4[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1294))();
      *(unsigned char *)(temp_v1 + 0x1290) = 0;
    }
    temp_v3 = g_renderCtx;
    piVar4 = (int *)(g_renderCtx + 0x1258);
    temp_v0 = *piVar4;
    temp_v1 = piVar4[temp_v0 + 2];
    *piVar4 = temp_v0 - 1;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v1 != piVar4[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
    FUN_0016c560(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return;
  }
  return;
}

} /* extern "C" */
