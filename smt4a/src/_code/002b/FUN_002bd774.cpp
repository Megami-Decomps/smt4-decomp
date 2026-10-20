/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd774` (_code @ 0x2bd774, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00169ddc(int);
int FUN_00236038(int);
int FUN_003283ac(...);

extern unsigned char DAT_00589148; /* 0x589148 */

extern int FUN_001656a0(unsigned int);
/* Supplied declaration required: FUN_00169ddc. */
extern int FUN_002121c4(unsigned int);
/* Supplied declaration required: FUN_00236038. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_002bd774(void)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v0 = FUN_00236038(0);
  temp_v5 = (*(int *)((unsigned char *)&DAT_00589148 + 0x8));
  if (temp_v0 != 0) {
    if (temp_v0 == 1) {
      temp_v1 = FUN_00236038(1);
      temp_v2 = FUN_00236038(2);
      temp_v6 = temp_v1 != temp_v2;
      if (temp_v1 < temp_v2) {
        temp_v1 = temp_v1 + 3;
      }
      if (temp_v6) {
        if ((unsigned short)(temp_v1 - temp_v2) != 1) {
          FUN_003283ac(1);
          *(unsigned short *)(temp_v5 + 0x12) = 1;
          return 1;
        }
        FUN_003283ac(0xffffffff);
        *(unsigned short *)(temp_v5 + 0x12) = 0xffff;
        return 1;
      }
      FUN_003283ac(0);
    }
  }
  else if ((*(int *)((unsigned char *)&DAT_00589148 + 0x8)) != 0) {
    temp_v4 = FUN_002deb84();
    if (temp_v4 == 0) {
      temp_v3 = FUN_00236038(1);
      *(unsigned short *)(temp_v5 + 0x10) = temp_v3;
    }
    temp_v5 = FUN_002121c4(1);
    if (((temp_v5 != 0) || (temp_v5 = FUN_002121c4(0), temp_v5 != 0)) ||
       ((temp_v5 = FUN_001656a0(1), temp_v5 == 0 && (temp_v5 = FUN_001656a0(0), temp_v5 == 0)))) {
      return 0;
    }
    FUN_00169ddc(0x1000210);
  }
  return 1;
}

} /* extern "C" */
