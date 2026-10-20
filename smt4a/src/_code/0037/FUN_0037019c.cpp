/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037019c` (_code @ 0x37019c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ee0(int, int, int);
int FUN_00236038(...);
int FUN_00324bc8(int, int, int);
int FUN_00376fb8(unsigned int);

extern unsigned char DAT_005f1b70; /* 0x5f1b70 */

/* Supplied declaration required: FUN_00137ee0. */
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_00324bc8. */
/* Supplied declaration required: FUN_00376fb8. */


unsigned int FUN_0037019c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00236038();
  FUN_00236038(1);
  FUN_00376fb8(temp_v0);
  FUN_00324bc8(0x18,1,0);
  DAT_005f1b70 = 0;
  FUN_00137ee0(6,0,0);
  return 1;
}

} /* extern "C" */
