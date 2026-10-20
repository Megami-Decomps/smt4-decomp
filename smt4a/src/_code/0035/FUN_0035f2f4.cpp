/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f2f4` (_code @ 0x35f2f4, 0x2b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e9f70(...);
int FUN_003eaa14(...);
int btlClearMode4D74(...);
int FUN_004bcb54(...);
int bitsAt60Test(...);
int bitsAt60Set(...);
int FUN_004fb798(...);

/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern unsigned int DAT_00570d78; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */

extern int btlGetMainState(void);
extern int saveSlotFindSelected(void);
extern int FUN_001ab888(void);
extern int FUN_00213b5c(void);
extern unsigned int FUN_003e0154(void);
extern unsigned int FUN_003e0164(void);
extern int FUN_003e46f4(unsigned int);
/* Supplied declaration required: FUN_003e9f70. */
/* Supplied declaration required: FUN_003eaa14. */
/* Supplied declaration required: btlClearMode4D74. */
/* Supplied declaration required: FUN_004bcb54. */
/* Supplied declaration required: bitsAt60Test. */
/* Supplied declaration required: bitsAt60Set. */
/* Supplied declaration required: FUN_004fb798. */


unsigned int FUN_0035f2f4(void)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  char temp_v9 [8];
  
  temp_v1 = btlGetMainState();
  temp_v2 = FUN_003e0154();
  temp_v3 = FUN_003e0164();
  FUN_004fb798(0,0,0,*(int *)(temp_v1 + 0x1ed4),0,temp_v2,temp_v3,0xffffffff,2,0,0,9,0,0,1);
  temp_v4 = FUN_00213b5c();
  if ((temp_v4 == 4) || (temp_v4 = FUN_003e46f4(0x80), temp_v4 != 0)) {
    temp_v4 = 1;
    do {
      puVar7 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v4 * 0x408);
      if (((DAT_00570d78 & *puVar7) != 0 || (DAT_00570d7c & puVar7[1]) != 0) &&
         ((puVar7[1] & DAT_00570d94) == 0 && (*puVar7 & DAT_00570d90) == 0)) {
        temp_v7 = 0;
        temp_v5 = 0;
        temp_v6 = 0xd;
        do {
          temp_v7 = temp_v7 | (1 << ((temp_v5 + 1U) & 0xff));
          do {
            temp_v6 = temp_v6 - 1;
            temp_v5 = temp_v5 + 1;
            if (temp_v6 == 0) {
              FUN_004fb798(0,0,0,*(int *)(temp_v1 + 0x1ed4) + (short)puVar7[2] * 0x1d0,0,puVar7[0x97],
                           puVar7[0x99],0xffffffff,temp_v7,0,0,9,0,0,1);
              goto LAB_0035f460;
            }
          } while (temp_v5 == 1 || temp_v5 == 3);
        } while( 1 );
      }
LAB_0035f460:
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
  }
  temp_v4 = FUN_001ab888();
  temp_v5 = 0;
  temp_v9[0] = '\0';
  temp_v9[1] = '\0';
  temp_v9[2] = '\0';
  temp_v9[3] = '\0';
  do {
    temp_v6 = (int)*(char *)(temp_v4 + temp_v5 + 0x1ca0);
    if (-1 < temp_v6) {
      temp_v0 = bitsAt60Test(temp_v4 + temp_v6 * 300 + 0x68,4);
      temp_v9[temp_v5] = temp_v0;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 3);
  temp_v5 = 0;
  do {
    temp_v8 = temp_v4 + temp_v5 * 300 + 0x68;
    temp_v6 = bitsAt60Test(temp_v8,2);
    FUN_004bcb54(temp_v8);
    if (temp_v6 != 0) {
      bitsAt60Set(temp_v8,2);
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x18);
  temp_v5 = 0;
  do {
    temp_v6 = (int)*(char *)(temp_v4 + temp_v5 + 0x1ca0);
    if ((-1 < temp_v6) && (temp_v9[temp_v5] != '\0')) {
      bitsAt60Set(temp_v4 + temp_v6 * 300 + 0x68,4);
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 3);
  temp_v4 = saveSlotFindSelected();
  if (temp_v4 != 0) {
    FUN_004bcb54();
    FUN_003eaa14(temp_v1);
    btlClearMode4D74(temp_v1);
  }
  if (0 < *(int *)(temp_v1 + 300)) {
    FUN_003e9f70(temp_v1);
  }
  return 1;
}

} /* extern "C" */
