/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00370228` (_code @ 0x370228, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcpy(unsigned int *, unsigned int);

extern unsigned int DAT_005f1658; /* 0x5f1658 */
extern unsigned int DAT_005f1660; /* 0x5f1660 */

extern unsigned int scrGetArg(void);
extern unsigned int scrGetArgString(unsigned int);
/* Supplied declaration required: libc_strcpy. */


unsigned int FUN_00370228(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArgString(1);
  DAT_005f1658 = temp_v0;
  libc_strcpy(&DAT_005f1660,temp_v1);
  return 1;
}

} /* extern "C" */
