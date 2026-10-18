/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117a90` (_code @ 0x117a90, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559ee4; /* 0x559ee4 */

/* Supplied declaration required: FUN_00122024. */
/* Supplied declaration required: FUN_0012211c. */
extern int FUN_002e9520(unsigned int *, int);
extern int FUN_00303146(int, int);
/* Supplied declaration required: FUN_0030382c. */
/* Supplied declaration required: FUN_003038a0. */


int FUN_00117a90(unsigned int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = (unsigned int)&DAT_00559ee4;
  *(unsigned char *)(param_1 + 1) = *(unsigned char *)(param_2 + 4);
  temp_v1 = *(unsigned int *)(param_2 + 8);
  param_1[3] = *(unsigned int *)(param_2 + 0xc);
  param_1[2] = temp_v1;
  param_1[4] = *(unsigned int *)(param_2 + 0x10);
  param_1[5] = *(unsigned int *)(param_2 + 0x14);
  temp_v0 = FUN_002e9520(param_1 + 6,param_2 + 0x18);
  *(unsigned short *)(temp_v0 + 8) = *(unsigned short *)(param_2 + 0x20);
  temp_v0 = temp_v0 + 0xc;
  FUN_00122024(temp_v0,param_2 + 0x24);
  temp_v0 = temp_v0 + 0x20;
  FUN_0030382c(temp_v0,param_2 + 0x44);
  temp_v0 = temp_v0 + 0x14;
  FUN_0030382c(temp_v0,param_2 + 0x58);
  temp_v0 = FUN_00303146(temp_v0 + 0x18,param_2 + 0x70);
  temp_v0 = FUN_00303146(temp_v0 + 8,param_2 + 0x78);
  *(unsigned short *)(temp_v0 + 8) = *(unsigned short *)(param_2 + 0x80);
  *(unsigned char *)(temp_v0 + 10) = *(unsigned char *)(param_2 + 0x82);
  *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(param_2 + 0x84);
  *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(param_2 + 0x88);
  *(unsigned int *)(temp_v0 + 0x14) = *(unsigned int *)(param_2 + 0x8c);
  temp_v0 = FUN_00303146(temp_v0 + 0x18,param_2 + 0x90);
  temp_v0 = FUN_00303146(temp_v0 + 8,param_2 + 0x98);
  temp_v0 = temp_v0 + 8;
  FUN_0012211c(temp_v0,param_2 + 0xa0);
  temp_v0 = temp_v0 + 0xc;
  FUN_003038a0(temp_v0,param_2 + 0xac);
  return temp_v0 - 0xac;
}
