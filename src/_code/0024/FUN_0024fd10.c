/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024fd10` (_code @ 0x24fd10, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0024fd10_arg0 fn_0024fd10_arg0;
struct fn_0024fd10_arg0 {
    unsigned char pad_0x0[0x20];
    int field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x90];
    int field_0xb8; /* +0xb8 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int *FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3b48. */


unsigned int * FUN_0024fd10(fn_0024fd10_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_1->field_0x20;
  if (temp_v0 == 0) {
    temp_v0 = param_1->field_0xb8;
  }
  temp_v1 = temp_v0 * param_1->field_0x24;
  if (temp_v1 >= 101) {
    temp_v1 = 100;
  }
  puVar1 = (unsigned int *)FUN_002c34a4(0x10000,0x100,0,0x38,0x10,1);
  FUN_002c3b48(puVar1,0x38);
  puVar1[1] = 0xffffffff;
  *puVar1 = temp_v1;
  puVar1[2] = 0x3f800000;
  *(unsigned short *)(puVar1 + 0xd) = 1;
  return puVar1;
}
