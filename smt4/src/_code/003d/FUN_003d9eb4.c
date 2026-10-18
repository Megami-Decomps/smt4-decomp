/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d9eb4` (_code @ 0x3d9eb4, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003d9eb4_arg0 fn_003d9eb4_arg0;
struct fn_003d9eb4_arg0 {
    unsigned char pad_0x0[0x3028];
    uint field_0x3028; /* +0x3028 */
    unsigned char pad_0x302c[0xe];
    undefined2 field_0x303a; /* +0x303a */
    short field_0x303c; /* +0x303c */
    short field_0x303e; /* +0x303e */
    undefined1 field_0x3040; /* +0x3040 */
    unsigned char pad_0x3041[0xf];
    undefined4 field_0x3050; /* +0x3050 */
    void *field_0x3054; /* +0x3054 */
    uint field_0x3058; /* +0x3058 */
    uint field_0x305c; /* +0x305c */
};

/* Supplied declaration required: FUN_0022708c. */
/* Supplied declaration required: FUN_00249ddc. */
extern unsigned int FUN_002939f4(void);
extern void *FUN_00337ba0(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_003383a4(unsigned int);


void FUN_003d9eb4(fn_003d9eb4_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  void *pvVar3;
  unsigned int temp_v2;
  
  FUN_0022708c();
  param_1->field_0x303c = (short)param_2;
  param_1->field_0x303e = (short)param_3;
  param_1->field_0x3028 = param_1->field_0x3028 | 0x4000;
  temp_v1 = FUN_002939f4();
  pvVar3 = (void *)FUN_00337ba0(temp_v1,param_2,param_3);
  if (pvVar3 == (void *)0x0) {
    param_1->field_0x3040 = 0xd;
  }
  else {
    param_1->field_0x3040 = 1;
    param_1->field_0x303a = *(unsigned short *)((int)pvVar3 + 4);
    temp_v1 = FUN_003383a4(temp_v1);
    param_1->field_0x3050 = temp_v1;
    param_1->field_0x3054 = pvVar3;
    temp_v2 = (unsigned int)*(unsigned char *)((int)pvVar3 + 8);
    if ((*(unsigned char *)((int)pvVar3 + 8) & 2) != 0) {
      FUN_00249ddc();
      param_1->field_0x3058 = temp_v2;
    }
    temp_v0 = *(unsigned char *)((int)param_1->field_0x3054 + 8);
    temp_v2 = (unsigned int)temp_v0;
    if ((temp_v0 & 4) != 0) {
      FUN_00249ddc();
      param_1->field_0x305c = temp_v2;
    }
  }
  return;
}
