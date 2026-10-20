#include "romwright_types.h"

extern "C" {

int asdMemFree(int);

typedef struct fn_002371cc_arg0 fn_002371cc_arg0;
struct fn_002371cc_arg0 {
    unsigned char pad_0x0[0x24];
    int field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x4];
    uint field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x14];
    int field_0x44; /* +0x44 */
};

/* Supplied declaration required: asdMemFree. */


void FUN_002371cc(fn_002371cc_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((param_1->field_0x24 != 0) && ((param_1->field_0x2c & 0x10) == 0)) {
    asdMemFree(param_1->field_0x24);
    param_1->field_0x24 = 0;
  }
  if (param_1->field_0x44 != 0) {
    asdMemFree(param_1->field_0x44);
    param_1->field_0x44 = 0;
  }
  return;
}

} /* extern "C" */
