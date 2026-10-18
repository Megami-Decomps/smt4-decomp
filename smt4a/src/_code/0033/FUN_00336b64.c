/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336b64` (_code @ 0x336b64, 0x200 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;


unsigned int FUN_00336b64(int param_1,short *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  puVar3 = (unsigned int *)(param_1 + 0x4850);
  temp_v1 = *puVar3;
  if (0 < (int)temp_v1) {
    temp_v0 = temp_v1 & 1;
    if (temp_v0 == 1) {
      *(unsigned char *)(param_1 + 0x4894) = 0;
    }
    temp_v3 = (unsigned int)(temp_v0 == 1);
    if ((int)temp_v0 < (int)temp_v1) {
      do {
        *(unsigned char *)(param_1 + temp_v3 * 0x40 + 0x4894) = 0;
        *(unsigned char *)(param_1 + (temp_v3 + 1) * 0x40 + 0x4894) = 0;
        temp_v0 = temp_v0 + 2;
        temp_v3 = temp_v3 + 2;
      } while ((int)temp_v0 < (int)*puVar3);
    }
  }
  temp_v1 = *puVar3;
  temp_v4 = 0;
  if (temp_v4 < (int)temp_v1) {
    do {
      temp_v2 = param_1 + temp_v4 * 0x40;
      if ((((*(short *)(temp_v2 + 0x4858) == *param_2) &&
           (*(float *)(temp_v2 + 0x4860) == *(float *)(param_2 + 4))) &&
          (*(float *)(temp_v2 + 0x4864) == *(float *)(param_2 + 6))) &&
         (*(float *)(temp_v2 + 0x4868) == *(float *)(param_2 + 8))) {
        *(unsigned char *)(param_1 + temp_v4 * 0x40 + 0x4870) = 1;
        *(short *)(temp_v2 + 0x485e) = param_2[3];
        *(unsigned int *)(temp_v2 + 0x4871) = *(unsigned int *)((int)param_2 + 0x19);
        *(unsigned int *)(temp_v2 + 0x4875) = *(unsigned int *)((int)param_2 + 0x1d);
        *(unsigned int *)(temp_v2 + 0x4879) = *(unsigned int *)((int)param_2 + 0x21);
        *(unsigned int *)(temp_v2 + 0x487d) = *(unsigned int *)((int)param_2 + 0x25);
        *(unsigned int *)(temp_v2 + 0x4881) = *(unsigned int *)((int)param_2 + 0x29);
        *(unsigned char *)(temp_v2 + 0x4885) = *(unsigned char *)((int)param_2 + 0x2d);
        return *(unsigned int *)(temp_v2 + 0x4888);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)temp_v1);
  }
  param_1 = param_1 + temp_v1 * 0x40;
  *(short *)(param_1 + 0x4858) = *param_2;
  *(short *)(param_1 + 0x485a) = param_2[1];
  *(short *)(param_1 + 0x485c) = param_2[2];
  *(short *)(param_1 + 0x485e) = param_2[3];
  *(unsigned int *)(param_1 + 0x4860) = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(param_1 + 0x4864) = *(unsigned int *)(param_2 + 6);
  *(unsigned int *)(param_1 + 0x4868) = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0x486c) = *(unsigned int *)(param_2 + 10);
  *(unsigned char *)(param_1 + 0x4870) = 1;
  *(unsigned char *)(param_1 + 0x4894) = 0;
  *(unsigned int *)(param_1 + 0x4888) = temp_v1;
  *(unsigned int *)(param_1 + 0x4871) = *(unsigned int *)((int)param_2 + 0x19);
  *(unsigned int *)(param_1 + 0x4875) = *(unsigned int *)((int)param_2 + 0x1d);
  *(unsigned int *)(param_1 + 0x4879) = *(unsigned int *)((int)param_2 + 0x21);
  *(unsigned int *)(param_1 + 0x487d) = *(unsigned int *)((int)param_2 + 0x25);
  *(unsigned int *)(param_1 + 0x4881) = *(unsigned int *)((int)param_2 + 0x29);
  *(unsigned char *)(param_1 + 0x4885) = *(unsigned char *)((int)param_2 + 0x2d);
  temp_v1 = *puVar3;
  *puVar3 = temp_v1 + 1;
  return temp_v1;
}
