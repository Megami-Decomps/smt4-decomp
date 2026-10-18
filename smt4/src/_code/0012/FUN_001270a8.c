/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001270a8` (_code @ 0x1270a8, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_004d42c8; /* 0x4d42c8 */
extern unsigned int DAT_004d42d8; /* 0x4d42d8 */

extern int FUN_00129584(unsigned int *, unsigned int);
extern int FUN_0013af84(unsigned int);
/* Supplied declaration required: FUN_002bbb2c. */


void FUN_001270a8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  DAT_004d42d8 = param_1;
  temp_v0 = FUN_00129584(&DAT_004d42c8,0x209);
  if (temp_v0 < 0) {
    FUN_002bbb2c(temp_v0,0x1270cc);
  }
  temp_v0 = FUN_0013af84(0x209);
  if (temp_v0 < 0) {
    FUN_002bbb2c(temp_v0,0x1270e0);
    return;
  }
  return;
}
