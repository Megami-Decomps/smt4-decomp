/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025ff44` (_code @ 0x25ff44, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0052fde8; /* 0x52fde8 */
extern unsigned char DAT_0052fe0c; /* 0x52fe0c */
extern unsigned char DAT_0052fe2c; /* 0x52fe2c */
extern int DAT_0057f584; /* 0x57f584 */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_00162ea4(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00333318. */
/* Supplied declaration required: FUN_003d2150. */


unsigned int FUN_0025ff44(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((DAT_0057f584 == 0) && (temp_v0 = FUN_00162ea4(), temp_v0 == 0)) {
    FUN_00333318();
    temp_v1 = FUN_00236038(0);
    temp_v0 = DAT_0057f584;
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 != 2) {
          return 1;
        }
        FUN_00100388(DAT_0057f584 + 0xc4,&DAT_0052fe2c);
      }
      else {
        FUN_00100388(DAT_0057f584 + 0xc4,&DAT_0052fe0c);
      }
    }
    else {
      FUN_00100388(DAT_0057f584 + 0xc4,&DAT_0052fde8);
    }
    *(unsigned char *)(temp_v0 + 0x14) = 1;
    *(unsigned int *)(temp_v0 + 8) = 1;
    FUN_003d2150(0x10000ce);
  }
  return 1;
}
