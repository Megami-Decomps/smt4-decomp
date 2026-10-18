/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3118` (_code @ 0x3c3118, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003c3118_arg0 fn_003c3118_arg0;
struct fn_003c3118_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x4b];
    int field_0x50; /* +0x50 */
    short field_0x54; /* +0x54 */
    short field_0x56; /* +0x56 */
    short field_0x58; /* +0x58 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0026adcc. */


unsigned char FUN_003c3118(fn_003c3118_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1->field_0x50;
  FUN_0026adcc(temp_v0,*(unsigned int *)(param_1 + 1),*(unsigned int *)&param_1[1].field_0x4,
               (int)param_1->field_0x58,(int)param_1->field_0x54,(int)param_1->field_0x56,0,1);
  return temp_v0 != 0;
}
