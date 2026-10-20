/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00483d00` (_code @ 0x483d00, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);
int FUN_004853fc(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001681cc. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_004853fc. */


void FUN_00483d00(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x26c));
  if (temp_v0 == 2) {
    FUN_004853fc(param_1,2);
    FUN_001681cc(0x97);
    return;
  }
  return;
}

} /* extern "C" */
