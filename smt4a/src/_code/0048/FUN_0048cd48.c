/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048cd48` (_code @ 0x48cd48, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_00184c00. */
extern int FUN_002bf444(void);
/* Supplied declaration required: FUN_0048a378. */


void FUN_0048cd48(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00184c00(param_1 + 0x11b8,3,0);
    FUN_00184c00(param_1 + 0x1244,5,0);
    FUN_0048a378(param_1);
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  }
  if (*(int *)(param_1 + 8) == 1) {
    temp_v0 = 0;
    do {
      FUN_00163aa4(param_1 + temp_v0 * 0x8c + 0xc40);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 6);
    FUN_00163aa4(param_1 + 0x112c);
    FUN_00163aa4(param_1 + 0x10a0);
    if ((*(char *)(param_1 + 0xf86) != '\0') && (temp_v0 = FUN_002bf444(), temp_v0 != 0)) {
      *(unsigned int *)(param_1 + 4) = 2;
      *(unsigned int *)(param_1 + 8) = 0;
    }
  }
  return;
}
