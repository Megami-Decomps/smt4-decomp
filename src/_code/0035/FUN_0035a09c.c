/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a09c` (_code @ 0x35a09c, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;


unsigned int FUN_0035a09c(int param_1,int param_2,unsigned int param_3,int param_4)

{
  int temp_v0;
  int temp_v1;
  
  if (param_3 >= 0x2001) {
    return 0xc8e10be9;
  }
  if (param_4 != 0) {
    temp_v1 = 0;
    temp_v0 = (int)*(char *)(param_1 + 0x130);
    if (0 < temp_v0) {
      do {
        if (*(int *)(param_1 + temp_v1 * 0xc + 0x70) == param_2) {
          param_1 = param_1 + temp_v1 * 0xc;
          *(unsigned int *)(param_1 + 0x74) = param_3;
          *(int *)(param_1 + 0x78) = param_4;
          return 0;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v0);
    }
    *(int *)(param_1 + temp_v0 * 0xc + 0x70) = param_2;
    *(unsigned int *)(param_1 + *(char *)(param_1 + 0x130) * 0xc + 0x74) = param_3;
    *(int *)(param_1 + *(char *)(param_1 + 0x130) * 0xc + 0x78) = param_4;
    *(char *)(param_1 + 0x130) = *(char *)(param_1 + 0x130) + '\x01';
    return 0;
  }
  return 0xe0e10bfd;
}
