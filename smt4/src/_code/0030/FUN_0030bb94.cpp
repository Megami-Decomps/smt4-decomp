/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030bb94` (_code @ 0x30bb94, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002939f4(void);
int FUN_00295228(unsigned int, unsigned int);

/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_00295228. */
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_0030bb94(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_002939f4();
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  FUN_00295228(temp_v0,temp_v1);
  return 1;
}

} /* extern "C" */
