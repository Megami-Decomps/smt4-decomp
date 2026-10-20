/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001225f0` (_code @ 0x1225f0, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_001225f0_arg0 fn_001225f0_arg0;
struct fn_001225f0_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    byte *field_0x8; /* +0x8 */
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    undefined4 field_0x10; /* +0x10 */
};

extern unsigned char *FUN_002fd0a0(unsigned char *, unsigned int);
extern int FUN_0030fba6(fn_001225f0_arg0 *, unsigned int);


void FUN_001225f0(fn_001225f0_arg0 *param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned char *pbVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0030fba6(param_1,1);
  if (temp_v0 != 0) {
    temp_v1 = param_1->field_0x10;
    pbVar2 = (unsigned char *)FUN_002fd0a0(param_1->field_0x8,*(unsigned int *)&param_1->field_0xc);
    *(unsigned char *)param_2 = ((1 << (temp_v1 & 0xff)) & 0xffU & ~(unsigned int)*pbVar2) == 0;
    if (param_1->field_0x10 == 0) {
      param_1->field_0x10 = 8;
      *(int *)&param_1->field_0xc = *(int *)&param_1->field_0xc + 1;
    }
    param_1->field_0x10 = param_1->field_0x10 - 1;
    return;
  }
  param_1->field_0x4 = 1;
  return;
}

} /* extern "C" */
