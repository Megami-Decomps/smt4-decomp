/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc15c` (_code @ 0x2fc15c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_00432ce0; /* 0x432ce0 */

/* Supplied declaration required: FUN_001d04a4. */
extern int FUN_00288f60(void);


int FUN_002fc15c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_00432ce0 == 0) {
    temp_v0 = 0;
  }
  else {
    if (param_1 == 0x3d) {
      temp_v0 = FUN_00288f60();
      return temp_v0;
    }
    temp_v0 = DAT_00432ce0;
    FUN_001d04a4(DAT_00432ce0,param_1);
    temp_v0 = *(int *)(DAT_00432ce0 + temp_v0 * 4 + 0x594) + 6;
  }
  return temp_v0;
}
