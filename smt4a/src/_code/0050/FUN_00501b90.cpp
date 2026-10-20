/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00501b90` (_code @ 0x501b90, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned int, int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002e6354. */


unsigned int FUN_00501b90(int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int iStack_14;
  
  if (param_3 != 0) {
    iStack_14 = 0;
    FUN_002e6354(param_2,0x60);
    temp_v0 = (**(romwright_code **)(*param_1 + 0x34))(param_1,param_2,0x60,&iStack_14,param_3,2,0x12);
    if (((temp_v0 & 0x3ff) != 0x3f7) && (iStack_14 == 0)) {
      temp_v0 = 0xc8810bef;
    }
    return temp_v0;
  }
  return 0xe0e10bfd;
}

} /* extern "C" */
