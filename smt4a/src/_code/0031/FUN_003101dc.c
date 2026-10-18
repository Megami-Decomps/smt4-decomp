/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003101dc` (_code @ 0x3101dc, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
} param_4_stack;

/* Supplied declaration required: FUN_003032ec. */
extern int FUN_00307cf0(unsigned int **, unsigned int *);


void FUN_003101dc(unsigned int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [2];
  unsigned int *temp_v2;
  int temp_v3;
  unsigned char temp_v4 [8];
  
  temp_v2 = param_3;
  temp_v3 = param_4;
  while (temp_v0 = FUN_00307cf0(&temp_v2,(unsigned int *)&temp_v3), temp_v0 != 0) {
    temp_v1[0] = *param_2;
    FUN_003032ec(temp_v4,param_1,temp_v1,temp_v2 + 2);
    temp_v2 = (unsigned int *)*temp_v2;
  }
  return;
}
