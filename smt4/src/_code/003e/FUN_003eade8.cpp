/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eade8` (_code @ 0x3eade8, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7430(unsigned int, int);

/* Supplied declaration required: FUN_002b7430. */
extern unsigned int FUN_002bd440(void);


void FUN_003eade8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int base;
  
  base = param_1 - 0x44;
  if ((((*(char *)(param_1 - 0x38) != '\0') && (param_2 <= *(unsigned int *)(base + 0x64))) &&
      (*(unsigned int *)(base + 0x64) <= param_3)) && (*(char *)(base + 0xd) != '\0')) {
    temp_v0 = FUN_002bd440();
    FUN_002b7430(temp_v0,base + 0x50);
    *(unsigned char *)(base + 0xd) = 0;
  }
  return;
}

} /* extern "C" */
