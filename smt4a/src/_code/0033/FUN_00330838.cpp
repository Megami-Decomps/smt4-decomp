/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330838` (_code @ 0x330838, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_0038a1d4(unsigned int, int, int);
int SBORROW4(int, int);

extern int DAT_0057f554; /* 0x57f554 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_00203d74(void);
/* Supplied declaration required: FUN_00236038. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0038a1d4. */


unsigned char FUN_00330838(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    temp_v1 = FUN_00236038(0);
    temp_v2 = FUN_00236038(1);
    temp_v0 = FUN_00203d74();
    temp_v3 = temp_v0 != 0;
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = temp_v2 - 4;
    }
    if ((temp_v3 && temp_v2 != 4) && temp_v0 < 0 == (temp_v3 && SBORROW4(temp_v2,4))) {
      temp_v2 = 4;
    }
    FUN_0038a1d4(temp_v1,temp_v2,1);
    return 0;
  }
  return *(int *)(DAT_0057f554 + 0x10) == *(int *)(DAT_0057f554 + 0x14);
}

} /* extern "C" */
