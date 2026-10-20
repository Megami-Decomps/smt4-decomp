#include "romwright_types.h"

extern "C" {

typedef struct fn_004d0720_arg0 fn_004d0720_arg0;
struct fn_004d0720_arg0 {
    unsigned char pad_0x0[0x11];
    undefined1 field_0x11; /* +0x11 */
    undefined1 field_0x12; /* +0x12 */
    unsigned char pad_0x13[0x1];
    undefined2 field_0x14; /* +0x14 */
};


void FUN_004d0720(fn_004d0720_arg0 *param_1)

{
  param_1->field_0x11 = 0;
  param_1->field_0x14 = 0xffff;
  param_1->field_0x12 = 0;
  return;
}

} /* extern "C" */
