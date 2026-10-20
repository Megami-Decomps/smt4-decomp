/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8574` (_code @ 0x2f8574, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001213c0(unsigned int *, unsigned int, unsigned int, int, int);
int FUN_002f2fe8(int, int);

extern unsigned char LAB_002f85f8; /* 0x2f85f8 */
extern unsigned char DAT_00558be8; /* 0x558be8 */

/* Supplied declaration required: FUN_001213c0. */
extern int FUN_002e995c(unsigned int *);
extern int FUN_002eb5f4(void);
/* Supplied declaration required: FUN_002f2fe8. */
extern int FUN_002f3024(int, unsigned char *);
extern unsigned int FUN_002f3044(unsigned int);


int FUN_002f8574(unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4,
                unsigned int param_5,unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  FUN_001213c0(param_1,param_3,param_5,param_4,param_4);
  *param_1 = (unsigned int)&DAT_00558be8;
  param_1[0x13] = param_2;
  *(unsigned char *)(param_1 + 0x14) = 0;
  *(unsigned char *)((int)param_1 + 0x51) = 0;
  temp_v0 = FUN_002e995c(param_1 + 0x15);
  *(unsigned int *)(temp_v0 + 0x20) = 1;
  temp_v0 = temp_v0 + 0x24;
  FUN_002f2fe8(temp_v0,param_4 + 0x6c);
  temp_v0 = temp_v0 + 0x50;
  FUN_002f2fe8(temp_v0,param_4 + 0x88);
  *(unsigned int *)(temp_v0 + 0x50) = 1;
  temp_v0 = FUN_002f3024(temp_v0 + 0x58,&LAB_002f85f8);
  *(unsigned int *)(temp_v0 + 0x20) = param_6;
  *(unsigned char *)(temp_v0 + 0x24) = 0;
  temp_v1 = FUN_002f3044(*(unsigned int *)(temp_v0 - 0xd4));
  *(unsigned int *)(temp_v0 - 0xd8) = temp_v1;
  temp_v1 = FUN_002f3044(*(unsigned int *)(temp_v0 - 0xd4));
  *(unsigned int *)(temp_v0 - 0xdc) = temp_v1;
  temp_v2 = FUN_002eb5f4();
  *(int *)(temp_v0 - 4) = temp_v2 + 0xd4;
  return temp_v0 - 0x120;
}

} /* extern "C" */
