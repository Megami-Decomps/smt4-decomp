/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c754` (_code @ 0x11c754, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00471b10; /* 0x471b10 */
extern unsigned int DAT_00472ad8; /* 0x472ad8 */
extern unsigned int DAT_004e6cd0; /* 0x4e6cd0 */

extern int FUN_002c153c(unsigned int *, char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1570. */
extern unsigned int FUN_002c3290(char *);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


int FUN_0011c754(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  FUN_002c3aa8(&DAT_004e6cd0);
  if (DAT_00471b10 == 0) {
    FUN_002c1570();
    temp_v0 = FUN_002c3290("ndm:u");
    temp_v1 = FUN_002c153c(&DAT_00472ad8,"ndm:u",temp_v0,0);
    if (temp_v1 < 0) {
      FUN_002c3a24(&DAT_004e6cd0);
      return temp_v1;
    }
  }
  DAT_00471b10 = DAT_00471b10 + 1;
  FUN_002c3a24(&DAT_004e6cd0);
  return 0;
}
