/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00283c54` (_code @ 0x283c54, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern int g_frameTex; /* 0x57f65c */


void FUN_00283c54(unsigned int param_1,unsigned int param_2,unsigned char param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  int temp_v0;
  float in_s0;
  float in_s1;
  
  temp_v0 = g_frameTex;
  if ((int)in_s0 < 0x3f800000) {
    in_s0 = 1.0f;
  }
  if ((int)in_s1 < 0x3f800000) {
    in_s1 = 1.0f;
  }
  *(float *)(g_frameTex + 0xfb0) = -in_s0;
  *(float *)(temp_v0 + 0xfb4) = in_s0 + 400.0f;
  *(float *)(temp_v0 + 0xfb8) = -in_s0;
  *(float *)(temp_v0 + 0xfbc) = in_s0 + 400.0f;
  *(float *)(temp_v0 + 0xfc0) = -in_s1;
  *(float *)(temp_v0 + 0xfc4) = -in_s1;
  *(float *)(temp_v0 + 0xfc8) = in_s1 + 240.0f;
  *(float *)(temp_v0 + 0xfcc) = in_s1 + 240.0f;
  *(unsigned int *)(temp_v0 + 0xfd8) = param_2;
  *(unsigned int *)(temp_v0 + 0xfdc) = 0;
  *(unsigned char *)(temp_v0 + 0xfe4) = param_3;
  *(unsigned int *)(temp_v0 + 0xfe0) = param_1;
  *(unsigned int *)(temp_v0 + 0xfa8) = param_4;
  *(unsigned char *)(temp_v0 + 0xfa5) = 1;
  return;
}

} /* extern "C" */
