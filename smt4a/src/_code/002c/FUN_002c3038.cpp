/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3038` (_code @ 0x2c3038, 0x2c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00102bbc(float *, int, int);
int FUN_00157558(int);
int FUN_00162790(...);
int FUN_00167618(float *);
int renderCtxResetColorScale(int);
int FUN_0016c4b8(int, int);
int skinObjectUpdateMatrices(int);
int FUN_003d1fac(void);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern unsigned char LAB_002c3324; /* 0x2c3324 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00102bbc. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
extern int jobGetWork(void);
/* Supplied declaration required: FUN_00167618. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: skinObjectUpdateMatrices. */
/* Supplied declaration required: FUN_003d1fac. */


unsigned int FUN_002c3038(void)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  
  temp_v0 = jobGetWork();
  temp_v7 = 0.0f;
  temp_v6 = 1.0f;
  if (*(int *)(temp_v0 + 0x10) != 1) {
    skinObjectUpdateMatrices(g_renderCtx);
    FUN_00157558(g_renderCtx);
    temp_v1 = *(int *)(temp_v0 + 0x10);
    if (!((temp_v1 == 7 || temp_v1 == 8) || temp_v1 == 0xe)) {
      FUN_003d1fac();
    }
    else {
      temp_v8 = temp_v7;
      temp_v9 = temp_v7;
      temp_v10 = temp_v7;
      temp_v11 = temp_v6;
      FUN_0016c4b8(g_renderCtx,0);
      FUN_00167618(&temp_v8);
    }
    if (*(float *)(temp_v0 + 0x6c) != temp_v7) {
      temp_v8 = temp_v6;
      temp_v9 = temp_v6;
      temp_v10 = temp_v6;
      temp_v11 = temp_v6;
      FUN_00157558(g_renderCtx);
      temp_v1 = g_renderCtx;
      temp_v2 = FUN_001692ac(1,0);
      piVar6 = (int *)(temp_v1 + 0x1258);
      temp_v3 = *piVar6;
      temp_v4 = piVar6[temp_v3 + 2];
      *piVar6 = temp_v3 + 1;
      piVar6[temp_v3 + 3] = temp_v2;
      if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v4 != temp_v2) {
        (**(romwright_code **)(temp_v1 + 0x1274))();
        *(unsigned char *)(temp_v1 + 0x1270) = 0;
      }
      temp_v11 = *(float *)(temp_v0 + 0x6c);
      temp_v8 = temp_v6;
      temp_v9 = temp_v6;
      temp_v10 = temp_v6;
      FUN_0016c4b8(g_renderCtx,0);
      FUN_00167618(&temp_v8);
      temp_v0 = g_renderCtx;
      piVar6 = (int *)(g_renderCtx + 0x1258);
      temp_v1 = *piVar6;
      temp_v2 = piVar6[temp_v1 + 2];
      *piVar6 = temp_v1 - 1;
      if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar6[temp_v1 + 1]) {
        (**(romwright_code **)(temp_v0 + 0x1274))();
        *(unsigned char *)(temp_v0 + 0x1270) = 0;
      }
    }
  }
  else {
    temp_v2 = *(int *)(temp_v0 + 0x60);
    temp_v1 = 10;
    temp_v3 = 0;
    if (temp_v2 < 10) {
      temp_v1 = temp_v2;
      if (temp_v2 < 1) {
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
        return 0;
      }
    }
    else if (*(int *)(temp_v0 + 0x68) >= 10) {
      temp_v3 = *(int *)(temp_v0 + 0x68) - 9;
    }
    temp_v2 = 0;
    do {
      temp_v5 = 0xffffffff;
      if (*(int *)(temp_v0 + 0x68) == temp_v2 + temp_v3) {
        VectorSignedToFloat(temp_v2 * 0xe,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,0xff00ff,&LAB_002c3324);
        temp_v5 = 0xff00ff;
      }
      FUN_00102bbc(&temp_v8,*(int *)(temp_v0 + 100) + (temp_v2 + temp_v3) * 0x228,0x40);
      VectorSignedToFloat(temp_v2 * 0xe,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,temp_v5,&temp_v8);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v1);
  }
  skinObjectUpdateMatrices(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return 0;
}

} /* extern "C" */
