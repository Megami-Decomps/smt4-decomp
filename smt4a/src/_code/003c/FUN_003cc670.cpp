#include "romwright_types.h"

extern "C" {

void *FUN_00387ad8(...);

typedef struct fn_003cc670_arg0 fn_003cc670_arg0;
struct fn_003cc670_arg0 {
    unsigned char pad_0x0[0xf8];
    undefined4 field_0xf8; /* +0xf8 */
    unsigned char pad_0xfc[0x16];
    undefined1 field_0x112; /* +0x112 */
    unsigned char pad_0x113[0x1];
    undefined1 field_0x114; /* +0x114 */
    unsigned char pad_0x115[0x37];
    undefined4 field_0x14c; /* +0x14c */
};

/* Supplied declaration required: FUN_00387ad8. */


unsigned int FUN_003cc670(fn_003cc670_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  fn_003cc670_arg0 *pfVar1;
  unsigned int temp_v0;
  
  temp_v0 = 0;
  pfVar1 = (fn_003cc670_arg0 *)FUN_00387ad8(param_1,0);
  if (pfVar1 != (fn_003cc670_arg0 *)0x0) {
    param_1->field_0x14c = 0;
    param_1->field_0xf8 = 1;
    param_1->field_0x112 = 1;
    temp_v0 = 3;
    param_1->field_0x114 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
