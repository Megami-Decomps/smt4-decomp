/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00470714` (_code @ 0x470714, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


int FUN_00470714(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = *(int *)(param_1 + 0x458);
  if (temp_v1 != 0) {
    temp_v3 = *(unsigned int *)(param_1 + 0x45c);
    if ((int)temp_v3 < 1) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = temp_v3 & 1;
      temp_v2 = 0;
      if (temp_v0 != 0) {
        do {
          if (*(int *)(temp_v1 + temp_v2 * 0xc) == param_2) {
            return temp_v1 + temp_v2 * 0xc;
          }
          temp_v2 = temp_v2 + 1;
        } while ((int)temp_v2 < (int)temp_v0);
      }
    }
    while (temp_v2 = temp_v0, (int)temp_v2 < (int)temp_v3) {
      if (*(int *)(temp_v1 + temp_v2 * 0xc) == param_2) {
        return temp_v1 + temp_v2 * 0xc;
      }
      if (*(int *)(temp_v1 + temp_v2 * 0xc + 0xc) == param_2) {
        return temp_v2 * 0xc + 0xc + temp_v1;
      }
      temp_v0 = temp_v2 + 2;
    }
  }
  return 0;
}
