/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efa58` (_code @ 0x2efa58, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_002f1840. */
/* Supplied declaration required: FUN_003076e6. */


void FUN_002efa58(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  FUN_002f1840(&temp_v2,&temp_v0);
  temp_v5 = temp_v3;
  temp_v4 = temp_v2;
  FUN_003076e6(param_1,&temp_v4);
  return;
}
