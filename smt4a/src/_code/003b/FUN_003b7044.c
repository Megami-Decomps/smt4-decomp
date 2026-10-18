/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b7044` (_code @ 0x3b7044, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00236038. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002f0c18. */
extern int FUN_002f151c(void);
/* Supplied declaration required: FUN_002f1554. */
/* Supplied declaration required: FUN_0034aae4. */
/* Supplied declaration required: FUN_00418870. */


unsigned char FUN_003b7044(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_002deb84();
  if (temp_v2 == 0) {
    FUN_00418870(temp_v0,temp_v1);
    temp_v2 = FUN_00162ea4();
    if (temp_v2 != 0) {
      return 1;
    }
    FUN_002f0c18(0);
    FUN_002f1554(temp_v0);
  }
  temp_v2 = FUN_002f151c();
  if (temp_v2 != 0) {
    FUN_0034aae4();
    FUN_001681cc(0x92);
  }
  return temp_v2 != 0;
}
