/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00401198` (_code @ 0x401198, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int g_handleRegistry; /* 0x56fcc0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00401198(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  
  temp_v0 = *(int *)(g_handleRegistry + 4);
  if (temp_v0 == 0) {
    return;
  }
  temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x68),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x6c),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = *(unsigned int *)(param_1 + 0x5c);
  temp_v1 = *(unsigned int *)(param_1 + 0x60);
  temp_v3 = *(unsigned int *)(param_1 + 100);
  temp_v6 = (*(unsigned int *)(temp_v0 + 0xcc) & 0x80000000) != 0;
  temp_v5 = *(int *)(param_1 + 0x58);
  temp_v8 = temp_v7 * 0.001f + 25570.0f;
  if (temp_v6) {
    temp_v8 = *(float *)(param_1 + 0x74);
  }
  temp_v2 = 0;
  temp_v10 = *(unsigned int *)(param_1 + 0x70);
  temp_v7 = temp_v7 * 0.001f + temp_v9 * 0.001f + 25570.0f;
  if (temp_v6) {
    temp_v7 = *(float *)(param_1 + 0x78);
  }
  if (((temp_v5 != 0) && (temp_v2 = (unsigned int)(temp_v5 == 1), temp_v5 != 1)) && (temp_v5 == 2)) {
    temp_v2 = 2;
  }
  *(float *)(temp_v0 + 0x17c) = temp_v8;
  *(float *)(temp_v0 + 0x180) = temp_v7;
  *(unsigned int *)(temp_v0 + 0x184) = 0;
  *(unsigned int *)(temp_v0 + 0x188) = 0x3f800000;
  *(unsigned int *)(temp_v0 + 0x18c) = temp_v10;
  *(unsigned int *)(temp_v0 + 400) =
       (temp_v4 & 0xff) | ((temp_v1 & 0xff) << 8) | ((temp_v3 & 0xff) << 0x10) | (temp_v2 << 0x18);
  return;
}

} /* extern "C" */
