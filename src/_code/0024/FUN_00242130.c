/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00242130` (_code @ 0x242130, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0029f10c. */
extern unsigned long long FUN_0029f248(int);
extern int FUN_0029f260(int);


void FUN_00242130(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned long long temp_v4;
  
  temp_v0 = FUN_0029f260(param_1 + 0x10);
  temp_v4 = FUN_0029f248(param_1 + 0x10);
  temp_v2 = (int)((unsigned long long)temp_v4 >> 0x20);
  temp_v3 = *(unsigned int *)(param_1 + 0x2b0);
  if (temp_v3 != 0) {
    temp_v2 = *(int *)(param_1 + 0x2ac);
  }
  temp_v1 = 0;
  if (temp_v1 < temp_v3) {
    do {
      if ((unsigned int)*(unsigned short *)(temp_v2 + temp_v1 * 0x60) ==
          *(unsigned int *)(param_1 + ((int)temp_v4 + temp_v0) * 4 + 0x74)) {
        FUN_0029f10c(temp_v1 * 0x60 + 2 + temp_v2,0x323232ff);
        return;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v3);
  }
  return;
}
