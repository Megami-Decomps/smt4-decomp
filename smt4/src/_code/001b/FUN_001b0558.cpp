/* NON_MATCHING: found outside every function: branched to by FUN_0026c868; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001b0558 for reference (not compiled; its own view of the boundaries):

void FUN_001b0558(void)

{
  int iVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned char *puVar7;
  int iVar8;
  unsigned short *puVar9;
  int iVar10;
  int iVar11;
  unsigned char bVar12;
  unsigned char auStack_628 [1408];
  int uStack_a8;
  unsigned int uStack_a4;
  unsigned int auStack_a0 [2];
  unsigned char auStack_98 [128];
  
  iVar10 = DAT_0043dcf0;
  iVar3 = FUN_00282e70();
  uVar4 = FUN_00282ccc();
  iVar6 = DAT_0043da2c;
  if (iVar3 != 0) {
    puVar9 = (unsigned short *)FUN_002b63ac();
    iVar10 = FUN_002b45e8(*puVar9);
    if (iVar10 == 0) {
      *(unsigned char *)(iVar6 + 0x4cb) = 0;
    }
    else {
      *(unsigned char *)(iVar6 + 0x55c) = 1;
      *(unsigned char *)(iVar6 + 0x4cb) = 1;
      bVar2 = *(unsigned char *)(iVar10 + 0x58);
      if ((bVar2 & 0xf) == bVar2 >> 4) {
        FUN_0029ede8(0x25,bVar2 & 0xf,0xffffffff,0);
      }
      else {
        FUN_002907c4(&uStack_a8,bVar2 & 0xf);
        FUN_002907c4(auStack_a0,*(unsigned char *)(iVar10 + 0x58) >> 4);
        FUN_002be624(auStack_98,&LAB_00317284,&uStack_a8,auStack_a0);
        FUN_00295660(0x25,auStack_98);
      }
      FUN_0024bda8(auStack_98,*(unsigned int *)(iVar10 + 0x54) >> 0x14);
      FUN_00295660(0x26,auStack_98);
      FUN_0024bc98(auStack_98,*(unsigned char *)(iVar10 + 0x59));
      FUN_00295660(0x27,auStack_98);
      if (*(char *)(iVar10 + 0x5b) == '\0') {
        FUN_002be624(auStack_98,&LAB_0031728c);
      }
      if (*(char *)(iVar10 + 0x5b) == '\x01') {
        FUN_002be624(auStack_98,&LAB_00317298);
      }
      if (*(char *)(iVar10 + 0x5b) == '\x05') {
        FUN_002be624(auStack_98,&LAB_003172a0);
      }
      if (*(char *)(iVar10 + 0x5b) == '\x06') {
        FUN_002be624(auStack_98,&LAB_003172b0);
      }
      if (*(char *)(iVar10 + 0x5b) == '\a') {
        FUN_002be624(auStack_98,&LAB_003172bc);
      }
      if (*(char *)(iVar10 + 0x5b) == '\b') {
        FUN_002be624(auStack_98,&LAB_003172c8);
      }
      if (*(char *)(iVar10 + 0x5b) == '\t') {
        FUN_002be624(auStack_98,&LAB_003172d4);
      }
      FUN_00295660(0x28,auStack_98);
      FUN_001f4568(1,0,0,auStack_98);
      FUN_00295660(0x29,auStack_98);
      uStack_a4 = DAT_0043da30;
      uStack_a8 = 3;
      auStack_a0[0] = 0;
      FUN_00296ae8(*(unsigned int *)(iVar6 + 0x558),3,0xffffffff,0);
    }
    return;
  }
  if ((int)uVar4 < 0) {
    if (*(char *)(iVar10 + 0x66c) == '\f' || *(char *)(iVar10 + 0x66c) == '\r') {
      uVar5 = FUN_002c0cec(0x39,0);
      iVar6 = FUN_002c0cc4();
      uVar4 = FUN_002c0c74(uVar5);
      if (uVar4 >= 7) {
        iVar6 = iVar6 + 0x1f9;
      }
      else {
        iVar6 = 0;
      }
      FUN_0029ee6c(iVar6,0x323232ff);
    }
    if (*(char *)(iVar10 + 0x66c) == '\x0e') {
      uVar5 = FUN_002c0cec(0x39,0);
      iVar6 = FUN_002c0cc4();
      uVar4 = FUN_002c0c74(uVar5);
      if (uVar4 >= 8) {
        iVar6 = iVar6 + 0x24d;
      }
      else {
        iVar6 = 0;
      }
      FUN_0029ee6c(iVar6,0x323232ff);
    }
    if (*(char *)(iVar10 + 0x66c) == '\x04') {
      uVar5 = FUN_002c0cec(0x39,0);
      iVar6 = FUN_002c0cc4();
      uVar4 = FUN_002c0c74(uVar5);
      if (uVar4 >= 3) {
        iVar6 = iVar6 + 0xa9;
      }
      else {
        iVar6 = 0;
      }
      FUN_0029ee6c(iVar6,0x323232ff);
    }
    if (*(char *)(iVar10 + 0x66c) == '\x0f') {
      uVar5 = FUN_002c0cec(0x39,0);
      iVar6 = FUN_002c0cc4();
      uVar4 = FUN_002c0c74(uVar5);
      if (uVar4 >= 9) {
        iVar6 = iVar6 + 0x2a1;
      }
      else {
        iVar6 = 0;
      }
      FUN_0029ee6c(iVar6,0x323232ff);
    }
    if (*(char *)(iVar10 + 0x66c) == '\x02') {
      uVar5 = FUN_002c0cec(0x39,0);
      iVar3 = FUN_002c0cc4();
      iVar6 = FUN_002c0c74(uVar5);
      if (iVar6 != 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = 0;
      }
      FUN_0029ee6c(iVar3,0x323232ff);
    }
    if (*(char *)(iVar10 + 0x66c) == '\x03') {
      uVar5 = FUN_002c0cec(0x39,0);
      iVar10 = FUN_002c0cc4();
      uVar4 = FUN_002c0c74(uVar5);
      iVar6 = DAT_0043da2c;
      if (uVar4 >= 2) {
        iVar10 = iVar10 + 0x55;
      }
      else {
        iVar10 = 0;
      }
      *(unsigned int *)(DAT_0043da2c + 0x4cc) = 0x323232ff;
      *(unsigned int *)(iVar6 + 0x550) = 0;
      *(unsigned char *)(iVar6 + 0x554) = 0xff;
      if (iVar10 == 0) {
        *(unsigned char *)(iVar6 + 0x4cb) = 0;
      }
      else {
        *(unsigned int *)(iVar6 + 0x4d0) = 0;
        *(unsigned int *)(iVar6 + 0x4d4) = 0;
        *(unsigned int *)(iVar6 + 0x4d8) = 0;
        *(unsigned int *)(iVar6 + 0x4dc) = 0;
        *(unsigned int *)(iVar6 + 0x4e0) = 0;
        *(unsigned int *)(iVar6 + 0x4e4) = 0;
        *(unsigned int *)(iVar6 + 0x4e8) = 0;
        *(unsigned int *)(iVar6 + 0x4ec) = 0;
        *(unsigned int *)(iVar6 + 0x4f0) = 0;
        *(unsigned int *)(iVar6 + 0x4f4) = 0;
        *(unsigned int *)(iVar6 + 0x4f8) = 0;
        *(unsigned int *)(iVar6 + 0x4fc) = 0;
        *(unsigned int *)(iVar6 + 0x500) = 0;
        *(unsigned int *)(iVar6 + 0x504) = 0;
        *(unsigned int *)(iVar6 + 0x508) = 0;
        *(unsigned int *)(iVar6 + 0x50c) = 0;
        *(unsigned int *)(iVar6 + 0x510) = 0;
        *(unsigned int *)(iVar6 + 0x514) = 0;
        *(unsigned int *)(iVar6 + 0x518) = 0;
        *(unsigned int *)(iVar6 + 0x51c) = 0;
        *(unsigned int *)(iVar6 + 0x520) = 0;
        *(unsigned int *)(iVar6 + 0x524) = 0;
        *(unsigned int *)(iVar6 + 0x528) = 0;
        *(unsigned int *)(iVar6 + 0x52c) = 0;
        *(unsigned int *)(iVar6 + 0x530) = 0;
        *(unsigned int *)(iVar6 + 0x534) = 0;
        *(unsigned int *)(iVar6 + 0x538) = 0;
        *(unsigned int *)(iVar6 + 0x53c) = 0;
        *(unsigned int *)(iVar6 + 0x540) = 0;
        *(unsigned int *)(iVar6 + 0x544) = 0;
        iVar11 = 0;
        *(unsigned int *)(iVar6 + 0x548) = 0;
        iVar8 = 0;
        iVar3 = 0;
        *(unsigned int *)(iVar6 + 0x54c) = 0;
        do {
          if (*(char *)(iVar10 + iVar3) == '\0') {
            FUN_002c5df8(iVar6 + iVar11 * 0x40 + 0x4d0,iVar10 + iVar8,iVar3 - iVar8);
            break;
          }
          if (*(char *)(iVar10 + iVar3) == '\n') {
            FUN_002c5df8(iVar6 + iVar11 * 0x40 + 0x4d0,iVar10 + iVar8,iVar3 - iVar8);
            iVar8 = iVar3 + 1;
            iVar11 = iVar11 + 1;
          }
          bVar12 = SBORROW4(iVar11,1);
          iVar1 = iVar11 - 1;
          if (iVar11 < 2) {
            bVar12 = SBORROW4(iVar3 + 1,0x80);
            iVar1 = iVar3 - 0x7f;
            iVar3 = iVar3 + 1;
          }
        } while (iVar1 < 0 != bVar12);
        *(unsigned char *)(iVar6 + 0x55c) = 0;
        *(unsigned char *)(iVar6 + 0x4cb) = 1;
      }
      return;
    }
  }
  else {
    puVar7 = (unsigned char *)FUN_002b066c(uVar4 & 0xffff);
    if (puVar7 == (unsigned char *)0x0) {
      FUN_0029dc74(uVar4 & 0xffff,auStack_628);
      puVar7 = auStack_628;
    }
    FUN_0029da34(0,1,uVar4 & 0xffff,puVar7);
  }
  return;
}
*/
#include "common.h"
