/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234738` (_code @ 0x234738, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0023a358. */
extern int FUN_0023a390(unsigned int);
/* Supplied declaration required: FUN_002bad80. */
/* Supplied declaration required: FUN_00353578. */


void FUN_00234738(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_1c;
  
  temp_v0 = FUN_0023a390(param_2);
  if (temp_v0 < 0) {
    FUN_002bad80(param_1,temp_v0);
    return;
  }
  temp_v1 = param_2;
  FUN_00353578(param_2,param_3,param_4);
  FUN_002bad80(&temp_v2,temp_v1);
  FUN_0023a358(param_2,temp_v2,uStack_1c);
  *param_1 = temp_v2;
  param_1[1] = uStack_1c;
  return;
}
