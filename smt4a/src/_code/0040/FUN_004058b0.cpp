/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004058b0` (_code @ 0x4058b0, 0x1f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

struct SpriteDetailPanel;

extern "C" {

int vec2GetXInt(int);
int vec2GetYInt(int);
int efctSetSpeed(void);
int FUN_001835b4(...);
int renderCtxCalculateStereoParallax(unsigned int);
int FUN_00402ab8(...);
int FUN_004042fc(...);
int FUN_004045ac(int, unsigned int, unsigned int);
int FUN_00404a8c(...);
void drawSpriteDetailPanelClipped(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: vec2GetYInt. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: FUN_00402ab8. */
/* Supplied declaration required: FUN_004042fc. */
/* Supplied declaration required: FUN_004045ac. */
/* Supplied declaration required: FUN_00404a8c. */


void FUN_004058b0(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  
  temp_v0 = vec2GetXInt(param_1 + 0x14c);
  temp_v1 = vec2GetYInt(param_1 + 0x14c);
  FUN_004045ac(param_1,temp_v0,temp_v1);
  if (*(unsigned char *)(param_1 + 4) < 4) {
    return;
  }
  temp_v2 = vec2GetXInt(param_1 + 0x1d8);
  temp_v3 = vec2GetYInt(param_1 + 0x1d8);
  const f32 baseSpeed = *(f32*)(param_1 + 0x1f8);
  temp_v7 = 0.26f;
  temp_v8 = 0x3e851eb8;
  renderCtxCalculateStereoParallax(g_renderCtx);
  efctSetSpeed();
  FUN_001835b4(2,0x32,0xb,temp_v2 + (int)temp_v7,temp_v3,0x65);
  temp_v5 = 0;
  do {
    FUN_001835b4(2,0x32,temp_v5 + 0xe,temp_v2 + (int)temp_v7,temp_v3,0x65);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 4);
  temp_v7 = (float)temp_v8;
  efctSetSpeed();
  temp_v5 = vec2GetXInt(param_1 + 0x264);
  temp_v4 = vec2GetYInt(param_1 + 0x264);
  if (*(int *)(param_1 + 0x108) != 0) {
    if (*(int *)(param_1 + 0x108) == 1) {
      drawSpriteDetailPanelClipped((SpriteDetailPanel*)param_1,temp_v5 + temp_v2,temp_v4 + temp_v3,
                   *(f32*)(param_1 + 0x284) * baseSpeed);
    }
  }
  else {
    efctSetSpeed();
    renderCtxCalculateStereoParallax(g_renderCtx);
    temp_v6 = 0;
    do {
      FUN_001835b4(2,0x32,temp_v6 + 6,temp_v2 + (int)temp_v7,temp_v3,0xc9);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 3);
    efctSetSpeed();
    FUN_00402ab8(param_1,temp_v5 + temp_v2,temp_v4 + temp_v3);
    FUN_004042fc(param_1,temp_v2,temp_v3);
  }
  FUN_00404a8c(param_1,temp_v2,temp_v3);
  return;
}

} /* extern "C" */
