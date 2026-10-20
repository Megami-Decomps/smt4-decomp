/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c2a4` (_code @ 0x39c2a4, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);
int FUN_002c75c0(int);
int FUN_0038b330(void);

typedef int romwright_code(...);
extern int DAT_00588e2c; /* 0x588e2c */

/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_002c75c0. */
/* Supplied declaration required: FUN_0038b330. */
extern int *FUN_00420d08(void);


void FUN_0039c2a4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  FUN_002c75c0(0);
  FUN_0038b330();
  temp_v0 = DAT_00588e2c;
  temp_v1 = 0x730;
  asdOperatorNew();
  piVar3 = (int *)0x0;
  if (temp_v1 != 0) {
    piVar3 = (int *)FUN_00420d08();
  }
  *(int **)(temp_v0 + 8) = piVar3;
  (**(romwright_code **)(*piVar3 + 8))();
  *(unsigned char *)(temp_v0 + 4) = 0;
  *(unsigned char *)(temp_v0 + 0xc) = 0;
  return;
}

} /* extern "C" */
