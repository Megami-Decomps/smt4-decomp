/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002964fc` (_code @ 0x2964fc, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);

extern unsigned char DAT_00557c60; /* 0x557c60 */
extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: asdOperatorNew. */
extern unsigned int *FUN_003e5d10(void);


void FUN_002964fc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  asdOperatorNew();
  puVar1 = (unsigned int *)0x0;
  if (param_1 != 0) {
    puVar1 = (unsigned int *)FUN_003e5d10();
    *puVar1 = (unsigned int)&DAT_00557c60;
  }
  *(unsigned int **)(g_lmapScene + 0x1a8) = puVar1;
  return;
}

} /* extern "C" */
