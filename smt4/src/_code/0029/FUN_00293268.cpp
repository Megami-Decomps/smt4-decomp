/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293268` (_code @ 0x293268, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029378c(unsigned int, unsigned int);
int FUN_002bd8e8(int, int, int);

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0029378c. */
/* Supplied declaration required: FUN_002bd8e8. */


void FUN_00293268(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043dcf0;
  *(unsigned int *)(DAT_0043dcf0 + 0x2c) = *(unsigned int *)(DAT_0043dcf0 + 0x2c) ^ 1;
  FUN_002bd8e8(temp_v0 + 0x180,4,0);
  temp_v1 = 0;
  do {
    FUN_0029378c(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x6c8),*(unsigned int *)(temp_v0 + 0x2c));
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = 0;
  do {
    FUN_0029378c(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x6d8),*(unsigned int *)(temp_v0 + 0x2c));
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}

} /* extern "C" */
