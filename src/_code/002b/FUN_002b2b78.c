/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2b78` (_code @ 0x2b2b78, 0x16 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0046513c; /* 0x46513c */
extern unsigned int DAT_00465140; /* 0x465140 */
extern unsigned int DAT_00465144; /* 0x465144 */
extern unsigned int DAT_00465148; /* 0x465148 */
extern int DAT_0046514c; /* 0x46514c */
extern int DAT_00465150; /* 0x465150 */
extern int DAT_00465154; /* 0x465154 */
extern int DAT_00465158; /* 0x465158 */
extern unsigned int uRam00565910; /* 0x565910 */

/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */


unsigned int FUN_002b2b78(void)

{
/* irregular: irregular input(s): in_cr8; 2 native warning(s); review required */
  unsigned int in_cr8;
  unsigned char temp_v0 [4];
  
  uRam00565910 = 0x7c8;
  coprocessor_load(0xf,in_cr8,temp_v0);
  if ((DAT_0046513c >= 0x2b2c89) || (DAT_0046513c + DAT_0046514c < 0x2b2c88)) {
    if ((DAT_00465140 < 0x2b2c89) && (DAT_00465150 + DAT_00465140 >= 0x2b2c88)) {
      uRam00565910 = 0x7c8;
      return 1;
    }
    if ((DAT_00465144 < 0x2b2c89) && (DAT_00465154 + DAT_00465144 >= 0x2b2c88)) {
      uRam00565910 = 0x7c8;
      return 2;
    }
    if ((DAT_00465148 < 0x2b2c89) && (DAT_00465158 + DAT_00465148 >= 0x2b2c88)) {
      uRam00565910 = 0x7c8;
      return 3;
    }
  }
  return 0;
}
