/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dc064` (_code @ 0x2dc064, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439b58; /* 0x439b58 */

extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_002dc064(void)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = DAT_00439b58;
  *(unsigned int *)(DAT_00439b58 + 0xb8) = 0;
  *(unsigned int *)(temp_v0 + 0xbc) = 0;
  *(unsigned int *)(temp_v0 + 0xc0) = 0;
  temp_v1 = FUN_00296f60(0);
  temp_v2 = FUN_00296f60(1);
  temp_v3 = FUN_00296f60(2);
  temp_v0 = DAT_00439b58;
  *(unsigned int *)(DAT_00439b58 + 0xb8) = temp_v3;
  *(unsigned int *)(temp_v0 + 0xbc) = temp_v2;
  *(unsigned int *)(temp_v0 + 0xc0) = temp_v1;
  return 1;
}
