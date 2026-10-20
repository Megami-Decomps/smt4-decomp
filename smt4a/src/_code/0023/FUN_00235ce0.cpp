/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235ce0` (_code @ 0x235ce0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00492088(int);

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_00492088. */
extern int FUN_004931e0(void);


unsigned int FUN_00235ce0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_004931e0();
  if ((temp_v0 != 0) && (*(int *)(DAT_00587f28 + 0x58) == 0)) {
    FUN_00492088(DAT_00587f28 + 0x68);
  }
  return 0;
}

} /* extern "C" */
