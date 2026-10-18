/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050d2cc` (_code @ 0x50d2cc, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


unsigned int FUN_0050d2cc(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = *(int *)(*(int *)(param_1 + 0x1430) + 8);
  if (temp_v0 != *(int *)(param_1 + 0x1430)) {
    do {
      if (param_2 == temp_v2) {
        return *(unsigned int *)(temp_v0 + 0x18);
      }
      temp_v1 = *(int *)(temp_v0 + 0xc);
      if (*(int *)(temp_v0 + 0xc) != 0) {
        do {
          temp_v0 = temp_v1;
          temp_v1 = *(int *)(temp_v0 + 8);
        } while (*(int *)(temp_v0 + 8) != 0);
      }
      else {
        temp_v1 = *(int *)(temp_v0 + 4);
        if (temp_v0 == *(int *)(temp_v1 + 0xc)) {
          do {
            temp_v0 = temp_v1;
            temp_v1 = *(int *)(temp_v0 + 4);
          } while (temp_v0 == *(int *)(temp_v1 + 0xc));
        }
        if (*(int *)(temp_v0 + 0xc) != temp_v1) {
          temp_v0 = temp_v1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v0 != *(int *)(param_1 + 0x1430));
  }
  return 0;
}
