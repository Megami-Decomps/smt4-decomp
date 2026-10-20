/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00436d04` (_code @ 0x436d04, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;


void FUN_00436d04(int param_1,int param_2)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
LAB_00436d0c:
  temp_v3 = 0;
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    do {
      if (*(char *)(param_2 + temp_v3) != '\0') {
        temp_v0 = *(int *)(*(int *)(param_1 + 0x14) + temp_v3 * 4);
        for (temp_v1 = *(int *)(temp_v0 + 0xc); temp_v1 != temp_v0 + 8; temp_v1 = *(int *)(temp_v1 + 4)) {
          if ((*(char *)(temp_v1 + 0xc) == '\x01') &&
             (temp_v2 = *(int *)(*(int *)(temp_v1 + 8) + 0x14), *(char *)(param_2 + temp_v2) == '\0')) {
            *(unsigned char *)(param_2 + temp_v2) = 1;
            goto LAB_00436d0c;
          }
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(unsigned int *)(param_1 + 0x10));
  }
  return;
}

} /* extern "C" */
