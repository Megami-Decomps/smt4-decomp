/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118e60` (_code @ 0x118e60, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_vec_dtor(int *, unsigned char *, int, int);
int __aeabi_vec_ctor_nocookie_nodtor(int *, unsigned char *, int, int);
int FUN_00304d92(...);
int FUN_00305298(...);

extern unsigned char LAB_00122095; /* 0x122095 */
extern unsigned char LAB_0012cfad; /* 0x12cfad */
extern unsigned char LAB_0012d05b; /* 0x12d05b */

/* Supplied declaration required: rt_vec_dtor. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
extern int FUN_00304d10(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00304d92. */
/* Supplied declaration required: FUN_00305298. */


void FUN_00118e60(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = FUN_00304d10(param_2,0);
  if (temp_v0 != 0) {
    FUN_00305298(param_1,temp_v0);
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  else {
    __aeabi_vec_ctor_nocookie_nodtor(&uStack_20,&LAB_0012cfad,0xc,1);
    FUN_00305298(param_1,&uStack_20);
    if (*(char *)(param_1 + 4) != '\0') {
      puVar2 = &LAB_00122095;
      rt_vec_dtor(&uStack_20,puVar2,0xc,1);
      return;
    }
    rt_vec_dtor(&uStack_20,&LAB_00122095,0xc,1);
  }
  temp_v0 = FUN_00304d10(param_2,1);
  if (temp_v0 != 0) {
    FUN_00304d92(param_1,temp_v0);
    return;
  }
  __aeabi_vec_ctor_nocookie_nodtor(&uStack_20,&LAB_0012d05b,0xc,1);
  FUN_00304d92(param_1,&uStack_20);
  puVar2 = (unsigned char *)0x122173;
  rt_vec_dtor(&uStack_20,puVar2,0xc,1);
  return;
}

} /* extern "C" */
