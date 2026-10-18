/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157948` (_code @ 0x157948, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a2404. */
extern unsigned int FUN_002a2414(void);
/* Supplied declaration required: FUN_002b7770. */
extern unsigned int FUN_002bd630(void);


void FUN_00157948(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned char param_5,unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v2 = *(char *)(param_1 + 0xc) != '\0';
  temp_v0 = '\0';
  if (temp_v2) {
    temp_v0 = *(char *)(param_1 + 0xd);
  }
  if (temp_v2 && temp_v0 != '\0') {
    temp_v1 = FUN_002bd630();
    FUN_002b7770(temp_v1,param_1 + 0x50);
    *(unsigned char *)(param_1 + 0xd) = 0;
  }
  *(unsigned int *)(param_1 + 100) = param_2;
  *(unsigned int *)(param_1 + 0x68) = param_3;
  *(unsigned int *)(param_1 + 0x6c) = param_4;
  *(unsigned char *)(param_1 + 0x70) = param_5;
  *(unsigned int *)(param_1 + 0x74) = param_6;
  temp_v1 = FUN_002a2414();
  FUN_002a2404(temp_v1,param_1 + 0x44);
  *(unsigned char *)(param_1 + 0xc) = 1;
  return;
}
