/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348450` (_code @ 0x348450, 0xe0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00420358; /* 0x420358 */
extern unsigned char DAT_00420488; /* 0x420488 */
extern unsigned char DAT_004204d0; /* 0x4204d0 */

/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_00348548. */


unsigned int * FUN_00348450(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0x3f800000;
  temp_v1 = 0;
  if (param_3 != 0) {
    piVar1 = (int *)0xc;
    FUN_002c23f8();
    if (piVar1 != (int *)0x0) {
      puVar3 = &DAT_004204d0;
      piVar1[2] = temp_v0;
      *piVar1 = (int)puVar3;
      piVar1[1] = 0;
    }
  }
  else {
    piVar1 = (int *)0x20;
    FUN_002c23f8();
    if (piVar1 != (int *)0x0) {
      puVar3 = &DAT_00420358;
      piVar1[2] = temp_v1;
      *piVar1 = (int)puVar3;
      piVar1[1] = 0;
    }
  }
  puVar2 = (unsigned int *)0x68;
  FUN_002c23f8(0x68,param_1);
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0x3c23d70a;
    *puVar2 = (unsigned int)&DAT_00420488;
    puVar2[5] = (unsigned int)piVar1;
    puVar2[0x16] = temp_v1;
    puVar2[0x17] = temp_v0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
  }
  FUN_00348548();
  (**(romwright_code **)(*piVar1 + 0x14))
            (piVar1,*(unsigned int *)(param_1 + 0x40),*(unsigned int *)(param_1 + 0x44),
             *(unsigned int *)(param_1 + 0x48));
  return puVar2;
}
