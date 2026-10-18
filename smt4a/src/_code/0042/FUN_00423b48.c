/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00423b48` (_code @ 0x423b48, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00423b48_arg0 fn_00423b48_arg0;
struct fn_00423b48_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    int field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
};

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern int FUN_002e5ac0(unsigned int, unsigned int, unsigned int);
extern int FUN_00422af0(unsigned int, int, unsigned int);
extern unsigned long long FUN_00422e78(unsigned int);
/* Supplied declaration required: rt_memcpy. */


unsigned char FUN_00423b48(fn_00423b48_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned long long temp_v4;
  
  temp_v3 = param_1->field_0x18;
  temp_v4 = FUN_00422e78(*(unsigned int *)&param_1->field_0xc);
  temp_v0 = FUN_002e5ac0((int)temp_v4,(int)((unsigned long long)temp_v4 >> 0x20),
                       *(unsigned int *)((int)param_1->field_0x8 + 0xc));
  temp_v1 = param_1->field_0x14 - (temp_v3 - temp_v0);
  temp_v0 = param_1->field_0x20;
  temp_v2 = param_1->field_0x14 - temp_v0;
  if (temp_v2 < param_3) {
    temp_v1 = temp_v1 - temp_v2;
    temp_v0 = 0;
  }
  if ((param_3 <= temp_v1) && (temp_v0 = param_1->field_0x10 + temp_v0, temp_v0 != 0)) {
    rt_memcpy(temp_v0,param_2,param_3);
    temp_v3 = FUN_00422af0(*(unsigned int *)&param_1->field_0xc,temp_v0,param_3);
    if (temp_v3 != 0) {
      temp_v1 = param_1->field_0x18;
      param_1->field_0x18 = temp_v1 + param_3;
      param_1->field_0x1c = param_1->field_0x1c + (unsigned int)romwright_carry_4(temp_v1,param_3);
      param_1->field_0x20 = (temp_v0 - param_1->field_0x10) + param_3;
    }
    return temp_v3 != 0;
  }
  return 0;
}
