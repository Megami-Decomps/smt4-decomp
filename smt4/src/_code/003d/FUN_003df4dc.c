/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df4dc` (_code @ 0x3df4dc, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_002baa40. */
/* Supplied declaration required: FUN_00352078. */
/* Supplied declaration required: FUN_00352f50. */


void FUN_003df4dc(unsigned int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_2;
  if (temp_v0 == 0 && param_2[1] == 0) {
    FUN_002baa40(param_1,0xe0a13882);
    return;
  }
  FUN_00352f50();
  if (temp_v0 < 0) {
    FUN_002baa40(param_1,temp_v0);
    return;
  }
  temp_v0 = 1;
  FUN_00352078(1,0,*param_2,param_2[1],param_3,param_4);
  if (temp_v0 == -0x277f7fc5) {
    FUN_002baa40(param_1,0xd8813889);
    return;
  }
  if (temp_v0 == -0x26ff7fc2) {
    FUN_002baa40(param_1,0xd8e1389b);
    return;
  }
  if (temp_v0 < 0) {
    FUN_002baa40(param_1,temp_v0);
    return;
  }
  FUN_002baa40(param_1,0);
  return;
}
