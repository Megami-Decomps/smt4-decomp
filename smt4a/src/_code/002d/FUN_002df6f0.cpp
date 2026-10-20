/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002df6f0` (_code @ 0x2df6f0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0040afcc(unsigned int);

typedef int romwright_code(...);
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int *DAT_0057aa08; /* 0x57aa08 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0040afcc. */


void FUN_002df6f0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v0 + 0x58));
  if (temp_v1 != 0) {
    FUN_001631d0(*(unsigned int *)(temp_v0 + 0x58),0);
  }
  FUN_0040afcc(DAT_0056fcc0);
  if (DAT_0057aa08 != (int *)0x0) {
    (**(romwright_code **)(*DAT_0057aa08 + 4))();
    DAT_0057aa08 = (int *)0x0;
  }
  return;
}

} /* extern "C" */
