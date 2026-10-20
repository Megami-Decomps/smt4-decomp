/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015dd58` (_code @ 0x15dd58, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c564c(int);

typedef struct fn_0015dd58_arg0 fn_0015dd58_arg0;
struct fn_0015dd58_arg0 {
    unsigned char pad_0x0[0x754];
    uint field_0x754; /* +0x754 */
    undefined4 field_0x758; /* +0x758 */
    undefined4 field_0x75c; /* +0x75c */
    undefined4 field_0x760; /* +0x760 */
    undefined4 field_0x764; /* +0x764 */
    undefined4 field_0x768; /* +0x768 */
    unsigned char pad_0x76c[0x5f4];
    undefined4 field_0xd60; /* +0xd60 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_4_stack;

extern int FUN_0015e8b4(unsigned int *);
/* Supplied declaration required: FUN_002c564c. */


unsigned int
FUN_0015dd58(fn_0015dd58_arg0 *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int uStack_18;
  unsigned int temp_v5;
  
  uStack_18 = param_3;
  temp_v5 = param_4;
  temp_v0 = FUN_0015e8b4((unsigned int *)&uStack_18);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    if ((param_1->field_0x754 & 8) == 0) {
      temp_v1 = param_2[1];
      temp_v2 = param_2[2];
      temp_v3 = param_2[3];
      temp_v4 = param_2[4];
      param_1->field_0x758 = *param_2;
      param_1->field_0x75c = temp_v1;
      param_1->field_0x760 = temp_v2;
      param_1->field_0x764 = temp_v3;
      param_1->field_0x768 = temp_v4;
      param_1->field_0xd60 = temp_v5;
      param_1->field_0x754 = param_1->field_0x754 | 9;
      FUN_002c564c(0);
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
