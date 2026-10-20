/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039d400` (_code @ 0x39d400, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_003283ac(int);

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_003ec7b0(void);


unsigned int FUN_0039d400(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_0014aa78();
  temp_v0 = FUN_003ec7b0();
  FUN_003283ac(temp_v0 != 0);
  return 1;
}

} /* extern "C" */
