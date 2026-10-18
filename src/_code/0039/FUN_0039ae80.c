/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039ae80` (_code @ 0x39ae80, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


int FUN_0039ae80(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 0x12264);
  temp_v0 = 0;
  if (temp_v0 < temp_v1) {
    do {
      temp_v2 = param_1 + temp_v0 * 4;
      if ((*(short *)(temp_v2 + 0x121e4) != 0) &&
         ((int)*(short *)(temp_v2 + 0x121e6) == (int)*(char *)(param_1 + 0x60))) {
        if (param_2 == 1) {
          if (temp_v0 - 1 < 0) {
            return 0;
          }
          return (int)*(short *)(param_1 + temp_v0 * 4 + 0x121e2);
        }
        if (param_2 == -1) {
          if (temp_v1 <= temp_v0 + 1) {
            return 0;
          }
          return (int)*(short *)(param_1 + temp_v0 * 4 + 0x121ea);
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < temp_v1);
  }
  return 0;
}
