/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d338` (_code @ 0x31d338, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00256fec(void);
int FUN_00257108(void);
int FUN_0025715c(void);

extern unsigned int FUN_00256fdc(unsigned int);
/* Supplied declaration required: FUN_00256fec. */
/* Supplied declaration required: FUN_00257108. */
/* Supplied declaration required: FUN_0025715c. */


void FUN_0031d338(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(int *)(param_2 + 0x144) != 0) {
    if (*(int *)(param_1 + 0x144) != 0) {
      FUN_0025715c();
    }
    temp_v0 = *(unsigned int *)(param_2 + 0x144);
    FUN_00256fec();
    *(unsigned int *)(param_1 + 0x144) = temp_v0;
  }
  else if (*(int *)(param_2 + 0x140) != 0) {
    if (*(int *)(param_1 + 0x140) != 0) {
      FUN_00257108();
    }
    temp_v0 = FUN_00256fdc(*(unsigned int *)(param_2 + 0x140));
    *(unsigned int *)(param_1 + 0x140) = temp_v0;
    return;
  }
  return;
}

} /* extern "C" */
