/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290374` (_code @ 0x290374, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002899c4. */
extern int FUN_002b6e60(void);


void FUN_00290374(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002b6e60();
  if (((*(unsigned short *)(temp_v0 + 0x608) & 1) != 0) &&
     (temp_v1 = FUN_002b6e60(), (*(unsigned short *)(temp_v1 + 0x608) & 1) != 0)) {
    if (*(short *)(temp_v1 + 0x46) == 0x2a3) {
      FUN_002899c4(0x262,0,1);
    }
    if (*(short *)(temp_v1 + 0x46) == 0x2a5) {
      FUN_002899c4(0x263,0,1);
    }
    *(unsigned short *)(temp_v1 + 0x46) = 0;
  }
  *(unsigned short *)(temp_v0 + 0x608) = *(unsigned short *)(temp_v0 + 0x608) & 0xfffe;
  *(unsigned short *)(temp_v0 + 0x46) = 0;
  *(unsigned short *)(temp_v0 + 0x604) = 0;
  return;
}
