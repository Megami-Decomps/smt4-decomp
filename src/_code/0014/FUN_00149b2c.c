/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00149b2c` (_code @ 0x149b2c, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_00149b2c(unsigned int *param_1)

{
  int temp_v0;
  int temp_v1;
  
  *param_1 = 0;
  param_1[0x27] = 0xffffffff;
  *(unsigned char *)((int)param_1 + 0xa9) = 1;
  param_1[1] = 0;
  *(unsigned char *)((int)param_1 + 0xab) = 1;
  temp_v1 = 0;
  if (0 < (int)param_1[0x29]) {
    do {
      temp_v0 = temp_v1 + 1;
      *(unsigned int *)(param_1[9] + temp_v1 * 4) = 0;
      temp_v1 = temp_v0;
    } while (temp_v0 < (int)param_1[0x29]);
  }
  param_1[0x29] = 0;
  *(unsigned char *)(param_1 + 0x2a) = 1;
  temp_v1 = 0;
  if (0 < (int)param_1[0x28]) {
    do {
      temp_v0 = temp_v1 + 1;
      *(unsigned int *)(param_1[3] + temp_v1 * 4) = 0;
      temp_v1 = temp_v0;
    } while (temp_v0 < (int)param_1[0x28]);
  }
  param_1[0x28] = 0;
  *(unsigned char *)((int)param_1 + 0xaa) = 1;
  param_1[0x18] = 0;
  *(unsigned char *)(param_1 + 0x2b) = 1;
  param_1[0x19] = 0;
  param_1[0x1e] = 0xffffffff;
  return;
}
