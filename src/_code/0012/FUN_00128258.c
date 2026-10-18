/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128258` (_code @ 0x128258, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00465710; /* 0x465710 */
extern int DAT_00465714; /* 0x465714 */
extern int DAT_00472a50; /* 0x472a50 */

/* Supplied declaration required: FUN_002bce48. */
extern unsigned int FUN_002c153c(unsigned int *, char *, unsigned int, unsigned int);
extern int FUN_002c1570(void);
extern unsigned int FUN_002c3290(char *);


unsigned int FUN_00128258(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_00465714 == 0) {
    temp_v0 = FUN_002c1570();
    if (temp_v0 < 0) {
      FUN_002bce48();
    }
    if (DAT_00472a50 != 0) {
      temp_v2 = 0xd8a103f9;
    }
    else {
      temp_v1 = FUN_002c3290("cfg:u");
      temp_v2 = FUN_002c153c((unsigned int *)&DAT_00472a50,"cfg:u",temp_v1,0);
      if ((temp_v2 & 0x80000000) != 0) {
        temp_v2 = 0xd92103fb;
      }
    }
    if ((temp_v2 & 0x80000000) == 0) {
      DAT_00465710 = 1;
    }
    else if (temp_v2 == 0xd92103fb) {
      return 0xd92103fb;
    }
  }
  DAT_00465714 = DAT_00465714 + 1;
  return 0;
}
