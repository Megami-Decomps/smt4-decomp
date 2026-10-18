/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005135d0` (_code @ 0x5135d0, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_00589518; /* 0x589518 */
extern unsigned int *DAT_0058951c; /* 0x58951c */


unsigned int FUN_005135d0(unsigned int *param_1)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)&DAT_00589518;
  if (DAT_00589518 != (romwright_code *)0x0) {
    puVar2 = DAT_0058951c;
  }
  if (!(DAT_00589518 != (romwright_code *)0x0 && puVar2 != (unsigned int *)0x0)) {
    temp_v0 = 0;
  }
  else {
    puVar2 = (unsigned int *)(*DAT_00589518)(8);
    temp_v0 = 0;
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      *param_1 = (unsigned int)puVar2;
      temp_v0 = 1;
    }
  }
  return temp_v0;
}
