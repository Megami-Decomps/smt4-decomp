/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001399e4` (_code @ 0x1399e4, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00472a48; /* 0x472a48 */
extern int DAT_00472a4c; /* 0x472a4c */
extern unsigned int DAT_00472a50; /* 0x472a50 */
extern unsigned int DAT_00473854; /* 0x473854 */

extern int FUN_00146660(unsigned int *, unsigned int);


unsigned int FUN_001399e4(void)

{
  int temp_v0;
  
  if (DAT_00472a4c == 0) {
    temp_v0 = FUN_00146660(&DAT_00473854,0x429259);
    if (temp_v0 >= 0) {
      DAT_00472a48 = 1;
      DAT_00472a50 = DAT_00473854;
    }
    else if (temp_v0 == -0x26defc05) {
      return 0xd92103fb;
    }
  }
  DAT_00472a4c = DAT_00472a4c + 1;
  return 0;
}
