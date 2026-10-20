/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330728` (_code @ 0x330728, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_00588120; /* 0x588120 */

extern int FUN_00184e20(unsigned int);


unsigned int FUN_00330728(void)

{
  int temp_v0;
  
  if (((DAT_00588120 != (unsigned int *)0x0) && (temp_v0 = FUN_00184e20(*DAT_00588120), temp_v0 != 0)) &&
     (*(char *)((int)DAT_00588120[3] + 0xd) == '\0')) {
    switch(*(unsigned int *)DAT_00588120[3]) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return 0;
    case 7:
      return 1;
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      return 2;
    case 0xe:
    case 0xf:
      return 3;
    }
  }
  return 5;
}

} /* extern "C" */
