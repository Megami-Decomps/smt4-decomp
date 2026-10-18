/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2980` (_code @ 0x1c2980, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e170; /* 0x43e170 */

extern int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf9e8. */
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002ced28. */


unsigned int FUN_001c2980(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((DAT_0043e170 == 0) && (temp_v0 = FUN_002c1f28(), temp_v0 == 0)) {
    FUN_002ced28();
    temp_v1 = FUN_00296f60(0);
    temp_v0 = DAT_0043e170;
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        return 1;
      }
      FUN_002be7fc(DAT_0043e170 + 0xc4,"Searching...\n");
    }
    else {
      FUN_002be7fc(DAT_0043e170 + 0xc4,"Receiving data...\n");
    }
    *(unsigned char *)(temp_v0 + 0x14) = 1;
    *(unsigned int *)(temp_v0 + 8) = 1;
    FUN_002bf9e8(0x1000180);
  }
  return 1;
}
