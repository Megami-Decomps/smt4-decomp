/* NON_MATCHING: romwright 0.5.0 decompilation of `asdLoadFileIsPatched` (_code @ 0x2b0404, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002aa568(...);

/* Supplied declaration required: FUN_002aa568. */


void asdLoadFileIsPatched(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_002aa568(param_1,"battle/event/BtlEvent064/BtlEvent064.mbm");
  if ((temp_v0 != 0) && (temp_v0 = param_1, FUN_002aa568(param_1,"event/e007/e007.mbm"), temp_v0 != 0)) {
    FUN_002aa568(param_1,"event/quest/quest122.mbm");
  }
  return;
}

} /* extern "C" */
