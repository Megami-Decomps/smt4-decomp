/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9b84` (_code @ 0x3a9b84, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0014aa78(void);
extern int FUN_0014bef4(short);
extern short FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern unsigned int FUN_003ef960(unsigned int, unsigned int);


unsigned int FUN_003a9b84(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0x11;
  temp_v1 = FUN_00236038(0);
  if (temp_v1 != 0) {
    temp_v4 = 0x12;
  }
  temp_v2 = FUN_0014aa78();
  temp_v4 = FUN_003ef960(temp_v2,temp_v4);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v4);
  temp_v3 = FUN_0014bef4(temp_v0 - 1);
  FUN_003283ac(*(unsigned short *)(temp_v1 + temp_v3 * 2));
  return 1;
}
