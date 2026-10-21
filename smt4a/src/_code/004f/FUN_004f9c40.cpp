/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f9c40` (_code @ 0x4f9c40, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int asdMemFree(...);
int FUN_002804b0(...);
int libc_strcpy(...);
int sysMemClear(...);

/* Supplied declaration required: textFormatBuffer. */
extern int FUN_00100d60(unsigned char *, unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: sysMemClear. */
extern int findRecordByKey(int);


unsigned int FUN_004f9c40(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [128];
  unsigned char temp_v4 [132];
  
  temp_v2 = 0;
  do {
    temp_v1 = param_1 + temp_v2 * 0x8c;
    *(unsigned char *)(temp_v1 + 0x3284) = 0xff;
    sysMemClear(temp_v1 + 0x328c,0x80);
    if (*(int *)(temp_v1 + 0x3288) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x3288) = 0;
    }
    *(unsigned char *)(temp_v1 + 0x330c) = 0;
    sysMemClear(temp_v3,0x80);
    sysMemClear(temp_v4,0x80);
    textFormatBuffer(temp_v4,"battle/effect/%s.eft","ef_Assist_04" + temp_v2 * 0x20);
    libc_strcpy(temp_v3,temp_v4);
    temp_v0 = FUN_00100d60(temp_v3,0x2f);
    libc_strcpy(temp_v1 + 0x328c,temp_v0 + 1);
    temp_v0 = findRecordByKey(temp_v1 + 0x328c);
    if (temp_v0 == 0xff) {
      FUN_002804b0(temp_v3,temp_v1 + 0x3288,1);
      *(unsigned char *)(temp_v1 + 0x330c) = *(unsigned char *)(temp_v1 + 0x330c) | 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  return 1;
}

} /* extern "C" */
