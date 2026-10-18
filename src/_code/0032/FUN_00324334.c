/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324334` (_code @ 0x324334, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00245318. */
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00293c98(void);
extern int FUN_00296f60(unsigned int);
extern int FUN_002c0e9c(void);


unsigned int FUN_00324334(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00293c98();
  FUN_00245318(temp_v2,5);
  temp_v3 = FUN_002c0e9c();
  temp_v4 = 0;
  if (temp_v1 != 1) {
    if (temp_v1 != 2) {
      if (temp_v1 == 3) {
        temp_v4 = *(unsigned short *)(temp_v3 + temp_v0 * 6 + 4);
      }
    }
    else {
      temp_v4 = *(unsigned short *)(temp_v3 + temp_v0 * 6 + 2);
    }
  }
  else {
    temp_v4 = *(unsigned short *)(temp_v3 + temp_v0 * 6);
  }
  FUN_0028df54(temp_v4);
  return 1;
}
