/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003339ec` (_code @ 0x3339ec, 0x1f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_0026140c(void);


void FUN_003339ec(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_0026140c();
  pbVar1[0x14] = pbVar1[0x14] & 0x80;
  pbVar1[0x17] = pbVar1[0x17] & 0x80;
  pbVar1[0x1c] = pbVar1[0x1c] & 0x80;
  pbVar1[0x1d] = pbVar1[0x1d] & 0x80;
  pbVar1[0x1f] = pbVar1[0x1f] & 0x80;
  *pbVar1 = (*pbVar1 & 0x80) | 2;
  pbVar1[1] = (pbVar1[1] & 0x80) | 0xb;
  pbVar1[2] = (pbVar1[2] & 0x80) | 0xb;
  pbVar1[3] = (pbVar1[3] & 0x80) | 0xc;
  pbVar1[4] = (pbVar1[4] & 0x80) | 0x21;
  pbVar1[5] = (pbVar1[5] & 0x80) | 6;
  pbVar1[6] = (pbVar1[6] & 0x80) | 6;
  pbVar1[7] = (pbVar1[7] & 0x80) | 6;
  pbVar1[8] = (pbVar1[8] & 0x80) | 4;
  pbVar1[9] = (pbVar1[9] & 0x80) | 4;
  pbVar1[10] = (pbVar1[10] & 0x80) | 4;
  pbVar1[0xb] = (pbVar1[0xb] & 0x80) | 0x33;
  pbVar1[0xc] = (pbVar1[0xc] & 0x80) | 1;
  pbVar1[0xd] = (pbVar1[0xd] & 0x80) | 0x21;
  pbVar1[0xe] = (pbVar1[0xe] & 0x80) | 0x22;
  pbVar1[0xf] = (pbVar1[0xf] & 0x80) | 1;
  pbVar1[0x10] = (pbVar1[0x10] & 0x80) | 0xb;
  pbVar1[0x11] = (pbVar1[0x11] & 0x80) | 1;
  pbVar1[0x13] = (pbVar1[0x13] & 0x80) | 1;
  pbVar1[0x15] = (pbVar1[0x15] & 0x80) | 1;
  pbVar1[0x16] = (pbVar1[0x16] & 0x80) | 1;
  pbVar1[0x18] = (pbVar1[0x18] & 0x80) | 1;
  pbVar1[0x19] = (pbVar1[0x19] & 0x80) | 0x23;
  pbVar1[0x1e] = (pbVar1[0x1e] & 0x80) | 0x34;
  pbVar1[0x12] = 0x82;
  pbVar1[0x1a] = (pbVar1[0x1a] & 0x80) | 0x21;
  return;
}

} /* extern "C" */
