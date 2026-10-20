/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c5fdc` (_code @ 0x3c5fdc, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3328(void);
int FUN_00417674(unsigned int *);

extern unsigned int *DAT_00588c48; /* 0x588c48 */

extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00417674. */


unsigned int FUN_003c5fdc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00588c48;
  if (DAT_00588c48 != (unsigned int *)0x0) {
    temp_v0 = FUN_00163e40(*DAT_00588c48);
    if (temp_v0 != 0) {
      return 0;
    }
    FUN_00417674(puVar1);
    if (DAT_00588c48 != (unsigned int *)0x0) {
      FUN_002e3328();
      DAT_00588c48 = (unsigned int *)0x0;
    }
  }
  return 1;
}

} /* extern "C" */
