/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ca7d8` (_code @ 0x3ca7d8, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);
int FUN_002c2160(int);

extern unsigned char DAT_0058916c; /* 0x58916c */

extern unsigned short FUN_001643b4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_002c2160. */


void FUN_003ca7d8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0058916c + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0058916c + 0x4)) + 0x40) = 0;
  *(unsigned int *)(temp_v0 + 0x44) = 0;
  FUN_001681cc(0xa1);
  temp_v1 = FUN_001643b4(9,0x27);
  *(unsigned short *)(temp_v0 + 0x50) = temp_v1;
  temp_v1 = FUN_001643b4(9,0x28);
  *(unsigned short *)(temp_v0 + 0x52) = temp_v1;
  temp_v1 = FUN_001643b4(9,0x29);
  *(unsigned short *)(temp_v0 + 0x54) = temp_v1;
  temp_v1 = FUN_001643b4(9,0x2a);
  *(unsigned short *)(temp_v0 + 0x56) = temp_v1;
  temp_v1 = FUN_001643b4(9,0x2b);
  *(unsigned short *)(temp_v0 + 0x58) = temp_v1;
  *(unsigned char *)(temp_v0 + 0x3d) = 0;
  FUN_002c2160(2);
  *(unsigned char *)(temp_v0 + 0x60) = 1;
  *(unsigned int *)(temp_v0 + 0x78) = 0xb;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  *(unsigned int *)(temp_v0 + 0x80) = 0;
  return;
}

} /* extern "C" */
