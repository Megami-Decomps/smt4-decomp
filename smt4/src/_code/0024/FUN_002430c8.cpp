/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002430c8` (_code @ 0x2430c8, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nodeListOwnerFree(int);
int FUN_00247240(unsigned int *);
int FUN_002f82ac(unsigned int *);
int FUN_0030ed8c(int, unsigned int);
int FUN_003241c4(unsigned int *, int);

extern int DAT_0044eabc; /* 0x44eabc */
extern unsigned int *DAT_0044eac0; /* 0x44eac0 */

/* Supplied declaration required: nodeListOwnerFree. */
/* Supplied declaration required: FUN_00247240. */
/* Supplied declaration required: FUN_002f82ac. */
/* Supplied declaration required: FUN_0030ed8c. */
extern unsigned int FUN_00318cac(unsigned int *);
extern unsigned int FUN_00323468(unsigned int *, int);
/* Supplied declaration required: FUN_003241c4. */


void FUN_002430c8(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  if (DAT_0044eabc != 0) {
    FUN_002f82ac(DAT_0044eac0);
    *(unsigned int *)(param_3 + 0x100) = *(unsigned int *)((int)DAT_0044eac0 + 8);
    temp_v0 = FUN_00323468(DAT_0044eac0,param_3);
    *(unsigned int *)(param_3 + 0xfc) = temp_v0;
    temp_v0 = FUN_00318cac(DAT_0044eac0);
    *(unsigned int *)(param_3 + 0x104) = temp_v0;
    FUN_003241c4(DAT_0044eac0,param_3 + 200);
    if (*(int *)(param_3 + 0x100) == 1) {
      FUN_00247240(DAT_0044eac0);
      DAT_0044eac0 = (unsigned int *)0x0;
      nodeListOwnerFree(DAT_0044eabc);
      DAT_0044eabc = 0;
    }
    return;
  }
  puVar2 = (unsigned int *)0x0;
  DAT_0044eabc = 0;
  FUN_0030ed8c(0,param_2);
  DAT_0044eac0 = puVar2;
  *puVar2 = 0xba;
  puVar2[1] = 0x1c;
  *(unsigned int *)(param_3 + 0x100) = 0;
  return;
}

} /* extern "C" */
