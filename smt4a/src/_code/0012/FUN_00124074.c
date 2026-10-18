/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124074` (_code @ 0x124074, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0012dba8. */


unsigned int FUN_00124074(int param_1,unsigned int param_2,unsigned short *param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  FUN_0012dba8(&temp_v0,param_1 + 0x20,param_2);
  if (temp_v0 != *(int *)(param_1 + 0x30)) {
    *param_3 = *(unsigned short *)(temp_v0 + 0x30);
    return 1;
  }
  return 0;
}
