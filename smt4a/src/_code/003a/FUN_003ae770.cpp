/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae770` (_code @ 0x3ae770, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(unsigned int);
int FUN_00164a9c(void);
int FUN_0016c4b8(unsigned int, unsigned int);
int FUN_00416664(unsigned int);

extern int DAT_00573c50; /* 0x573c50 */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00164a9c. */
/* Supplied declaration required: FUN_0016c4b8. */
extern int FUN_001861c4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00416664. */


unsigned int FUN_003ae770(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  
  FUN_00164a9c();
  temp_v0 = DAT_00573c50;
  puVar2 = (unsigned int *)&DAT_00573c50;
  if (DAT_00573c50 != 0) {
    puVar2 = *(unsigned int **)(DAT_00573c50 + 0x30);
  }
  if (DAT_00573c50 != 0 && puVar2 != (unsigned int *)0x0) {
    temp_v1 = FUN_001861c4(8,0);
    FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(temp_v1 + 8));
    FUN_00157558(DAT_0059dbb4);
    FUN_00416664(*(unsigned int *)(temp_v0 + 0x30));
  }
  return 0;
}

} /* extern "C" */
