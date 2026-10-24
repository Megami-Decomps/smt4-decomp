/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f63e4` (_code @ 0x3f63f4, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003f63f4_arg0 fn_003f63f4_arg0;
struct fn_003f63f4_arg0 {
    unsigned char pad_0x0[0x18];
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    int field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x4];
    int field_0x34; /* +0x34 */
    int field_0x38; /* +0x38 */
};

extern unsigned char g_mwmoCriticalSection; /* 0x4d4674 */

extern unsigned int indexerGetElementOffset(fn_003f63f4_arg0 *, unsigned int);
extern unsigned int VX2DecoderGetV(fn_003f63f4_arg0 *, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_003f63e4(fn_003f63f4_arg0 *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  
  nn_os_CriticalSection_Enter((unsigned int)&g_mwmoCriticalSection);
  if (param_1->field_0x38 != 0) {
    temp_v1 = param_1->field_0x34;
    *param_2 = *(unsigned int *)(param_1->field_0x28 + temp_v1 * 4);
    temp_v0 = indexerGetElementOffset(param_1,*(unsigned int *)(param_1->field_0x28 + temp_v1 * 4));
    param_2[1] = temp_v0;
    temp_v0 = VX2DecoderGetV(param_1,*(unsigned int *)(param_1->field_0x28 + temp_v1 * 4));
    param_2[2] = temp_v0;
    param_2[3] = param_1->field_0x18;
    param_2[4] = param_1->field_0x18;
    param_2[5] = param_1->field_0x18;
    param_2[6] = param_1->field_0x20;
    param_2[7] = param_1->field_0x24;
    param_2[8] = *(unsigned int *)(param_1->field_0x2c + temp_v1 * 4);
    param_2[9] = *(unsigned int *)(param_1->field_0x2c + temp_v1 * 4);
    param_2[10] = 1;
    nn_os_CriticalSection_Leave((unsigned int)&g_mwmoCriticalSection);
    return 1;
  }
  nn_os_CriticalSection_Leave((unsigned int)&g_mwmoCriticalSection);
  return 0;
}

} /* extern "C" */
