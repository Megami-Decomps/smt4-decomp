/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba608` (_code @ 0x2ba608, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int *DAT_004652a8; /* 0x4652a8 */
extern unsigned int *DAT_004655c0; /* 0x4655c0 */


void FUN_002ba608(int param_1)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  
  piVar1 = DAT_004652a8;
  if (param_1 != 0) {
    for (temp_v0 = *DAT_004652a8; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x24)) {
      temp_v1 = 0;
      do {
        puVar4 = (unsigned int *)(temp_v0 + temp_v1 * 0x10);
        if (puVar4[3] == param_1) {
          if (piVar1[2] == temp_v0) {
            *DAT_004655c0 = *DAT_004655c0 | 1;
          }
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 2);
    }
    return;
  }
  return;
}

} /* extern "C" */
