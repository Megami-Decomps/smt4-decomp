/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139a60` (_code @ 0x139a60, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00472a44; /* 0x472a44 */
extern unsigned int DAT_00472a50; /* 0x472a50 */
extern unsigned int DAT_00473850; /* 0x473850 */
extern unsigned int DAT_00473854; /* 0x473854 */

extern int FUN_00146660(unsigned int *, char *);


unsigned int FUN_00139a60(void)

{
  int temp_v0;
  
  if (DAT_00472a44 == 0) {
    temp_v0 = FUN_00146660(&DAT_00473850,"cfg:i");
    if (temp_v0 >= 0) {
      DAT_00473854 = DAT_00473850;
      DAT_00472a50 = DAT_00473850;
    }
    else if (temp_v0 == -0x26defc05) {
      return 0xd92103fb;
    }
  }
  DAT_00472a44 = DAT_00472a44 + 1;
  return 0;
}
