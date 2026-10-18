/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ffe40` (_code @ 0x2ffe40, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_0024c614. */
extern int FUN_00296cc8(void);


unsigned int FUN_002ffe40(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = 0;
  if (temp_v0 == 0) {
    temp_v1 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 10;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 0xb;
  }
  FUN_0024c614(DAT_0043427c,0x19,temp_v1);
  return 1;
}
