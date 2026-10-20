/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00269cd0` (_code @ 0x269cd0, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b8cc8(void);

extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_002b8cc8. */


void FUN_00269cd0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0043da90;
  temp_v2 = 0;
  do {
    temp_v1 = temp_v0 + temp_v2 * 6;
    *(unsigned short *)(temp_v0 + temp_v2 * 2 + 0xe22) = 0xffff;
    *(unsigned short *)(temp_v1 + 0xe28) = 0xffff;
    *(unsigned short *)(temp_v1 + 0xe2a) = 0xffff;
    *(unsigned short *)(temp_v1 + 0xe2c) = 0xffff;
    FUN_002b8cc8();
    FUN_002b8cc8();
    FUN_002b8cc8();
    FUN_002b8cc8();
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  *(unsigned char *)(temp_v0 + 0xe3b) = 0;
  return;
}

} /* extern "C" */
