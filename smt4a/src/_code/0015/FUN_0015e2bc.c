/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e2bc` (_code @ 0x15e2bc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_001742d8. */


char FUN_0015e2bc(int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 8))(param_1,param_2,param_3,0,param_4);
  if (temp_v0 == '\0') {
    if (*param_2 != 0) {
      FUN_001742d8();
    }
    temp_v0 = '\0';
  }
  return temp_v0;
}
