/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012aa74` (_code @ 0x12aa74, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_4_stack;


unsigned int FUN_0012aa74(int *param_1,int param_2,unsigned int param_3,int *param_4)

{
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  if ((((*param_1 == param_2) && ((short)param_1[1] == -0x101)) &&
      (temp_v0 = param_1[2], param_3 >> 0x18 == temp_v0 >> 0x18)) &&
     (((temp_v0 & 0xffffff) >> 0x10 <= (param_3 & 0xffffff) >> 0x10 &&
      (param_3 * 0x1000000 <= temp_v0 * 0x1000000)))) {
    temp_v1 = (int)param_4 * 8 + 0x14U <= (unsigned int)param_1[3];
    if (temp_v1) {
      param_1 = (int *)(unsigned int)*(unsigned short *)(param_1 + 4);
    }
    if (temp_v1 && param_4 <= param_1) {
      return 1;
    }
  }
  return 0;
}
