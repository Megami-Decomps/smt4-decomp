/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ae1c` (_code @ 0x30ae1c, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(unsigned int);
int FUN_0029c1c8(unsigned int, unsigned int, int);

/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_0029c1c8. */
extern unsigned int FUN_0029c1fc(void);


unsigned int FUN_0030ae1c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_0029c1fc();
  FUN_0029c1c8(temp_v1,temp_v0,0);
  FUN_0028dcb0(temp_v1);
  return 1;
}

} /* extern "C" */
