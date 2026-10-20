/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010600c` (_code @ 0x10600c, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ec890(...);

typedef struct fn_0010600c_arg0 fn_0010600c_arg0;
struct fn_0010600c_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8];
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x8];
    void *field_0x1c; /* +0x1c */
};

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002ec890. */
extern unsigned int FUN_002eccc4(int *);
extern int FUN_002ecec0(int);


int FUN_0010600c(fn_0010600c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  for (temp_v2 = 0; temp_v0 = FUN_002eccc4(&param_1->field_0x4), temp_v2 < temp_v0; temp_v2 = temp_v2 + 1) {
    piVar1 = *(int **)(param_1->field_0x4 + temp_v2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 4))();
    }
    piVar1 = *(int **)(param_1->field_0x10 + temp_v2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 4))();
    }
  }
  if (param_1->field_0x1c != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1->field_0x1c + 4))();
  }
  temp_v1 = FUN_002ec890(&param_1[2].field_0x10);
  temp_v1 = FUN_002ec890(temp_v1 - 0x18);
  temp_v1 = FUN_002ec890(temp_v1 - 0x18);
  temp_v1 = FUN_002ecec0(temp_v1 - 0x10);
  temp_v1 = FUN_002ecec0(temp_v1 - 0xc);
  return temp_v1 - 4;
}

} /* extern "C" */
