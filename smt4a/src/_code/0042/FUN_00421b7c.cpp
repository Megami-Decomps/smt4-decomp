/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00421b7c` (_code @ 0x421b7c, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d37bc(int, float *, float [2]);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_003d37bc. */


int FUN_00421b7c(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float temp_v3;
  float temp_v4 [2];
  
  temp_v2 = *(int *)(*(int *)(param_1 + 4) + 0x1ed4) + param_2 * 0x1d0;
  temp_v0 = *(unsigned int *)(temp_v2 + 0x10);
  temp_v1 = *(unsigned int *)(temp_v2 + 0x14);
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(temp_v2 + 0xc);
  *(unsigned int *)(param_1 + 0xc) = temp_v0;
  *(unsigned int *)(param_1 + 0x10) = temp_v1;
  if (*(int *)(temp_v2 + 0x48) == 1) {
    FUN_003d37bc(temp_v2 + 0x114,&temp_v3,temp_v4);
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + temp_v3;
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + temp_v4[0];
  }
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + *(float *)(temp_v2 + 200);
  if (*(int *)(temp_v2 + 0x48) != 2) {
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + *(float *)(temp_v2 + 200) * 0.25f;
  }
  return param_1 + 8;
}

} /* extern "C" */
