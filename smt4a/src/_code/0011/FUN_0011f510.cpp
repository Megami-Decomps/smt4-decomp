/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011f510` (_code @ 0x11f510, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_dtor(int *, unsigned char *, int, int);
int __aeabi_vec_ctor_nocookie_nodtor(int *, unsigned char *, int, int);
int FUN_002fbc1a(...);
int streamReadWord(int, unsigned int *);
int FUN_00304d10(unsigned int, int);

extern unsigned char LAB_002e9319; /* 0x2e9319 */
extern unsigned char LAB_002ea0e5; /* 0x2ea0e5 */

/* Supplied declaration required: __aeabi_vec_dtor. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: FUN_002fbc1a. */
/* Supplied declaration required: streamReadWord. */
/* Supplied declaration required: FUN_00304d10. */


void FUN_0011f510(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  int uStack_18;
  unsigned int uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  puVar1 = (unsigned int *)FUN_00304d10(param_2,0);
  puVar3 = (unsigned int *)&uStack_18;
  if (puVar1 != (unsigned int *)0x0) {
    puVar3 = puVar1;
  }
  streamReadWord(param_1,puVar3);
  if (*(char *)(param_1 + 4) == '\0') {
    temp_v0 = FUN_00304d10(param_2,1);
    if (temp_v0 == 0) {
      __aeabi_vec_ctor_nocookie_nodtor(&uStack_18,&LAB_002ea0e5,8,1);
      FUN_002fbc1a(param_1,&uStack_18);
      __aeabi_vec_dtor(&uStack_18,&LAB_002e9319,8,1);
      return;
    }
    FUN_002fbc1a(param_1,temp_v0);
  }
  return;
}

} /* extern "C" */
