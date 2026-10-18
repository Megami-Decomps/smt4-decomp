/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032788c` (_code @ 0x32788c, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_00296f60. */


unsigned int FUN_0032788c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v1 = FUN_00296f60(0);
  temp_v2 = FUN_00296f60(1);
  temp_v5 = 0;
  if (temp_v2 == 0) {
    temp_v5 = 7;
  }
  else if (temp_v2 == 1) {
    temp_v5 = 10;
  }
  else if (temp_v2 == 2) {
    temp_v5 = 0xb;
  }
  temp_v0 = 0;
  temp_v2 = 0;
  do {
    temp_v3 = FUN_00293c98();
    puVar5 = (unsigned int *)(*(int *)(temp_v3 + 0x1fc0) + temp_v2 * 0x288);
    temp_v4 = *puVar5;
    if ((temp_v4 & 0x10) != 0 && (temp_v4 & 1) != 0) {
      temp_v6 = (temp_v4 & 0x40) == 0;
      if (temp_v6) {
        temp_v4 = (unsigned int)*(unsigned short *)((int)puVar5 + 0xce);
      }
      if ((temp_v6 && temp_v4 == temp_v1) && (temp_v0 = 1, -1 < *(short *)((int)puVar5 + temp_v5 * 2 + 0x72)))
      {
        FUN_0028df54(0);
        return 1;
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      FUN_0028df54(temp_v0);
      return 1;
    }
  } while( 1 );
}
