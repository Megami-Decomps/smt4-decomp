/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb200` (_code @ 0x3eb200, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003eb200_arg0 fn_003eb200_arg0;
struct fn_003eb200_arg0 {
    unsigned char pad_0x0[0xf0];
    int field_0xf0; /* +0xf0 */
    unsigned char pad_0xf4[0x44ac];
    uint field_0x45a0; /* +0x45a0 */
    uint field_0x45a4; /* +0x45a4 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned int DAT_005739e8; /* 0x5739e8 */
extern unsigned int DAT_005739ec; /* 0x5739ec */
extern unsigned int DAT_00573a78; /* 0x573a78 */
extern unsigned int DAT_00573a7c; /* 0x573a7c */


unsigned int FUN_003eb200(fn_003eb200_arg0 *param_1)

{
  if (((DAT_005739ec & param_1->field_0x45a4) == 0 && (DAT_005739e8 & param_1->field_0x45a0) == 0)
     && (((param_1->field_0x45a0 & DAT_00573a78) != 0 || (param_1->field_0x45a4 & DAT_00573a7c) != 0
         || (param_1->field_0xf0 < 0)))) {
    return 1;
  }
  return 0;
}
