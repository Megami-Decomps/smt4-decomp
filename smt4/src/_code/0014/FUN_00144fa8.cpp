/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00144fa8` (_code @ 0x144fa8, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a8ac4(int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_002a8ac4. */
extern int FUN_002afef4(void);


void FUN_00144fa8(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002afef4();
  FUN_002a8ac4(**(int **)(temp_v0 + 4) + (param_2 % 1000) * 0x14,param_3);
  return;
}

} /* extern "C" */
