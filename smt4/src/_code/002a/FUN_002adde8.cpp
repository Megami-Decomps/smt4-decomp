/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002adde8` (_code @ 0x2adde8, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned int FUN_002c30c4(int);
extern int nw_ut_ResDicPatricia_Get(int *, int, unsigned int);


unsigned int FUN_002adde8(int param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x2c) + 8);
  if ((puVar1 != (unsigned int *)0x0) && ((~*puVar1 & 0x40000092) != 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  temp_v5 = 0;
  temp_v3 = puVar1[0x38];
  if (temp_v3 != 0) {
    temp_v0 = (int)(puVar1 + 0x38) + temp_v3;
  }
  else {
    temp_v0 = 0;
  }
  temp_v4 = *(int *)(temp_v0 + 0x1c);
  if (temp_v4 != 0) {
    temp_v5 = temp_v4 + temp_v0 + 0x1c;
  }
  if (temp_v5 != 0 && param_2 != 0) {
    temp_v1 = FUN_002c30c4(param_2);
    temp_v0 = nw_ut_ResDicPatricia_Get(&temp_v5,param_2,temp_v1);
    if ((temp_v0 != 0) && (temp_v0 = ((temp_v0 - temp_v5) - 0x1c) >> 4, -1 < temp_v0)) {
      temp_v4 = (**(romwright_code **)(**(int **)(*(int *)(param_1 + 0x2c) + 0x220) + 0x1c))();
      temp_v0 = *(int *)(temp_v4 + 4) + temp_v0 * 0x30;
      temp_v1 = *(unsigned int *)(temp_v0 + 0x1c);
      temp_v2 = *(unsigned int *)(temp_v0 + 0x2c);
      *param_3 = *(unsigned int *)(temp_v0 + 0xc);
      param_3[1] = temp_v1;
      param_3[2] = temp_v2;
      return 1;
    }
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return 0;
}

} /* extern "C" */
