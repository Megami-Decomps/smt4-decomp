/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050d558` (_code @ 0x50d558, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d0b28(unsigned int, int);

extern unsigned int FUN_001b1f04(void);
/* Supplied declaration required: FUN_001d0b28. */


void FUN_0050d558(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (((*(char *)(param_1 - 0x38) != '\0') && (param_2 <= *(unsigned int *)(param_1 + 0x20))) &&
     (*(unsigned int *)(param_1 + 0x20) <= param_3)) {
    *(unsigned char *)(param_1 - 0x35) = 1;
    if (*(char *)(param_1 + 0x5e) != '\0') {
      temp_v0 = FUN_001b1f04();
      FUN_001d0b28(temp_v0,param_1 + 0xc);
      *(unsigned char *)(param_1 + 0x5e) = 0;
    }
    if (*(char *)(param_1 - 0x37) != '\0') {
      *(unsigned char *)(param_1 - 0x37) = 0;
    }
  }
  return;
}

} /* extern "C" */
