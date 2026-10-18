/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025432c` (_code @ 0x25432c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_002a6acc. */
extern int FUN_002b5960(int, int, unsigned int, unsigned int);


unsigned int FUN_0025432c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [2];
  
  temp_v1[0] = param_4;
  temp_v0 = FUN_002b5960(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (unsigned int)(0x83037bff < *param_1),
                       86400000,0);
  FUN_002a6acc(temp_v1,0,0,temp_v0 - 0xb2407);
  return temp_v1[0];
}
