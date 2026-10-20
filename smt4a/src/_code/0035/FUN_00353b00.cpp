/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353b00` (_code @ 0x353b00, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char *, unsigned char *);
int FUN_00152f44(void);

extern unsigned char DAT_00531ac8; /* 0x531ac8 */
extern unsigned int *DAT_0058104c; /* 0x58104c */
extern int DAT_005f15fc; /* 0x5f15fc */
extern unsigned char DAT_0060a198; /* 0x60a198 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00152f44. */
extern int FUN_00162e8c(void);
extern int FUN_0018719c(unsigned int);
extern int FUN_003e4230(unsigned int);
extern int FUN_003e46f4(unsigned int);


void FUN_00353b00(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  unsigned int temp_v5;
  
  FUN_00152f44();
  temp_v5 = 1;
  temp_v1 = 0;
  do {
    temp_v3 = FUN_00162e8c();
    temp_v4 = (int)(temp_v5 + ((unsigned int)((int)temp_v5 >> 0x1f) >> 0x1d)) >> 3;
    temp_v0 = 1 << (((int)temp_v5 % 8) & 0xffU);
    if ((*(unsigned char *)(temp_v3 + temp_v4 + 0xdd0) & temp_v0) == 0) {
      temp_v3 = FUN_003e46f4(temp_v5);
      temp_v2 = (unsigned char)temp_v0;
      if (temp_v3 != 0) {
        temp_v3 = FUN_00162e8c();
        *(unsigned char *)(temp_v3 + temp_v4 + 0xdd0) = *(unsigned char *)(temp_v3 + temp_v4 + 0xdd0) | temp_v2;
      }
      else {
        temp_v3 = FUN_003e4230(temp_v5);
        if (temp_v3 != 2) {
          temp_v3 = FUN_00162e8c();
          temp_v1 = 1;
          *(unsigned char *)(temp_v3 + temp_v4 + 0xdd0) = *(unsigned char *)(temp_v3 + temp_v4 + 0xdd0) | temp_v2;
        }
      }
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x8d);
  if ((((param_1 == 0) && (temp_v1)) && (DAT_005f15fc != 0x24)) &&
     (temp_v4 = FUN_0018719c(0x408), temp_v4 != 0)) {
    FUN_00100388(&DAT_0060a198,&DAT_00531ac8);
    puVar4 = DAT_0058104c;
    puVar7 = DAT_0058104c + 1;
    *DAT_0058104c = 0x18;
    *puVar7 = 0;
    puVar4[5] = (unsigned int)&DAT_0060a198;
  }
  return;
}

} /* extern "C" */
