/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00404a8c` (_code @ 0x404a8c, 0x2b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(...);
int renderCtxCalculateStereoParallax(...);

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */


void FUN_00404a8c(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned long long temp_v4;
  unsigned int temp_v5 [9];
  
  efctSetSpeed();
  temp_v4 = 0x3e851eb8;
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v1 = (float)temp_v4;
  if (*(char *)(param_1 + 0x104) != '\0') {
    temp_v5[0] = 0x1a;
    temp_v5[1] = 0x1b;
    if (*(char *)(param_1 + 0x668) != '\0') {
      temp_v5[0] = 0x1c;
      temp_v5[1] = 0x1d;
    }
    temp_v5[2] = 0x1e;
    temp_v5[3] = 0x1f;
    if (*(char *)(param_1 + 0x669) != '\0') {
      temp_v5[2] = 0x20;
      temp_v5[3] = 0x21;
    }
    renderCtxCalculateStereoParallax(g_renderCtx);
    temp_v2 = (int)temp_v1;
    temp_v0 = 0;
    do {
      FUN_001835b4(2,0x32,temp_v5[temp_v0],temp_v2 + param_2,param_3,0xbf);
      temp_v1 = (float)temp_v4;
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    temp_v0 = FUN_001834a4(0x32,0x28);
    temp_v3 = temp_v1;
    renderCtxCalculateStereoParallax(g_renderCtx);
    temp_v2 = *(short *)(temp_v0 + 10) + param_3;
    temp_v0 = (int)*(short *)(temp_v0 + 8) + (int)temp_v1 + param_2;
    FUN_001835b4(2,0x32,0x22,temp_v0,temp_v2,0xbf);
    FUN_001835b4(2,0x32,0x23,temp_v0,temp_v2,0xbf);
    temp_v0 = FUN_001834a4(0x32,0x29);
    renderCtxCalculateStereoParallax(g_renderCtx);
    param_3 = *(short *)(temp_v0 + 10) + param_3;
    temp_v0 = (int)*(short *)(temp_v0 + 8) + (int)temp_v3 + param_2;
    FUN_001835b4(2,0x32,0x25,temp_v0,param_3,0xbf);
    FUN_001835b4(2,0x32,0x27,temp_v0,param_3,0xbf);
  }
  else {
    temp_v0 = FUN_001834a4(0x32,0x28);
    temp_v3 = temp_v1;
    renderCtxCalculateStereoParallax(g_renderCtx);
    temp_v2 = *(short *)(temp_v0 + 10) + param_3;
    temp_v0 = (int)*(short *)(temp_v0 + 8) + (int)temp_v1 + param_2;
    FUN_001835b4(2,0x32,0x25,temp_v0,temp_v2,0xbf);
    FUN_001835b4(2,0x32,0x26,temp_v0,temp_v2,0xbf);
    if (*(char *)(param_1 + 0x104) != '\0') {
      temp_v0 = FUN_001834a4(0x32,0x29);
      renderCtxCalculateStereoParallax(g_renderCtx);
      param_3 = *(short *)(temp_v0 + 10) + param_3;
      temp_v0 = (int)*(short *)(temp_v0 + 8) + (int)temp_v3 + param_2;
      FUN_001835b4(2,0x32,0x22,temp_v0,param_3,0xbf);
      FUN_001835b4(2,0x32,0x24,temp_v0,param_3,0xbf);
    }
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
