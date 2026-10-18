/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157be4` (_code @ 0x157be4, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0016d338. */
/* Supplied declaration required: FUN_0017d43c. */
/* Supplied declaration required: FUN_0017d5f8. */
/* Supplied declaration required: FUN_001960fc. */
/* Supplied declaration required: FUN_0019eafc. */


void FUN_00157be4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xac);
  if (piVar2 != (int *)0x0) {
    if (((*piVar2 - piVar2[1]) & 0xfffffffcU) != 0) {
      FUN_001960fc();
      temp_v0 = piVar2[4];
      *(int *)(param_1 + 0xa4) = temp_v0;
      if (temp_v0 != 0) {
        FUN_0017d5f8();
        FUN_0019eafc();
        FUN_0016d338(piVar2,temp_v0);
      }
    }
    FUN_0017d43c();
    return;
  }
  return;
}
