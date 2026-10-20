/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032ae3c` (_code @ 0x32ae3c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c18e4(unsigned int);
int FUN_002c198c(unsigned int);
int FUN_002c1b64(unsigned int, int);
int FUN_0033149c(unsigned int);

extern unsigned int DAT_0043dc88; /* 0x43dc88 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_0033149c. */


unsigned int FUN_0032ae3c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = DAT_0043dc88;
  FUN_002c1b64(DAT_0044ea00,0);
  FUN_0033149c(temp_v0);
  FUN_002c198c(DAT_0044ea00);
  FUN_002c18e4(DAT_0044ea00);
  return 0;
}

} /* extern "C" */
