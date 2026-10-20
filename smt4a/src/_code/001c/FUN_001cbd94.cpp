#include "romwright_types.h"

extern "C" {

typedef struct fn_001cbd94_arg0 fn_001cbd94_arg0;
struct fn_001cbd94_arg0 {
    unsigned char pad_0x0[0x5];
    undefined1 field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x72];
    undefined1 field_0x78; /* +0x78 */
    unsigned char pad_0x79[0x3];
    undefined4 field_0x7c; /* +0x7c */
    undefined1 field_0x80; /* +0x80 */
};


void FUN_001cbd94(fn_001cbd94_arg0 *param_1)

{
  param_1->field_0x80 = 0;
  param_1->field_0x78 = 0;
  param_1->field_0x7c = 0;
  param_1->field_0x5 = 1;
  return;
}

} /* extern "C" */
