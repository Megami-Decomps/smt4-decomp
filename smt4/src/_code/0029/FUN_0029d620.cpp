#include "romwright_types.h"

extern "C" {

typedef struct fn_0029d620_arg0 fn_0029d620_arg0;
struct fn_0029d620_arg0 {
    unsigned char pad_0x0[0x20];
    int field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x3c];
    undefined1 field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x1];
    byte field_0x62; /* +0x62 */
};


void FUN_0029d620(fn_0029d620_arg0 *param_1,int param_2)

{
  if (param_1->field_0x62 == 0) {
    if (param_1->field_0x20 != param_2) {
      param_1->field_0x60 = 1;
    }
    param_1->field_0x20 = param_2;
  }
  return;
}

} /* extern "C" */
