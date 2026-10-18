/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7020` (_code @ 0x2f7020, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00249b0c(void);
/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00293c98. */
extern int FUN_00296f60(void);
extern int FUN_002c615c(int, int);


unsigned int FUN_002f7020(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  FUN_00293c98();
  temp_v1 = FUN_00249b0c();
  if ((temp_v1 != 0) &&
     (temp_v1 = FUN_002c615c(*(short *)(temp_v1 + 0x1b4) * 100,(int)*(short *)(temp_v1 + 0x1b6)),
     temp_v1 <= temp_v0)) {
    FUN_0028df54(1);
    return 1;
  }
  FUN_0028df54(0);
  return 1;
}
