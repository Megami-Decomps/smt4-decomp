/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312854` (_code @ 0x312854, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00293c98(void);
/* Supplied declaration required: FUN_00296f60. */
extern int FUN_003384ac(unsigned int, unsigned short);


unsigned int FUN_00312854(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00293c98();
  temp_v3 = FUN_003384ac(temp_v2,temp_v0);
  if (temp_v3 == 0) {
    temp_v4 = 0xffffffff;
  }
  else {
    temp_v4 = 0xffffffff;
    if (temp_v1 == 0) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 2);
    }
    else if (temp_v1 == 1) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 4);
    }
    else if (temp_v1 == 2) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 6);
    }
    else if (temp_v1 == 3) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 8);
    }
  }
  FUN_0028df54(temp_v4);
  return 1;
}
