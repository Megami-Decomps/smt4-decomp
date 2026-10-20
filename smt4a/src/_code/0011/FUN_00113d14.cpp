/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113d14` (_code @ 0x113d14, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ee978(unsigned int);
int FUN_002fbac6(int, unsigned int);

extern int FUN_00113d00(int, unsigned int);
/* Supplied declaration required: FUN_002ee978. */
/* Supplied declaration required: FUN_002fbac6. */


unsigned int FUN_00113d14(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002ee978(param_2);
  if (temp_v0 != 0) {
    temp_v1 = FUN_002ee978(param_2);
    temp_v0 = FUN_00113d00(param_1,temp_v1);
    if (temp_v0 == 0) {
      return 0;
    }
  }
  FUN_002fbac6(param_1 + 8,param_2);
  return 1;
}

} /* extern "C" */
