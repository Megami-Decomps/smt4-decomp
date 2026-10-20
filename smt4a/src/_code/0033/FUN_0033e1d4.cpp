/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e1d4` (_code @ 0x33e1d4, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ptrListRemoveClearOwner(unsigned int);
int clearByte(void);

typedef int romwright_code(...);
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int DAT_00581280; /* 0x581280 */

/* Supplied declaration required: ptrListRemoveClearOwner. */
extern int FUN_00295e54(int, int, unsigned int);
/* Supplied declaration required: clearByte. */
extern int flagPairCondition(int, int);


unsigned int FUN_0033e1d4(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  short temp_v3;
  int unaff_r4;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v3 = *(short *)(DAT_00581280 + 0xf42);
  if (temp_v3 != 0) {
    if (temp_v3 != 1) {
      if (temp_v3 != 2) {
        return 0;
      }
      temp_v2 = FUN_00295e54((int)*(short *)(DAT_00581280 + 0xf46),
                           (int)*(short *)(DAT_00581280 + 0xf48),1);
      if (temp_v2 == 0) {
        return 0;
      }
      return 1;
    }
    temp_v3 = *(short *)(DAT_00581280 + 0xf44) + 1;
    if (temp_v3 >= 2) {
      unaff_r4 = 0;
    }
    *(short *)(DAT_00581280 + 0xf44) = temp_v3;
    if (temp_v3 < 2) {
      return 0;
    }
    do {
      temp_v2 = DAT_00581280 + unaff_r4 * 0x3c;
      temp_v5 = *(char *)(temp_v2 + 0xc) != '\0';
      temp_v0 = '\0';
      if (temp_v5) {
        temp_v0 = *(char *)(temp_v2 + 0xf);
      }
      if (temp_v5 && temp_v0 != '\0') {
        if (*(int **)(temp_v2 + 0x40) != (int *)0x0) {
          (**(romwright_code **)(**(int **)(temp_v2 + 0x40) + 4))();
          *(unsigned int *)(temp_v2 + 0x40) = 0;
        }
        if (*(int *)(temp_v2 + 0x3c) != 0) {
          clearByte();
          *(unsigned int *)(temp_v2 + 0x3c) = 0;
        }
        *(char *)(temp_v2 + 0xc) = '\0';
        *(unsigned char *)(temp_v2 + 0xf) = 0;
      }
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r4 < 0x40);
  }
  else {
    temp_v2 = 0;
    do {
      temp_v4 = DAT_00581280 + temp_v2 * 0x3c;
      if (((*(char *)(temp_v4 + 0xc) != '\0') &&
          (temp_v1 = flagPairCondition((int)*(short *)(temp_v4 + 0x34),(int)*(short *)(temp_v4 + 0x36)),
          temp_v1 == 0)) && (*(int *)(temp_v4 + 0x40) != 0)) {
        if (*(int *)(*(int *)(DAT_00581280 + temp_v2 * 0x3c + 0x40) + 4) != 0) {
          ptrListRemoveClearOwner(g_handleRegistry);
        }
        *(unsigned char *)(temp_v4 + 0xf) = 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x40);
  }
  temp_v2 = DAT_00581280;
  *(short *)(DAT_00581280 + 0xf42) = *(short *)(DAT_00581280 + 0xf42) + 1;
  *(unsigned short *)(temp_v2 + 0xf44) = 0;
  return 0;
}

} /* extern "C" */
