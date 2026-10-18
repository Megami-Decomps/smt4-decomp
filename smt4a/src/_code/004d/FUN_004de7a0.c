/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004de7a0` (_code @ 0x4de7a0, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int FUN_001633a0(unsigned int);
/* Supplied declaration required: FUN_004e7b7c. */


int FUN_004de7a0(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  short *psVar4;
  unsigned int temp_v3;
  
  temp_v0 = FUN_001633a0(99);
  temp_v1 = 0;
  if (param_4 >= 3) {
    if (temp_v0 >= 0x1e) {
      if (temp_v0 < 0x41) {
        FUN_004e7b7c(param_1,param_2,param_3,param_4,2);
        return param_1;
      }
      temp_v2 = 0;
      temp_v1 = -1;
      temp_v0 = 0;
      do {
        temp_v3 = *(unsigned int *)(param_2 + temp_v0 * 0x10 + 0x9e4);
        if (temp_v2 <= temp_v3) {
          temp_v2 = temp_v3;
          temp_v1 = temp_v0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < param_4);
      psVar4 = (short *)(param_3 + temp_v1 * 4);
      psVar4[1] = psVar4[1] + 1;
      return (int)*psVar4;
    }
    FUN_004e7b7c(param_1,param_2,param_3,param_4,3);
    temp_v1 = param_1;
  }
  else if (param_4 == 2) {
    if (temp_v0 < 0x28) {
      FUN_004e7b7c(param_1,param_2,param_3,2,2);
      return param_1;
    }
    temp_v2 = 0;
    temp_v1 = -1;
    temp_v0 = 0;
    do {
      temp_v3 = *(unsigned int *)(param_2 + temp_v0 * 0x10 + 0x9e4);
      if (temp_v2 <= temp_v3) {
        temp_v2 = temp_v3;
        temp_v1 = temp_v0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
    psVar4 = (short *)(param_3 + temp_v1 * 4);
    psVar4[1] = psVar4[1] + 1;
    return (int)*psVar4;
  }
  return temp_v1;
}
