/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e28a0` (_code @ 0x2e28a0, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0049f970; /* 0x49f970 */
extern unsigned int DAT_0049f978; /* 0x49f978 */

extern unsigned int FUN_00259510(unsigned int);
extern unsigned int FUN_00296f60(void);
/* Supplied declaration required: FUN_002bf86c. */


unsigned int FUN_002e28a0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00259510(1);
  DAT_0049f970 = temp_v0;
  FUN_002bf86c(&DAT_0049f978,temp_v1);
  return 1;
}
