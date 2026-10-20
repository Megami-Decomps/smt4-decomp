/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102798` (_code @ 0x102798, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4ed4(unsigned int);

extern signed char DAT_00446db0; /* 0x446db0 */
extern signed char DAT_00446db1; /* 0x446db1 */
extern unsigned int DAT_00446dbc; /* 0x446dbc */

/* Supplied declaration required: FUN_002c4ed4. */
extern int FUN_002c5210(void);


unsigned int FUN_00102798(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_00446db0 == '\0') && (temp_v0 = FUN_002c5210(), temp_v0 == 1)) && (DAT_00446db1 != '\0')) {
    FUN_002c4ed4(DAT_00446dbc);
  }
  return 0;
}

} /* extern "C" */
