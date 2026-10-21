/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f84ec` (_code @ 0x4f84ec, 0xd8 bytes) from smt4a.cxi.
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


unsigned int FUN_004f84ec(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [128];
  unsigned char temp_v2 [132];
  
  *(unsigned char *)(param_1 + 0x3054) = 0xff;
  sysMemClear(param_1 + 0x305c,0x80);
  if (*(int *)(param_1 + 0x3058) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x3058) = 0;
  }
  *(unsigned char *)(param_1 + 0x30dc) = 0;
  sysMemClear(temp_v1,0x80);
  sysMemClear(temp_v2,0x80);
  textFormatBuffer(temp_v2,"battle/effect/%s.eft","ef_d_niyari");
  libc_strcpy(temp_v1,temp_v2);
  temp_v0 = FUN_00100d60(temp_v1,0x2f);
  libc_strcpy(param_1 + 0x305c,temp_v0 + 1);
  temp_v0 = findRecordByKey(param_1 + 0x305c);
  if (temp_v0 == 0xff) {
    FUN_002804b0(temp_v1,param_1 + 0x3058,1);
    *(unsigned char *)(param_1 + 0x30dc) = *(unsigned char *)(param_1 + 0x30dc) | 1;
  }
  return 1;
}

} /* extern "C" */
