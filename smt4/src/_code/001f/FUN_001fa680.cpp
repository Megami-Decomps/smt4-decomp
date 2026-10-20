/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fa680` (_code @ 0x1fa680, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);

extern int g_mapGimic; /* 0x447a48 */

/* Supplied declaration required: asdMdlManagerMarkDestroy. */


void FUN_001fa680(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0x17;
  do {
    if (*(int *)(g_mapGimic + temp_v0 * 0x28 + 0x34) != 0) {
      asdMdlManagerMarkDestroy();
    }
    temp_v0 = temp_v0 - 1;
  } while (-1 < temp_v0);
  return;
}

} /* extern "C" */
