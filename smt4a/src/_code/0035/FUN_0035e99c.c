/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e99c` (_code @ 0x35e99c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005710e0; /* 0x5710e0 */

extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_0031a218. */
extern int FUN_0034919c(void);


unsigned int FUN_0035e99c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  DAT_005710e0 = FUN_00236038();
  temp_v0 = FUN_0034919c();
  if (temp_v0 != 0) {
    FUN_0031a218(DAT_005710e0,0);
  }
  return 1;
}
