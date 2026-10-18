/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c86a8` (_code @ 0x2c86a8, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

/* Supplied declaration required: FUN_0024c4bc. */
/* Supplied declaration required: FUN_0024c500. */


void FUN_002c86a8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if ((param_1 != 0 || param_2 != 0) && (temp_v0 = FUN_0024c500(param_1), temp_v0 == 0)) {
    FUN_0024c4bc(param_1,param_2,1);
  }
  if ((param_3 != 0 || param_4 != 0) && (temp_v0 = FUN_0024c500(param_3,param_4), temp_v0 == 0)) {
    FUN_0024c4bc(param_3,param_4,1);
  }
  if ((param_5 != 0 || param_6 != 0) && (temp_v0 = FUN_0024c500(param_5,param_6), temp_v0 == 0)) {
    FUN_0024c4bc(param_5,param_6,1);
    return;
  }
  return;
}
