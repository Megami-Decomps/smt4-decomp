/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002637b4` (_code @ 0x2637b4, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002637b4_arg0 fn_002637b4_arg0;
struct fn_002637b4_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    int field_0x10; /* +0x10 */
};

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002a409c. */
/* Supplied declaration required: FUN_002c4360. */


unsigned int FUN_002637b4(fn_002637b4_arg0 *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = param_1->field_0x4;
  temp_v0 = param_4;
  if (puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar1)(puVar1);
    (**(romwright_code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    param_1->field_0x4 = (void *)0x0;
  }
  puVar1 = param_1->field_0x8;
  if (puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar1)(puVar1);
    (**(romwright_code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    param_1->field_0x8 = (void *)0x0;
  }
  temp_v0 = param_1->field_0x10;
  if (temp_v0 != 0) {
    FUN_002a409c(&temp_v0);
  }
  FUN_002c4360(*(unsigned int *)(param_1 + 1));
  FUN_002c4360(param_1);
  return 1;
}
