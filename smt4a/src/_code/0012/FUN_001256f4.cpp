/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001256f4` (_code @ 0x1256f4, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030e3a0(int, int);
int FUN_0030e588(int, int, unsigned int);

/* Supplied declaration required: FUN_0030e3a0. */
/* Supplied declaration required: FUN_0030e588. */


void FUN_001256f4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_0030e588(param_1,param_1 + 0x94,*(unsigned int *)(param_1 + 0xb1c));
  FUN_0030e588(param_1,param_1 + 0x988,*(unsigned int *)(param_1 + 0xb28));
  FUN_0030e3a0(param_1,param_1 + 0xb30);
  temp_v0 = 0x12;
  do {
    if (*(short *)((unsigned int)*(unsigned char *)(temp_v0 + 0x547104) * 4 + param_1 + 0xa7e) != 0) break;
    temp_v0 = temp_v0 - 1;
  } while (temp_v0 >= 3);
  *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + temp_v0 * 3 + 0x11;
  return;
}

} /* extern "C" */
