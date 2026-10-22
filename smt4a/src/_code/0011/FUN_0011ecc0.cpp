/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ecc0` (_code @ 0x11ecc0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_vec_dtor(unsigned char [24], unsigned char *, int, int);
int __aeabi_vec_ctor_nocookie_nodtor(unsigned char [24], unsigned char *, int, int);
int FUN_00304d10(unsigned int, int);
int FUN_0030538c(int, unsigned char *);
int FUN_00310888(...);

extern unsigned char LAB_00121145; /* 0x121145 */
extern unsigned char LAB_0012116b; /* 0x12116b */

/* Supplied declaration required: rt_vec_dtor. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: FUN_00304d10. */
/* Supplied declaration required: FUN_0030538c. */
/* Supplied declaration required: FUN_00310888. */


void FUN_0011ecc0(int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned char temp_v1 [24];
  
  puVar3 = temp_v1;
  puVar1 = (unsigned char *)FUN_00304d10(param_2,0);
  if (puVar1 != (unsigned char *)0x0) {
    puVar3 = puVar1;
  }
  FUN_0030538c(param_1,puVar3);
  if (*(char *)(param_1 + 4) == '\0') {
    temp_v0 = FUN_00304d10(param_2,1);
    if (temp_v0 != 0) {
      FUN_00310888(param_1,temp_v0);
    }
    else {
      __aeabi_vec_ctor_nocookie_nodtor(temp_v1,&LAB_00121145,0x18,1);
      FUN_00310888(param_1,temp_v1);
      rt_vec_dtor(temp_v1,&LAB_0012116b,0x18,1);
    }
  }
  return;
}

} /* extern "C" */
