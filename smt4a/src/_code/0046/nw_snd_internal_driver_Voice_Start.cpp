#include "romwright_types.h"

extern "C" {

typedef struct fn_00461c4c_arg0 fn_00461c4c_arg0;
struct fn_00461c4c_arg0 {
    unsigned char pad_0x0[0x15];
    undefined1 field_0x15; /* +0x15 */
    unsigned char pad_0x16[0x1];
    undefined1 field_0x17; /* +0x17 */
    unsigned char pad_0x18[0x8];
    ushort field_0x20; /* +0x20 */
};


void nw_snd_internal_driver_Voice_Start(fn_00461c4c_arg0 *param_1)

{
  param_1->field_0x15 = 1;
  param_1->field_0x17 = 0;
  param_1->field_0x20 = param_1->field_0x20 | 1;
  return;
}

} /* extern "C" */
