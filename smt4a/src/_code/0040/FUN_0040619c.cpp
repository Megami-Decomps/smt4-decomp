/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040619c` (_code @ 0x40619c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e32a4(int, unsigned char *, unsigned char *, unsigned int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char LAB_00406200; /* 0x406200 */

/* Supplied declaration required: FUN_002e32a4. */


unsigned int FUN_0040619c(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((-1 < (int)param_2) && (param_2 < *(unsigned int *)(param_1 + 0x10))) {
    temp_v0 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) >> 2;
    if (temp_v0 <= param_2) {
      FUN_002e32a4(9,&LAB_00406200,&LAB_00406200,param_2,temp_v0);
    }
    return *(unsigned int *)(*(int *)(param_1 + 4) + param_2 * 4);
  }
  return 0;
}

} /* extern "C" */
