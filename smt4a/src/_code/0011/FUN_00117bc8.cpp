/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117bc8` (_code @ 0x117bc8, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9598(int, int);
int FUN_002f6ed2(int, int);
int FUN_003039f4(int, int);
int FUN_00303a22(int, int);
int FUN_00303a2e(int, int);
int FUN_00303a3a(int, int);

/* Supplied declaration required: FUN_002e9598. */
/* Supplied declaration required: FUN_002f6ed2. */
/* Supplied declaration required: FUN_003039f4. */
/* Supplied declaration required: FUN_00303a22. */
/* Supplied declaration required: FUN_00303a2e. */
/* Supplied declaration required: FUN_00303a3a. */


int FUN_00117bc8(int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  
  *(unsigned char *)(param_1 + 4) = *(unsigned char *)(param_2 + 4);
  temp_v0 = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_2 + 0xc);
  *(unsigned int *)(param_1 + 8) = temp_v0;
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 0x10);
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_2 + 0x14);
  FUN_002e9598(param_1 + 0x18,param_2 + 0x18);
  *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_2 + 0x20);
  FUN_003039f4(param_1 + 0x24,param_2 + 0x24);
  FUN_00303a22(param_1 + 0x44,param_2 + 0x44);
  FUN_00303a22(param_1 + 0x58,param_2 + 0x58);
  FUN_002f6ed2(param_1 + 0x70,param_2 + 0x70);
  FUN_002f6ed2(param_1 + 0x78,param_2 + 0x78);
  *(unsigned short *)(param_1 + 0x80) = *(unsigned short *)(param_2 + 0x80);
  *(unsigned char *)(param_1 + 0x82) = *(unsigned char *)(param_2 + 0x82);
  *(unsigned int *)(param_1 + 0x84) = *(unsigned int *)(param_2 + 0x84);
  *(unsigned int *)(param_1 + 0x88) = *(unsigned int *)(param_2 + 0x88);
  *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)(param_2 + 0x8c);
  FUN_002f6ed2(param_1 + 0x90,param_2 + 0x90);
  FUN_002f6ed2(param_1 + 0x98,param_2 + 0x98);
  FUN_00303a2e(param_1 + 0xa0,param_2 + 0xa0);
  FUN_00303a3a(param_1 + 0xac,param_2 + 0xac);
  return param_1;
}

} /* extern "C" */
