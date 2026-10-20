/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a0bc` (_code @ 0x35a0bc, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e5478(unsigned int, unsigned int);
int linkHolderRunAll(unsigned int, int *);

/* Supplied declaration required: FUN_003e5478. */
/* Supplied declaration required: linkHolderRunAll. */


void FUN_0035a0bc(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
  *param_1 = 0x3f99999a;
  param_1[1] = 0x40a9999a;
  param_1[2] = 0x3f000000;
  switch(param_2) {
  case 0:
    temp_v0 = 1;
    temp_v1 = 0;
    break;
  case 1:
    temp_v0 = 1;
    temp_v1 = 1;
    break;
  case 2:
    temp_v0 = 1;
    temp_v1 = 0x27;
    break;
  case 3:
    temp_v0 = 0x37;
    temp_v1 = 0x25;
    break;
  case 4:
    temp_v0 = 1;
    temp_v1 = 2;
    break;
  case 5:
    temp_v0 = 1;
    temp_v1 = 0x14;
    break;
  case 6:
    temp_v0 = 6;
    temp_v1 = 3;
    break;
  case 7:
    temp_v0 = 10;
    temp_v1 = 0x16;
    break;
  case 8:
    temp_v0 = 0xd;
    temp_v1 = 0xe;
    break;
  case 9:
    temp_v0 = 0x1e;
    temp_v1 = 8;
    break;
  case 10:
    param_1[0xc] = 0x26;
    temp_v1 = 0x23;
    *param_1 = 0x3f800000;
    param_1[1] = 0x40accccd;
    param_1[2] = 0x3fc00000;
    FUN_003e5478(param_1[7],temp_v1);
    uStack_18 = *param_1;
    uStack_14 = param_1[1];
    uStack_10 = param_1[2];
    linkHolderRunAll(param_1[7],&uStack_18);
    return;
  default:
    temp_v1 = 0;
    param_1[0xc] = 1;
    FUN_003e5478(param_1[7],temp_v1);
    uStack_18 = *param_1;
    uStack_14 = param_1[1];
    uStack_10 = param_1[2];
    linkHolderRunAll(param_1[7],&uStack_18);
    return;
  }
  param_1[0xc] = temp_v0;
  FUN_003e5478(param_1[7],temp_v1);
  uStack_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  linkHolderRunAll(param_1[7],&uStack_18);
  return;
}

} /* extern "C" */
