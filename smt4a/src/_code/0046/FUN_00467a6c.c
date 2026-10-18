/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00467a6c` (_code @ 0x467a6c, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_00512870. */


int FUN_00467a6c(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = param_1[3];
  if (temp_v2 != 0) {
    temp_v3 = param_4;
    temp_v0 = (**(romwright_code **)(*param_1 + 0x68))();
    temp_v1 = 0;
    if (temp_v1 < temp_v0) {
      do {
        temp_v3 = *(int *)(temp_v2 + temp_v1 * 0x14);
        if (temp_v3 != 0) {
          FUN_00512870(1,&temp_v3);
          *(unsigned int *)(temp_v2 + temp_v1 * 0x14) = 0;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v0);
    }
    param_1[3] = 0;
  }
  temp_v2 = param_1[1];
  param_1[1] = 0;
  param_1[2] = 0;
  return temp_v2;
}
