/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Voice_SetBiquadFilterCoefficients` (_code @ 0x1c7d00, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001c7d00_arg0 fn_001c7d00_arg0;
typedef struct fn_001c7d00_arg0_p68 fn_001c7d00_arg0_p68;
struct fn_001c7d00_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    ushort field_0x14; /* +0x14 */
    unsigned char pad_0x16[0x2];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x4b];
    fn_001c7d00_arg0_p68 *field_0x68; /* +0x68 */
};
struct fn_001c7d00_arg0_p68 {
    unsigned char pad_0x0[0xc];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined2 field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0x4a];
    unsigned char field_0x68; /* +0x68 */
    unsigned char pad_0x69[0x3];
    ushort field_0x6c; /* +0x6c */
};


void nn_snd_CTR_Voice_SetBiquadFilterCoefficients(fn_001c7d00_arg0 *param_1,unsigned int *param_2)

{
  fn_001c7d00_arg0_p68 *pfVar1;
  
  param_1->field_0xc = *param_2;
  param_1->field_0x10 = param_2[1];
  param_1->field_0x14 = *(unsigned short *)(param_2 + 2);
  pfVar1 = param_1->field_0x68;
  pfVar1->field_0x14 = param_1->field_0xc;
  pfVar1->field_0x18 = param_1->field_0x10;
  pfVar1->field_0x1c = param_1->field_0x14;
  pfVar1->field_0x6c = pfVar1->field_0x6c | 0x10;
  return;
}
