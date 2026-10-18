/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9a30` (_code @ 0x3a9a30, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0014aa78(void);
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern unsigned int FUN_003ef960(unsigned int, unsigned int);


unsigned int FUN_003a9a30(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_0014aa78();
  temp_v1 = FUN_003ef960(temp_v1,0xd);
  temp_v2 = FUN_00192798();
  temp_v3 = FUN_00192748(temp_v1);
  if (temp_v0 < 1) {
    temp_v3 = 1;
  }
  else if (temp_v0 <= temp_v3) {
    temp_v3 = temp_v0;
  }
  FUN_003283ac(*(unsigned short *)(temp_v2 + (temp_v3 - 1) * 2));
  return 1;
}
