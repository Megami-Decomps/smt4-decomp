/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fa2c` (_code @ 0x22fa2c, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029e1ec(void);
int FUN_0029e328(int);
int FUN_0029e39c(int, int);
int FUN_0029ee6c(int, int);
int FUN_002a0cc8(int);
int FUN_002b8838(int);

/* Supplied declaration required: FUN_0029e1ec. */
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: FUN_0029e39c. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: FUN_002b8838. */


void FUN_0022fa2c(int param_1)

{
/* irregular: 6 native warning(s); review required */
  FUN_002a0cc8(1);
  FUN_0029e39c(0xc,0);
  if (*(int *)(param_1 + 0x860) != 8) {
    FUN_0029e328(0x1c);
    FUN_0029e328(7);
    FUN_0029e328(3);
    FUN_0029e328(0xc);
    FUN_0029e328(0x10);
    if (*(unsigned int *)(param_1 + 0x860) < 3) {
      FUN_0029e328(0xf);
    }
  }
  else {
    FUN_0029e328(0xc);
    FUN_0029e328(7);
    FUN_0029e328(0x10);
    FUN_0029e328(0xf);
  }
  FUN_0029e1ec();
  FUN_002b8838(5);
  FUN_0029ee6c(0,0x323232ff);
  *(unsigned int *)(param_1 + 4) = 8;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

} /* extern "C" */
