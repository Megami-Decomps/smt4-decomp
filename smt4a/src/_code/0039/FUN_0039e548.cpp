/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039e548` (_code @ 0x39e548, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_0015f490(unsigned int, unsigned int, int, int);

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_0015f490. */
extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_0039e548(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_0014aa78();
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  FUN_0015f490(temp_v0,temp_v1,1,0);
  return 1;
}

} /* extern "C" */
