/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d60d4` (_code @ 0x3d60d4, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00227280(unsigned int, unsigned int, unsigned int);

typedef struct fn_003d60d4_arg0 fn_003d60d4_arg0;
struct fn_003d60d4_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x5e7];
    float field_0x5f0; /* +0x5f0 */
    float field_0x5f4; /* +0x5f4 */
    float field_0x5f8; /* +0x5f8 */
    unsigned char pad_0x5fc[0xe8];
    float field_0x6e4; /* +0x6e4 */
    float field_0x6e8; /* +0x6e8 */
    float field_0x6ec; /* +0x6ec */
    unsigned char pad_0x6f0[0xc];
    float field_0x6fc; /* +0x6fc */
    float field_0x700; /* +0x700 */
    float field_0x704; /* +0x704 */
    float field_0x708; /* +0x708 */
    float field_0x70c; /* +0x70c */
    float field_0x710; /* +0x710 */
};

extern float DAT_00493530; /* 0x493530 */
extern float DAT_00493534; /* 0x493534 */
extern float DAT_00493538; /* 0x493538 */

/* Supplied declaration required: FUN_00227280. */


void FUN_003d60d4(fn_003d60d4_arg0 *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float *pfVar1;
  float in_s0;
  float temp_v0;
  float temp_v1;
  
  FUN_00227280(*(unsigned int *)&param_1[1].field_0x8,*(unsigned int *)(param_1 + 1),
               *(unsigned int *)&param_1[1].field_0x4);
  temp_v0 = param_1->field_0x70c - DAT_00493534;
  temp_v1 = param_1->field_0x710 - DAT_00493538;
  pfVar1 = &param_1->field_0x6e4;
  *pfVar1 = DAT_00493530 + (param_1->field_0x708 - DAT_00493530) * in_s0;
  param_1->field_0x6e8 = DAT_00493534 + temp_v0 * in_s0;
  param_1->field_0x6ec = DAT_00493538 + temp_v1 * in_s0;
  *pfVar1 = *pfVar1 - (param_1->field_0x6fc - param_1->field_0x5f0) * in_s0;
  param_1->field_0x6e8 =
       param_1->field_0x6e8 - (param_1->field_0x700 - param_1->field_0x5f4) * in_s0;
  param_1->field_0x6ec =
       param_1->field_0x6ec - (param_1->field_0x704 - param_1->field_0x5f8) * in_s0;
  return;
}

} /* extern "C" */
