/* NON_MATCHING: found outside every function: called by FUN_0016bb24; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0016b39c for reference (not compiled; its own view of the boundaries):

unsigned int * FUN_0016b39c(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  uVar1 = *param_1;
  *param_3 = *(unsigned int *)((uVar1 >> 0x1a) * 4 + 0x16b11c);
  param_3[1] = *(unsigned int *)(((uVar1 >> 0x14) & 0x3f) * 4 + 0x16b11c);
  param_3[2] = *(unsigned int *)(((uVar1 >> 0xf) & 0x1f) * 4 + 0x16b21c);
  param_3[3] = *(unsigned int *)(((uVar1 >> 10) & 0x1f) * 4 + 0x16b29c);
  param_3[4] = *(unsigned int *)(((uVar1 >> 6) & 0xf) * 4 + 0x16b31c);
  param_3[6] = *(unsigned int *)(((uVar1 >> 3) & 7) * 4 + 0x16b35c);
  param_3[7] = *(unsigned int *)((uVar1 & 7) * 4 + 0x16b37c);
  uVar1 = param_1[1];
  param_3[0xf] = uVar1 >> 0x1a;
  param_3[0xe] = (uVar1 >> 0x14) & 0x3f;
  param_3[0xd] = (uVar1 >> 0xe) & 0x3f;
  param_3[0xc] = (uVar1 >> 8) & 0x3f;
  param_3[0xb] = (uVar1 >> 6) & 3;
  param_3[10] = (uVar1 >> 4) & 3;
  param_3[9] = (uVar1 >> 2) & 3;
  param_3[8] = uVar1 & 3;
  uVar1 = param_1[2];
  param_3[0x10] = uVar1 >> 0x1d;
  param_3[0x11] = (uVar1 >> 0x1a) & 7;
  param_3[0x12] = (uVar1 >> 0x17) & 7;
  param_3[0x13] = (uVar1 >> 0x14) & 7;
  param_3[0x14] = (uVar1 >> 0x11) & 7;
  param_3[0x15] = (uVar1 >> 0xe) & 7;
  param_3[0x16] = (uVar1 >> 0xb) & 7;
  param_3[0x17] = (uVar1 >> 8) & 7;
  param_3[0x18] = (uVar1 >> 5) & 7;
  param_3[0x19] = (uVar1 >> 2) & 7;
  uVar2 = param_1[3];
  param_3[0x1a] = uVar2 >> 0x1d;
  param_3[0x1b] = (uVar2 >> 0x1a) & 7;
  param_3[0x1c] = (uVar2 >> 0x17) & 7;
  param_3[0x1d] = (uVar2 >> 0x14) & 7;
  param_3[0x1e] = (uVar2 >> 0x11) & 7;
  param_3[0x1f] = (uVar2 >> 0xe) & 7;
  param_3[0x20] = (uVar2 >> 0xb) & 7;
  param_3[0x21] = (uVar2 >> 8) & 7;
  param_3[0x22] = (uVar2 >> 5) & 7;
  param_3[0x23] = (uVar2 >> 2) & 7;
  param_3[0x24] = ((uVar2 >> 1) & 1) | ((uVar1 & 3) << 1);
  uVar1 = param_1[4];
  param_3[0x25] = uVar1 >> 0x1d;
  param_3[0x26] = (uVar1 >> 0x1a) & 7;
  param_3[0x27] = (uVar1 >> 0x17) & 7;
  param_3[0x28] = (uVar1 >> 0x14) & 7;
  param_3[0x29] = (uVar1 >> 0x11) & 7;
  param_3[0x2a] = (uVar1 >> 0xe) & 7;
  param_3[0x2b] = (uVar1 >> 0xb) & 7;
  param_3[0x2c] = (uVar1 >> 8) & 7;
  param_3[0x2d] = (uVar1 >> 5) & 7;
  param_3[0x2e] = (uVar1 >> 2) & 7;
  uVar3 = param_1[5];
  param_3[0x2f] = uVar3 >> 0x1d;
  param_3[0x30] = (uVar3 >> 0x1a) & 7;
  param_3[0x31] = (uVar3 >> 0x17) & 7;
  param_3[0x32] = (uVar3 >> 0x14) & 7;
  param_3[0x33] = (uVar3 >> 0x11) & 7;
  param_3[0x34] = (uVar3 >> 0xe) & 7;
  param_3[0x35] = (uVar3 >> 0xb) & 7;
  param_3[0x36] = (uVar3 >> 8) & 7;
  param_3[0x37] = (uVar3 >> 5) & 7;
  param_3[0x38] = (uVar3 >> 2) & 7;
  param_3[0x39] = ((uVar3 >> 1) & 1) | ((uVar1 & 3) << 1);
  uVar1 = param_1[6];
  param_3[0x3a] = uVar1 >> 0x1d;
  param_3[0x3b] = (uVar1 >> 0x1a) & 7;
  param_3[0x3c] = (uVar1 >> 0x17) & 7;
  param_3[0x3d] = (uVar1 >> 0x14) & 7;
  param_3[0x3e] = (uVar1 >> 0x11) & 7;
  param_3[0x3f] = (uVar1 >> 0xe) & 7;
  param_3[0x40] = (uVar1 >> 0xb) & 7;
  param_3[0x41] = (uVar1 >> 8) & 7;
  param_3[0x42] = (uVar1 >> 5) & 7;
  param_3[0x43] = (uVar1 >> 2) & 7;
  uVar4 = param_1[7];
  param_3[0x44] = uVar4 >> 0x1d;
  param_3[0x45] = (uVar4 >> 0x1a) & 7;
  param_3[0x46] = (uVar4 >> 0x17) & 7;
  param_3[0x47] = (uVar4 >> 0x14) & 7;
  param_3[0x48] = (uVar4 >> 0x11) & 7;
  param_3[0x49] = (uVar4 >> 0xe) & 7;
  param_3[0x4a] = (uVar4 >> 0xb) & 7;
  param_3[0x4b] = (uVar4 >> 8) & 7;
  param_3[0x4c] = (uVar4 >> 5) & 7;
  param_3[0x4d] = (uVar4 >> 2) & 7;
  param_3[0x4e] = ((uVar4 >> 1) & 1) | ((uVar1 & 3) << 1);
  uVar1 = param_1[8];
  param_3[0x4f] = uVar1 >> 0x1d;
  param_3[0x50] = (uVar1 >> 0x1a) & 7;
  param_3[0x51] = (uVar1 >> 0x17) & 7;
  param_3[0x52] = (uVar1 >> 0x14) & 7;
  param_3[0x53] = (uVar1 >> 0x11) & 7;
  param_3[0x54] = (uVar1 >> 0xe) & 7;
  param_3[0x55] = (uVar1 >> 0xb) & 7;
  param_3[0x56] = (uVar1 >> 8) & 7;
  param_3[0x57] = (uVar1 >> 5) & 7;
  param_3[0x58] = (uVar1 >> 2) & 7;
  uVar5 = param_1[9];
  param_3[0x59] = uVar5 >> 0x1d;
  param_3[0x5a] = (uVar5 >> 0x1a) & 7;
  param_3[0x5b] = (uVar5 >> 0x17) & 7;
  param_3[0x5c] = (uVar5 >> 0x14) & 7;
  param_3[0x5d] = (uVar5 >> 0x11) & 7;
  param_3[0x5e] = (uVar5 >> 0xe) & 7;
  param_3[0x5f] = (uVar5 >> 0xb) & 7;
  param_3[0x60] = (uVar5 >> 8) & 7;
  param_3[0x61] = (uVar5 >> 5) & 7;
  param_3[0x62] = (uVar5 >> 2) & 7;
  param_3[99] = ((uVar5 >> 1) & 1) | ((uVar1 & 3) << 1);
  param_3[5] = *(unsigned int *)
                (((uVar5 & 1) | ((uVar4 & 1) << 1) | ((uVar3 & 1) << 2) | ((uVar2 & 1) << 3)) * 4 +
                0x16b908);
  return param_1 + 10;
}
*/
#include "common.h"
