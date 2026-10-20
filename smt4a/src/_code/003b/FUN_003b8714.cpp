/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8714` (_code @ 0x3b8714, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_003f0e20(unsigned int *, unsigned int);

extern unsigned int DAT_00571110; /* 0x571110 */
extern unsigned int DAT_00571114; /* 0x571114 */

extern unsigned int *btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_003b8714(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  puVar3 = (unsigned int *)btlGetMainState();
  FUN_003f0e20(puVar3,temp_v0);
  if (puVar3 != (unsigned int *)0x0) {
    if (temp_v1 >= 1) {
      temp_v2 = *puVar3 | DAT_00571110;
      puVar3[1] = DAT_00571114 | puVar3[1];
      *puVar3 = temp_v2;
    }
    else {
      temp_v2 = ~DAT_00571110;
      puVar3[1] = puVar3[1] & ~DAT_00571114;
      *puVar3 = *puVar3 & temp_v2;
    }
  }
  return 1;
}

} /* extern "C" */
