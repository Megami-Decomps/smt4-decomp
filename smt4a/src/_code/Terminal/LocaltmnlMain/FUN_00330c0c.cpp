/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330c0c` (_code @ 0x330c0c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);

extern unsigned int *DAT_0056fccc; /* 0x56fccc */

extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */


unsigned int FUN_00330c0c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0056fccc;
  if (DAT_0056fccc != (unsigned int *)0x0) {
    temp_v0 = FUN_00163e40(*DAT_0056fccc);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 1) == '\0')) {
      return 1;
    }
    if (DAT_0056fccc != (unsigned int *)0x0) {
      FUN_0019a5a0();
      DAT_0056fccc = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
