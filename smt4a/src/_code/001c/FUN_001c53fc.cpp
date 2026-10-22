/* NON_MATCHING: found outside every function: branched to by FUN_001bcd54; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001c53fc for reference (not compiled; its own view of the boundaries):

unsigned long long FUN_001c53fc(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  
  if ((param_2 & 0x80000000) == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar1 = param_2 & 0x7fffffff;
  if (uVar1 == 0) {
    if (param_3 >> 0x10 == 0) {
      param_3 = param_3 << 0x10;
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0;
    }
    if (param_3 >> 0x18 == 0) {
      param_3 = param_3 << 8;
      iVar2 = iVar2 + 8;
    }
    if (param_3 >> 0x1c == 0) {
      param_3 = param_3 << 4;
      iVar2 = iVar2 + 4;
    }
    if (param_3 >> 0x1e == 0) {
      param_3 = param_3 << 2;
      iVar2 = iVar2 + 2;
    }
    if (-1 < (int)param_3) {
      param_3 = param_3 << 1;
      iVar2 = iVar2 + 1;
    }
    return CONCAT44(param_3,(param_1 - 0x1f) - iVar2);
  }
  if (uVar1 >> 0x10 == 0) {
    uVar1 = param_2 << 0x10;
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0;
  }
  if (uVar1 >> 0x18 == 0) {
    uVar1 = uVar1 << 8;
    iVar2 = iVar2 + 8;
  }
  if (uVar1 >> 0x1c == 0) {
    uVar1 = uVar1 << 4;
    iVar2 = iVar2 + 4;
  }
  if (uVar1 >> 0x1e == 0) {
    uVar1 = uVar1 << 2;
    iVar2 = iVar2 + 2;
  }
  if (-1 < (int)uVar1) {
    iVar2 = iVar2 + 1;
  }
  if (-1 < (int)uVar1) {
    uVar1 = uVar1 << 1;
  }
  return CONCAT44(uVar1 | (param_3 >> ((0x20U - iVar2) & 0xff)),(param_1 - iVar2) + 1);
}
*/
#include "common.h"
