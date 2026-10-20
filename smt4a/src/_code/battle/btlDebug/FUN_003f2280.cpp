/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2280` (_code @ 0x3f2280, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;


void FUN_003f2280(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned int temp_v0;
  
  param_1 = param_1 + param_2 * 4;
  *(unsigned int *)(param_1 + 0x4d30) = 4;
  *(unsigned int *)(param_1 + 0x4d38) = 0;
  *(unsigned int *)(param_1 + 0x4d40) = param_4;
  *(int *)(param_1 + 0x4d48) = param_3;
  *(unsigned int *)(param_1 + 0x4d20) = *(unsigned int *)(param_1 + 0x4d18);
  temp_v0 = *(unsigned int *)(param_3 * 4 + 0x57a650);
  *(unsigned int *)(param_1 + 0x4d28) =
       (temp_v0 << 0x18) | (((temp_v0 >> 8) & 0xff) << 0x10) | (((temp_v0 >> 0x10) & 0xff) << 8) | param_5
  ;
  return;
}

} /* extern "C" */
