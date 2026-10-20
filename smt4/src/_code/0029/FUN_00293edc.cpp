#include "romwright_types.h"

extern "C" {

typedef struct fn_00293edc_arg0 fn_00293edc_arg0;
struct fn_00293edc_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8];
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4c];
    int field_0x60; /* +0x60 */
    unsigned char pad_0x64[0x4c];
    int field_0xb0; /* +0xb0 */
};


unsigned int FUN_00293edc(fn_00293edc_arg0 *param_1)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = param_1->field_0x4;
  temp_v1 = temp_v0 == 0;
  if (temp_v1) {
    temp_v0 = param_1->field_0x10;
  }
  if (temp_v1 && temp_v0 == 0) {
    temp_v1 = param_1->field_0x60 == 0;
    if (temp_v1) {
      param_1 = (fn_00293edc_arg0 *)param_1->field_0xb0;
    }
    if (temp_v1 && param_1 == (fn_00293edc_arg0 *)0x0) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
