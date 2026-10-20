/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dd1e0` (_code @ 0x1dd1e0, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern int g_frameTex; /* 0x43e278 */


void FUN_001dd1e0(unsigned int param_1,unsigned int param_2,unsigned char param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  int temp_v0;
  float in_s0;
  float in_s1;
  
  temp_v0 = g_frameTex;
  *(float *)(g_frameTex + 0xee8) = -in_s0;
  *(float *)(temp_v0 + 0xeec) = in_s0 + 400.0f;
  *(float *)(temp_v0 + 0xef0) = -in_s0;
  *(float *)(temp_v0 + 0xef4) = in_s0 + 400.0f;
  *(float *)(temp_v0 + 0xef8) = -in_s1;
  *(float *)(temp_v0 + 0xefc) = -in_s1;
  *(float *)(temp_v0 + 0xf00) = in_s1 + 240.0f;
  *(float *)(temp_v0 + 0xf04) = in_s1 + 240.0f;
  *(unsigned int *)(temp_v0 + 0xf10) = param_2;
  *(unsigned int *)(temp_v0 + 0xf14) = 0;
  *(unsigned char *)(temp_v0 + 0xf1c) = param_3;
  *(unsigned int *)(temp_v0 + 0xf18) = param_1;
  *(unsigned int *)(temp_v0 + 0xee0) = param_4;
  *(unsigned char *)(temp_v0 + 0xedd) = 1;
  return;
}

} /* extern "C" */
