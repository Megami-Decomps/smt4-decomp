/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd624` (_code @ 0x2fd624, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineUrlEnsureParsed(void);

/* Supplied declaration required: onlineUrlEnsureParsed. */


unsigned short FUN_002fd624(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  
  onlineUrlEnsureParsed();
  temp_v0 = *(unsigned short *)(*(int *)(param_1 + 4) + 6);
  return (temp_v0 << 8) | (temp_v0 >> 8);
}

} /* extern "C" */
