/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00212354` (_code @ 0x212354, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002769b4(...);
int FUN_0027d5ac(unsigned int);
int scrGetArg(int);
int asdSequenceRequest(int, int, int);

extern unsigned char DAT_0049f943; /* 0x49f943 */
extern unsigned char DAT_0049fc14; /* 0x49fc14 */

/* Supplied declaration required: FUN_002769b4. */
/* Supplied declaration required: FUN_0027d5ac. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: asdSequenceRequest. */


unsigned int FUN_00212354(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = scrGetArg(2);
  if (temp_v0 != 0x18) {
    FUN_002769b4(temp_v0,temp_v1,temp_v2);
  }
  else {
    FUN_002769b4(0x18,1,temp_v2);
    FUN_0027d5ac(temp_v1);
    DAT_0049f943 = 1;
  }
  DAT_0049fc14 = 0;
  asdSequenceRequest(6,0,0);
  return 1;
}

} /* extern "C" */
