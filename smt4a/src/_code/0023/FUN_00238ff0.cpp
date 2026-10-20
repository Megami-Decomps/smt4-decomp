/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238ff0` (_code @ 0x238ff0, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);

extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_00236038. */


unsigned int FUN_00238ff0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  FUN_00236038(0);
  temp_v0 = FUN_00164a9c();
  if (temp_v0 != 0) {
    temp_v1 = FUN_00236038(1);
    temp_v2 = FUN_00236038(2);
    temp_v3 = FUN_00236038(3);
    *(int *)(temp_v0 + 0x84) = temp_v3;
    *(int *)(temp_v0 + 0x78) = temp_v1 - 0x38;
    *(int *)(temp_v0 + 0x7c) = temp_v2 - 8;
    *(unsigned int *)(temp_v0 + 0x80) = 0;
    *(unsigned int *)(temp_v0 + 0x70) = *(unsigned int *)(temp_v0 + 0x10);
    *(unsigned int *)(temp_v0 + 0x74) = *(unsigned int *)(temp_v0 + 0x14);
    if (temp_v3 == 0) {
      *(int *)(temp_v0 + 0x10) = temp_v1 - 0x38;
      *(int *)(temp_v0 + 0x14) = temp_v2 - 0x38;
      return 1;
    }
  }
  return 1;
}

} /* extern "C" */
