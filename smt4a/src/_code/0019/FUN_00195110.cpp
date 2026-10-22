/* NON_MATCHING: found outside every function: branched to by FUN_0017909c; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00195110 for reference (not compiled; its own view of the boundaries):

void FUN_00195110(void)

{
  unsigned char *pbVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x10245;
    *DAT_005b40e0 = 1;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x10244;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x80289;
    *DAT_005b40e0 = -0x80000000;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xb0229;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0252;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0251;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0254;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x10253;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0242;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf024a;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x5025e;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  func_0x001a9124(0x101,7,0);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf011f;
    *DAT_005b40e0 = 0x10140;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0100;
    *DAT_005b40e0 = 0xe40100;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0101;
    *DAT_005b40e0 = 0x1010000;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0107;
    *DAT_005b40e0 = 8000;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0105;
    *DAT_005b40e0 = -0xff00f0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x10061;
    *DAT_005b40e0 = 3;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x10062;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0065;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0066;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0067;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x10118;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf011b;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x7006a;
    *DAT_005b40e0 = 0xffffff;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0102;
    *DAT_005b40e0 = 3;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x80126;
    *DAT_005b40e0 = 0x3000000;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  func_0x001a9124(0x40,0x10,0);
  func_0x001a9124(0x50,7,0x1f1f1f1f);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0058;
    *DAT_005b40e0 = 0x100;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf004c;
    *DAT_005b40e0 = 1;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf006f;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x20060;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xc0069;
    *DAT_005b40e0 = 0x20000;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = 0xf;
    DAT_005b40e0[1] = 0xf0113;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = 0xf;
    DAT_005b40e0[1] = 0xf0112;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0114;
    *DAT_005b40e0 = 3;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0115;
    *DAT_005b40e0 = 3;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  iVar4 = 0;
  do {
    if (DAT_005b40e0 < DAT_005b40e4) {
      *DAT_005b40e0 = iVar4 << 8;
      DAT_005b40e0[1] = 0xf01c5;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
    iVar2 = 0;
    do {
      func_0x001a9124(0x1c8,8,0);
      iVar2 = iVar2 + 8;
    } while (iVar2 < 0x100);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf0290;
    *DAT_005b40e0 = -0x80000000;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  iVar4 = 0;
  do {
    func_0x001a9124(0x291,8,0);
    iVar4 = iVar4 + 2;
  } while (iVar4 < 0x60);
  if (DAT_0058918c == (code *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*DAT_0058918c)(0x10000,0x100,0,0x4000);
  }
  FUN_002e6354(uVar3,0x4000);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf02cb;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  FUN_001a91ec(0x2cc,0x200,uVar3);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf029b;
    *DAT_005b40e0 = 0x200;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  FUN_001a91ec(0x29c,0xe00,uVar3);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf02bf;
    *DAT_005b40e0 = 0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_00589190 != (code *)0x0) {
    (*DAT_00589190)(0x10000,0x100,0,uVar3);
  }
  iVar4 = 0;
  do {
    if (DAT_005b40e0 < DAT_005b40e4) {
      DAT_005b40e0[1] = (iVar4 + 0x2b1U) | 0xf0000;
      *DAT_005b40e0 = 0;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  func_0x001a9124(0x28b,2);
  func_0x001a9124(0x205,0x24,0);
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf01d4;
    *DAT_005b40e0 = 1;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0xf00ae;
    *DAT_005b40e0 = -0x1030710;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  iVar4 = DAT_005b40f4;
  iVar2 = 0;
  do {
    pbVar1 = (unsigned char *)(iVar4 + iVar2 + 0x16b1);
    if ((*pbVar1 != 0) && (DAT_005b40e0 < DAT_005b40e4)) {
      *DAT_005b40e0 = *(int *)(iVar4 + iVar2 * 4 + 0x1300);
      DAT_005b40e0[1] = *(unsigned int *)(iVar2 * 4 + 0x64136c) | ((unsigned int)*pbVar1 << 0x10);
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xbd);
  return;
}
*/
#include "common.h"
