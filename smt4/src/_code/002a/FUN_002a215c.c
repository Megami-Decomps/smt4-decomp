/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a215c` (_code @ 0x2a215c, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002a215c_arg1 fn_002a215c_arg1;
struct fn_002a215c_arg1 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    undefined4 *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    float field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x20c];
    float field_0x224; /* +0x224 */
    unsigned char pad_0x228[0x4];
    float field_0x22c; /* +0x22c */
};

/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2B743C. */


void FUN_002a215c(unsigned int param_1,fn_002a215c_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  nw_ut_internal_LinkListImpl_erase_2B743C(param_1,&param_2->field_0x4);
  return;
}
