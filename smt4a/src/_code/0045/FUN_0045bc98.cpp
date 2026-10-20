#include "romwright_types.h"

extern "C" {

int __aeabi_memset4(...);

typedef struct fn_0045bc98_arg0 fn_0045bc98_arg0;
struct fn_0045bc98_arg0 {
    undefined1 field_0x0; /* +0x0 */
    undefined1 field_0x1; /* +0x1 */
    undefined1 field_0x2; /* +0x2 */
    undefined1 field_0x3; /* +0x3 */
    undefined1 field_0x4; /* +0x4 */
    unsigned char field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x1];
    undefined1 field_0x7; /* +0x7 */
    undefined1 field_0x8; /* +0x8 */
    undefined1 field_0x9; /* +0x9 */
    undefined1 field_0xa; /* +0xa */
};

/* Supplied declaration required: __aeabi_memset4. */


unsigned char * FUN_0045bc98(fn_0045bc98_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1->field_0x0 = 0;
  param_1->field_0x1 = 0;
  param_1->field_0x2 = 0;
  param_1->field_0x3 = 0;
  param_1->field_0x4 = 0x7f;
  param_1->field_0x7 = 0x40;
  param_1->field_0x8 = 0;
  param_1->field_0x9 = 0;
  param_1->field_0xa = 0;
  __aeabi_memset4(param_1 + 1,2,0xffffffff);
  *(unsigned short *)&param_1->field_0x5 = 0;
  return &param_1->field_0x0;
}

} /* extern "C" */
