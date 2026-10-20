#include "romwright_types.h"

extern "C" {

typedef struct fn_004daaf4_arg0 fn_004daaf4_arg0;
struct fn_004daaf4_arg0 {
    unsigned char pad_0x0[0x16e];
    undefined1 field_0x16e; /* +0x16e */
    unsigned char pad_0x16f[0x1];
    undefined2 field_0x170; /* +0x170 */
    undefined2 field_0x172; /* +0x172 */
};


void FUN_004daaf4(fn_004daaf4_arg0 *param_1,unsigned char param_2,unsigned short param_3,unsigned short param_4
                 )

{
  param_1->field_0x16e = param_2;
  param_1->field_0x170 = param_3;
  param_1->field_0x172 = param_4;
  return;
}

} /* extern "C" */
