/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003806a0` (_code @ 0x3806a0, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4f40(int, int);
int FUN_002b4f64(int, int);

/* Supplied declaration required: FUN_002b4f40. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);


void FUN_003806a0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002baed8();
  temp_v1 = temp_v0;
  FUN_002b4f64(temp_v0,10);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x25;
  *(int *)(temp_v1 + 0x10) = param_1 + 0xf4;
  *(unsigned int *)(temp_v1 + 0x14) = param_2;
  *(unsigned int *)(temp_v1 + 0x18) = param_3;
  *(unsigned int *)(temp_v1 + 0x1c) = *param_4;
  *(unsigned int *)(temp_v1 + 0x20) = (unsigned int)*(unsigned char *)(param_4 + 1);
  *(unsigned int *)(temp_v1 + 0x24) = param_4[2];
  FUN_002b4f40(temp_v0,temp_v1);
  *(unsigned int *)(param_1 + 0x450) = param_2;
  *(unsigned int *)(param_1 + 0x454) = param_3;
  *(unsigned char *)(param_1 + 0x45e) = 1;
  return;
}

} /* extern "C" */
