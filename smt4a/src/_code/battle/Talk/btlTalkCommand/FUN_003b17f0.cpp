/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b17f0` (_code @ 0x3b17f0, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int randRange(unsigned int);
int asdMemoryAllocTracked(int, int, int, int, int);
int FUN_00180118(int);
int FUN_00184310(...);
int asdMemFree(int);
int dataTable00FindById(void);
int scrSetResult(...);
int FUN_004d0bf0(...);
int SBORROW4(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: randRange. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_00180118. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_00184964(int, int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: dataTable00FindById. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_004d0bf0. */


unsigned int FUN_003b17f0(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  
  temp_v1 = scrGetArg(0) & 0xffff;
  dataTable00FindById();
  temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + 0x86);
  temp_v8 = temp_v5;
  dataTable00FindById();
  FUN_00184310(temp_v5);
  if ((((temp_v5 == 0 || temp_v8 == 0) || ((*(unsigned short *)(temp_v8 + 0x16) & 0x80) == 0)) ||
      (temp_v2 = gameGetPlayerData(), *(unsigned short *)(temp_v2 + 0x62) < (*(unsigned short *)(temp_v8 + 2) & 0x7fff))) ||
     (temp_v2 = FUN_004d0bf0(temp_v5), temp_v2 != 0)) {
    temp_v2 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x962,1);
    temp_v8 = 0;
    temp_v3 = gameGetPlayerData();
    temp_v0 = *(unsigned short *)(temp_v1 + 2) & 0x7fff;
    if (*(unsigned short *)(temp_v3 + 0x62) <= temp_v0) {
      temp_v3 = gameGetPlayerData();
      temp_v0 = *(unsigned short *)(temp_v3 + 0x62);
    }
    temp_v7 = (int)(short)temp_v0;
    temp_v3 = temp_v7 / 2;
    if (temp_v3 < 10) {
      temp_v3 = 10;
    }
    temp_v6 = (int)(short)(temp_v0 - (short)temp_v3);
    temp_v3 = FUN_00184964(temp_v6,temp_v7);
    if (temp_v3 < 1) {
      scrSetResult(0xffffffff);
    }
    else {
      if (temp_v6 < 1) {
        temp_v6 = 1;
      }
      temp_v1 = 1;
      do {
        puVar5 = (unsigned short *)(temp_v1 & 0xffff);
        FUN_00184310();
        temp_v5 = temp_v1 & 0xffff;
        dataTable00FindById();
        temp_v4 = (unsigned int)(unsigned short)puVar5[3];
        temp_v9 = SBORROW4(temp_v4,temp_v6);
        temp_v3 = temp_v4 - temp_v6;
        if (temp_v6 <= (int)temp_v4) {
          temp_v9 = SBORROW4(temp_v7,temp_v4);
          temp_v3 = temp_v7 - temp_v4;
        }
        if (((temp_v3 < 0 == temp_v9) && ((*(unsigned short *)(temp_v5 + 0x16) & 0x80) != 0)) &&
           (temp_v3 = FUN_004d0bf0(*puVar5), temp_v3 == 0)) {
          FUN_00180118(*puVar5);
          temp_v3 = temp_v8 * 2;
          temp_v8 = (temp_v8 + 1) & 0xffff;
          *(unsigned short *)(temp_v2 + temp_v3) = *puVar5;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x4b1);
      if (temp_v8 != 0) {
        randRange((temp_v8 - 1) & 0xffff);
      }
      scrSetResult();
    }
    asdMemFree(temp_v2);
  }
  else {
    scrSetResult(temp_v5);
  }
  return 1;
}

} /* extern "C" */
