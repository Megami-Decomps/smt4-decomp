/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017fa3c` (_code @ 0x17fa3c, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned int FUN_002c32a0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: rt_memcpy. */


void FUN_0017fa3c(int param_1,int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 4) = 0xde1;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  if (param_3 != 0) {
    do {
      if (*param_2 == 0x424f5854) {
        *(int *)(param_1 + 0x18) = param_2[5];
        *(int *)(param_1 + 0x14) = param_2[6];
        *(int *)(param_1 + 0x1c) = param_2[7];
        *(int *)(param_1 + 0x20) = param_2[8];
        *(int *)(param_1 + 0x10) = -param_2[9];
        *(int *)(param_1 + 0x28) = param_2[0x10];
        temp_v2 = param_2[0x11] + (int)(param_2 + 0x11);
        if (temp_v2 == 0) {
          return;
        }
        temp_v1 = FUN_002c32a0(0x10000,0x100,0,*(unsigned int *)(param_1 + 0x28),0x80,1);
        *(unsigned int *)(param_1 + 0x24) = temp_v1;
        rt_memcpy(temp_v1,temp_v2,*(unsigned int *)(param_1 + 0x28));
        return;
      }
      temp_v0 = temp_v0 + 4;
      param_2 = param_2 + 1;
    } while (temp_v0 < param_3);
  }
  return;
}
