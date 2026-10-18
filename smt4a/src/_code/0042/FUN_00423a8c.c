/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00423a8c` (_code @ 0x423a8c, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00423a8c_arg0 fn_00423a8c_arg0;
struct fn_00423a8c_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
};

typedef int romwright_code();
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

extern int FUN_00422814(unsigned int, unsigned int, unsigned int);
extern int FUN_00423ce0(fn_00423a8c_arg0 *, unsigned int, int, unsigned int, unsigned int);


unsigned int
FUN_00423a8c(fn_00423a8c_arg0 *param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5
            )

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00423ce0(param_1,param_2,param_3,1,0x10);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(param_3 + 8) * *(int *)(param_3 + 0xc) * param_4 * 2;
    param_1->field_0x14 = temp_v0;
    temp_v0 = (*(romwright_code *)**(unsigned int **)param_1->field_0x4)(param_1->field_0x4,temp_v0,0x20);
    param_1->field_0x10 = temp_v0;
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v0 = FUN_00422814(*(unsigned int *)(param_3 + 8),*(unsigned int *)(param_3 + 0xc),param_5);
      param_1->field_0xc = temp_v0;
      if (temp_v0 == -1) {
        (**(romwright_code **)(*(int *)param_1->field_0x4 + 4))(param_1->field_0x4,param_1->field_0x10);
        param_1->field_0x10 = 0;
        return 0;
      }
      param_1->field_0x18 = 0;
      param_1->field_0x1c = 0;
      param_1->field_0x20 = 0;
      temp_v1 = 1;
    }
  }
  return temp_v1;
}
