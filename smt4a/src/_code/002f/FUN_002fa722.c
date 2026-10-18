/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa722` (_code @ 0x2fa722, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_002e9b30. */


void FUN_002fa722(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = *param_3;
  temp_v1 = param_3[1];
  temp_v2 = param_3[2];
  FUN_002e9b30(param_1,param_2,&temp_v0,1);
  return;
}
