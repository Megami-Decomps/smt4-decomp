/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f61b0` (_code @ 0x4f61b0, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00208b84(void);
int FUN_004f7f08(void);

typedef struct fn_004f61b0_arg0 fn_004f61b0_arg0;
struct fn_004f61b0_arg0 {
    unsigned char pad_0x0[0x339c];
    uint field_0x339c; /* +0x339c */
    unsigned char pad_0x33a0[0xe];
    undefined2 field_0x33ae; /* +0x33ae */
    short field_0x33b0; /* +0x33b0 */
    short field_0x33b2; /* +0x33b2 */
    undefined1 field_0x33b4; /* +0x33b4 */
    unsigned char pad_0x33b5[0xf];
    undefined4 field_0x33c4; /* +0x33c4 */
    void *field_0x33c8; /* +0x33c8 */
    uint field_0x33cc; /* +0x33cc */
    uint field_0x33d0; /* +0x33d0 */
};

extern unsigned int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00208b84. */
extern void *FUN_003eae20(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_003eda28(unsigned int);
/* Supplied declaration required: FUN_004f7f08. */


void FUN_004f61b0(fn_004f61b0_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  void *pvVar3;
  unsigned int temp_v2;
  
  FUN_004f7f08();
  param_1->field_0x33b0 = (short)param_2;
  param_1->field_0x33b2 = (short)param_3;
  param_1->field_0x339c = param_1->field_0x339c | 0x4000;
  temp_v1 = FUN_0014aa78();
  pvVar3 = (void *)FUN_003eae20(temp_v1,param_2,param_3);
  if (pvVar3 == (void *)0x0) {
    param_1->field_0x33b4 = 0xd;
  }
  else {
    param_1->field_0x33b4 = 1;
    param_1->field_0x33ae = *(unsigned short *)((int)pvVar3 + 4);
    temp_v1 = FUN_003eda28(temp_v1);
    param_1->field_0x33c4 = temp_v1;
    param_1->field_0x33c8 = pvVar3;
    temp_v2 = (unsigned int)*(unsigned char *)((int)pvVar3 + 8);
    if ((*(unsigned char *)((int)pvVar3 + 8) & 2) != 0) {
      FUN_00208b84();
      param_1->field_0x33cc = temp_v2;
    }
    temp_v0 = *(unsigned char *)((int)param_1->field_0x33c8 + 8);
    temp_v2 = (unsigned int)temp_v0;
    if ((temp_v0 & 4) != 0) {
      FUN_00208b84();
      param_1->field_0x33d0 = temp_v2;
    }
  }
  return;
}

} /* extern "C" */
