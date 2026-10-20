#include "romwright_types.h"

extern "C" {

typedef struct fn_001a5e50_arg0 fn_001a5e50_arg0;
struct fn_001a5e50_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    byte field_0xc; /* +0xc */
};


unsigned int FUN_001a5e50(fn_001a5e50_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v2 = param_1->field_0xc != 0;
  temp_v1 = 0;
  if (temp_v2) {
    temp_v1 = param_1->field_0x8;
  }
  if ((temp_v2 && temp_v1 != 0) && (param_2 < *(unsigned int *)param_1->field_0x4)) {
    temp_v0 = *(unsigned int *)(temp_v1 + param_2 * 4);
    *(unsigned int *)(temp_v1 + param_2 * 4) = param_3;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
