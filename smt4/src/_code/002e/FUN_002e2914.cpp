/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2914` (_code @ 0x2e2914, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf694(unsigned int *, unsigned int);

extern unsigned int DAT_0049f970; /* 0x49f970 */
extern unsigned int DAT_0049f978; /* 0x49f978 */

extern unsigned int FUN_002592d8(unsigned int);
extern unsigned int FUN_00296cc8(void);
/* Supplied declaration required: FUN_002bf694. */


unsigned int FUN_002e2914(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002592d8(1);
  DAT_0049f970 = temp_v0;
  FUN_002bf694(&DAT_0049f978,temp_v1);
  return 1;
}

} /* extern "C" */
