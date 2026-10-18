/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239c78` (_code @ 0x239c78, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_6_stack;

/* Supplied declaration required: FUN_002c5ff4. */


int FUN_00239c78(int *param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned char temp_v3 [8];
  
  if (*param_1 != 0) {
    FUN_002c5ff4(param_5,*param_1 + param_3);
  }
  else {
    temp_v2 = param_1[2];
    if (temp_v2 != 0) {
      temp_v0 = *(int *)(temp_v2 + 4);
      temp_v1 = temp_v0;
      if (temp_v0 == 0) {
        temp_v1 = 2;
      }
      if (temp_v0 < 0) {
        if (temp_v1 < -8) {
          temp_v1 = 0;
        }
        else {
          temp_v1 = 1;
        }
      }
      else if (0 < temp_v0) {
        if (temp_v1 < 9) {
          temp_v1 = 3;
        }
        else {
          temp_v1 = 4;
        }
      }
      puVar3 = *(unsigned int **)(temp_v2 + temp_v1 * 4 + 0xc);
      temp_v2 = (**(romwright_code **)*puVar3)(puVar3,temp_v3,param_1[3] + param_3,0,param_5,param_6);
      if (temp_v2 < 0) {
        return temp_v2;
      }
    }
  }
  return 0;
}
