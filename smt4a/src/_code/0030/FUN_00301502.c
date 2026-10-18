/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301502` (_code @ 0x301502, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e76b6. */


unsigned int FUN_00301502(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  pcVar1 = (char *)FUN_002e76b6(*(unsigned int *)(param_1 + 8));
  if ((*pcVar1 != -0x16) &&
     (temp_v0 = FUN_002e76b6(*(unsigned int *)(param_1 + 8)), *(unsigned char *)(temp_v0 + 1) != 0xd0)) {
    temp_v1 = 0;
  }
  else {
    temp_v0 = FUN_002e76b6(*(unsigned int *)(param_1 + 8));
    temp_v1 = (unsigned int)*(unsigned char *)(temp_v0 + 2);
    if (temp_v1 == 0) {
      return 0xffffff00;
    }
    if (temp_v1 >= 2) {
      return -temp_v1;
    }
  }
  return temp_v1;
}
