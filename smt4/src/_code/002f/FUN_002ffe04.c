/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ffe04` (_code @ 0x2ffe04, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(void);
/* Supplied declaration required: aeabi_idivmod. */


unsigned int FUN_002ffe04(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002939f4();
  aeabi_idivmod(*(unsigned char *)(temp_v1 + 0x44b4) + 1,temp_v0);
  FUN_0028dcb0(temp_v2);
  return 1;
}
