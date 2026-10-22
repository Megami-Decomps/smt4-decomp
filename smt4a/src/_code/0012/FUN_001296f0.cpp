/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001296f0` (_code @ 0x1296f0, 0x6e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(unsigned int *, unsigned char *, int, unsigned int);

typedef struct fn_001296f0_arg0 fn_001296f0_arg0;
struct fn_001296f0_arg0 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x18];
    undefined4 field_0x24; /* +0x24 */
    byte field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x3];
    undefined4 field_0x2c; /* +0x2c */
    byte field_0x30; /* +0x30 */
};

extern unsigned char LAB_0030e669; /* 0x30e669 */
extern unsigned char DAT_005590ec; /* 0x5590ec */
extern unsigned char DAT_0055a31c; /* 0x55a31c */
extern unsigned int DAT_00594a00; /* 0x594a00 */

extern int rt_malloc(int);
extern unsigned int *operatorNewArray(unsigned int);
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_001296f0(fn_001296f0_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_00594a00 == 0xffffffff) &&
     (puVar1 = (unsigned int *)operatorNewArray(0xfffffff4), puVar1 != (unsigned int *)0x0)) {
    puVar1[1] = 0xffffffff;
    *puVar1 = 0x14;
    __aeabi_vec_ctor_nocookie_nodtor(puVar1 + 2,&LAB_0030e669,0x14,0xffffffff);
  }
  temp_v0 = rt_malloc(DAT_00594a00 * 0x14);
  param_1->field_0x8 = temp_v0;
  for (temp_v1 = 0; temp_v1 < DAT_00594a00; temp_v1 = temp_v1 + 1) {
    puVar1 = (unsigned int *)(param_1->field_0x8 + temp_v1 * 0x14);
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = (unsigned int)&DAT_005590ec;
      puVar1[1] = param_1->field_0x24;
      *(unsigned char *)(puVar1 + 2) = param_1->field_0x28;
      puVar1[3] = param_1->field_0x2c;
      *(unsigned char *)(puVar1 + 4) = param_1->field_0x30;
      *puVar1 = (unsigned int)&DAT_0055a31c;
    }
  }
  return;
}

} /* extern "C" */
