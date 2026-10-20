/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5f70` (_code @ 0x2f5f70, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010c2be(unsigned int, int);
int FUN_0010c470(unsigned int, int);

/* Supplied declaration required: FUN_0010c2be. */
/* Supplied declaration required: FUN_0010c470. */


unsigned int FUN_002f5f70(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(char *)(param_2 + 0x89) != '\0') {
    return 1;
  }
  *(unsigned char *)(param_2 + 0x89) = 1;
  FUN_0010c470(param_1,param_2);
  FUN_0010c2be(param_1,param_2);
  return param_1;
}

} /* extern "C" */
