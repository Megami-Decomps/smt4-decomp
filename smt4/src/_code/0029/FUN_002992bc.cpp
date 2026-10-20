#include "romwright_types.h"

extern "C" {

typedef struct fn_002992bc_arg0 fn_002992bc_arg0;
struct fn_002992bc_arg0 {
    unsigned char pad_0x0[0x48];
    int field_0x48; /* +0x48 */
    unsigned char pad_0x4c[0x15];
    undefined1 field_0x61; /* +0x61 */
    byte field_0x62; /* +0x62 */
};


void FUN_002992bc(fn_002992bc_arg0 *param_1,int param_2)

{
  if (param_1->field_0x62 == 0) {
    if (param_1->field_0x48 != param_2) {
      param_1->field_0x61 = 1;
    }
    param_1->field_0x48 = param_2;
  }
  return;
}

} /* extern "C" */
