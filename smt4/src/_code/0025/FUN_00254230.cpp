/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254230` (_code @ 0x254230, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf694(int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int DAT_00447a2c; /* 0x447a2c */

/* Supplied declaration required: FUN_002bf694. */


void FUN_00254230(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < DAT_00447a2c) {
    do {
      if (*(int *)(temp_v0 * 0x178 + 0x4a1390) == param_1) {
        *(unsigned int *)(temp_v0 * 0x178 + 0x4a1398) = param_2;
        FUN_002bf694(temp_v0 * 0x178 + 0x4a139c,param_3);
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < DAT_00447a2c);
  }
  return;
}

} /* extern "C" */
