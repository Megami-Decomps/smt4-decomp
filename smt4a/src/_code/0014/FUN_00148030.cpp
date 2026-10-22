/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00148030` (_code @ 0x148030, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN18WindowStatusResultC1Ej(unsigned int [3], int);
int _ZN18WindowStatusResultC1Ev(...);

extern int FUN_001585d4(int);
/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */
/* Supplied declaration required: _ZN18WindowStatusResultC1Ev. */


void FUN_00148030(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned long long temp_v2;
  unsigned int temp_v3 [3];
  
  puVar3 = temp_v3;
  temp_v0 = FUN_001585d4(param_1 + 8);
  *(unsigned char *)(temp_v0 + 0x314) = 1;
  puVar2 = (unsigned int *)_ZN18WindowStatusResultC1Ev(temp_v0 + 0x318);
  puVar2[2] = 0;
  puVar2[3] = 0;
  _ZN18WindowStatusResultC1Ej(temp_v3,0);
  temp_v1 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = temp_v1;
  temp_v2 = _ZN18WindowStatusResultC1Ev(puVar2 + 10);
  temp_v0 = (int)temp_v2;
  *(unsigned int *)(temp_v0 - 0x30) = 0;
  *(unsigned char *)(temp_v0 - 0x18) = 0;
  *(unsigned int *)(temp_v0 - 0x344) = (unsigned int)((unsigned long long)temp_v2 >> 0x20) & 0xff000000;
  *(unsigned int *)(temp_v0 - 0x348) = 0x19a2;
  *(unsigned int *)(temp_v0 - 0x17) = 0;
  *(unsigned int *)(temp_v0 - 0x13) = 0;
  *(unsigned int *)(temp_v0 - 0xf) = 0;
  *(unsigned int *)(temp_v0 - 0xb) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  *(unsigned int *)(temp_v0 + 0x3c) = 0;
  *(unsigned int *)(temp_v0 + 0x40) = 0;
  *(unsigned int *)(temp_v0 + 0x44) = 0;
  *(unsigned int *)(temp_v0 + 0x48) = 0;
  *(unsigned int *)(temp_v0 + 0x4c) = 0;
  *(unsigned int *)(temp_v0 + 0x50) = 0;
  *(unsigned int *)(temp_v0 + 0x54) = 0;
  *(unsigned int *)(temp_v0 + 0x58) = 0;
  *(unsigned int *)(temp_v0 + 0x5c) = 0;
  *(unsigned int *)(temp_v0 + 0x60) = 0;
  *(unsigned int *)(temp_v0 + 100) = 0;
  *(unsigned int *)(temp_v0 + 0x68) = 0;
  *(unsigned int *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  *(unsigned int *)(temp_v0 + 0x80) = 0;
  *(unsigned int *)(temp_v0 + 0x84) = 0;
  *(unsigned int *)(temp_v0 + 0x88) = 0;
  *(unsigned int *)(temp_v0 + 0x8c) = 0;
  *(unsigned int *)(temp_v0 + 0x90) = 0;
  *(unsigned int *)(temp_v0 + 0x94) = 0;
  *(unsigned int *)(temp_v0 + 0x98) = 0;
  *(unsigned int *)(temp_v0 + 0x9c) = 0;
  *(unsigned int *)(temp_v0 + 0xa0) = 0;
  *(unsigned int *)(temp_v0 + 0xa4) = 0;
  *(unsigned int *)(temp_v0 + 0xa8) = 0;
  *(unsigned int *)(temp_v0 + 0xac) = 0;
  *(unsigned int *)(temp_v0 + 0xb0) = 0;
  *(unsigned int *)(temp_v0 + 0xb4) = 0;
  *(unsigned int *)(temp_v0 + 0xb8) = 0;
  *(unsigned int *)(temp_v0 + 0xbc) = 0;
  *(unsigned int *)(temp_v0 + 0xc0) = 0;
  *(unsigned int *)(temp_v0 + 0xc4) = 0;
  *(unsigned int *)(temp_v0 + 200) = 0;
  *(unsigned int *)(temp_v0 + 0xcc) = 0;
  *(unsigned int *)(temp_v0 + 0xd0) = 0;
  *(unsigned int *)(temp_v0 + 0xd4) = 0;
  *(unsigned int *)(temp_v0 + 0xd8) = 0;
  *(unsigned int *)(temp_v0 + 0xdc) = 0;
  *(unsigned int *)(temp_v0 + 0xe0) = 0;
  *(unsigned int *)(temp_v0 + 0xe4) = 0;
  *(unsigned int *)(temp_v0 + 0xe8) = 0;
  *(unsigned int *)(temp_v0 + 0xec) = 0;
  *(unsigned int *)(temp_v0 + 0xf0) = 0;
  *(unsigned int *)(temp_v0 + 0xf4) = 0;
  *(unsigned int *)(temp_v0 + 0xf8) = 0;
  *(unsigned int *)(temp_v0 + 0xfc) = 0;
  *(unsigned int *)(temp_v0 + 0x100) = 0;
  *(unsigned int *)(temp_v0 + 0x104) = 0;
  *(unsigned int *)(temp_v0 + 0x108) = 0;
  *(unsigned int *)(temp_v0 + 0x10c) = 0;
  *(unsigned int *)(temp_v0 + 0x110) = 0;
  *(unsigned int *)(temp_v0 + 0x118) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x114) = 0;
  return;
}

} /* extern "C" */
