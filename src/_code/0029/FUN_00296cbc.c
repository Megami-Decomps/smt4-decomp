/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296cbc` (_code @ 0x296cbc, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0023ebc8(unsigned int);
/* Supplied declaration required: FUN_002972f8. */
extern int FUN_002a63f8(unsigned int, int);


unsigned int FUN_00296cbc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if ((((*(int *)(param_1 + 0x3564) != 0) && (*(int *)(param_1 + 0x356c) != 0)) &&
      (*(int *)(param_1 + 0x3570) != 0)) &&
     ((temp_v0 = FUN_0023ebc8(0x14), temp_v0 != 0 && (temp_v0 = FUN_0023ebc8(0x25), temp_v0 != 0)))) {
    temp_v2 = 0;
    temp_v0 = temp_v2;
    do {
      temp_v1 = FUN_002a63f8(0x28,temp_v2);
      if (temp_v1 != 0) {
        temp_v0 = temp_v0 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 2);
    if (temp_v0 >= 2) {
      if (*(int *)(param_1 + 0x3568) == 0) {
        temp_v0 = *(int *)(param_1 + 0x3564);
        FUN_002972f8(temp_v0,*(int *)(param_1 + 0x356c));
        *(int *)(param_1 + 0x3568) = temp_v0;
        *(unsigned int *)(temp_v0 + 0x108) = 0;
      }
      return 1;
    }
  }
  return 0;
}
