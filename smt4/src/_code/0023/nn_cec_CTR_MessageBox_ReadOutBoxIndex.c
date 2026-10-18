/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_MessageBox_ReadOutBoxIndex` (_code @ 0x239148, 0x258 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_002399bc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002399ec. */
/* Supplied declaration required: FUN_002ad8b4. */


int nn_cec_CTR_MessageBox_ReadOutBoxIndex(int *param_1)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if (param_1[1] != 0) {
    temp_v4 = 0;
    temp_v3 = 0;
    temp_v0 = (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],5,2,&temp_v3);
    if (((temp_v0 & 0x3ff) != 0x3f7) &&
       (((temp_v3 != 0 &&
         ((((temp_v0 & 0x3fc00) != 0x4400 || ((temp_v0 & 0x3ff) < 100)) || ((temp_v0 & 0x3ff) >= 0xb4))))
        || (temp_v1 = (**(romwright_code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,0), -1 < temp_v1)))) {
      temp_v1 = FUN_002399bc(800,4);
      if (temp_v1 == 0) {
        param_1[0x158] = 0;
      }
      else {
        temp_v2 = (**(romwright_code **)(*param_1 + 0x34))(param_1,temp_v1,temp_v3,&temp_v4,param_1[1],5,0x12);
        if (-1 < temp_v2) {
          if (temp_v4 != 0) {
            FUN_002ad8b4(param_1 + 0x157,temp_v1);
          }
          if (((short)param_1[0x157] == 0x6767) && (param_1[0x158] == (temp_v3 - 8U) >> 3)) {
LAB_00239350:
            temp_v0 = 0;
            temp_v2 = temp_v1;
            if (param_1[0x158] != 0) {
              do {
                temp_v2 = temp_v2 + 8;
                FUN_002ad8b4(param_1 + temp_v0 * 2 + 0x159,temp_v2);
                temp_v0 = temp_v0 + 1;
              } while (temp_v0 < (unsigned int)param_1[0x158]);
            }
            FUN_002399ec(temp_v1);
            return param_1[0x158];
          }
          temp_v2 = (**(romwright_code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,0);
          if (-1 < temp_v2) {
            temp_v2 = (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],5,2,&temp_v3);
            if (-1 < temp_v2) {
              temp_v2 = (**(romwright_code **)(*param_1 + 0x34))
                                (param_1,temp_v1,temp_v3,&temp_v4,param_1[1],5,0x12);
              if (((-1 < temp_v2) &&
                  (FUN_002ad8b4(param_1 + 0x157,temp_v1), (short)param_1[0x157] == 0x6767)) &&
                 (param_1[0x158] == (temp_v3 - 8U) >> 3)) goto LAB_00239350;
            }
            param_1[0x158] = 0;
          }
        }
        FUN_002399ec(temp_v1);
      }
    }
  }
  return 0;
}
