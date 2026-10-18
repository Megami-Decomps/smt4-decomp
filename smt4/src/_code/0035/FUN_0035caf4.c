/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035caf4` (_code @ 0x35caf4, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002387f8. */
/* Supplied declaration required: FUN_00238a50. */


unsigned int FUN_0035caf4(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_002387f8(param_2,param_3);
  if (temp_v1 == 0) {
    return 2;
  }
  FUN_00238a50();
  if (param_3 != 0) {
    temp_v1 = 0;
    do {
      temp_v0 = *(short *)(param_3 + temp_v1 * 2 + 2);
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v2 = FUN_002387f8(param_2,temp_v0,temp_v0);
      if (temp_v2 == 0) {
        return 2;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 3);
  }
  return 0;
}
