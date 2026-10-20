/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd0f4` (_code @ 0x2fd0f4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f8554(void);

extern unsigned char g_flagBlock; /* 0x594958 */

/* Supplied declaration required: FUN_002f8554. */


void FUN_002fd0f4(void)

{
/* irregular: 1 native warning(s); review required */
  if ((*(signed char *)((unsigned char *)&g_flagBlock + 0xd)) != '\0') {
    FUN_002f8554();
  }
  return;
}

} /* extern "C" */
