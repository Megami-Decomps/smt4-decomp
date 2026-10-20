/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c848` (_code @ 0x11c848, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_3: 3 slot(s), 8 byte(s) */
typedef struct {
    unsigned short sp8; /* 0x8: local_8 */
    unsigned short sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;


void FUN_0011c848(int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  unsigned short temp_v1;
  int iStack_10;
  unsigned int uStack_c;
  unsigned int temp_v2;
  
  (*(unsigned short *)((unsigned char *)&temp_v2 + 0)) = (unsigned short)param_3;
  temp_v1 = (unsigned short)temp_v2;
  temp_v0 = param_2;
  iStack_10 = param_1;
  uStack_c = param_2;
  temp_v2 = param_3;
  (**(romwright_code **)(**(int **)(param_1 + 4) + 0x14))(*(int **)(param_1 + 4),&temp_v0,6);
  return;
}

} /* extern "C" */
