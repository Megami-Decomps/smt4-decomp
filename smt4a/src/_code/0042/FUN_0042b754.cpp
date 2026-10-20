/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042b754` (_code @ 0x42b754, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042c070(int *, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0042c070. */
extern unsigned int FUN_0050096c(void);


void FUN_0042b754(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  temp_v0 = FUN_0050096c();
  FUN_0042c070(&temp_v0,param_2);
  return;
}

} /* extern "C" */
