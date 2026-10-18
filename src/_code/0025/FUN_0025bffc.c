/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025bffc` (_code @ 0x25bffc, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_004475d0; /* 0x4475d0 */
extern unsigned int DAT_004475d4; /* 0x4475d4 */
extern int DAT_00447e88; /* 0x447e88 */

/* Supplied declaration required: FUN_00282600. */
/* Supplied declaration required: FUN_0028277c. */


void FUN_0025bffc(void)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  float in_s0;
  float temp_v5;
  float temp_v6;
  float in_s1;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v7 = *(float *)(DAT_00447e88 + 0x1c);
  temp_v8 = *(float *)(DAT_00447e88 + 0x20);
  temp_v9 = *(float *)(DAT_00447e88 + 0x24);
  temp_v5 = (*(float *)(DAT_00447e88 + 0x4c) + in_s0) * 0.017453292f;
  temp_v6 = temp_v5;
  FUN_0028277c();
  temp_v7 = temp_v7 + temp_v5 * in_s1;
  FUN_00282600();
  temp_v1 = DAT_004475d0;
  temp_v2 = 0;
  while (*(int *)(DAT_004475d0 + temp_v2 * 4 + 4) != 0) {
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x40) {
      return;
    }
  }
  temp_v4 = DAT_004475d0 + temp_v2 * 4;
  temp_v3 = DAT_004475d0 + temp_v2 * 0xc;
  *(float *)(temp_v3 + 0x104) = temp_v7;
  *(float *)(temp_v3 + 0x108) = temp_v8;
  *(float *)(temp_v3 + 0x10c) = temp_v9 + temp_v6 * in_s1;
  *(float *)(temp_v3 + 0x108) = temp_v8 + 5.0f;
  *(unsigned int *)(temp_v4 + 4) = 10;
  *(unsigned int *)(temp_v4 + 0x404) = 0x41a00000;
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
