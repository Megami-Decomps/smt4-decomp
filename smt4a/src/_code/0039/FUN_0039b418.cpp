/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b418` (_code @ 0x39b418, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

/* Supplied declaration required: FUN_003283ac. */
extern int FUN_0034832c(void);


unsigned int FUN_0039b418(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0034832c();
  if (temp_v0 != 0) {
    FUN_003283ac(1);
    return 1;
  }
  FUN_003283ac(0);
  return 0;
}

} /* extern "C" */
