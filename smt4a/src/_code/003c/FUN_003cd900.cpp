/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cd900` (_code @ 0x3cd900, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scriptReadStackValueAsFloat(int);
int lmapSetFirstTransform(void);

/* Supplied declaration required: scriptReadStackValueAsFloat. */
/* Supplied declaration required: lmapSetFirstTransform. */


unsigned int FUN_003cd900(void)

{
/* irregular: 2 native warning(s); review required */
  scriptReadStackValueAsFloat(0);
  scriptReadStackValueAsFloat(1);
  scriptReadStackValueAsFloat(2);
  scriptReadStackValueAsFloat(3);
  scriptReadStackValueAsFloat(4);
  scriptReadStackValueAsFloat(5);
  lmapSetFirstTransform();
  return 1;
}

} /* extern "C" */
