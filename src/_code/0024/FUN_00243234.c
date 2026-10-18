/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00243234` (_code @ 0x243234, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044eabc; /* 0x44eabc */
extern unsigned int *DAT_0044eac0; /* 0x44eac0 */

/* Supplied declaration required: FUN_0024736c. */
/* Supplied declaration required: FUN_002473ac. */
/* Supplied declaration required: FUN_002f8270. */
/* Supplied declaration required: FUN_0030ed58. */
extern unsigned int FUN_00318df8(unsigned int *);
extern unsigned int FUN_00323660(unsigned int *, int);
/* Supplied declaration required: FUN_003243bc. */


void FUN_00243234(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  if (DAT_0044eabc != 0) {
    FUN_002f8270(DAT_0044eac0);
    *(unsigned int *)(param_3 + 0x100) = *(unsigned int *)((int)DAT_0044eac0 + 8);
    temp_v0 = FUN_00323660(DAT_0044eac0,param_3);
    *(unsigned int *)(param_3 + 0xfc) = temp_v0;
    temp_v0 = FUN_00318df8(DAT_0044eac0);
    *(unsigned int *)(param_3 + 0x104) = temp_v0;
    FUN_003243bc(DAT_0044eac0,param_3 + 200);
    if (*(int *)(param_3 + 0x100) == 1) {
      FUN_002473ac(DAT_0044eac0);
      DAT_0044eac0 = (unsigned int *)0x0;
      FUN_0024736c(DAT_0044eabc);
      DAT_0044eabc = 0;
    }
    return;
  }
  puVar2 = (unsigned int *)0x0;
  DAT_0044eabc = 0;
  FUN_0030ed58(0,param_2);
  DAT_0044eac0 = puVar2;
  *puVar2 = 0xba;
  puVar2[1] = 0x1c;
  *(unsigned int *)(param_3 + 0x100) = 0;
  return;
}
