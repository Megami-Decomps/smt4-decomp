/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2d70` (_code @ 0x1c2d70, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


unsigned int FUN_001c2d70(int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  
  *(unsigned char *)(param_1 + 0xf0) = *(unsigned char *)((int)param_2 + 10);
  *(unsigned char *)(param_1 + 0xf1) = *(unsigned char *)((int)param_2 + 0xb);
  *(unsigned int *)(param_1 + 0xf4) = param_2[0x10];
  *(unsigned int *)(param_1 + 0xf8) = param_2[0x11];
  *(unsigned int *)(param_1 + 0xfc) = param_2[0x12];
  temp_v5 = (float)VectorUnsignedToFloat((unsigned int)*(unsigned char *)(param_2 + 0x13),(unsigned char)(in_fpscr >> 0x16) & 3)
  ;
  *(float *)(param_1 + 0x100) = temp_v5 * 0.007874016f - 1.0f;
  temp_v5 = (float)VectorUnsignedToFloat
                           ((unsigned int)*(unsigned char *)((int)param_2 + 0x4d),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(float *)(param_1 + 0x104) = temp_v5 * 0.007874016f;
  temp_v2 = 0;
  temp_v5 = (float)VectorUnsignedToFloat
                           ((unsigned int)*(unsigned char *)((int)param_2 + 0x4e),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(float *)(param_1 + 0x108) = temp_v5 * 0.007874016f;
  for (temp_v3 = (unsigned int)*(unsigned short *)(param_2 + 2); temp_v3 != 0; temp_v3 = temp_v3 >> 1) {
    if ((temp_v3 & 1) != 0) {
      if (temp_v2 >= 4) break;
      *(unsigned char *)(param_1 + temp_v2 * 0x24 + 0x2068) = 1;
    }
    temp_v2 = temp_v2 + 1;
  }
  if (temp_v2 >= 5) {
    temp_v2 = 4;
  }
  *(unsigned int *)(param_1 + 0x224) = temp_v2;
  if (temp_v2 == 0) {
    temp_v1 = 2;
  }
  else {
    temp_v3 = 0;
    do {
      temp_v0 = temp_v3 * 0xd;
      temp_v4 = temp_v0 + param_1;
      temp_v3 = temp_v3 + 1;
      *(unsigned int *)(temp_v4 + 0xbc) = *(unsigned int *)((int)param_2 + temp_v0 + 0xc);
      *(unsigned int *)(temp_v4 + 0xc0) = *(unsigned int *)((int)param_2 + temp_v0 + 0x10);
      *(unsigned int *)(temp_v4 + 0xc4) = *(unsigned int *)((int)param_2 + temp_v0 + 0x14);
      *(unsigned char *)(temp_v4 + 200) = *(unsigned char *)((int)param_2 + temp_v0 + 0x18);
    } while (temp_v3 < 4);
    *(unsigned int *)(param_1 + 100) = *param_2;
    *(unsigned char *)(param_1 + 0x50) = 1;
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
