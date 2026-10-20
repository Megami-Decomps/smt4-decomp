#include "romwright_types.h"

extern "C" {

typedef struct fn_0042326c_arg0 fn_0042326c_arg0;
struct fn_0042326c_arg0 {
    unsigned char pad_0x0[0x6];
    undefined1 field_0x6; /* +0x6 */
    unsigned char pad_0x7[0x51];
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
};

extern int FUN_005135d0(void);


unsigned char FUN_0042326c(fn_0042326c_arg0 *param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_005135d0();
  if (temp_v0 != 0) {
    param_1->field_0x58 = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x6 = 0;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
