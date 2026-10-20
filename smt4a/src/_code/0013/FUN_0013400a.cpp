/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013400a` (_code @ 0x13400a, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(int);
int FUN_002e9598(...);
int FUN_003079ae(int *);
int FUN_003079c6(...);
int FUN_0030d3ba(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int FUN_002e6dac(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002e9598. */
/* Supplied declaration required: FUN_003079ae. */
/* Supplied declaration required: FUN_003079c6. */
/* Supplied declaration required: FUN_0030d3ba. */


void FUN_0013400a(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v3 = param_1[1];
  temp_v0 = (temp_v3 - *param_1) >> 3;
  if (temp_v0 < (unsigned int)((param_1[2] - *param_1) >> 3)) {
    temp_v4 = temp_v3 - 8;
    param_1[1] = temp_v3 + 8;
    FUN_0030d3ba(param_1,temp_v3,temp_v4,param_4,param_1,param_2);
    while (param_2 != temp_v4) {
      temp_v4 = temp_v4 - 8;
      temp_v3 = temp_v3 - 8;
      FUN_002e9598(temp_v3,temp_v4);
    }
    FUN_002e9598(param_2,param_3);
    return;
  }
  temp_v2 = (temp_v0 >> 1) + temp_v0 + (temp_v0 >> 3);
  temp_v1 = temp_v0 + 0x20;
  if (temp_v0 + 0x20 <= temp_v2) {
    temp_v1 = temp_v2;
  }
  temp_v3 = FUN_002e6dac();
  FUN_003079c6(*param_1,param_2,temp_v3,param_1);
  FUN_0030d3ba(param_1,((param_2 - *param_1) & 0xfffffff8U) + temp_v3,param_3);
  FUN_003079c6(param_2,param_1[1],((param_2 - *param_1) & 0xfffffff8U) + temp_v3 + 8,param_1);
  temp_v5 = param_1[1];
  temp_v4 = *param_1;
  FUN_003079ae(param_1);
  FUN_002e6e14(*param_1);
  *param_1 = temp_v3;
  param_1[2] = temp_v1 * 8 + temp_v3;
  param_1[1] = ((temp_v5 - temp_v4) >> 3) * 8 + temp_v3 + 8;
  return;
}

} /* extern "C" */
