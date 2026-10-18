/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00127ed0` (_code @ 0x127ed0, 0x104 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned char DAT_004d4600; /* 0x4d4600 */

/* Supplied declaration required: FUN_001376c4. */
/* Supplied declaration required: FUN_002bbb04. */
extern int FUN_002bbb28(unsigned char *, int, unsigned int, unsigned int);


int FUN_00127ed0(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [4];
  
  if (*(int *)(param_1 + 8) != 0) {
    temp_v0 = 0x8a01bf9;
  }
  else if ((param_3 & 0xfff) != 0) {
    temp_v0 = -0x1f1fe40e;
  }
  else if ((param_2 & 0xfff) != 0) {
    temp_v0 = -0x1f1fe40f;
  }
  else {
    temp_v1 = FUN_002bbb28(&DAT_004d4600,param_1,param_3,0x1000);
    if (temp_v1 == 0) {
      temp_v0 = -0x279fe7c9;
    }
    else {
      *(unsigned int *)(param_1 + 0x14) = param_2;
      temp_v0 = FUN_002bbb04(temp_v3,temp_v1,param_2,param_3,4,3);
      if (-1 < temp_v0) {
        temp_v0 = FUN_002bbb04(temp_v3,*(unsigned int *)(param_1 + 0x14),0,param_3,6,0);
        if (temp_v0 < 0) {
          temp_v2 = *(unsigned int *)(param_1 + 0x14);
          FUN_001376c4(&DAT_004d4600,param_1);
          FUN_002bbb04(temp_v3,temp_v1,temp_v2,param_3,5,3);
        }
        return temp_v0;
      }
      FUN_001376c4(&DAT_004d4600,param_1);
    }
  }
  return temp_v0;
}
