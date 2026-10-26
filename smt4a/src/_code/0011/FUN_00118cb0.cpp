/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118cb0` (_code @ 0x118cb0, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_dtor(unsigned char [56], unsigned char *, int, int);
int __aeabi_vec_ctor_nocookie_nodtor(unsigned char [56], unsigned char *, int, int);
int FUN_003051f2(...);

extern unsigned char LAB_00116a1d; /* 0x116a1d */
extern unsigned char LAB_00116a55; /* 0x116a55 */

/* Supplied declaration required: __aeabi_vec_dtor. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
extern int FUN_00304d10(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003051f2. */


void FUN_00118cb0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [56];
  
  temp_v0 = FUN_00304d10(param_2,0);
  if (temp_v0 != 0) {
    FUN_003051f2(param_1,temp_v0);
  }
  else {
    __aeabi_vec_ctor_nocookie_nodtor(temp_v1,&LAB_00116a1d,0x38,1);
    FUN_003051f2(param_1,temp_v1);
    __aeabi_vec_dtor(temp_v1,&LAB_00116a55,0x38,1);
  }
  return;
}

} /* extern "C" */
