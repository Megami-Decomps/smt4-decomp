/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380a24` (_code @ 0x380a24, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005710e8; /* 0x5710e8 */
extern unsigned int DAT_005710ec; /* 0x5710ec */
extern unsigned int DAT_005710f8; /* 0x5710f8 */
extern unsigned int DAT_005710fc; /* 0x5710fc */
extern unsigned int DAT_00571108; /* 0x571108 */
extern unsigned int DAT_0057110c; /* 0x57110c */

extern int FUN_0014aa78(void);
extern int FUN_001ba514(unsigned int);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_00380a24(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int temp_v5;
  
  temp_v0 = FUN_00236038(0);
  temp_v5 = -1;
  temp_v4 = 0;
  do {
    temp_v1 = FUN_0014aa78();
    puVar5 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v4 * 0x408);
    temp_v2 = *puVar5;
    temp_v3 = puVar5[1];
    if (((DAT_005710e8 & temp_v2) != 0 || (DAT_005710ec & temp_v3) != 0) &&
       ((DAT_00571108 & temp_v2) == 0 && (DAT_0057110c & temp_v3) == 0)) {
      if (((temp_v2 & DAT_005710f8) != 0 || (temp_v3 & DAT_005710fc) != 0) &&
         (((-1 < (short)puVar5[2] && (puVar5[0xff] != 0)) &&
          (*(unsigned short *)(puVar5[0xff] + 0x62) == temp_v0)))) {
        temp_v5 = (int)(short)puVar5[2];
        FUN_003283ac(temp_v5);
        return 1;
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x6d) {
      temp_v4 = FUN_001ba514(temp_v0 & 0xffff);
      if (-1 < temp_v4) {
        temp_v5 = temp_v4 + 0x6d;
      }
      FUN_003283ac(temp_v5);
      return 1;
    }
  } while( 1 );
}
