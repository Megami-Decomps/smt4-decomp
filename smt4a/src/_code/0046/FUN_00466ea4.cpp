/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466ea4` (_code @ 0x466ea4, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int FUN_0019102c(int, int);

extern int FUN_00175678(void);
/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_0019102c. */


void FUN_00466ea4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,
                 unsigned char param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00175678();
  temp_v1 = temp_v0;
  FUN_0019102c(temp_v0,0xb);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x22;
  *(int *)(temp_v1 + 0x10) = param_1 + 0x124;
  temp_v2 = param_4[1];
  temp_v3 = param_4[2];
  *(unsigned int *)(temp_v1 + 0x14) = *param_4;
  *(unsigned int *)(temp_v1 + 0x18) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x1c) = temp_v3;
  *(unsigned int *)(temp_v1 + 0x20) = param_2;
  *(unsigned int *)(temp_v1 + 0x24) = param_3;
  *(unsigned char *)(temp_v1 + 0x28) = param_5;
  listAppendNode(temp_v0,temp_v1);
  *(unsigned char *)(param_1 + 0x121) = 1;
  return;
}

} /* extern "C" */
