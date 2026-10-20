#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_Voice_SetPriority(int, int);

typedef struct fn_001d239c_arg0 fn_001d239c_arg0;
struct fn_001d239c_arg0 {
    unsigned char pad_0x0[0x98];
    byte field_0x98; /* +0x98 */
    unsigned char pad_0x99[0x9f];
    undefined1 field_0x138; /* +0x138 */
    unsigned char pad_0x139[0x3];
    byte field_0x13c; /* +0x13c */
    unsigned char pad_0x13d[0x6b];
    int field_0x1a8; /* +0x1a8 */
};

/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPriority. */


void FUN_001d239c(fn_001d239c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1->field_0x98 != 4) {
    if ((param_1->field_0x1a8 != 0) && (param_1->field_0x13c == 0)) {
      nw_snd_internal_driver_Voice_SetPriority(param_1->field_0x1a8,1);
    }
    param_1->field_0x98 = 4;
  }
  param_1->field_0x138 = 0;
  return;
}

} /* extern "C" */
