/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109950` (_code @ 0x109950, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00109824(...);
int FUN_002e74c4(...);

typedef struct fn_00109950_arg1 fn_00109950_arg1;
struct fn_00109950_arg1 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};

typedef int romwright_code(...);
/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

/* Supplied declaration required: FUN_00109824. */
/* Supplied declaration required: FUN_002e74c4. */


int FUN_00109950(int param_1,fn_00109950_arg1 *param_2,unsigned int param_3,int *param_4,
                unsigned int param_5,unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  fn_00109950_arg1 *pfVar4;
  
  temp_v1 = 0;
  temp_v2 = param_1;
  pfVar4 = param_2;
  if (*(char *)(param_1 + 0x38) != '\0') {
    if ((unsigned int)param_2->field_0x10 < 3) {
      return 0;
    }
    temp_v0 = param_2->field_0x10 - 2;
    FUN_002e74c4(param_2,param_2->field_0xc + param_2->field_0x18 + 2,temp_v0,0);
    param_2->field_0x10 = temp_v0;
  }
  do {
    temp_v0 = param_1;
    FUN_00109824(param_1,param_5,param_3,param_2,param_6,temp_v2,pfVar4);
    if (temp_v0 == 0) {
      return temp_v1;
    }
    temp_v1 = temp_v1 + 1;
    *(unsigned short *)(temp_v0 + 0x86) =
         (*(unsigned short *)(param_1 + 0xe) << 8) | (*(unsigned short *)(param_1 + 0xe) >> 8);
    (**(romwright_code **)(*param_4 + 0xc))(param_4,temp_v0,1);
  } while (param_2->field_0x10 != 0);
  return temp_v1;
}

} /* extern "C" */
