/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049204c` (_code @ 0x49204c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0049204c_arg0 fn_0049204c_arg0;
struct fn_0049204c_arg0 {
    unsigned char pad_0x0[0x20634];
    undefined1 field_0x20634; /* +0x20634 */
    unsigned char pad_0x20635[0x13];
    undefined4 field_0x20648; /* +0x20648 */
    undefined4 field_0x2064c; /* +0x2064c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void FUN_0049204c(fn_0049204c_arg0 *param_1)

{
  param_1->field_0x20634 = 0;
  param_1->field_0x20648 = 0xa0;
  param_1->field_0x2064c = 0x78;
  return;
}
