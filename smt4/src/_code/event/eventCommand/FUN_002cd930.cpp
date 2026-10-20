/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd930` (_code @ 0x2cd930, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00259324(unsigned int, unsigned int, int);

extern int DAT_0043e088; /* 0x43e088 */

/* Supplied declaration required: FUN_00259324. */
extern int FUN_002893d8(void);
extern unsigned int FUN_00296cc8(unsigned int);


unsigned char FUN_002cd930(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 == 0) {
    temp_v1 = FUN_00296cc8(0);
    temp_v2 = FUN_00296cc8(1);
    FUN_00259324(temp_v1,temp_v2,1);
    return 0;
  }
  return *(int *)(DAT_0043e088 + 0x10) == *(int *)(DAT_0043e088 + 0x14);
}

} /* extern "C" */
