/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309a60` (_code @ 0x309a60, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001db820(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_002c3510(void);
int SBORROW4(...);
int nn_fs_DeleteExtSaveData(unsigned int, unsigned int);

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_7_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001db820. */
/* Supplied declaration required: FUN_002c3510. */
/* Supplied declaration required: nn_fs_DeleteExtSaveData. */


unsigned int FUN_00309a60(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                 ,unsigned int param_6,unsigned int param_7)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  if (-1 < (int)param_1) {
    return param_1;
  }
  temp_v0 = (param_1 & 0x3fc00) >> 10;
  temp_v1 = param_1 & 0x3ff;
  if (((temp_v0 == 0x11) && (temp_v1 >= 100)) && (temp_v1 < 0xb4)) {
    if (temp_v1 >= 0x82) {
      return param_1;
    }
  }
  else {
    temp_v3 = param_3;
    if (((temp_v0 == 0x11) && (temp_v1 >= 0x154)) && (temp_v1 < 0x168)) {
      nn_fs_DeleteExtSaveData(param_3,param_4);
      FUN_002c3510();
    }
    else {
      if (((temp_v0 == 0x11) && (temp_v1 >= 0x168)) && (temp_v1 < 0x186)) {
        return param_1;
      }
      if (temp_v0 != 0x11) {
        return param_1;
      }
      temp_v4 = SBORROW4(0x186,temp_v1);
      temp_v2 = 0x186 - temp_v1;
      if (temp_v1 >= 0x186) {
        temp_v4 = SBORROW4(temp_v1,400);
        temp_v2 = temp_v1 - 400;
      }
      if (temp_v2 < 0 == temp_v4) {
        return param_1;
      }
      nn_fs_DeleteExtSaveData(param_3,param_4);
      FUN_002c3510();
    }
    if ((int)temp_v3 < 0) {
      return temp_v3;
    }
  }
  FUN_001db820(param_3,param_4,param_5,param_6,param_7);
  FUN_002c3510();
  return param_3;
}

} /* extern "C" */
