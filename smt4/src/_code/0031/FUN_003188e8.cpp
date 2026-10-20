/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003188e8` (_code @ 0x3188e8, 0x1c4 bytes) from smt4_v1.2.0.cxi.
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

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern int FUN_00295d7c(int);
extern unsigned int scrGetArg(unsigned int);
extern int FUN_0029ebac(int, unsigned int);
extern int FUN_002a8740(int);
extern int FUN_002a8764(void);
extern char FUN_002c09f4(unsigned int);


unsigned int FUN_003188e8(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  char temp_v9 [28];
  
  temp_v2 = scrGetArg(0);
  temp_v9[0] = '\0';
  temp_v9[1] = '\0';
  temp_v9[2] = '\0';
  temp_v9[3] = '\0';
  temp_v8 = -1;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v5 = 0;
  temp_v9[4] = '\0';
  temp_v9[5] = '\0';
  temp_v9[6] = '\0';
  temp_v9[7] = '\0';
  temp_v9[8] = '\0';
  temp_v9[9] = '\0';
  temp_v9[10] = '\0';
  temp_v9[0xb] = '\0';
  temp_v9[0xc] = '\0';
  temp_v9[0xd] = '\0';
  temp_v9[0xe] = '\0';
  temp_v9[0xf] = '\0';
  temp_v9[0x10] = '\0';
  temp_v9[0x11] = '\0';
  temp_v9[0x12] = '\0';
  temp_v9[0x13] = '\0';
  temp_v9[0x14] = '\0';
  temp_v9[0x15] = '\0';
  temp_v9[0x16] = '\0';
  temp_v9[0x17] = '\0';
  temp_v3 = FUN_002a8764();
  if (*(char *)(temp_v3 + 0x910b) != '\0') {
    do {
      temp_v3 = FUN_002a8764();
      temp_v0 = *(char *)(temp_v3 + temp_v5 + 0x90f0);
      if (-1 < temp_v0) {
        temp_v3 = FUN_002a8740((int)temp_v0);
        temp_v4 = FUN_0029ebac(temp_v3,1);
        if ((((temp_v4 == 0) && (temp_v4 = FUN_0029ebac(temp_v3,10), temp_v4 == 0)) &&
            (temp_v4 = FUN_0029ebac(temp_v3,2), temp_v4 == 0)) && (*(unsigned short *)(temp_v3 + 0x46) != temp_v2)) {
          temp_v3 = FUN_00295d7c(temp_v3);
          if (temp_v3 == 0) {
            temp_v9[temp_v6] = temp_v0;
            temp_v6 = (int)(char)((char)temp_v6 + '\x01');
          }
          else {
            temp_v7 = (int)(char)((char)temp_v7 + '\x01');
          }
        }
      }
      temp_v5 = temp_v5 + 1;
      temp_v3 = FUN_002a8764();
    } while (temp_v5 < (int)(unsigned int)*(unsigned char *)(temp_v3 + 0x910b));
    if (temp_v6 >= 1) {
      temp_v0 = FUN_002c09f4((temp_v6 - 1U) & 0xffff);
      temp_v8 = temp_v9[temp_v0] + 0x6d;
    }
    else if (0 < temp_v7) {
      temp_v1 = FUN_002c09f4((temp_v7 - 1U) & 0xffff);
      temp_v0 = '\0';
      temp_v3 = 0;
      do {
        temp_v5 = btlGetMainState();
        puVar6 = (unsigned int *)(*(int *)(temp_v5 + 0x1fc0) + temp_v3 * 0x288);
        temp_v2 = *puVar6;
        if ((((temp_v2 & 1) != 0) && ((temp_v2 & 0x40) == 0)) &&
           ((-1 < (short)puVar6[2] && ((temp_v2 & 8) != 0)))) {
          if (temp_v1 == temp_v0) {
            temp_v8 = (int)(short)puVar6[2];
            break;
          }
          temp_v0 = temp_v0 + '\x01';
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x6d);
    }
  }
  scrSetResult(temp_v8);
  return 1;
}

} /* extern "C" */
