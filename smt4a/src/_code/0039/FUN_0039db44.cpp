/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039db44` (_code @ 0x39db44, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004de8b8(unsigned int, int, unsigned int, int);

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_00236038(void);
/* Supplied declaration required: FUN_004de8b8. */


unsigned int FUN_0039db44(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = 0;
  if (temp_v0 == 0) {
    temp_v1 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 8;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 10;
  }
  else if (temp_v0 == 3) {
    temp_v1 = 0xb;
  }
  FUN_004de8b8(DAT_0057113c,0x1a,temp_v1,1);
  return 1;
}

} /* extern "C" */
