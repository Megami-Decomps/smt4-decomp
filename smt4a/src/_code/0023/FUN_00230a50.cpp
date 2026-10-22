/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230a50` (_code @ 0x230a50, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int renderCtxCalculateStereoParallax(unsigned int);

extern unsigned char g_gameGlobals; /* 0x588fd0 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

extern int vec2GetXInt(int);
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: renderCtxCalculateStereoParallax. */


void FUN_00230a50(int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float in_s0;
  
  temp_v2 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + param_3 * 0x8c;
  temp_v0 = vec2GetXInt(temp_v2 + 0x44);
  renderCtxCalculateStereoParallax(g_renderCtx);
  *param_1 = (int)in_s0 + temp_v0;
  temp_v1 = vec2GetYInt(temp_v2 + 0x44);
  *param_2 = temp_v1;
  return;
}

} /* extern "C" */
