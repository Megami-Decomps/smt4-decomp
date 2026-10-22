/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014aa9c` (_code @ 0x14aa9c, 0x4e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int efctSetSpeed(void);
int FUN_0016c4b8(int);
int FUN_001835b4(...);
int renderCtxCalculateStereoParallax(int);
int FUN_0019e3d0(unsigned int);
int FUN_001a9698(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern int g_frameTex; /* 0x57f65c */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: efctSetSpeed. */
extern int mapMainIsIdle(void);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: FUN_0019e3d0. */
/* Supplied declaration required: FUN_001a9698. */


void FUN_0014aa9c(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar9;
  unsigned int in_fpscr;
  float temp_v8;
  
  temp_v6 = g_renderCtx;
  temp_v2 = g_frameTex;
  temp_v3 = param_1;
  if (g_frameTex != 0) {
    temp_v3 = (unsigned int)*(unsigned char *)(g_frameTex + 0x25);
  }
  if (g_frameTex != 0 && temp_v3 != 0) {
    temp_v4 = FUN_001692ac(1,0);
    piVar9 = (int *)(temp_v6 + 0x1258);
    temp_v5 = *piVar9;
    temp_v7 = piVar9[temp_v5 + 2];
    *piVar9 = temp_v5 + 1;
    piVar9[temp_v5 + 3] = temp_v4;
    if (*(char *)(temp_v6 + 0x1270) != '\0' || temp_v7 != temp_v4) {
      (**(romwright_code **)(temp_v6 + 0x1274))(temp_v4);
      *(unsigned char *)(temp_v6 + 0x1270) = 0;
    }
    temp_v6 = g_renderCtx;
    temp_v4 = packNibblesAndByte(6,7,0);
    piVar9 = (int *)(temp_v6 + 0x12b8);
    temp_v5 = *piVar9;
    temp_v7 = piVar9[temp_v5 + 2];
    *piVar9 = temp_v5 + 1;
    piVar9[temp_v5 + 3] = temp_v4;
    if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v7 != temp_v4) {
      (**(romwright_code **)(temp_v6 + 0x12d4))(temp_v4);
      *(unsigned char *)(temp_v6 + 0x12d0) = 0;
    }
    FUN_00157558(g_renderCtx);
    temp_v8 = *(float *)(temp_v2 + 0x28);
    renderCtxCalculateStereoParallax(g_renderCtx);
    temp_v4 = mapMainIsIdle();
    temp_v6 = g_frameTex;
    if (temp_v4 != 0) {
      VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001a9698();
      if ((param_1 == 0) && (*(char *)(temp_v6 + 0x1044) != '\0')) {
        temp_v6 = *(int *)(temp_v6 + 8);
      }
      else {
        temp_v6 = *(int *)(temp_v6 + 4);
      }
      *(unsigned int *)(temp_v6 + 0x3c) = 1;
      VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(temp_v6 + 0x40) = 1;
      FUN_0016c4b8(g_renderCtx);
      FUN_0019e3d0(0xffffffff);
    }
    efctSetSpeed();
    FUN_001835b4(2,0x14,2000,(int)temp_v8,0,0xb);
    efctSetSpeed();
    temp_v8 = *(float *)(temp_v2 + 0x2c);
    renderCtxCalculateStereoParallax(g_renderCtx);
    temp_v4 = (int)temp_v8;
    efctSetSpeed();
    temp_v6 = 0;
    do {
      temp_v5 = 0;
      do {
        FUN_001835b4(2,0x14,0x7f2,temp_v4 + temp_v5 * 0x20,temp_v6 << 5,0xb);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0xd);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 9);
    FUN_001835b4(2,0x14,0x7f3,temp_v4,0,0xb);
    temp_v6 = 0;
    do {
      FUN_001835b4(2,0x14,temp_v6 + 0x7f4,temp_v4,0,0xb);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0xb);
    efctSetSpeed();
    temp_v6 = temp_v2 + 0xf18;
    temp_v5 = 0;
    do {
      temp_v7 = FUN_001834a4(0x14,temp_v5 + 0x7d5);
      temp_v0 = *(short *)(temp_v7 + 8);
      temp_v1 = *(short *)(temp_v7 + 10);
      efctSetSpeed();
      FUN_001835b4(2,0x14,*(unsigned int *)(temp_v2 + temp_v5 * 4 + 0x10d8),(int)temp_v0 + temp_v4 * 2,
                   (int)temp_v1,0xb,temp_v6);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x18);
    efctSetSpeed();
    temp_v2 = g_renderCtx;
    temp_v6 = packNibblesAndByte(6,1,0);
    piVar9 = (int *)(temp_v2 + 0x12b8);
    temp_v4 = *piVar9;
    temp_v5 = piVar9[temp_v4 + 2];
    *piVar9 = temp_v4 + 1;
    piVar9[temp_v4 + 3] = temp_v6;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v5 != temp_v6) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    temp_v2 = g_renderCtx;
    piVar9 = (int *)(g_renderCtx + 0x12b8);
    temp_v6 = *piVar9;
    temp_v4 = piVar9[temp_v6 + 2];
    *piVar9 = temp_v6 - 1;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v4 != piVar9[temp_v6 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    temp_v2 = g_renderCtx;
    piVar9 = (int *)(g_renderCtx + 0x12b8);
    temp_v6 = *piVar9;
    temp_v4 = piVar9[temp_v6 + 2];
    *piVar9 = temp_v6 - 1;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v4 != piVar9[temp_v6 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    temp_v2 = g_renderCtx;
    piVar9 = (int *)(g_renderCtx + 0x1258);
    temp_v6 = *piVar9;
    temp_v4 = piVar9[temp_v6 + 2];
    *piVar9 = temp_v6 - 1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v4 != piVar9[temp_v6 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
  }
  return;
}

} /* extern "C" */
