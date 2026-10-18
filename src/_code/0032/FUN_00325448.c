/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00325448` (_code @ 0x325448, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00245318. */
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00293c98(void);
extern int FUN_00296f60(void);
extern int FUN_002c0e9c(void);


unsigned int FUN_00325448(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00293c98();
  FUN_00245318(temp_v1,4);
  temp_v2 = FUN_002c0e9c();
  FUN_0028df54(*(unsigned short *)(temp_v2 + temp_v0 * 4));
  return 1;
}
