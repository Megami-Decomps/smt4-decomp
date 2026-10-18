/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026242c` (_code @ 0x26242c, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_00435d90; /* 0x435d90 */


int FUN_0026242c(unsigned int param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  
  puVar1 = (unsigned int *)&DAT_00435d90;
  if (DAT_00435d90 != 0) {
    puVar1 = *(unsigned int **)(DAT_00435d90 + 100);
  }
  if (DAT_00435d90 != 0 && puVar1 != (unsigned int *)0x15) {
    temp_v0 = 0;
    do {
      puVar3 = (unsigned int *)(*(int *)(DAT_00435d90 + 0x1fc0) + temp_v0 * 0x288);
      temp_v1 = *puVar3;
      if (((((temp_v1 & 1) != 0) && ((temp_v1 & 0x40) == 0)) && ((temp_v1 & 2) != 0)) &&
         (puVar3[0x9e] == param_1)) {
        return (int)*(short *)((int)puVar3 + 0x1b6);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x6d);
  }
  return (int)*(short *)(param_1 + 0x1c);
}
