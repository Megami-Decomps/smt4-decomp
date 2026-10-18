/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c000` (_code @ 0x31c000, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0057f4a8; /* 0x57f4a8 */

extern int FUN_00163e40(unsigned int);
extern unsigned int FUN_00236038(unsigned int);
extern unsigned int FUN_002360dc(unsigned int);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0039b2d0. */


unsigned int FUN_0031c000(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_002360dc(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  temp_v3 = FUN_00236038(3);
  temp_v4 = FUN_002deb84();
  if (temp_v4 != 0) {
    temp_v4 = FUN_00163e40(DAT_0057f4a8);
    if (temp_v4 == 0) {
      return 1;
    }
  }
  else {
    FUN_0039b2d0(temp_v0,temp_v1,temp_v2,temp_v3);
    DAT_0057f4a8 = temp_v0;
  }
  return 0;
}
