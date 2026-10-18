/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312714` (_code @ 0x312714, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int DAT_00580c94; /* 0x580c94 */


void FUN_00312714(int param_1,unsigned short param_2,unsigned short param_3)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (0 < DAT_00580c94) {
    while (*(int *)(temp_v0 * 0x17c + 0x5f33cc) != param_1) {
      temp_v0 = temp_v0 + 1;
      if (DAT_00580c94 <= temp_v0) {
        return;
      }
    }
    *(unsigned short *)(temp_v0 * 0x17c + 0x5f3406) = param_2;
    *(unsigned short *)(temp_v0 * 0x17c + 0x5f3408) = param_3;
  }
  return;
}
