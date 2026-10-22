/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118f78` (_code @ 0x118f78, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_vec_dtor(unsigned int *, unsigned char *, int, int);
int __aeabi_vec_ctor_nocookie_nodtor(unsigned int *, unsigned char *, int, int);
int FUN_00304d10(unsigned int, int);
int FUN_0030538c(int, unsigned int *);
int FUN_00305394(...);

extern unsigned char LAB_001220db; /* 0x1220db */
extern unsigned char LAB_0012cfcb; /* 0x12cfcb */

/* Supplied declaration required: rt_vec_dtor. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: FUN_00304d10. */
/* Supplied declaration required: FUN_0030538c. */
/* Supplied declaration required: FUN_00305394. */


void FUN_00118f78(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  puVar3 = (unsigned int *)&uStack_20;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = FUN_00304d10(param_2,0);
  if (temp_v0 != 0) {
    FUN_00305394(param_1,temp_v0);
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  else {
    __aeabi_vec_ctor_nocookie_nodtor(puVar3,&LAB_0012cfcb,0xc,1);
    FUN_00305394(param_1,puVar3);
    if (*(char *)(param_1 + 4) != '\0') {
      rt_vec_dtor(puVar3,&LAB_001220db,0xc,1);
      return;
    }
    rt_vec_dtor(puVar3,&LAB_001220db,0xc,1);
  }
  puVar2 = (unsigned int *)FUN_00304d10(param_2,1);
  if (puVar2 != (unsigned int *)0x0) {
    puVar3 = puVar2;
  }
  FUN_0030538c(param_1,puVar3);
  return;
}

} /* extern "C" */
