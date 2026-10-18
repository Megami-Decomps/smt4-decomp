/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312e0c` (_code @ 0x312e0c, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00245318(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00293c98(void);
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);


unsigned int FUN_00312e0c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00293c98();
  temp_v2 = FUN_00245318(temp_v2,0xe);
  temp_v3 = FUN_002c0e9c();
  FUN_002c0e4c(temp_v2);
  temp_v4 = 0xffffffff;
  switch(temp_v1) {
  case 0:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc);
    break;
  case 1:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 2);
    break;
  case 2:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 4);
    break;
  case 3:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 6);
    break;
  case 4:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 8);
    break;
  case 5:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 10);
  }
  FUN_0028df54(temp_v4);
  return 1;
}
