/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001634cc` (_code @ 0x1634cc, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_001602dc(); /* 0x1602dc */
extern int FUN_00161d50(); /* 0x161d50 */

/* Supplied declaration required: FUN_00160e90. */


void FUN_001634cc(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_001602dc;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_00161d50;
  }
  (*pcVar1)();
  FUN_00160e90();
  return;
}
