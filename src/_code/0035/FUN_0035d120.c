/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d120` (_code @ 0x35d120, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_00237c14. */
/* Supplied declaration required: FUN_00237c2c. */
/* Supplied declaration required: FUN_00237e94. */
/* Supplied declaration required: FUN_00237f9c. */
/* Supplied declaration required: FUN_0023833c. */


int * FUN_0035d120(int *param_1,int *param_2,int *param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1 [2];
  int temp_v2;
  int temp_v3;
  
  FUN_00237e94(&temp_v2,param_1);
  if ((temp_v2 != 0) && (FUN_00237c2c(&temp_v3,*param_3 + 8), temp_v3 != 0)) {
    temp_v1[0] = temp_v2;
    FUN_00237c14(temp_v3 + 8,temp_v1,param_1[5]);
    *param_1 = *(int *)(*param_1 + 4);
    piVar2 = param_1;
    FUN_0023833c(param_1,temp_v3 + 0x10);
    if (piVar2 == (int *)0x0) {
      temp_v0 = temp_v3 + 0x10;
      FUN_00237f9c();
      if (temp_v0 == 0) {
        return (int *)0x2;
      }
      *param_2 = temp_v2;
      *param_1 = *(int *)(*param_1 + 4);
      piVar2 = (int *)0x0;
    }
    return piVar2;
  }
  return (int *)0x2;
}
