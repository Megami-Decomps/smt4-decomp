/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f4e8` (_code @ 0x31f4e8, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00282b94. */
extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_0031f4e8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00293c98();
  FUN_00282b94(temp_v2,temp_v0);
  if (temp_v2 != 0) {
    piVar4 = (int *)(temp_v2 + 0x270);
    *(unsigned int *)(temp_v2 + *(int *)(temp_v2 + 0x270) * 4 + 600) = temp_v1;
    temp_v2 = *piVar4;
    *piVar4 = temp_v2 + 1;
    if (temp_v2 + 1 >= 6) {
      *piVar4 = 0;
    }
  }
  return 1;
}
