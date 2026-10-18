/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030cbf0` (_code @ 0x30cbf0, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559028; /* 0x559028 */

extern int FUN_0010cc7c(unsigned int *);
extern int FUN_00128cd0(int);


void FUN_0030cbf0(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559028;
  temp_v0 = FUN_0010cc7c(param_1 + 6);
  temp_v0 = FUN_00128cd0(temp_v0 + 0x94);
  *(unsigned int *)(temp_v0 - 0xa8) = 0xffffffff;
  *(unsigned char *)(temp_v0 - 0xa4) = 0;
  *(unsigned int *)(temp_v0 - 0xa0) = 0;
  *(unsigned int *)(temp_v0 - 0x9c) = 0;
  *(unsigned int *)(temp_v0 - 0x98) = 0;
  *(unsigned int *)(temp_v0 - 0x44) = 0x14;
  *(unsigned int *)(temp_v0 - 0x38) = 10000;
  *(unsigned int *)(temp_v0 - 0x40) = 1000;
  *(unsigned int *)(temp_v0 - 0x2c) = 0x3fa00000;
  *(unsigned int *)(temp_v0 - 0x28) = 0x3f800000;
  *(unsigned int *)(temp_v0 - 0x24) = 0x32;
  *(unsigned int *)(temp_v0 - 0x14) = 2000;
  *(unsigned int *)(temp_v0 - 0x34) = 0x20;
  *(unsigned int *)(temp_v0 - 0x20) = 0x2ee;
  *(unsigned int *)(temp_v0 - 0x18) = 2;
  *(unsigned int *)(temp_v0 - 0x1c) = 0xfa;
  *(unsigned char *)(temp_v0 - 0xf) = 1;
  *(unsigned char *)(temp_v0 - 0xe) = 0;
  *(unsigned char *)(temp_v0 - 0xd) = 1;
  *(unsigned char *)(temp_v0 - 0x3c) = 1;
  *(unsigned char *)(temp_v0 - 0xc) = 0;
  *(unsigned char *)(temp_v0 - 0xb) = 2;
  *(unsigned int *)(temp_v0 - 8) = 0;
  *(unsigned int *)(temp_v0 - 0x30) = 0x80;
  *(unsigned char *)(temp_v0 - 4) = 0;
  return;
}
