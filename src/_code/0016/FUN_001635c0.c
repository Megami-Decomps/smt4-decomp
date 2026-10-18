/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001635c0` (_code @ 0x1635c0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_001603d0(); /* 0x1603d0 */
extern int FUN_00161e44(); /* 0x161e44 */

/* Supplied declaration required: FUN_00160f84. */


void FUN_001635c0(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_001603d0;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_00161e44;
  }
  (*pcVar1)();
  FUN_00160f84();
  return;
}
