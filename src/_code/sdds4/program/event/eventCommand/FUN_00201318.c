/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201318` (_code @ 0x201318, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e088; /* 0x43e088 */

/* Supplied declaration required: FUN_0025955c. */
extern int FUN_00289640(void);
extern int FUN_00296f60(unsigned int);


unsigned char FUN_00201318(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00289640();
  if (temp_v0 == 0) {
    temp_v0 = FUN_00296f60(0);
    if (temp_v0 == 0) {
      temp_v1 = 0xff;
    }
    else {
      temp_v1 = 0xffffffff;
    }
    FUN_0025955c(temp_v1,10,1);
    return 0;
  }
  return *(int *)(DAT_0043e088 + 0x10) == *(int *)(DAT_0043e088 + 0x14);
}
