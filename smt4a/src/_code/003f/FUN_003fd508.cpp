/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd508` (_code @ 0x3fd508, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy(...);

typedef struct fn_003fd508_arg0 fn_003fd508_arg0;
struct fn_003fd508_arg0 {
    unsigned char pad_0x0[0x1];
    undefined1 field_0x1; /* +0x1 */
    undefined1 field_0x2; /* +0x2 */
    unsigned char pad_0x3[0xc];
    undefined1 field_0xf; /* +0xf */
    undefined1 field_0x10; /* +0x10 */
    undefined1 field_0x11; /* +0x11 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_001ab940(void);
/* Supplied declaration required: rt_memcpy. */


void FUN_003fd508(fn_003fd508_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  rt_memcpy(temp_v0 + 0x100,param_1,0x44);
  return;
}

} /* extern "C" */
