/* NON_MATCHING: romwright 0.5.0 decompilation of `btlTalkCommand_SelectTalkTarget` (_code @ 0x318624, 0x1c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024ea50(...);
int scrSetResult(...);
int dataTable00FindById(void);
int devilGetRecord(...);
int FUN_002bd06c(int);
int randNextInRange(unsigned int);
int asdMemFree(int);
int asdMemAlloc(int, int, int, int, int);
int SBORROW4(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0024ea50. */
/* Supplied declaration required: scrSetResult. */
extern unsigned int scrGetArg(unsigned int);
extern int randBetween(int, unsigned int);
/* Supplied declaration required: dataTable00FindById. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: randNextInRange. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdMemAlloc. */


unsigned int btlTalkCommand_SelectTalkTarget(void)

{
/* irregular: 9 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  unsigned short temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  
  temp_v1 = scrGetArg(0) & 0xffff;
  dataTable00FindById();
  temp_v6 = (unsigned int)*(unsigned short *)(temp_v1 + 0x82);
  temp_v8 = temp_v6;
  dataTable00FindById();
  devilGetRecord(temp_v6);
  if ((((temp_v6 == 0 || temp_v8 == 0) || ((*(unsigned short *)(temp_v8 + 0x16) & 0x400) == 0)) ||
      (temp_v2 = gameGetPlayerData(), *(unsigned char *)(temp_v2 + 0x76) < *(unsigned char *)(temp_v8 + 2))) ||
     (temp_v2 = FUN_0024ea50(temp_v6), temp_v2 != 0)) {
    temp_v2 = 0x100;
    asdMemAlloc(0x100,0x100,0,0x962,1);
    temp_v6 = 0;
    temp_v3 = gameGetPlayerData();
    temp_v8 = (unsigned int)*(unsigned char *)(temp_v1 + 2);
    if (*(unsigned char *)(temp_v3 + 0x76) <= temp_v8) {
      temp_v3 = gameGetPlayerData();
      temp_v8 = (unsigned int)*(unsigned char *)(temp_v3 + 0x76);
    }
    temp_v0 = (short)(temp_v8 / 2);
    if (temp_v8 / 2 < 10) {
      temp_v0 = 10;
    }
    temp_v7 = (int)(short)((short)temp_v8 - temp_v0);
    temp_v3 = randBetween(temp_v7,temp_v8);
    if (temp_v3 < 1) {
      scrSetResult(0xffffffff);
    }
    else {
      if (temp_v7 < 1) {
        temp_v7 = 1;
      }
      temp_v1 = 1;
      do {
        puVar5 = (unsigned short *)(temp_v1 & 0xffff);
        devilGetRecord();
        temp_v4 = temp_v1;
        dataTable00FindById();
        temp_v5 = (unsigned int)*(unsigned char *)((int)puVar5 + 3);
        temp_v9 = SBORROW4(temp_v5,temp_v7);
        temp_v3 = temp_v5 - temp_v7;
        if (temp_v7 <= (int)temp_v5) {
          temp_v9 = SBORROW4(temp_v8,temp_v5);
          temp_v3 = temp_v8 - temp_v5;
        }
        if (((temp_v3 < 0 == temp_v9) && ((*(unsigned short *)(temp_v4 + 0x16) & 0x400) != 0)) &&
           (temp_v3 = FUN_0024ea50(*puVar5), temp_v3 == 0)) {
          FUN_002bd06c(*puVar5);
          temp_v3 = temp_v6 * 2;
          temp_v6 = (temp_v6 + 1) & 0xffff;
          *(unsigned short *)(temp_v2 + temp_v3) = *puVar5;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x4b1);
      if (temp_v6 != 0) {
        randNextInRange((temp_v6 - 1) & 0xffff);
      }
      scrSetResult();
    }
    asdMemFree(temp_v2);
  }
  else {
    scrSetResult(temp_v6);
  }
  return 1;
}

} /* extern "C" */
