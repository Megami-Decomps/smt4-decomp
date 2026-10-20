/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00160f90` (_code @ 0x160f90, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int);

typedef int romwright_code(...);
extern romwright_code *DAT_00589190; /* 0x589190 */
extern int DAT_005b4430; /* 0x5b4430 */
extern unsigned int DAT_005b4434; /* 0x5b4434 */

extern int FUN_0017e844(void);
/* Supplied declaration required: sysMemClear. */


unsigned int FUN_00160f90(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  DAT_005b4430 = param_1;
  sysMemClear(param_1,0x854);
  temp_v0 = FUN_0017e844();
  *(int *)(DAT_005b4430 + 0x800) = temp_v0;
  if (temp_v0 != 0) {
    DAT_005b4434 = 1;
    return 0;
  }
  if (DAT_00589190 != (romwright_code *)0x0) {
    (*DAT_00589190)(0x10000,0x100,0);
  }
  DAT_005b4430 = 0;
  return 0xffffffff;
}

} /* extern "C" */
