/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1468` (_code @ 0x2f1468, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_002ff588. */


int FUN_002f1468(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puStack_14;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = *param_2;
  temp_v2 = 0;
  temp_v0 = param_1;
  puStack_14 = param_2;
  FUN_002ff588(&temp_v0,param_1,&temp_v1);
  return temp_v0 + 0x14;
}
