/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353c84` (_code @ 0x353c84, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_0023a15c. */
/* Supplied declaration required: FUN_0023a358. */
extern int FUN_0023a390(unsigned int);
/* Supplied declaration required: FUN_002bad80. */
/* Supplied declaration required: FUN_003544d4. */


void FUN_00353c84(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_1c;
  
  temp_v0 = param_3;
  FUN_0023a15c(param_3,1);
  if ((-1 < temp_v0) && (temp_v0 = FUN_0023a390(param_2), -1 < temp_v0)) {
    FUN_003544d4(&temp_v1,param_2,param_3,param_4,param_5);
    FUN_0023a358(param_2,temp_v1,uStack_1c);
    *param_1 = temp_v1;
    param_1[1] = uStack_1c;
    return;
  }
  FUN_002bad80(param_1,temp_v0);
  return;
}
