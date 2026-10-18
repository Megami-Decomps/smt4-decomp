/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4230` (_code @ 0x3e4230, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_00186f58. */
extern int FUN_0018719c(void);
extern unsigned int FUN_002e5c2c(void);
extern int FUN_00348d64(void);


unsigned char FUN_003e4230(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v1 = param_1;
  FUN_00186f58();
  if ((temp_v1 != 0) &&
     (temp_v2 = FUN_001801a4(), *(unsigned short *)(temp_v1 + 0x2a) >> 6 <= *(unsigned short *)(temp_v2 + 0x62))) {
    temp_v2 = 0;
    do {
      if ((*(short *)(temp_v1 + temp_v2 * 2 + 0x2c) != 0) && (temp_v3 = FUN_0018719c(), temp_v3 == 0)) {
        return (unsigned char)2;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 3);
    temp_v2 = 0;
    while( 1 ) {
      temp_v0 = *(unsigned short *)(temp_v1 + temp_v2 * 2 + 0x32);
      if ((temp_v0 != 0) &&
         (temp_v3 = FUN_00348d64(),
         ((unsigned int)*(unsigned char *)(temp_v3 + (unsigned int)(temp_v0 >> 3)) & (1 << (temp_v0 & 7))) == 0)) break;
      temp_v2 = temp_v2 + 1;
      if (temp_v2 >= 3) {
        FUN_00186f58();
        if (param_1 != 0) {
          temp_v5 = (unsigned int)*(unsigned short *)(param_1 + 0x26);
        }
        else {
          temp_v5 = 0;
        }
        temp_v4 = FUN_002e5c2c();
        return temp_v4 < temp_v5;
      }
    }
  }
  return (unsigned char)2;
}
