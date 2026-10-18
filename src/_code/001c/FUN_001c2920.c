/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2920` (_code @ 0x1c2920, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int FUN_0028686c(void);
/* Supplied declaration required: FUN_00286928. */
extern unsigned int FUN_00289640(void);
extern unsigned int FUN_00296f60(unsigned int);


void FUN_001c2920(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (*(int *)(param_1 + 4) != 0) {
    *(unsigned char *)(*(int *)(param_1 + 4) + 0xa11) = 0x14;
  }
  temp_v0 = FUN_0028686c();
  temp_v1 = FUN_00296f60(0);
  temp_v2 = FUN_00289640();
  FUN_00286928(temp_v0,temp_v1,temp_v2,7,0,0);
  return;
}
