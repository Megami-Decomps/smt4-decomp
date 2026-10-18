/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001157d0` (_code @ 0x1157d0, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_8: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_8_stack;


void FUN_001157d0(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + (unsigned int)*(unsigned char *)(param_2 + 0x24) * 4);
  (**(romwright_code **)(*piVar1 + 0xc))(piVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}
