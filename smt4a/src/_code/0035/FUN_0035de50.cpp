/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035de50` (_code @ 0x35de50, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int, unsigned int);

typedef int romwright_code(...);
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0057f290; /* 0x57f290 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_0035de50(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = DAT_0057f290;
  if (DAT_0057f290 == 0) {
    return;
  }
  if (*(int *)(DAT_0057f290 + 0x920c) != 0) {
    FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(DAT_0057f290 + 0x920c) + 4));
    piVar2 = *(int **)(temp_v0 + 0x920c);
    if (piVar2 != (int *)0x0) {
      (**(romwright_code **)(*piVar2 + 4))();
      *(unsigned int *)(temp_v0 + 0x920c) = 0;
    }
  }
  return;
}

} /* extern "C" */
