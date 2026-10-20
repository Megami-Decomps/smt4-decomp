/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00283cf4` (_code @ 0x283cf4, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern int g_frameTex; /* 0x57f65c */


void FUN_00283cf4(unsigned int param_1,unsigned int param_2,unsigned char param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  int temp_v0;
  float in_s0;
  float in_s1;
  
  temp_v0 = g_frameTex;
  *(float *)(g_frameTex + 0x1000) = -in_s0;
  *(float *)(temp_v0 + 0x1004) = in_s0 + 400.0f;
  *(float *)(temp_v0 + 0x1008) = -in_s0;
  *(float *)(temp_v0 + 0x100c) = in_s0 + 400.0f;
  *(float *)(temp_v0 + 0x1010) = -in_s1;
  *(float *)(temp_v0 + 0x1014) = -in_s1;
  *(float *)(temp_v0 + 0x1018) = in_s1 + 240.0f;
  *(float *)(temp_v0 + 0x101c) = in_s1 + 240.0f;
  *(unsigned int *)(temp_v0 + 0x1028) = param_2;
  *(unsigned int *)(temp_v0 + 0x102c) = 0;
  *(unsigned char *)(temp_v0 + 0x1034) = param_3;
  *(unsigned int *)(temp_v0 + 0xff8) = param_4;
  *(unsigned int *)(temp_v0 + 0x1030) = param_1;
  *(unsigned char *)(temp_v0 + 0xff5) = 1;
  return;
}

} /* extern "C" */
