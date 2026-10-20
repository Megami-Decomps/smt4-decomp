/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004325f4` (_code @ 0x4325f4, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559028; /* 0x559028 */

extern int FUN_00103890(int, int);
extern int FUN_0010cc4c(unsigned int *, int);


int FUN_004325f4(unsigned int *param_1,int param_2)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559028;
  param_1[1] = *(unsigned int *)(param_2 + 4);
  *(unsigned char *)(param_1 + 2) = *(unsigned char *)(param_2 + 8);
  param_1[3] = *(unsigned int *)(param_2 + 0xc);
  param_1[4] = *(unsigned int *)(param_2 + 0x10);
  param_1[5] = *(unsigned int *)(param_2 + 0x14);
  temp_v0 = FUN_0010cc4c(param_1 + 6,param_2 + 0x18);
  *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(param_2 + 0x68);
  *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(param_2 + 0x6c);
  *(unsigned char *)(temp_v0 + 0x58) = *(unsigned char *)(param_2 + 0x70);
  *(unsigned int *)(temp_v0 + 0x5c) = *(unsigned int *)(param_2 + 0x74);
  *(unsigned int *)(temp_v0 + 0x60) = *(unsigned int *)(param_2 + 0x78);
  *(unsigned int *)(temp_v0 + 100) = *(unsigned int *)(param_2 + 0x7c);
  *(unsigned int *)(temp_v0 + 0x68) = *(unsigned int *)(param_2 + 0x80);
  *(unsigned int *)(temp_v0 + 0x6c) = *(unsigned int *)(param_2 + 0x84);
  *(unsigned int *)(temp_v0 + 0x70) = *(unsigned int *)(param_2 + 0x88);
  *(unsigned int *)(temp_v0 + 0x74) = *(unsigned int *)(param_2 + 0x8c);
  *(unsigned int *)(temp_v0 + 0x78) = *(unsigned int *)(param_2 + 0x90);
  *(unsigned int *)(temp_v0 + 0x7c) = *(unsigned int *)(param_2 + 0x94);
  *(unsigned int *)(temp_v0 + 0x80) = *(unsigned int *)(param_2 + 0x98);
  *(unsigned char *)(temp_v0 + 0x84) = *(unsigned char *)(param_2 + 0x9c);
  *(unsigned char *)(temp_v0 + 0x85) = *(unsigned char *)(param_2 + 0x9d);
  *(unsigned char *)(temp_v0 + 0x86) = *(unsigned char *)(param_2 + 0x9e);
  *(unsigned char *)(temp_v0 + 0x87) = *(unsigned char *)(param_2 + 0x9f);
  *(unsigned char *)(temp_v0 + 0x88) = *(unsigned char *)(param_2 + 0xa0);
  *(unsigned char *)(temp_v0 + 0x89) = *(unsigned char *)(param_2 + 0xa1);
  *(unsigned int *)(temp_v0 + 0x8c) = *(unsigned int *)(param_2 + 0xa4);
  *(unsigned char *)(temp_v0 + 0x90) = *(unsigned char *)(param_2 + 0xa8);
  temp_v0 = FUN_00103890(temp_v0 + 0x94,param_2 + 0xac);
  return temp_v0 - 0xac;
}

} /* extern "C" */
