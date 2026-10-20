/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd25e` (_code @ 0x2fd25e, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0031008a(void);

typedef struct fn_002fd25e_arg0 fn_002fd25e_arg0;
struct fn_002fd25e_arg0 {
    unsigned char pad_0x0[0x4];
    char field_0x4; /* +0x4 */
    undefined1 field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x6];
    int field_0xc; /* +0xc */
};

extern unsigned char FUN_00306d18(int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0031008a. */


void FUN_002fd25e(fn_002fd25e_arg0 *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  param_1->field_0x4 = (char)param_2;
  if (param_2 != 0) {
    temp_v1 = *(int *)(param_1->field_0xc + 0xb0);
    if (temp_v1 != 0) {
      temp_v0 = FUN_00306d18(temp_v1,param_1->field_0xc,1,0);
      param_1->field_0x5 = temp_v0;
    }
    return;
  }
  FUN_0031008a();
  return;
}

} /* extern "C" */
