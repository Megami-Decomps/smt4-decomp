/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001115c0` (_code @ 0x1115c0, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fd0f4(int);

typedef int romwright_code(...);
/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

/* Supplied declaration required: FUN_002fd0f4. */


unsigned int
FUN_001115c0(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int *param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [16];
  int *piStack_24;
  unsigned int uStack_20;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  piStack_24 = param_1;
  uStack_20 = param_2;
  temp_v3 = param_3;
  temp_v4 = param_4;
  FUN_002fd0f4(param_1[1]);
  temp_v1 = 0;
  if ((char)param_1[0x14] != '\0') {
    temp_v0 = (**(romwright_code **)(*param_1 + 0x1c))(param_1,param_2,temp_v3,temp_v4,param_5);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      (**(romwright_code **)(*param_5 + 0x5c))(temp_v2,param_5,param_1[0x15]);
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
