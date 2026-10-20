/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00175750` (_code @ 0x175750, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_00175750(unsigned int *param_1,int *param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  if (*param_2 != 0x52415343) {
    return;
  }
  temp_v0 = param_2[2];
  if (temp_v0 + 0xfe000000U < 0x30201) {
    temp_v6 = param_2[1];
    temp_v1 = param_2[3];
    temp_v2 = param_2[4];
    temp_v3 = param_2[5];
    temp_v4 = param_2[6];
    temp_v5 = param_2[7];
    *param_1 = 0x52415343;
    param_1[1] = temp_v6;
    param_1[2] = temp_v0;
    param_1[3] = temp_v1;
    param_1[4] = temp_v2;
    param_1[5] = temp_v3;
    param_1[6] = temp_v4;
    param_1[7] = temp_v5;
    temp_v0 = param_2[9];
    temp_v1 = param_2[10];
    temp_v2 = param_2[0xb];
    temp_v3 = param_2[0xc];
    temp_v4 = param_2[0xd];
    param_1[8] = param_2[8];
    param_1[9] = temp_v0;
    param_1[10] = temp_v1;
    param_1[0xb] = temp_v2;
    param_1[0xc] = temp_v3;
    param_1[0xd] = temp_v4;
  }
  return;
}

} /* extern "C" */
