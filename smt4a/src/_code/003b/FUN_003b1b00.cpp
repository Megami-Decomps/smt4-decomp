/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b1b00` (_code @ 0x3b1b00, 0x1ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned int DAT_005710e8; /* 0x5710e8 */
extern unsigned int DAT_005710ec; /* 0x5710ec */
extern unsigned int DAT_005710f8; /* 0x5710f8 */
extern unsigned int DAT_005710fc; /* 0x5710fc */
extern unsigned int DAT_00571108; /* 0x571108 */
extern unsigned int DAT_0057110c; /* 0x57110c */

extern int btlGetMainState(void);
extern char FUN_0014bef4(unsigned int);
extern int FUN_001ab854(int);
extern int FUN_001ab888(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
extern int FUN_004bd0d8(int);
extern int bitsAt60Test(int, unsigned int);


unsigned int FUN_003b1b00(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  char temp_v10 [28];
  
  temp_v2 = scrGetArg(0);
  temp_v10[0] = '\0';
  temp_v10[1] = '\0';
  temp_v10[2] = '\0';
  temp_v10[3] = '\0';
  temp_v9 = -1;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v6 = 0;
  temp_v10[4] = '\0';
  temp_v10[5] = '\0';
  temp_v10[6] = '\0';
  temp_v10[7] = '\0';
  temp_v10[8] = '\0';
  temp_v10[9] = '\0';
  temp_v10[10] = '\0';
  temp_v10[0xb] = '\0';
  temp_v10[0xc] = '\0';
  temp_v10[0xd] = '\0';
  temp_v10[0xe] = '\0';
  temp_v10[0xf] = '\0';
  temp_v10[0x10] = '\0';
  temp_v10[0x11] = '\0';
  temp_v10[0x12] = '\0';
  temp_v10[0x13] = '\0';
  temp_v10[0x14] = '\0';
  temp_v10[0x15] = '\0';
  temp_v10[0x16] = '\0';
  temp_v10[0x17] = '\0';
  temp_v3 = FUN_001ab888();
  if (*(char *)(temp_v3 + 0x1ca3) != '\0') {
    do {
      temp_v3 = FUN_001ab888();
      temp_v0 = *(char *)(temp_v3 + temp_v6 + 0x1c88);
      if (-1 < temp_v0) {
        temp_v3 = FUN_001ab854((int)temp_v0);
        temp_v4 = bitsAt60Test(temp_v3,1);
        if (((temp_v4 == 0) && (temp_v4 = bitsAt60Test(temp_v3,10), temp_v4 == 0)) &&
           (*(unsigned short *)(temp_v3 + 0x62) != temp_v2)) {
          temp_v3 = FUN_004bd0d8(temp_v3);
          if (temp_v3 == 0) {
            temp_v10[temp_v7] = temp_v0;
            temp_v7 = (int)(char)((char)temp_v7 + '\x01');
          }
          else {
            temp_v8 = (int)(char)((char)temp_v8 + '\x01');
          }
        }
      }
      temp_v6 = temp_v6 + 1;
      temp_v3 = FUN_001ab888();
    } while (temp_v6 < (int)(unsigned int)*(unsigned char *)(temp_v3 + 0x1ca3));
    if (temp_v7 >= 1) {
      temp_v0 = FUN_0014bef4((temp_v7 - 1U) & 0xffff);
      temp_v9 = temp_v10[temp_v0] + 0x6d;
    }
    else if (0 < temp_v8) {
      temp_v1 = FUN_0014bef4((temp_v8 - 1U) & 0xffff);
      temp_v0 = '\0';
      temp_v3 = 0;
      do {
        temp_v6 = btlGetMainState();
        puVar7 = (unsigned int *)(*(int *)(temp_v6 + 0x1ffc) + temp_v3 * 0x408);
        temp_v2 = *puVar7;
        temp_v5 = puVar7[1];
        if ((((DAT_005710e8 & temp_v2) != 0 || (DAT_005710ec & temp_v5) != 0) &&
            ((DAT_00571108 & temp_v2) == 0 && (DAT_0057110c & temp_v5) == 0)) &&
           ((-1 < (short)puVar7[2] && ((temp_v5 & DAT_005710fc) != 0 || (DAT_005710f8 & temp_v2) != 0)))
           ) {
          if (temp_v1 == temp_v0) {
            temp_v9 = (int)(short)puVar7[2];
            break;
          }
          temp_v0 = temp_v0 + '\x01';
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x6d);
    }
  }
  scrSetResult(temp_v9);
  return 1;
}

} /* extern "C" */
