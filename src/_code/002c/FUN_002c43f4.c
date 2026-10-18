/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c43f4` (_code @ 0x2c43f4, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002c43f4_arg0 fn_002c43f4_arg0;
struct fn_002c43f4_arg0 {
    unsigned char pad_0x0[0x36];
    ushort field_0x36; /* +0x36 */
    unsigned char pad_0x38[0x20];
    void *field_0x58; /* +0x58 */
    unsigned char field_0x5c; /* +0x5c */
    unsigned char pad_0x5d[0x3b];
    byte field_0x98; /* +0x98 */
};

extern void FUN_002c43f4(fn_002c43f4_arg0 *);


void FUN_002c43f4(fn_002c43f4_arg0 *param_1)

{
  fn_002c43f4_arg0 *pfVar1;
  fn_002c43f4_arg0 *pfVar2;
  
  pfVar1 = param_1->field_0x58;
  while (pfVar1 != (fn_002c43f4_arg0 *)0x0) {
    pfVar2 = *(fn_002c43f4_arg0 **)&pfVar1->field_0x5c;
    pfVar1->field_0x36 = param_1->field_0x36;
    FUN_002c43f4(pfVar1);
    pfVar1 = pfVar2;
  }
  switch(param_1->field_0x98) {
  default:
    return;
  case 1:
  case 2:
  case 3:
    param_1->field_0x98 = 4;
    return;
  }
}
