/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003367c4` (_code @ 0x3367c4, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00434290; /* 0x434290 */
extern int DAT_004342c8; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_00227218. */
extern int FUN_002404e8(int);
extern int FUN_0027e6bc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003d9e88. */


unsigned int FUN_003367c4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0027e6bc(DAT_00434290,0);
  if (temp_v0 >= 1) {
    temp_v1 = 0;
  }
  else {
    temp_v0 = FUN_002404e8(DAT_00435d18);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      if (DAT_00435d18 != 0) {
        FUN_003d9e88();
      }
      *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) & 0xffffbfff;
      FUN_00227218();
      temp_v1 = 1;
    }
  }
  return temp_v1;
}
