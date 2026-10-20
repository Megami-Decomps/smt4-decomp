/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040dcdc` (_code @ 0x40dcdc, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e7840(unsigned int, unsigned int, unsigned int, unsigned int);
int VectorSignedToFloat(...);

typedef struct fn_0040dcdc_arg1 fn_0040dcdc_arg1;
struct fn_0040dcdc_arg1 {
    unsigned char pad_0x0[0x2];
    undefined2 field_0x2; /* +0x2 */
    unsigned char pad_0x4[0x24];
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x20];
    int field_0x4c; /* +0x4c */
};

extern int g_handleRegistry; /* 0x56fcc0 */
extern int g_btlStageModel; /* 0x57a4f8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int btlGetMainState(void);
/* Supplied declaration required: FUN_003e7840. */
extern unsigned int *table108Owner(unsigned int, int, int);


void FUN_0040dcdc(unsigned int param_1,fn_0040dcdc_arg1 *param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  
  if (0 < param_2->field_0x28) {
    temp_v2 = btlGetMainState();
    VectorSignedToFloat(param_2->field_0x28 - param_2->field_0x4c,(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar4 = (unsigned int *)table108Owner(*(unsigned int *)(g_handleRegistry + 4),
                                  (int)*(short *)(g_btlStageModel + 0xac),param_2->field_0x4c);
    temp_v3 = *puVar4;
    temp_v0 = (temp_v3 & 0xffffff) >> 0x10;
    temp_v1 = temp_v3 >> 0x18;
    temp_v3 = (temp_v3 >> 8) & 0xff;
    VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_003e7840(temp_v2,temp_v3,temp_v1,((temp_v0 << 8) | temp_v1) << 0x10);
    temp_v4 = param_2->field_0x4c + 1;
    param_2->field_0x4c = temp_v4;
    if (temp_v4 < param_2->field_0x28) {
      param_2->field_0x2 = 1;
    }
  }
  return;
}

} /* extern "C" */
