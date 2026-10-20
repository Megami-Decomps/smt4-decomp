/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387308` (_code @ 0x387308, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdOperatorDelete(void);
int sceneObjDestroy(unsigned int *);

extern unsigned char DAT_00588c40; /* 0x588c40 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: sceneObjDestroy. */


void FUN_00387308(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_00588c40 + 0x8));
  if ((*(unsigned int * *)((unsigned char *)&DAT_00588c40 + 0x8)) != (unsigned int *)0x0) {
    sceneObjDestroy((*(unsigned int * *)((unsigned char *)&DAT_00588c40 + 0x8)));
    jobStop(*puVar1,0);
    if ((*(unsigned int * *)((unsigned char *)&DAT_00588c40 + 0x8)) != (unsigned int *)0x0) {
      asdOperatorDelete();
      (*(unsigned int * *)((unsigned char *)&DAT_00588c40 + 0x8)) = (unsigned int *)0x0;
    }
  }
  return;
}

} /* extern "C" */
