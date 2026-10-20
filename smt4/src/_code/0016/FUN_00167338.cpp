/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167338` (_code @ 0x167338, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164cfc(void);

typedef int romwright_code(...);
extern int FUN_00164148(...); /* 0x164148 */
extern int FUN_00165bbc(...); /* 0x165bbc */

/* Supplied declaration required: FUN_00164cfc. */


void FUN_00167338(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = FUN_00164148;
  if (*param_1 != param_1[1]) {
    pcVar1 = FUN_00165bbc;
  }
  (*pcVar1)();
  FUN_00164cfc();
  return;
}

} /* extern "C" */
