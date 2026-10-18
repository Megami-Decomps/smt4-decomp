/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dd038` (_code @ 0x1dd038, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern int DAT_0043e278; /* 0x43e278 */


void FUN_001dd038(unsigned int param_1,unsigned int param_2,unsigned char param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  int temp_v0;
  float in_s0;
  float in_s1;
  
  temp_v0 = DAT_0043e278;
  if ((int)in_s0 < 0x3f800000) {
    in_s0 = 1.0f;
  }
  if ((int)in_s1 < 0x3f800000) {
    in_s1 = 1.0f;
  }
  *(float *)(DAT_0043e278 + 0xe98) = -in_s0;
  *(float *)(temp_v0 + 0xe9c) = in_s0 + 400.0f;
  *(float *)(temp_v0 + 0xea0) = -in_s0;
  *(float *)(temp_v0 + 0xea4) = in_s0 + 400.0f;
  *(float *)(temp_v0 + 0xea8) = -in_s1;
  *(float *)(temp_v0 + 0xeac) = -in_s1;
  *(float *)(temp_v0 + 0xeb0) = in_s1 + 240.0f;
  *(float *)(temp_v0 + 0xeb4) = in_s1 + 240.0f;
  *(unsigned int *)(temp_v0 + 0xec0) = param_2;
  *(unsigned int *)(temp_v0 + 0xec4) = 0;
  *(unsigned char *)(temp_v0 + 0xecc) = param_3;
  *(unsigned int *)(temp_v0 + 0xec8) = param_1;
  *(unsigned int *)(temp_v0 + 0xe90) = param_4;
  *(unsigned char *)(temp_v0 + 0xe8d) = 1;
  return;
}
