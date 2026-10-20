/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd8d4` (_code @ 0x2bd8d4, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_002bd8d4_arg0 fn_002bd8d4_arg0;
struct fn_002bd8d4_arg0 {
    unsigned char pad_0x0[0x12c4];
    int field_0x12c4; /* +0x12c4 */
    int field_0x12c8; /* +0x12c8 */
    unsigned char pad_0x12cc[0x38];
    void *field_0x1304; /* +0x1304 */
    undefined2 field_0x1308; /* +0x1308 */
    undefined2 field_0x130a; /* +0x130a */
    undefined1 field_0x130c; /* +0x130c */
    unsigned char pad_0x130d[0x31];
    undefined1 field_0x133e; /* +0x133e */
    unsigned char pad_0x133f[0x3];
    undefined1 field_0x1342; /* +0x1342 */
};


/* WARNING: Removing unreachable block (ram,0x002bd91c) */

void FUN_002bd8d4(fn_002bd8d4_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  short *psVar1;
  
  psVar1 = (short *)param_1->field_0x1304;
  if (psVar1 == (short *)0x0) {
    return;
  }
  param_1->field_0x1308 = 0;
  param_1->field_0x130a = 0;
  param_1->field_0x133e = 0;
  param_1->field_0x1342 = 0;
  param_1->field_0x130c = 0;
  param_1->field_0x12c4 = (int)*psVar1 << 0xc;
  param_1->field_0x12c8 = (int)psVar1[1] << 0xc;
  return;
}

} /* extern "C" */
