/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2e3c` (_code @ 0x2f2e3c, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00310040(...);

typedef struct fn_002f2e3c_arg0 fn_002f2e3c_arg0;
struct fn_002f2e3c_arg0 {
    void *field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x28];
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0xf];
    void *field_0x3c; /* +0x3c */
    byte field_0x40; /* +0x40 */
};

typedef int romwright_code(...);
/* stack frame of param_5: 5 slot(s), 18 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_00310040. */


unsigned int
FUN_002f2e3c(fn_002f2e3c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int *param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (param_1->field_0x40 != 0) {
    *(unsigned char *)((int)param_5 + 0x35) = 3;
    param_5[0xf] = (unsigned int)param_1;
    param_5[0xc] = param_4;
    param_5[1] = param_3;
    *param_5 = param_2;
    param_5[2] = 0;
    if (param_1->field_0x3c == (int *)0x0) {
      return 0xffffffff;
    }
    if (param_1->field_0x2c != '\0') {
      temp_v0 = (**(romwright_code **)(*(int *)param_1->field_0x3c + 0xc))();
      *(unsigned int *)(param_5[0xc] + 8) = 0;
      *(unsigned short *)(param_5[0xc] + 6) = 0;
    }
    else {
      temp_v0 = (**(romwright_code **)(*(int *)param_1->field_0x3c + 0x1c))();
    }
    param_5[2] = 0;
    temp_v1 = FUN_00310040(param_1,temp_v0,param_5);
    if (temp_v1 == 0) {
      return 0xffffffff;
    }
  }
  else {
    FUN_00310040(param_1,0,param_5);
  }
  return 0;
}

} /* extern "C" */
