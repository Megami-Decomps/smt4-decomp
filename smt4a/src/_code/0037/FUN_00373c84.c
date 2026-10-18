/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373c84` (_code @ 0x373c84, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057a4f8; /* 0x57a4f8 */

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(unsigned int);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_004d88fc. */
/* Supplied declaration required: FUN_004d8d14. */
/* Supplied declaration required: FUN_004d8f04. */


unsigned char FUN_00373c84(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_00236038(1);
  temp_v3 = FUN_002deb84();
  if (temp_v3 == 0) {
    FUN_004d8d14(DAT_0057a4f8,temp_v0);
    *(unsigned int *)(temp_v0 + 0x178) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x17c) = temp_v2;
    FUN_004d88fc(DAT_0057a4f8,temp_v0);
    FUN_004d8f04(DAT_0057a4f8);
    return 0;
  }
  return *(int *)(DAT_0057a4f8 + 0xa0) == 4;
}
