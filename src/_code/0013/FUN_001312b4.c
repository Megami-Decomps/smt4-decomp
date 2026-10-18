/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001312b4` (_code @ 0x1312b4, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001312b4_arg0 fn_001312b4_arg0;
struct fn_001312b4_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0xc1];
    undefined1 field_0xc5; /* +0xc5 */
    undefined1 field_0xc6; /* +0xc6 */
    byte field_0xc7; /* +0xc7 */
    unsigned char pad_0xc8[0x64];
    void *field_0x12c; /* +0x12c */
    unsigned char field_0x130; /* +0x130 */
    unsigned char pad_0x131[0x3];
    int field_0x134; /* +0x134 */
};

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002ac34c. */
/* Supplied declaration required: FUN_002b4bf8. */
/* Supplied declaration required: FUN_002b4c60. */
extern unsigned int FUN_002bafb0(void);


void FUN_001312b4(fn_001312b4_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1->field_0x134 != 0) {
    FUN_002b4c60();
    FUN_002b4bf8(param_1->field_0x134);
    param_1->field_0x134 = 0;
    param_1->field_0xc5 = 0;
    param_1->field_0xc6 = 0;
    if (param_1->field_0x12c != (romwright_code *)0x0) {
      (*param_1->field_0x12c)(param_1,0,*(unsigned int *)&param_1->field_0x130);
    }
    if (param_1->field_0xc7 != 0) {
      param_1->field_0xc7 = 0;
      temp_v0 = FUN_002bafb0();
      FUN_002ac34c(temp_v0,param_1);
      return;
    }
  }
  return;
}
