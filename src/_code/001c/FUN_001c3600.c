/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c3600` (_code @ 0x1c3600, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_00289058. */
extern unsigned long long FUN_002c5f60(int, int);


void FUN_001c3600(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned long long temp_v5;
  
  if ((0 < *(int *)(param_1 + 0x50)) &&
     (temp_v0 = *(int *)(param_1 + 0x24), temp_v1 = *(int *)(param_1 + 0x20),
     temp_v2 = *(int *)(param_1 + 0x38), temp_v3 = *(int *)(param_1 + 0x48),
     temp_v4 = *(int *)(param_1 + 0x50), temp_v5 = FUN_002c5f60(temp_v4 - 1,temp_v2),
     temp_v4 <= (temp_v0 + temp_v1) * temp_v2 + temp_v3)) {
    FUN_00289058(param_1,(int)temp_v5);
    FUN_00289058(param_1 + 0x28,(int)((unsigned long long)temp_v5 >> 0x20));
    return;
  }
  return;
}
