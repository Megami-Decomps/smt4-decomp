/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a83c0` (_code @ 0x3a83c0, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003a83c0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  
  temp_v0 = FUN_00236038(0);
  temp_v4 = 0;
  do {
    temp_v1 = FUN_0014aa78();
    puVar5 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v4 * 0x408);
    temp_v2 = *puVar5;
    temp_v3 = puVar5[1];
    if (((DAT_005702a0 & temp_v2) != 0 || (DAT_005702a4 & temp_v3) != 0) &&
       ((DAT_0057028c & temp_v3) != 0 || (DAT_00570288 & temp_v2) != 0)) {
      if (((temp_v3 & DAT_005702b4) == 0 && (temp_v2 & DAT_005702b0) == 0) &&
         (((unsigned int)(unsigned short)puVar5[0x9d] & (1 << (temp_v0 & 0xff))) == 0)) {
        FUN_003283ac(0);
        return 1;
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x6d) {
      FUN_003283ac(1);
      return 1;
    }
  } while( 1 );
}

} /* extern "C" */
