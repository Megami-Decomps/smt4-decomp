/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e42f0` (_code @ 0x3e42f0, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00186f58(void);

/* Supplied declaration required: FUN_00186f58. */
extern int FUN_0018719c(unsigned int);
extern int gameDataBlockGetArea28350(void);
extern int gameDataBlockGetArea2D68(void);
extern int FUN_003e4230(unsigned int);


unsigned int FUN_003e42f0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char *pbVar5;
  unsigned int temp_v4;
  
  temp_v2 = FUN_0018719c(0x408);
  if (temp_v2 == 0) {
    return 0;
  }
  temp_v4 = 1;
  do {
    temp_v2 = gameDataBlockGetArea28350();
    temp_v0 = temp_v4 >> 3;
    temp_v1 = 1 << (temp_v4 & 7);
    if ((*(unsigned char *)(temp_v2 + temp_v0) & temp_v1) != 0) {
      temp_v2 = gameDataBlockGetArea28350();
      if ((*(unsigned char *)(temp_v2 + temp_v0 + 0x12) & temp_v1) != 0) {
        return 1;
      }
    }
    else {
      temp_v3 = temp_v4;
      FUN_00186f58();
      if ((temp_v3 != 0) &&
         ((temp_v2 = gameDataBlockGetArea2D68(), (*(unsigned char *)(temp_v2 + temp_v0) & temp_v1) != 0 ||
          (temp_v2 = FUN_003e4230(temp_v4), temp_v2 != 2)))) {
        temp_v2 = gameDataBlockGetArea28350();
        pbVar5 = (unsigned char *)(temp_v2 + (temp_v4 >> 3));
        *pbVar5 = *pbVar5 | (unsigned char)(1 << (temp_v4 & 7));
        temp_v2 = gameDataBlockGetArea28350();
        pbVar5 = (unsigned char *)(temp_v2 + temp_v0 + 0x12);
        *pbVar5 = *pbVar5 | (unsigned char)temp_v1;
        return 1;
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x8d) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
