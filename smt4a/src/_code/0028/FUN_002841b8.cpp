/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002841b8` (_code @ 0x2841b8, 0x2d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016431c(unsigned int);
int FUN_0021bdac(unsigned int, int, int, int, int, int);
int FUN_0023723c(unsigned int, int, unsigned int, int, int, unsigned char *, unsigned char *);
int FUN_0023b27c(void);
int FUN_002686b8(void);
int FUN_002c76c0(int);
int FUN_0031f208(int);
int FUN_0031f27c(unsigned int, int);
int FUN_003491e8(void);
int FUN_0035d8a4(void);
int rt_memcpy_w(unsigned int [19], unsigned char *, int);

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_3_stack;

extern unsigned char LAB_002844a0; /* 0x2844a0 */
extern unsigned char LAB_002844dc; /* 0x2844dc */
extern unsigned char DAT_00530a24; /* 0x530a24 */
extern int DAT_0057f58c; /* 0x57f58c */
extern unsigned char DAT_005a6665; /* 0x5a6665 */
extern unsigned char DAT_005f1afc; /* 0x5f1afc */
extern unsigned char DAT_005f15fc; /* 0x5f15fc */

/* Supplied declaration required: FUN_0016431c. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0021bdac. */
/* Supplied declaration required: FUN_0023723c. */
extern int FUN_0023b258(void);
/* Supplied declaration required: FUN_0023b27c. */
/* Supplied declaration required: FUN_002686b8. */
/* Supplied declaration required: FUN_002c76c0. */
extern unsigned int FUN_002c7c54(void);
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: FUN_0031f27c. */
/* Supplied declaration required: FUN_003491e8. */
/* Supplied declaration required: FUN_0035d8a4. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_002841b8(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6 [19];
  unsigned char temp_v7 [16];
  unsigned char *temp_v8;
  int temp_v9;
  int iStack_2c;
  unsigned int uStack_28;
  
  temp_v9 = param_1;
  iStack_2c = param_2;
  uStack_28 = param_3;
  rt_memcpy_w(temp_v6,&DAT_00530a24,0x4c);
  temp_v8 = &DAT_005a6665;
  temp_v7[0] = 'U';
  temp_v7[1] = '\\';
  temp_v7[2] = '[';
  temp_v7[3] = 'g';
  temp_v7[4] = 'V';
  temp_v7[5] = '^';
  temp_v7[6] = ']';
  temp_v7[7] = '_';
  temp_v7[8] = 'W';
  temp_v7[9] = 'a';
  temp_v7[10] = 'c';
  temp_v7[0xb] = 'h';
  temp_v7[0xc] = '`';
  temp_v7[0xd] = 'b';
  temp_v7[0xe] = 'X';
  temp_v7[0xf] = 'd';
  FUN_002c76c0(0);
  temp_v5 = 0;
  temp_v4 = 0;
  do {
    temp_v1 = FUN_0018719c(temp_v6[temp_v4]);
    temp_v0 = DAT_0057f58c;
    if (temp_v1 != 0) {
      temp_v5 = temp_v5 + 1;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x13);
  if (temp_v5 == 0) {
    temp_v2 = 99;
  }
  else {
    if (temp_v9 == 0) {
      DAT_005f1afc = 1;
      (*(unsigned int *)((unsigned char *)&DAT_005f15fc + 0x504)) = (unsigned int)temp_v7[param_2];
      if (DAT_0057f58c != 0) {
        *(unsigned char *)(DAT_0057f58c + 0x19c5) = 0x15;
      }
      FUN_0021bdac(param_3,0,0,6,0,0);
      FUN_0023723c(*(unsigned int *)(temp_v0 + 4),4,0xffffffff,0,3,&LAB_002844dc,&LAB_002844a0);
      FUN_0016431c(*(unsigned int *)(temp_v0 + 4));
      *(unsigned char *)(temp_v0 + 0x19c4) = 0;
      *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v0 + 0xc) | 0x20;
      FUN_0031f27c(0xffffffff,3);
      temp_v4 = 0;
      do {
        temp_v5 = FUN_0018719c(temp_v6[temp_v4]);
        if (temp_v5 != 0) {
          FUN_0031f208(temp_v7[temp_v4]);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x13);
      FUN_0023b27c();
    }
    temp_v3 = FUN_002c7c54();
    temp_v4 = FUN_0023b258();
    if (temp_v4 != 0) {
      DAT_005f1afc = 0;
      (*(unsigned int *)((unsigned char *)&DAT_005f15fc + 0x504)) = 0;
      FUN_002686b8();
      FUN_0035d8a4();
      FUN_003491e8();
      temp_v2 = 0xffffffff;
    }
    else {
      if ((temp_v3 == 0x69) || (temp_v7[param_2] == temp_v3)) {
        return 0;
      }
      DAT_005f1afc = 0;
      (*(unsigned int *)((unsigned char *)&DAT_005f15fc + 0x504)) = 0;
      FUN_002686b8();
      FUN_0035d8a4();
      FUN_003491e8();
      if (temp_v3 == 0x55) {
        temp_v2 = 1;
      }
      else if (temp_v3 == 0x56) {
        temp_v2 = 5;
      }
      else if (temp_v3 == 0x57) {
        temp_v2 = 9;
      }
      else if (temp_v3 == 0x58) {
        temp_v2 = 0xf;
      }
      else if (temp_v3 == 0x5a) {
        temp_v2 = 0x13;
      }
      else if (temp_v3 == 0x5b) {
        temp_v2 = 3;
      }
      else if (temp_v3 == 0x5c) {
        temp_v2 = 2;
      }
      else if (temp_v3 == 0x5d) {
        temp_v2 = 7;
      }
      else if (temp_v3 == 0x5e) {
        temp_v2 = 6;
      }
      else if (temp_v3 == 0x5f) {
        temp_v2 = 8;
      }
      else if (temp_v3 == 0x60) {
        temp_v2 = 0xd;
      }
      else if (temp_v3 == 0x61) {
        temp_v2 = 10;
      }
      else if (temp_v3 == 0x62) {
        temp_v2 = 0xe;
      }
      else if (temp_v3 == 99) {
        temp_v2 = 0xb;
      }
      else if (temp_v3 == 100) {
        temp_v2 = 0x10;
      }
      else if (temp_v3 == 0x65) {
        temp_v2 = 0x11;
      }
      else if (temp_v3 == 0x66) {
        temp_v2 = 0x12;
      }
      else if (temp_v3 == 0x67) {
        temp_v2 = 4;
      }
      else {
        if (temp_v3 != 0x68) {
          return 0;
        }
        temp_v2 = 0xc;
      }
    }
  }
  return temp_v2;
}

} /* extern "C" */
