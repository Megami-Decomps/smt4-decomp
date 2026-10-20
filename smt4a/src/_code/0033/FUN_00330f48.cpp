/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330f48` (_code @ 0x330f48, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00324bc8(unsigned int, unsigned int, unsigned int);
int FUN_003fd63c(int, int, int);

extern unsigned char DAT_005f1b70; /* 0x5f1b70 */

extern int FUN_0018719c(unsigned int);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00324bc8. */
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_00330f48(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  temp_v3 = FUN_0018719c(0x11f9);
  if (temp_v3 != 0) {
    FUN_003fd63c(0x11f9,0,1);
  }
  FUN_00324bc8(temp_v0,temp_v1,temp_v2);
  DAT_005f1b70 = 0;
  return 1;
}

} /* extern "C" */
