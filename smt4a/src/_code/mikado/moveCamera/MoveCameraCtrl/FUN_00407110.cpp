/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00407110` (_code @ 0x407110, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c174(...);
int FUN_0013c884(...);
int FUN_001418fc(...);
int FUN_0014f0dc(...);
int FUN_001523b8(...);
int FUN_00178b04(...);
int FUN_0036b824(...);
int FUN_003f9e80(...);
int FUN_00407598(...);

extern int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_001418fc. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_0036b824. */
/* Supplied declaration required: FUN_003f9e80. */
/* Supplied declaration required: FUN_00407598. */


void FUN_00407110(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int uStack_20;
  
  uStack_20 = param_4;
  FUN_0013c174(param_2,&uStack_20,1);
  temp_v0 = 0x48;
  FUN_00178b04(0x48,"c:\\SMT4F\\SMT4F\\sdds4\\program\\mikado\\moveCamera\\MoveCameraCtrl.cpp",0x29)
  ;
  if (temp_v0 != 0) {
    FUN_003f9e80();
  }
  param_1[0x165] = temp_v0;
  *param_1 = (unsigned int)*(unsigned short *)(*(int *)(temp_v0 + 0x34) + 0x4c);
  param_1[2] = (unsigned int)*(unsigned short *)(*(int *)(temp_v0 + 0x34) + 0x94);
  FUN_0013c884(param_1 + 0x14,1);
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0x40a00000;
  param_1[0x15f] = 0x3f800000;
  param_1[0x160] = 0x461c4000;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0x41f00000;
  param_1[0x161] = 0;
  param_1[0x162] = 0x3f800000;
  param_1[0x163] = 0;
  param_1[0x164] = 0x40a00000;
  FUN_001418fc(param_1 + 0x14);
  FUN_0014f0dc(param_1 + 0x14,param_1 + 0x157,param_1 + 0x15a,param_1 + 0x161);
  FUN_001523b8(param_1 + 0x14,1);
  FUN_0036b824(param_1 + 0x14);
  *(unsigned int **)(DAT_0056fcc0 + 0xc) = param_1 + 0x14;
  if (0 < (int)*param_1) {
    param_1[1] = 0;
    param_1[0x166] = 0xffffffff;
    temp_v1 = **(int **)(*(int *)(param_1[0x165] + 0x34) + 0x48);
    puVar3 = *(unsigned int **)(temp_v1 + 0x30);
    temp_v0 = *(unsigned int *)(temp_v1 + 0x20);
    temp_v2 = *(unsigned int *)(temp_v1 + 0x24);
    param_1[0x16d] = *(unsigned int *)(temp_v1 + 0x1c);
    param_1[0x16e] = temp_v0;
    param_1[0x16f] = temp_v2;
    temp_v0 = *puVar3;
    temp_v2 = puVar3[1];
    param_1[0x172] = puVar3[2];
    param_1[0x170] = temp_v0;
    param_1[0x171] = temp_v2;
    FUN_00407598();
  }
  return;
}

} /* extern "C" */
