/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_Message_GetExHeader` (_code @ 0x3e0a48, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;


unsigned int
nn_cec_CTR_Message_GetExHeader(int param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0x130;
  temp_v0 = (int)*(char *)(param_1 + 0x130);
  if (temp_v0 != 0) {
    temp_v1 = 0;
  }
  if (0 < temp_v0) {
    do {
      if (*(int *)(param_1 + temp_v1 * 0xc + 0x70) == param_2) {
        param_1 = param_1 + temp_v1 * 0xc;
        *param_3 = *(unsigned int *)(param_1 + 0x74);
        *param_4 = *(unsigned int *)(param_1 + 0x78);
        return 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v0);
  }
  *param_3 = 0;
  return 0xc8810bef;
}
