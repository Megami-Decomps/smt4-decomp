/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120f5c` (_code @ 0x120f5c, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00120f5c_arg0 fn_00120f5c_arg0;
struct fn_00120f5c_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    char field_0x8; /* +0x8 */
    undefined1 field_0x9; /* +0x9 */
    unsigned char pad_0xa[0x2];
    undefined4 field_0xc; /* +0xc */
};

extern unsigned int FUN_002eb5f4(void);
extern unsigned char FUN_00306d18(int, void *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00310284. */


void FUN_00120f5c(fn_00120f5c_arg0 *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  param_1->field_0x8 = (char)param_2;
  if (param_2 != 0) {
    temp_v1 = *(int *)((int)param_1->field_0x4 + 8);
    if (temp_v1 != 0) {
      temp_v0 = FUN_00306d18(temp_v1,param_1->field_0x4,0xf,0);
      param_1->field_0x9 = temp_v0;
    }
    temp_v2 = FUN_002eb5f4();
    param_1->field_0xc = temp_v2;
    return;
  }
  FUN_00310284();
  return;
}
