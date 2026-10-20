/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c444` (_code @ 0x31c444, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0038a1d4(int, int, int);
int SBORROW4(int, int);

extern int DAT_0057f554; /* 0x57f554 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_00203d74(void);
extern int FUN_00236038(unsigned int);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_0038a1d4. */


unsigned char FUN_0031c444(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    temp_v1 = FUN_00236038(0);
    temp_v0 = FUN_00203d74();
    temp_v2 = temp_v0 != 0;
    temp_v0 = 0;
    if (temp_v2) {
      temp_v0 = temp_v1 - 4;
    }
    if ((temp_v2 && temp_v1 != 4) && temp_v0 < 0 == (temp_v2 && SBORROW4(temp_v1,4))) {
      temp_v1 = 4;
    }
    FUN_0038a1d4(0,temp_v1,0);
    return 0;
  }
  return *(int *)(DAT_0057f554 + 0x10) == *(int *)(DAT_0057f554 + 0x14);
}

} /* extern "C" */
