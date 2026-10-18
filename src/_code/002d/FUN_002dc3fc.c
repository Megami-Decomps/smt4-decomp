/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dc3fc` (_code @ 0x2dc3fc, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002dc3fc_arg0 fn_002dc3fc_arg0;
struct fn_002dc3fc_arg0 {
    unsigned char pad_0x0[0x3044];
    undefined4 field_0x3044; /* +0x3044 */
    int field_0x3048; /* +0x3048 */
    undefined4 field_0x304c; /* +0x304c */
    unsigned char pad_0x3050[0x4];
    unsigned char field_0x3054; /* +0x3054 */
    unsigned char pad_0x3055[0x7];
    undefined4 field_0x305c; /* +0x305c */
    unsigned char pad_0x3060[0x1f];
    unsigned char field_0x307f; /* +0x307f */
    unsigned char pad_0x3080[0x38c];
    undefined4 field_0x340c; /* +0x340c */
    unsigned char pad_0x3410[0x2304];
    undefined2 field_0x5714; /* +0x5714 */
    unsigned char pad_0x5716[0x10];
    undefined2 field_0x5726; /* +0x5726 */
    undefined2 field_0x5728; /* +0x5728 */
    undefined2 field_0x572a; /* +0x572a */
    unsigned char pad_0x572c[0xc];
    undefined2 field_0x5738; /* +0x5738 */
    unsigned char pad_0x573a[0x1e];
    undefined4 field_0x5758; /* +0x5758 */
    unsigned char pad_0x575c[0x3];
    byte field_0x575f; /* +0x575f */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_001eb740(void);
/* Supplied declaration required: FUN_00293074. */
/* Supplied declaration required: FUN_002983dc. */


void FUN_002dc3fc(fn_002dc3fc_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  param_1->field_0x307f = 0;
  if (param_1->field_0x3048 == 0) {
    temp_v0 = FUN_001eb740();
    if (temp_v0 == 0) {
      FUN_00293074(0);
    }
    FUN_002983dc(param_1,0xe,1);
    return;
  }
  if (param_1->field_0x3048 == 0x17) {
    *(unsigned int *)&param_1->field_0x3054 = 0x1e;
    FUN_002983dc(param_1,0x18,1);
    return;
  }
  FUN_002983dc(param_1,0x1e,1);
  return;
}
