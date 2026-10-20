/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289f10` (_code @ 0x289f10, 0x314 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int renderCtxResetColorScale(int);
int skinObjectUpdateMatrices(int);
int FUN_00230038(int *);
int FUN_003fac30(int, int, int *, int, int, int);
int FUN_003fba4c(int, int, int, int *, int, int);
int VectorFloatToUnsigned(double, int);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int *jobGetWork(void);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_00230038. */
extern int FUN_00387580(unsigned int);
/* Supplied declaration required: FUN_003fac30. */
/* Supplied declaration required: FUN_003fba4c. */


unsigned int FUN_00289f10(void)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  float temp_v8;
  
  piVar1 = (int *)jobGetWork();
  if ((piVar1[1] == 0) && (*(char *)((int)piVar1 + 0x16) != '\0')) {
    if (*(char *)((int)piVar1 + 0x15) == '\0') {
      FUN_00230038(piVar1);
      *(unsigned char *)((int)piVar1 + 0x15) = 1;
    }
    temp_v1 = g_renderCtx;
    temp_v0 = FUN_001692ac(5,1);
    piVar6 = (int *)(temp_v1 + 0x1258);
    temp_v2 = *piVar6;
    temp_v3 = piVar6[temp_v2 + 2];
    *piVar6 = temp_v2 + 1;
    piVar6[temp_v2 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v3 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    temp_v1 = g_renderCtx;
    temp_v0 = FUN_00387580(6);
    piVar6 = (int *)(temp_v1 + 0x1278);
    temp_v2 = *piVar6;
    temp_v3 = piVar6[temp_v2 + 2];
    *piVar6 = temp_v2 + 1;
    piVar6[temp_v2 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1290) != '\0' || temp_v3 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1294))();
      *(unsigned char *)(temp_v1 + 0x1290) = 0;
    }
    temp_v8 = 255.0f;
    temp_v7 = *(unsigned long long *)(piVar1 + 2);
    temp_v1 = *piVar1;
    temp_v5 = (float)temp_v7;
    temp_v4 = temp_v1 == 0xfe49 || temp_v1 == 0xfe4c;
    if (temp_v1 != 0xfe49 && temp_v1 != 0xfe4c) {
      temp_v4 = temp_v1 == 0xfff2;
    }
    temp_v6 = (float)((unsigned long long)temp_v7 >> 0x20);
    if (!temp_v4) {
      temp_v1 = VectorFloatToUnsigned(temp_v5 * 255.0f,3);
      temp_v2 = VectorFloatToUnsigned(temp_v5 * 255.0f,3);
      temp_v3 = VectorFloatToUnsigned(temp_v6 * 255.0f,3);
      temp_v0 = VectorFloatToUnsigned(temp_v5 * 255.0f,3);
      FUN_003fba4c(piVar1[0xd],0,(int)(float)piVar1[0x10],piVar1 + 6,
                   temp_v3 + (temp_v2 + (temp_v0 + temp_v1 * 0x100) * 0x100) * 0x100,0);
    }
    else {
      temp_v1 = VectorFloatToUnsigned(temp_v5 * 255.0f,3);
      temp_v3 = VectorFloatToUnsigned(temp_v5 * 255.0f,3);
      temp_v0 = VectorFloatToUnsigned(temp_v5 * 255.0f,3);
      temp_v2 = VectorFloatToUnsigned(temp_v6 * 255.0f,3);
      FUN_003fac30(piVar1[0xd],0,piVar1 + 6,
                   temp_v2 + (temp_v0 + (temp_v3 + temp_v1 * 0x100) * 0x100) * 0x100,1,0);
      temp_v5 = (float)temp_v7;
      temp_v1 = VectorFloatToUnsigned(temp_v5 * temp_v8,3);
      temp_v3 = VectorFloatToUnsigned(temp_v5 * temp_v8,3);
      temp_v0 = VectorFloatToUnsigned(temp_v5 * temp_v8,3);
      temp_v2 = VectorFloatToUnsigned((float)((unsigned long long)temp_v7 >> 0x20) * temp_v8,3);
      FUN_003fba4c(piVar1[0xd],0,(int)(float)piVar1[0x10],piVar1 + 6,
                   temp_v2 + (temp_v0 + (temp_v3 + temp_v1 * 0x100) * 0x100) * 0x100,2);
    }
    temp_v1 = g_renderCtx;
    piVar1 = (int *)(g_renderCtx + 0x1278);
    temp_v0 = *piVar1;
    temp_v2 = piVar1[temp_v0 + 2];
    *piVar1 = temp_v0 - 1;
    if (*(char *)(temp_v1 + 0x1290) != '\0' || temp_v2 != piVar1[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1294))();
      *(unsigned char *)(temp_v1 + 0x1290) = 0;
    }
    temp_v1 = g_renderCtx;
    piVar1 = (int *)(g_renderCtx + 0x1258);
    temp_v0 = *piVar1;
    temp_v2 = piVar1[temp_v0 + 2];
    *piVar1 = temp_v0 - 1;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v2 != piVar1[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
  }
  return 0;
}

} /* extern "C" */
