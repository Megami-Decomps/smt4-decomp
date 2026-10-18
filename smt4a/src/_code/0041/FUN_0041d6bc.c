/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041d6bc` (_code @ 0x41d6bc, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00557b40; /* 0x557b40 */
extern unsigned char DAT_00557d30; /* 0x557d30 */
extern unsigned char DAT_00557e14; /* 0x557e14 */

/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_0041d7a8. */


unsigned int * FUN_0041d6bc(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  
  if (param_3 != 0) {
    piVar1 = (int *)0xc;
    FUN_0016007c();
    if (piVar1 != (int *)0x0) {
      piVar1[2] = 0x3f800000;
      *piVar1 = (int)&DAT_00557d30;
      piVar1[1] = 0;
    }
  }
  else {
    piVar1 = (int *)0x20;
    FUN_0016007c();
    if (piVar1 != (int *)0x0) {
      piVar1[2] = 0;
      *piVar1 = (int)&DAT_00557b40;
      piVar1[1] = 0;
    }
  }
  puVar2 = (unsigned int *)0x20;
  FUN_0016007c(0x20,param_1);
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0x3c23d70a;
    *puVar2 = (unsigned int)&DAT_00557e14;
    puVar2[5] = (unsigned int)piVar1;
    puVar2[6] = 0;
    puVar2[7] = 0;
  }
  FUN_0041d7a8();
  (**(romwright_code **)(*piVar1 + 0x14))
            (piVar1,*(unsigned int *)(param_1 + 0x50),*(unsigned int *)(param_1 + 0x54),
             *(unsigned int *)(param_1 + 0x58));
  return puVar2;
}
