/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f1244` (_code @ 0x3f1244, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned int DAT_00573998; /* 0x573998 */
extern unsigned int DAT_0057399c; /* 0x57399c */
extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_00573a28; /* 0x573a28 */
extern unsigned int DAT_00573a2c; /* 0x573a2c */


unsigned int FUN_003f1244(int param_1,unsigned int *param_2)

{
  if (((param_2 != (unsigned int *)0x0) &&
      ((*param_2 & DAT_00573998) != 0 || (param_2[1] & DAT_0057399c) != 0)) &&
     (0 < *(int *)(param_1 + 0x4d6c))) {
    if (((*(unsigned int *)(param_1 + 0x45a4) & DAT_005739f4) == 0 &&
         (*(unsigned int *)(param_1 + 0x45a0) & DAT_005739f0) == 0) &&
       ((*(unsigned int *)(param_1 + 0x45a0) & DAT_00573a28) == 0 &&
        (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a2c) == 0)) {
      return 1;
    }
  }
  return 0;
}
