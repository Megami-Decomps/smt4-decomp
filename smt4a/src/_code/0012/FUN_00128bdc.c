/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128bdc` (_code @ 0x128bdc, 0xa2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00128bdc_arg0 fn_00128bdc_arg0;
typedef struct fn_00128bdc_arg0_p1c fn_00128bdc_arg0_p1c;
struct fn_00128bdc_arg0 {
    unsigned char pad_0x0[0xc];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0xb];
    fn_00128bdc_arg0_p1c *field_0x1c; /* +0x1c */
    void *field_0x20; /* +0x20 */
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x3];
    undefined4 field_0x28; /* +0x28 */
};
struct fn_00128bdc_arg0_p1c {
    unsigned char pad_0x0[0xc];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0xb];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x3];
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    undefined4 field_0x34; /* +0x34 */
};

/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_00128bdc(fn_00128bdc_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  fn_00128bdc_arg0_p1c *pfVar3;
  unsigned int temp_v2;
  
  pfVar3 = param_1->field_0x1c;
  if (pfVar3->field_0x34 == 0) {
    temp_v0 = (*param_1->field_0x20)
                      (param_1->field_0x28,1 << (pfVar3->field_0x24 & 0xff),1,param_1->field_0x20,
                       param_4);
    pfVar3->field_0x34 = temp_v0;
    if (temp_v0 == 0) {
      return 1;
    }
  }
  if (pfVar3->field_0x28 == 0) {
    *(unsigned int *)&pfVar3->field_0x30 = 0;
    pfVar3->field_0x28 = 1 << (pfVar3->field_0x24 & 0xff);
    *(unsigned int *)&pfVar3->field_0x2c = 0;
  }
  temp_v1 = pfVar3->field_0x28;
  temp_v2 = param_2 - *(int *)&param_1->field_0x10;
  if (temp_v2 >= temp_v1) {
    rt_memcpy(pfVar3->field_0x34,*(int *)&param_1->field_0xc - temp_v1);
    *(unsigned int *)&pfVar3->field_0x30 = 0;
  }
  else {
    temp_v1 = temp_v1 - *(int *)&pfVar3->field_0x30;
    if (temp_v2 < temp_v1) {
      temp_v1 = temp_v2;
    }
    rt_memcpy(pfVar3->field_0x34 + *(int *)&pfVar3->field_0x30,*(int *)&param_1->field_0xc - temp_v2,
              temp_v1);
    temp_v0 = temp_v2 - temp_v1;
    if (temp_v0 == 0) {
      temp_v2 = *(int *)&pfVar3->field_0x30 + temp_v1;
      *(unsigned int *)&pfVar3->field_0x30 = temp_v2;
      if (temp_v2 == pfVar3->field_0x28) {
        *(unsigned int *)&pfVar3->field_0x30 = 0;
      }
      if ((unsigned int)pfVar3->field_0x28 <= *(unsigned int *)&pfVar3->field_0x2c) {
        return 0;
      }
      temp_v0 = *(unsigned int *)&pfVar3->field_0x2c + temp_v1;
      *(int *)&pfVar3->field_0x2c = temp_v0;
      return 0;
    }
    rt_memcpy(pfVar3->field_0x34,*(int *)&param_1->field_0xc - temp_v0,temp_v0);
    *(int *)&pfVar3->field_0x30 = temp_v0;
  }
  temp_v0 = pfVar3->field_0x28;
  *(int *)&pfVar3->field_0x2c = temp_v0;
  return 0;
}
