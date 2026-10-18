/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d284` (_code @ 0x35d284, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00237c2c. */
/* Supplied declaration required: FUN_00237efc. */


unsigned int FUN_0035d284(int *param_1,unsigned int *param_2,unsigned int *param_3,int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  FUN_00237c2c(&temp_v2,*param_4 + 8);
  if (temp_v2 == 0) {
    temp_v0 = 2;
  }
  else {
    temp_v1 = *param_3;
    FUN_00237efc(temp_v2 + 8,&temp_v1);
    *param_2 = *param_3;
    *param_1 = *(int *)(*param_1 + 4);
    temp_v0 = 0;
  }
  return temp_v0;
}
