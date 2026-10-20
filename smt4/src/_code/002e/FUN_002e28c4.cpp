/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e28c4` (_code @ 0x2e28c4, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002769b4(unsigned int, unsigned int, unsigned int);

extern unsigned char DAT_0049fc14; /* 0x49fc14 */

/* Supplied declaration required: FUN_002769b4. */
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_002e28c4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  FUN_002769b4(temp_v0,temp_v1,temp_v2);
  DAT_0049fc14 = 0;
  return 1;
}

} /* extern "C" */
