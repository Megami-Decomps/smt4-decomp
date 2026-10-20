/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00314c90` (_code @ 0x314c90, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00212204(int);
int scrGetArg(...);
int FUN_003d54f8(int, int);
int SBORROW4(int, int);

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_00162ea4(void);
extern int FUN_00163e84(void);
extern int FUN_00203d74(void);
/* Supplied declaration required: FUN_00212204. */
/* Supplied declaration required: scrGetArg. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003d54f8. */


unsigned int FUN_00314c90(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = scrGetArg();
  temp_v1 = FUN_00203d74();
  temp_v3 = temp_v1 != 0;
  temp_v1 = 0;
  if (temp_v3) {
    temp_v1 = temp_v0 - 4;
  }
  if ((temp_v3 && temp_v0 != 4) && temp_v1 < 0 == (temp_v3 && SBORROW4(temp_v0,4))) {
    temp_v0 = 4;
  }
  temp_v1 = FUN_002deb84();
  if (temp_v1 != 0) {
    temp_v1 = FUN_00163e84();
    if (temp_v1 == 0) {
      temp_v1 = FUN_00162ea4();
      if (temp_v1 != 0) {
        FUN_00212204(0);
      }
      return 0;
    }
  }
  else {
    temp_v2 = scrGetArg(0);
    if (temp_v2 < 2) {
      FUN_003d54f8(0,temp_v0);
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
