/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270bbc` (_code @ 0x270bbc, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020214c(void);

extern unsigned char LAB_00270bd4; /* 0x270bd4 */
extern unsigned char *g_btlStage; /* 0x57a4f4 */

/* Supplied declaration required: FUN_0020214c. */


void FUN_00270bbc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = &LAB_00270bd4;
  FUN_0020214c();
  g_btlStage = puVar1;
  return;
}

} /* extern "C" */
