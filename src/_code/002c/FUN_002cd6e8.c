/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd6e8` (_code @ 0x2cd6e8, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0024bd4c(void);
extern unsigned int FUN_00259510(void);
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_002b45f8(unsigned int, unsigned int, unsigned int);


unsigned int FUN_002cd6e8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00259510();
  temp_v1 = FUN_0024bd4c();
  temp_v2 = FUN_002b45f8(temp_v0,temp_v1,0x12);
  FUN_0028df54(temp_v2 == 0);
  return 1;
}
