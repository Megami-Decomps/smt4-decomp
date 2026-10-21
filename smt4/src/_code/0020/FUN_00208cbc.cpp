/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208cbc` (_code @ 0x208cbc, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int g_activeTextureSlot; /* 0x4475d0 */


void FUN_00208cbc(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5 [11];
  
  temp_v0 = g_activeTextureSlot;
  temp_v2 = 0;
  temp_v3 = 0x40;
  temp_v5[0] = 0x10;
  temp_v5[1] = 0x20;
  temp_v5[2] = 0x30;
  temp_v5[3] = 0x40;
  temp_v5[4] = 0x50;
  temp_v5[5] = 0x60;
  temp_v5[6] = 0x70;
  temp_v5[7] = 0x80;
  temp_v5[10] = 0x20;
  temp_v5[8] = 0x60;
  temp_v5[9] = 0x40;
  do {
    temp_v1 = temp_v0 + temp_v2 * 4;
    if (0 < *(int *)(temp_v1 + 4)) {
      temp_v4 = temp_v0 + temp_v2 * 0xc;
      *(float *)(temp_v1 + 0x404) = *(float *)(temp_v1 + 0x404) + 3.0f;
      *(float *)(temp_v4 + 0x108) = *(float *)(temp_v4 + 0x108) + 1.5f;
      temp_v4 = *(int *)(temp_v1 + 4);
      if (temp_v4 >= 0xb) {
        *(unsigned int *)(temp_v1 + 0x504) = 0xc0b0a000;
      }
      else {
        *(unsigned int *)(temp_v1 + 0x504) = temp_v5[temp_v4] | 0xc0b0a000;
      }
      *(int *)(temp_v1 + 4) = temp_v4 - 1;
    }
    temp_v3 = temp_v3 - 1;
    temp_v2 = temp_v2 + 1;
  } while (temp_v3 != 0);
  return;
}

} /* extern "C" */
