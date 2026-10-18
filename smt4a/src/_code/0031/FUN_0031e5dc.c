/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e5dc` (_code @ 0x31e5dc, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_001681cc. */
extern unsigned short FUN_00236038(void);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002f0c18. */
/* Supplied declaration required: FUN_0034aae4. */
extern int FUN_003a7c1c(void);
/* Supplied declaration required: FUN_003a7c3c. */
/* Supplied declaration required: FUN_00418130. */


unsigned char FUN_0031e5dc(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    FUN_00418130(temp_v0);
    temp_v1 = FUN_00162ea4();
    if (temp_v1 != 0) {
      return 1;
    }
    FUN_002f0c18(0);
    FUN_003a7c3c(temp_v0);
  }
  temp_v1 = FUN_003a7c1c();
  if (temp_v1 != 0) {
    FUN_0034aae4();
    FUN_001681cc(0x92);
  }
  return temp_v1 != 0;
}
