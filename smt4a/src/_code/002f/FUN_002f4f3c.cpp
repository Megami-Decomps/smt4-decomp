/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4f3c` (_code @ 0x2f4f3c, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4D1Ev(int *);

typedef struct fn_002f4f3c_arg0 fn_002f4f3c_arg0;
struct fn_002f4f3c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x1c];
    undefined2 field_0x20; /* +0x20 */
    unsigned char pad_0x22[0x2];
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x4];
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
};

extern unsigned char LAB_002f4f78; /* 0x2f4f78 */
extern unsigned char DAT_0055b23c; /* 0x55b23c */

extern unsigned int _ZN9Obj55aff4C1EPKc(unsigned int *, unsigned char *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
extern unsigned int *FUN_002fd1e8(fn_002f4f3c_arg0 *, unsigned int);


unsigned int *
FUN_002f4f3c(fn_002f4f3c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int uStack_18;
  unsigned int uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  temp_v0 = _ZN9Obj55aff4C1EPKc((unsigned int *)&uStack_18,&LAB_002f4f78);
  puVar2 = (unsigned int *)FUN_002fd1e8(param_1,temp_v0);
  _ZN9Obj55aff4D1Ev(&uStack_18);
  *puVar2 = (unsigned int)&DAT_0055b23c;
  *(unsigned short *)(puVar2 + 8) = 0;
  puVar2[10] = 0;
  puVar2[0xc] = 0;
  puVar2[0xb] = param_2;
  puVar2[9] = 0;
  *(unsigned char *)(puVar2 + 0xd) = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  return puVar2;
}

} /* extern "C" */
