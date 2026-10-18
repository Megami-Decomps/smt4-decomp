/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312c10` (_code @ 0x312c10, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002451ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_002939f4(void);
extern int FUN_00296cc8(unsigned int);
extern int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);


unsigned int FUN_00312c10(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_002939f4();
  temp_v1 = FUN_002451ac(temp_v1,0xd);
  temp_v2 = FUN_002c0cc4();
  temp_v3 = FUN_002c0c74(temp_v1);
  if (temp_v0 < 1) {
    temp_v3 = 1;
  }
  else if (temp_v0 <= temp_v3) {
    temp_v3 = temp_v0;
  }
  FUN_0028dcb0(*(unsigned short *)(temp_v2 + (temp_v3 - 1) * 2));
  return 1;
}
