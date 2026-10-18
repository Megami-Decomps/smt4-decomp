/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013abfc` (_code @ 0x13abfc, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_001471c8. */
extern int FUN_002bb274(void);


void FUN_0013abfc(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002bb274();
  if (temp_v0 != 0) {
    *(char *)(param_1 + 2) = (char)param_2;
    FUN_001471c8(&DAT_004e6f64,param_2);
    return;
  }
  return;
}
