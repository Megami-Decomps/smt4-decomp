/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379450` (_code @ 0x379450, 0x158 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4f40(int, int);
int FUN_002b4f64(int, int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002b4f40. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);


void FUN_00379450(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
  temp_v1 = FUN_002baed8();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x27] = -1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(unsigned char *)((int)param_1 + 0x8a) = 0;
  *(unsigned char *)((int)param_1 + 0x8b) = 0;
  *(unsigned char *)(param_1 + 0x23) = 0;
  *(unsigned char *)((int)param_1 + 0x85) = 0;
  *(unsigned char *)((int)param_1 + 0x86) = 0;
  *(unsigned char *)((int)param_1 + 0x87) = 0;
  *(unsigned char *)(param_1 + 0x22) = 0;
  *(unsigned char *)((int)param_1 + 0x89) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3f800000;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3f800000;
  param_1[0x28] = 0x3f800000;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2f] = 0;
  *(unsigned char *)((int)param_1 + 0x99) = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x18] = 0;
  temp_v2 = temp_v1;
  FUN_002b4f64(temp_v1,6);
  *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned char *)(temp_v2 + 4) = 3;
  *(int *)(temp_v2 + 0x14) = (int)param_1 + 0x89;
  *(unsigned int *)(temp_v2 + 0x10) = temp_v0;
  FUN_002b4f40(temp_v1,temp_v2);
  *(unsigned char *)(param_1 + 0x21) = 1;
  return;
}

} /* extern "C" */
