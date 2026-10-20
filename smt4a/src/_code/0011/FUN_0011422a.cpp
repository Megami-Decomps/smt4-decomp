/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011422a` (_code @ 0x11422a, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00120896(unsigned int);
int FUN_00122fe4(int, unsigned int);
int sharedRefRelease(unsigned int);

/* Supplied declaration required: FUN_00120896. */
/* Supplied declaration required: FUN_00122fe4. */
extern int FUN_002e6e26(void);
/* Supplied declaration required: sharedRefRelease. */


void FUN_0011422a(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e6e26();
  FUN_00122fe4(temp_v0,*(unsigned int *)(param_1 + 0x5c));
  if (temp_v0 == 0) {
    FUN_00120896(*(unsigned int *)(param_1 + 0x5c));
  }
  sharedRefRelease(*(unsigned int *)(param_1 + 0x5c));
  *(unsigned int *)(param_1 + 0x5c) = 0;
  return;
}

} /* extern "C" */
