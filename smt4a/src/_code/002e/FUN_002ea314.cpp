/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea314` (_code @ 0x2ea314, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9768(...);
int FUN_002ee796(...);
int FUN_002ee7c4(...);

typedef struct fn_002ea314_arg0 fn_002ea314_arg0;
struct fn_002ea314_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x200];
    byte field_0x210; /* +0x210 */
    unsigned char pad_0x211[0x2];
    byte field_0x213; /* +0x213 */
};

/* Supplied declaration required: FUN_002e9768. */
/* Supplied declaration required: FUN_002ee796. */
/* Supplied declaration required: FUN_002ee7c4. */


int FUN_002ea314(fn_002ea314_arg0 *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_002ee796(param_1,0x20);
  if (param_1->field_0x210 != 0) {
    FUN_002ee7c4(param_1);
    if (param_1->field_0x213 == 0) {
      temp_v1 = 0x2ea364;
    }
    else {
      temp_v1 = 0x2ea358;
    }
  }
  else {
    temp_v1 = 0x2ea36c;
  }
  temp_v0 = param_1->field_0xc;
  FUN_002e9768(temp_v0,0x20,temp_v1,param_2);
  param_1->field_0xc = temp_v0 * 2 + param_1->field_0xc;
  return (int)param_1;
}

} /* extern "C" */
