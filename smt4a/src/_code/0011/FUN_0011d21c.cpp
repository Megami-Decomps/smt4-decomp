/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d21c` (_code @ 0x11d21c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_dtor(unsigned char [32], unsigned char *, int, int);
int __aeabi_vec_ctor_nocookie_nodtor(unsigned char [32], unsigned char *, int, int);
int FUN_00304d10(unsigned int, int);
int FUN_00310fa6(...);
int FUN_00310ff2(int, unsigned char *);

extern unsigned char LAB_002e7635; /* 0x2e7635 */
extern unsigned char LAB_002e9ff5; /* 0x2e9ff5 */
extern unsigned char LAB_002ec9f5; /* 0x2ec9f5 */

/* Supplied declaration required: __aeabi_vec_dtor. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: FUN_00304d10. */
/* Supplied declaration required: FUN_00310fa6. */
/* Supplied declaration required: FUN_00310ff2. */


void FUN_0011d21c(int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned char temp_v1 [32];
  
  puVar1 = (unsigned char *)FUN_00304d10(param_2,0);
  if (puVar1 == (unsigned char *)0x0) {
    __aeabi_vec_ctor_nocookie_nodtor(temp_v1,&LAB_002e9ff5,0xc,1);
    puVar1 = temp_v1;
  }
  FUN_00310ff2(param_1,puVar1);
  if (*(char *)(param_1 + 4) == '\0') {
    temp_v0 = FUN_00304d10(param_2,1);
    if (temp_v0 != 0) {
      FUN_00310fa6(param_1,temp_v0);
    }
    else {
      __aeabi_vec_ctor_nocookie_nodtor(temp_v1,&LAB_002e7635,0x20,1);
      FUN_00310fa6(param_1,temp_v1);
      __aeabi_vec_dtor(temp_v1,&LAB_002ec9f5,0x20,1);
    }
  }
  return;
}

} /* extern "C" */
