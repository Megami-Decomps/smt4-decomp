/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002deae4` (_code @ 0x2deae4, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int FUN_003d54f8(int, int);
int SBORROW4(int, int);

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_00162ea4(void);
extern int FUN_00163e84(unsigned int);
extern int FUN_00203d74(void);
/* Supplied declaration required: scrGetArg. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003d54f8. */


unsigned int FUN_002deae4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = scrGetArg();
  temp_v1 = FUN_002deb84();
  if (temp_v1 != 0) {
    temp_v0 = FUN_00163e84(0);
    if ((temp_v0 == 0) || (temp_v0 = FUN_00163e84(0), temp_v0 == 0)) {
      return 0;
    }
  }
  else {
    temp_v1 = FUN_00203d74();
    temp_v2 = temp_v1 != 0;
    temp_v1 = 0;
    if (temp_v2) {
      temp_v1 = temp_v0 - 4;
    }
    if ((temp_v2 && temp_v0 != 4) && temp_v1 < 0 == (temp_v2 && SBORROW4(temp_v0,4))) {
      temp_v0 = 4;
    }
    temp_v1 = FUN_00162ea4();
    if ((temp_v1 == 0) && ((temp_v1 = scrGetArg(0), temp_v1 == 0 || (temp_v1 == 1)))) {
      FUN_003d54f8(0,temp_v0);
      FUN_003d54f8(1,temp_v0);
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
