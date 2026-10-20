/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ffedc` (_code @ 0x2ffedc, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int FUN_003d9eb4(int, int, int);

extern int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_003d9eb4. */
extern int FUN_003da5b4(int);


unsigned int FUN_002ffedc(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  if ((*(unsigned int *)(DAT_00435d18 + 0x3028) & 0x4000) != 0) {
    temp_v2 = FUN_003da5b4(DAT_00435d18);
    if (temp_v2 != 0) {
      return 1;
    }
  }
  else {
    FUN_003d9eb4(DAT_00435d18,(int)temp_v0,temp_v1);
  }
  return 0;
}

} /* extern "C" */
