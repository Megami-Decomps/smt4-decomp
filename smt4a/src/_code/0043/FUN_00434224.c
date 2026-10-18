/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00434224` (_code @ 0x434224, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int FUN_0043872c(int, int, int *);


unsigned int FUN_00434224(int param_1,int *param_2,unsigned int param_3,int param_4)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = *(int *)(param_1 + 0x10);
  temp_v2 = *(int *)(param_1 + 0x14);
  temp_v1 = temp_v0 + 1;
  *(int *)(param_1 + 0x10) = temp_v1;
  if ((temp_v1 != temp_v2) && (*(short *)(*(int *)(param_1 + 0xc) + temp_v1 * 2) == 0x7b)) {
    temp_v0 = temp_v0 + 2;
    *(int *)(param_1 + 0x10) = temp_v0;
    if ((temp_v0 != temp_v2) &&
       (temp_v3 = param_4,
       temp_v1 = FUN_0043872c(*(int *)(param_1 + 0xc) + temp_v0 * 2,temp_v2 - temp_v0,&temp_v3),
       temp_v1 != 0x85)) {
      *(unsigned char *)(*param_2 + 8) = 8;
      *(char *)(*param_2 + 10) = (char)temp_v1;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + temp_v3;
      return 0;
    }
  }
  return 9;
}
