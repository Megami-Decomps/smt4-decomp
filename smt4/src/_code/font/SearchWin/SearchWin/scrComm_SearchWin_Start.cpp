/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_SearchWin_Start` (_code @ 0x1c2a80, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be624(...);
int FUN_002bf810(...);
int FUN_002cedd8(...);

extern int DAT_0043e170; /* 0x43e170 */

extern int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf810. */
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002cedd8. */


unsigned int scrComm_SearchWin_Start(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((DAT_0043e170 == 0) && (temp_v0 = FUN_002c1d5c(), temp_v0 == 0)) {
    FUN_002cedd8();
    temp_v1 = FUN_00296cc8(0);
    temp_v0 = DAT_0043e170;
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        return 1;
      }
      FUN_002be624(DAT_0043e170 + 0xc4,"Searching...\n");
    }
    else {
      FUN_002be624(DAT_0043e170 + 0xc4,"Receiving data...\n");
    }
    *(unsigned char *)(temp_v0 + 0x14) = 1;
    *(unsigned int *)(temp_v0 + 8) = 1;
    FUN_002bf810(0x1000180);
  }
  return 1;
}

} /* extern "C" */
