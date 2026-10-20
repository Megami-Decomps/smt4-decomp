/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00462dc4` (_code @ 0x462dc4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d0b28(unsigned int, int);

extern unsigned int FUN_001b1f04(void);
/* Supplied declaration required: FUN_001d0b28. */


void FUN_00462dc4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  *(unsigned char *)(param_1 + 0xf) = 1;
  if (*(char *)(param_1 + 0xa2) != '\0') {
    temp_v0 = FUN_001b1f04();
    FUN_001d0b28(temp_v0,param_1 + 0x50);
    *(unsigned char *)(param_1 + 0xa2) = 0;
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(unsigned char *)(param_1 + 0xd) = 0;
  }
  return;
}

} /* extern "C" */
