/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103048` (_code @ 0x103048, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e61e8(...);
int FUN_002e6490(unsigned int);

extern unsigned char DAT_0064be80; /* 0x64be80 */
extern unsigned char DAT_0064bed0; /* 0x64bed0 */
extern unsigned char DAT_0064bf20; /* 0x64bf20 */
extern unsigned int DAT_0064bf6c; /* 0x64bf6c */

/* Supplied declaration required: FUN_002e61e8. */
/* Supplied declaration required: FUN_002e6490. */


void FUN_00103048(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0064bf6c;
  FUN_002e61e8(&DAT_0064be80);
  FUN_002e61e8(&DAT_0064bed0);
  FUN_002e61e8(&DAT_0064bf20);
  while (temp_v1 = temp_v0 & 0xfffffffe, temp_v1 != 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x4c);
    FUN_002e61e8(temp_v1);
    FUN_002e6490(temp_v1);
  }
  return;
}

} /* extern "C" */
