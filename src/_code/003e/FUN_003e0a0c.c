/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0a0c` (_code @ 0x3e0a0c, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002c4b30. */


unsigned int FUN_003e0a0c(int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int iStack_14;
  
  if (param_3 == 0) {
    return 0xe0e10bfd;
  }
  iStack_14 = 0;
  FUN_002c4b30(param_2,0x60);
  temp_v0 = (**(romwright_code **)(*param_1 + 0x34))(param_1,param_2,0x60,&iStack_14,param_3,2,0x12);
  if (((temp_v0 & 0x3ff) != 0x3f7) && (iStack_14 == 0)) {
    temp_v0 = 0xc8810bef;
  }
  return temp_v0;
}
