/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004adcec` (_code @ 0x4adcec, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_005204d4(unsigned char [4], int, int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_005204d4. */


void FUN_004adcec(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  unsigned char temp_v5 [4];
  
  temp_v4 = *(int *)(*(int *)(param_1 + 0x1430) + 8);
  while (temp_v4 != *(int *)(param_1 + 0x1430)) {
    temp_v0 = *(int *)(temp_v4 + 0xc);
    if (*(int *)(temp_v4 + 0xc) != 0) {
      do {
        temp_v2 = temp_v0;
        temp_v0 = *(int *)(temp_v2 + 8);
      } while (*(int *)(temp_v2 + 8) != 0);
    }
    else {
      temp_v0 = *(int *)(temp_v4 + 4);
      temp_v2 = temp_v4;
      if (temp_v4 == *(int *)(temp_v0 + 0xc)) {
        do {
          temp_v2 = temp_v0;
          temp_v0 = *(int *)(temp_v2 + 4);
        } while (temp_v2 == *(int *)(temp_v0 + 0xc));
      }
      if (*(int *)(temp_v2 + 0xc) != temp_v0) {
        temp_v2 = temp_v0;
      }
    }
    temp_v0 = *(int *)(*(int *)(temp_v4 + 0x18) + 0x10);
    temp_v1 = (unsigned int)*(unsigned char *)(temp_v0 + 0x68);
    temp_v3 = temp_v1 == 0;
    if (temp_v3) {
      temp_v1 = *(unsigned int *)(temp_v0 + 0x38);
    }
    if (!(temp_v3 && temp_v1 == 0)) {
      *(unsigned char *)(temp_v0 + 0x68) = 0;
      temp_v4 = temp_v2;
    }
    else {
      FUN_005204d4(temp_v5,param_1 + 0x141c,&temp_v4);
      temp_v4 = temp_v2;
    }
  }
  return;
}

} /* extern "C" */
