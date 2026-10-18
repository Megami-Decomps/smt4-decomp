/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bbf14` (_code @ 0x3bbf14, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00112233; /* 0x112233 */
extern unsigned int DAT_0043ddb8; /* 0x43ddb8 */

/* Supplied declaration required: FUN_0022af18. */
/* Supplied declaration required: FUN_0022af30. */
extern unsigned int FUN_00357a28(unsigned int);


unsigned char FUN_003bbf14(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_00357a28(0xc56);
  FUN_0022af18(temp_v0,0xabababab);
  temp_v0 = FUN_00357a28(0xc56);
  temp_v1 = FUN_0022af30(temp_v0,0xabababab);
  temp_v2 = temp_v1 != 0;
  temp_v0 = FUN_00357a28(0xbd3);
  FUN_0022af18(temp_v0,&LAB_00112233);
  temp_v0 = FUN_00357a28(0xbd3);
  temp_v1 = FUN_0022af30(temp_v0,&LAB_00112233);
  if (temp_v1 != 0) {
    temp_v2 = 2;
  }
  temp_v0 = FUN_00357a28(0xe5c);
  FUN_0022af18(temp_v0,DAT_0043ddb8);
  return temp_v2;
}
