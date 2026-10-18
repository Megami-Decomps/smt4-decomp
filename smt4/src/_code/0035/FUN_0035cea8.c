/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035cea8` (_code @ 0x35cea8, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00237a94. */
/* Supplied declaration required: FUN_00237d64. */


unsigned int FUN_0035cea8(int *param_1,unsigned int *param_2,int *param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  FUN_00237a94(&temp_v2,*param_3 + 8);
  if (temp_v2 == 0) {
    temp_v0 = 2;
  }
  else {
    temp_v1 = *param_4;
    FUN_00237d64(temp_v2 + 8,&temp_v1);
    *param_2 = *param_4;
    *param_1 = *(int *)(*param_1 + 4);
    temp_v0 = 0;
  }
  return temp_v0;
}
