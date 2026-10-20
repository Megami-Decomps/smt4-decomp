/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aae38` (_code @ 0x3aae38, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023553c(int);
int FUN_0028ca0c(int);
int FUN_00295c04(int);
int FUN_0029be5c(int, int);

extern int FUN_0023360c(int);
/* Supplied declaration required: FUN_0023553c. */
/* Supplied declaration required: FUN_0028ca0c. */
/* Supplied declaration required: FUN_00295c04. */
/* Supplied declaration required: FUN_0029be5c. */
extern int FUN_0029c3ec(void);
extern int FUN_002a0ce8(void);


void FUN_003aae38(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002a0ce8();
  if ((temp_v0 != 0) && (temp_v0 = FUN_0029c3ec(), temp_v0 == 1)) {
    FUN_0023553c(0);
    temp_v0 = FUN_0023360c(param_1 + 0x20);
    FUN_0028ca0c(*(unsigned short *)(param_1 + temp_v0 * 0x20 + 0x5ac));
    temp_v0 = FUN_0023360c(param_1 + 0x20);
    temp_v0 = *(int *)(param_1 + temp_v0 * 0x20 + 0x5b4);
    FUN_00295c04(-temp_v0);
    FUN_0029be5c(1,temp_v0);
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
