/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043d394` (_code @ 0x43d394, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00195fc8. */
extern int FUN_0043a0c8(void);
extern int FUN_0043a240(unsigned int, unsigned int);
extern int FUN_0043a270(void);


void FUN_0043d394(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0043a0c8();
  if (temp_v0 < 0) {
    FUN_00195fc8();
  }
  temp_v0 = FUN_0043a240(param_1,param_2);
  if (temp_v0 < 0) {
    FUN_00195fc8();
  }
  temp_v0 = FUN_0043a270();
  if (temp_v0 < 0) {
    FUN_00195fc8();
    return;
  }
  return;
}
