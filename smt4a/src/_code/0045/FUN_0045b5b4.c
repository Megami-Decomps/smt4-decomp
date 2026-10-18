/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b5b4` (_code @ 0x45b5b4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

/* Supplied declaration required: FUN_0045cba8. */


unsigned int FUN_0045b5b4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,char *param_5
                 )

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    temp_v0 = 0x10;
  }
  else {
    temp_v0 = *(unsigned int *)(param_1 + 4);
    FUN_0045cba8(temp_v0,param_2,param_3,0,param_1,(int)*param_5,param_4);
    temp_v0 = temp_v0 & 0xff;
  }
  return temp_v0;
}
