/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027dbc8` (_code @ 0x27dbc8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0022a4ac. */
extern int FUN_002939f4(void);


void FUN_0027dbc8(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002939f4();
  if ((*(unsigned int *)(temp_v0 + 0x44a0) & 0x40) == 0 && (*(unsigned int *)(temp_v0 + 0x44a0) & 0x100) == 0) {
    FUN_0022a4ac(0,0,param_1,*(unsigned int *)(temp_v0 + 0x2230),0,param_2,0xffffffff);
  }
  return;
}
