/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b630` (_code @ 0x30b630, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027da30(int, unsigned int);
int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(void);


unsigned int FUN_0030b630(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002939f4();
  FUN_0027da30(temp_v1,temp_v0);
  FUN_0028dcb0((int)*(char *)(temp_v1 + 0xd4));
  return 1;
}

} /* extern "C" */
