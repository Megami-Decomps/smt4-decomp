/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2098` (_code @ 0x2c2098, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f554; /* 0x57f554 */

extern int FUN_00236038(unsigned int);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0038a1d4. */


unsigned char FUN_002c2098(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    temp_v0 = FUN_00236038(0);
    if (temp_v0 == 0) {
      temp_v1 = 0xff;
    }
    else {
      temp_v1 = 0xffffffff;
    }
    FUN_0038a1d4(temp_v1,10,1);
    return 0;
  }
  return *(int *)(DAT_0057f554 + 0x10) == *(int *)(DAT_0057f554 + 0x14);
}
