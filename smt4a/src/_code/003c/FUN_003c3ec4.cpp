/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3ec4` (_code @ 0x3c3ec4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDelete(void);
int sceneObjDestroy(unsigned int *);

extern unsigned char DAT_00588c40; /* 0x588c40 */

extern int jobIsValid(unsigned int);
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: sceneObjDestroy. */


unsigned int FUN_003c3ec4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_00588c40 + 0x8));
  if ((*(unsigned int * *)((unsigned char *)&DAT_00588c40 + 0x8)) != (unsigned int *)0x0) {
    temp_v0 = jobIsValid(*(*(unsigned int * *)((unsigned char *)&DAT_00588c40 + 0x8)));
    if (temp_v0 != 0) {
      return 0;
    }
    sceneObjDestroy(puVar1);
    if ((*(unsigned int * *)((unsigned char *)&DAT_00588c40 + 0x8)) != (unsigned int *)0x0) {
      asdOperatorDelete();
      (*(unsigned int * *)((unsigned char *)&DAT_00588c40 + 0x8)) = (unsigned int *)0x0;
    }
  }
  return 1;
}

} /* extern "C" */
