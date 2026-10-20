/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2a70` (_code @ 0x2f2a70, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030ed94(void);

extern signed char DAT_00594978; /* 0x594978 */

extern int FUN_002eb6ae(int, unsigned int);
/* Supplied declaration required: FUN_0030ed94. */


unsigned int FUN_002f2a70(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_0030ed94();
  if ((temp_v0 != 0) && ((DAT_00594978 != '\0' || (temp_v0 = FUN_002eb6ae(param_1,0x800), temp_v0 != 0))))
  {
    return 1;
  }
  return 0;
}

} /* extern "C" */
