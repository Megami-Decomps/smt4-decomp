/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b7f8` (_code @ 0x10b7f8, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00111240(void);

typedef int romwright_code(...);
extern int DAT_00594a78; /* 0x594a78 */
extern int *DAT_00594a7c; /* 0x594a7c */

/* Supplied declaration required: FUN_00111240. */
extern int FUN_002e760a(unsigned int);


void FUN_0010b7f8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_00594a7c != (int *)0x0) {
    (**(romwright_code **)(*DAT_00594a7c + 8))();
  }
  DAT_00594a78 = DAT_00594a78 + 1;
  temp_v0 = FUN_002e760a(0x10b8);
  if (temp_v0 != 0) {
    FUN_00111240();
  }
  return;
}

} /* extern "C" */
