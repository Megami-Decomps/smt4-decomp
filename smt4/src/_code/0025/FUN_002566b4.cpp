/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002566b4` (_code @ 0x2566b4, 0x150 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;

extern int g_activeTextureSlot; /* 0x4475d0 */
extern unsigned int DAT_004475d4; /* 0x4475d4 */


void FUN_002566b4(unsigned int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4; 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_s0;
  float in_s1;
  unsigned int in_s2;
  float in_s3;
  unsigned int in_s4;
  
  temp_v1 = g_activeTextureSlot;
  temp_v2 = 0;
  while (*(int *)(g_activeTextureSlot + temp_v2 * 4 + 4) != 0) {
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x40) {
      return;
    }
  }
  temp_v4 = g_activeTextureSlot + temp_v2 * 4;
  temp_v3 = g_activeTextureSlot + temp_v2 * 0xc;
  *(unsigned int *)(temp_v3 + 0x104) = in_s0;
  *(float *)(temp_v3 + 0x108) = in_s1;
  *(unsigned int *)(temp_v3 + 0x10c) = in_s2;
  *(float *)(temp_v3 + 0x108) = in_s1 + in_s3;
  *(unsigned int *)(temp_v4 + 4) = param_1;
  *(unsigned int *)(temp_v4 + 0x404) = in_s4;
  *(unsigned int *)(temp_v4 + 0x504) = 0xffffff00;
  temp_v0 = DAT_004475d4 & 3;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 != 3) {
          DAT_004475d4 = DAT_004475d4 + 1;
          return;
        }
        temp_v1 = temp_v1 + temp_v2 * 0x20;
        *(unsigned int *)(temp_v1 + 0x604) = 0x3f800000;
        *(unsigned int *)(temp_v1 + 0x608) = 0x3f800000;
        *(unsigned int *)(temp_v1 + 0x60c) = 0x3f800000;
        *(unsigned int *)(temp_v1 + 0x610) = 0;
        *(unsigned int *)(temp_v1 + 0x614) = 0;
        *(unsigned int *)(temp_v1 + 0x618) = 0x3f800000;
        *(unsigned int *)(temp_v1 + 0x61c) = 0;
      }
      else {
        temp_v1 = temp_v1 + temp_v2 * 0x20;
        *(unsigned int *)(temp_v1 + 0x604) = 0;
        *(unsigned int *)(temp_v1 + 0x608) = 0x3f800000;
        *(unsigned int *)(temp_v1 + 0x60c) = 0;
        *(unsigned int *)(temp_v1 + 0x610) = 0;
        *(unsigned int *)(temp_v1 + 0x614) = 0x3f800000;
        *(unsigned int *)(temp_v1 + 0x618) = 0x3f800000;
        *(unsigned int *)(temp_v1 + 0x61c) = 0x3f800000;
      }
      *(unsigned int *)(temp_v1 + 0x620) = 0;
    }
    else {
      temp_v1 = temp_v1 + temp_v2 * 0x20;
      *(unsigned int *)(temp_v1 + 0x604) = 0x3f800000;
      *(unsigned int *)(temp_v1 + 0x608) = 0;
      *(unsigned int *)(temp_v1 + 0x60c) = 0x3f800000;
      *(unsigned int *)(temp_v1 + 0x610) = 0x3f800000;
      *(unsigned int *)(temp_v1 + 0x614) = 0;
      *(unsigned int *)(temp_v1 + 0x618) = 0;
      *(unsigned int *)(temp_v1 + 0x61c) = 0;
      *(unsigned int *)(temp_v1 + 0x620) = 0x3f800000;
    }
  }
  else {
    temp_v1 = temp_v1 + temp_v2 * 0x20;
    *(unsigned int *)(temp_v1 + 0x604) = 0;
    *(unsigned int *)(temp_v1 + 0x608) = 0;
    *(unsigned int *)(temp_v1 + 0x60c) = 0;
    *(unsigned int *)(temp_v1 + 0x610) = 0x3f800000;
    *(unsigned int *)(temp_v1 + 0x614) = 0x3f800000;
    *(unsigned int *)(temp_v1 + 0x618) = 0;
    *(unsigned int *)(temp_v1 + 0x61c) = 0x3f800000;
    *(unsigned int *)(temp_v1 + 0x620) = 0x3f800000;
  }
  DAT_004475d4 = DAT_004475d4 + 1;
  return;
}

} /* extern "C" */
