/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124d12` (_code @ 0x124d12, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_00118dac. */
/* Supplied declaration required: FUN_0030745c. */


void FUN_00124d12(int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = param_1;
  temp_v1 = param_2;
  temp_v2 = param_3;
  FUN_0030745c(param_1 - 0x10,param_3 + 0x30);
  FUN_00118dac(param_1 + 8,param_2,param_3,param_4,param_5,temp_v0,temp_v1,temp_v2);
  return;
}
