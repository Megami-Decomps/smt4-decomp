/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037cdcc` (_code @ 0x37cdcc, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nodeListFree(int);
int FUN_00381874(unsigned int *);
int FUN_003a1998(int, unsigned int);
int handleHolderFree(unsigned int *);
int FUN_003c4984(unsigned int *, int);

extern int DAT_0059dc1c; /* 0x59dc1c */
extern unsigned int *DAT_0059dc20; /* 0x59dc20 */

/* Supplied declaration required: nodeListFree. */
/* Supplied declaration required: FUN_00381874. */
/* Supplied declaration required: FUN_003a1998. */
/* Supplied declaration required: handleHolderFree. */
extern unsigned int linkedObjGetValue(unsigned int *);
extern unsigned int FUN_003c2d90(unsigned int *, int);
/* Supplied declaration required: FUN_003c4984. */


void FUN_0037cdcc(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  if (DAT_0059dc1c != 0) {
    FUN_00381874(DAT_0059dc20);
    *(unsigned int *)(param_3 + 0x100) = *(unsigned int *)((int)DAT_0059dc20 + 8);
    temp_v0 = FUN_003c2d90(DAT_0059dc20,param_3);
    *(unsigned int *)(param_3 + 0xfc) = temp_v0;
    temp_v0 = linkedObjGetValue(DAT_0059dc20);
    *(unsigned int *)(param_3 + 0x104) = temp_v0;
    FUN_003c4984(DAT_0059dc20,param_3 + 200);
    if (*(int *)(param_3 + 0x100) == 1) {
      handleHolderFree(DAT_0059dc20);
      DAT_0059dc20 = (unsigned int *)0x0;
      nodeListFree(DAT_0059dc1c);
      DAT_0059dc1c = 0;
    }
    return;
  }
  puVar2 = (unsigned int *)0x0;
  DAT_0059dc1c = 0;
  FUN_003a1998(0,param_2);
  DAT_0059dc20 = puVar2;
  *puVar2 = 0xba;
  puVar2[1] = 0x1c;
  *(unsigned int *)(param_3 + 0x100) = 0;
  return;
}

} /* extern "C" */
