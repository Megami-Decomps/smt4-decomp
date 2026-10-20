/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303460` (_code @ 0x303460, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00395904(void);

extern int *DAT_005806a4; /* 0x5806a4 */

/* Supplied declaration required: FUN_00395904. */


void FUN_00303460(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  
  piVar1 = DAT_005806a4;
  piVar2 = DAT_005806a4 + 8;
  *(unsigned char *)(DAT_005806a4 + 0x88) = 0;
  *piVar1 = param_1;
  piVar1[1] = 0;
  piVar1[2] = 0;
  temp_v0 = *piVar2;
  piVar1[0xa6] = 0;
  piVar1[0xb] = temp_v0;
  piVar1[0xc] = piVar1[9];
  piVar1[0xd] = piVar1[10];
  if (param_1 != 0) {
    piVar1[0x84] = 0;
    piVar1[0x85] = 0;
    *(unsigned char *)(piVar1 + 0x2d) = 0;
    *(unsigned char *)((int)piVar1 + 0xb5) = 0;
    *(unsigned short *)((int)piVar1 + 0xb6) = 10;
    *(unsigned short *)(piVar1 + 0x2e) = 0;
    piVar1[0x2f] = 0;
    piVar1[0x30] = 0;
    piVar1[0x31] = 0x3f800000;
    if (param_1 == 8 || param_1 == 9) {
      piVar1[0xa6] = 0x43340000;
    }
  }
  FUN_00395904();
  return;
}

} /* extern "C" */
