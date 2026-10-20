/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048816c` (_code @ 0x48816c, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


int FUN_0048816c(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 0x205a8);
  temp_v0 = 0;
  if (temp_v0 < temp_v1) {
    do {
      temp_v2 = param_1 + temp_v0 * 4;
      if ((*(short *)(temp_v2 + 0x20528) != 0) &&
         ((int)*(short *)(temp_v2 + 0x2052a) == (int)*(char *)(param_1 + 100))) {
        if (param_2 == 1) {
          if (temp_v0 - 1 < 0) {
            return 0;
          }
          return (int)*(short *)(param_1 + temp_v0 * 4 + 0x20526);
        }
        if (param_2 == -1) {
          if (temp_v1 <= temp_v0 + 1) {
            return 0;
          }
          return (int)*(short *)(param_1 + temp_v0 * 4 + 0x2052e);
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < temp_v1);
  }
  return 0;
}

} /* extern "C" */
