/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312dc8` (_code @ 0x312dc8, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00245318(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00293c98(void);
extern int FUN_002c0bcc(short);
extern short FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);


unsigned int FUN_00312dc8(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = FUN_00293c98();
  temp_v1 = FUN_00245318(temp_v1,0x11);
  temp_v2 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v1);
  temp_v3 = FUN_002c0bcc(temp_v0 - 1);
  FUN_0028df54(*(unsigned short *)(temp_v2 + temp_v3 * 2));
  return 1;
}
