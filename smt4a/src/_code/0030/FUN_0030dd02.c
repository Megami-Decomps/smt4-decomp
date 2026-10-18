/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030dd02` (_code @ 0x30dd02, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned int FUN_00125d90(void);


/* WARNING: Removing unreachable block (ram,0x0030dd1e) */

unsigned int FUN_0030dd02(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_2 != 0) {
    temp_v0 = FUN_00125d90();
    return temp_v0;
  }
  return 0;
}
