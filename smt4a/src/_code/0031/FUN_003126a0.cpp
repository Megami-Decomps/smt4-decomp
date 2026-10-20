/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003126a0` (_code @ 0x3126a0, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcpy(int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int DAT_00580c94; /* 0x580c94 */

/* Supplied declaration required: libc_strcpy. */


void FUN_003126a0(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < DAT_00580c94) {
    do {
      if (*(int *)(temp_v0 * 0x17c + 0x5f33cc) == param_1) {
        *(unsigned int *)(temp_v0 * 0x17c + 0x5f33d4) = param_2;
        libc_strcpy(temp_v0 * 0x17c + 0x5f33d8,param_3);
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < DAT_00580c94);
  }
  return;
}

} /* extern "C" */
