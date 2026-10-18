/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e8180` (_code @ 0x2e8180, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int *FUN_002c32a0(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5df8. */


unsigned int * FUN_002e8180(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = param_1 * 0x18;
  temp_v2 = *(int *)(temp_v0 + 0x4727bc);
  puVar2 = (unsigned int *)FUN_002c32a0(0x10000,0x100,0,temp_v2 + 0x40,0x10,1);
  puVar2[9] = 0xffffffff;
  puVar2[0xd] = (unsigned int)(puVar2 + 0x10);
  puVar2[10] = 0;
  puVar2[0xb] = param_1;
  puVar2[8] = 0x3f800000;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[3] = 0x3f800000;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[7] = 0x3f800000;
  FUN_002c5df8(puVar2 + 0x10,param_2,temp_v2);
  temp_v1 = (**(romwright_code **)(temp_v0 + 0x4727ac))(param_2);
  puVar2[0xc] = temp_v1;
  (**(romwright_code **)(temp_v0 + 0x4727a8))(puVar2);
  return puVar2;
}
