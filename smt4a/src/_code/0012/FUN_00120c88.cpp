/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120c88` (_code @ 0x120c88, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003104dc(...);
int FUN_003104ec(...);

extern unsigned char DAT_00594958; /* 0x594958 */
extern signed char DAT_00594969; /* 0x594969 */
extern signed char DAT_0059496a; /* 0x59496a */
extern signed char DAT_0059496c; /* 0x59496c */

/* Supplied declaration required: FUN_003104dc. */
/* Supplied declaration required: FUN_003104ec. */


void FUN_00120c88(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  
  FUN_003104ec(0xffffffff);
  FUN_003104dc(0x10);
  puVar1 = &DAT_00594958;
  if ((DAT_00594969 != '\0') || (DAT_0059496a != '\0')) {
    if (DAT_0059496c == '\0') {
      FUN_003104dc(0xffffffff);
    }
    if (puVar1[0x11] != '\0') {
      FUN_003104ec(0x20c8c413);
    }
    if (puVar1[0x12] != '\0') {
      FUN_003104ec(0);
    }
  }
  return;
}

} /* extern "C" */
