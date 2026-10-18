/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a1a8` (_code @ 0x37a1a8, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002b777c. */
/* Supplied declaration required: FUN_002bf774. */


void FUN_0037a1a8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 0x2980);
  temp_v2 = (unsigned int)*(unsigned char *)(param_1 + 0x98) + *(int *)(param_1 + 0x50);
  if (temp_v2 >= 0x80) {
    temp_v2 = 0x7f;
  }
  else if (temp_v2 < 0) {
    temp_v2 = 0;
  }
  FUN_002b777c(temp_v1 + 8,param_1 + 0xd4);
  piVar2 = *(int **)(temp_v1 + 0xc);
  if (piVar2 != (int *)(temp_v1 + 0xc)) {
    do {
      temp_v0 = piVar2[-0x21] + (unsigned int)*(unsigned char *)(piVar2 + -0xf);
      if (temp_v0 >= 0x80) {
        temp_v0 = 0x7f;
      }
      else if (temp_v0 < 0) {
        temp_v0 = 0;
      }
    } while ((temp_v0 <= temp_v2) && (piVar2 = (int *)*piVar2, piVar2 != (int *)(temp_v1 + 0xc)));
  }
  FUN_002bf774(temp_v1 + 8,piVar2,param_1 + 0xd4);
  return;
}
