/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a56c` (_code @ 0x13a56c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_001470e0. */
extern int FUN_002bb5b4(void);


void FUN_0013a56c(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002bb5b4();
  if (temp_v0 != 0) {
    *(char *)(param_1 + 2) = (char)param_2;
    FUN_001470e0(&DAT_004e6f64,param_2);
    return;
  }
  return;
}
