/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032361c` (_code @ 0x32361c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00245318(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00293c98(void);
extern int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);


unsigned int FUN_0032361c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00293c98();
  temp_v1 = FUN_00245318(temp_v1,0xf);
  temp_v2 = FUN_002c0e9c();
  FUN_002c0e4c(temp_v1);
  FUN_0028df54(*(unsigned short *)(temp_v2 + temp_v0 * 2));
  return 1;
}
