/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275ac0` (_code @ 0x275ac0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(...);

extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_00236038. */
extern int FUN_002deb84(void);


unsigned int FUN_00275ac0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  if (0 < temp_v0) {
    temp_v0 = FUN_002deb84();
    temp_v1 = FUN_00236038(0);
    if ((temp_v0 < temp_v1) &&
       ((temp_v0 = FUN_00162ea4(), temp_v0 == 0 || (temp_v0 = FUN_002deb84(), temp_v0 < 1)))) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
