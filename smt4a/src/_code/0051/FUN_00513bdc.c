/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00513bdc` (_code @ 0x513bdc, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00513bdc_arg0 fn_00513bdc_arg0;
struct fn_00513bdc_arg0 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x28];
    int field_0x34; /* +0x34 */
    int field_0x38; /* +0x38 */
};

extern unsigned char DAT_0062d6f8; /* 0x62d6f8 */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_00513bdc(fn_00513bdc_arg0 *param_1)

{
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d6f8);
  if (param_1->field_0x38 == 0) {
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d6f8);
    return 0;
  }
  param_1->field_0x34 = param_1->field_0x34 + 1;
  if (param_1->field_0x34 == param_1->field_0x8) {
    param_1->field_0x34 = 0;
  }
  param_1->field_0x38 = param_1->field_0x38 - 1;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d6f8);
  return 1;
}
