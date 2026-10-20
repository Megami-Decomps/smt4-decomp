/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001df770` (_code @ 0x1df770, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001dbe18(void);

typedef int romwright_code(...);
extern int FUN_001dba28(...); /* 0x1dba30 */
extern int FUN_001dee18(...); /* 0x1dee18 */

/* Supplied declaration required: FUN_001dbe18. */


void FUN_001df770(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_001dba28;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_001dee18;
  }
  (*pcVar1)();
  FUN_001dbe18();
  return;
}

} /* extern "C" */
