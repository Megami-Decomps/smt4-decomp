/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ade88` (_code @ 0x2ade88, 0x490 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ab854(...);
int FUN_001b4a90(int, int, int);
int FUN_004da344(int, unsigned int, int, int, unsigned char [4]);

/* stack frame of void: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int DAT_0057f268; /* 0x57f268 */

extern int FUN_0019e4d4(unsigned int);
/* Supplied declaration required: FUN_001ab854. */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001b4a90. */
extern int FUN_002a4b28(unsigned short);
/* Supplied declaration required: FUN_004da344. */


void FUN_002ade88(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10 [4];
  int temp_v11;
  unsigned short temp_v12;
  
  temp_v0 = DAT_0057f268;
  temp_v1 = FUN_001ab888();
  FUN_001b4a90(temp_v0 + 0x9c0,4,1);
  temp_v7 = 0;
  do {
    temp_v2 = temp_v0 + temp_v7 * 4;
    *(unsigned int *)(temp_v2 + 0xfd0) = 0;
    *(unsigned short *)(temp_v0 + temp_v7 * 2 + 0x103e) = 0;
    *(unsigned char *)(*(int *)(temp_v2 + 0xa14) + 0x27) = 0;
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 3);
  temp_v7 = 0;
  do {
    temp_v3 = temp_v0 + temp_v7 * 4;
    *(unsigned int *)(temp_v3 + 0xfdc) = 0;
    *(unsigned short *)(temp_v0 + temp_v7 * 2 + 0x1044) = 0;
    *(unsigned short *)(temp_v0 + temp_v7 * 8 + 0xa84) = 1;
    temp_v2 = 0;
    *(unsigned char *)(*(int *)(temp_v3 + 0xa20) + 0x27) = 0;
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x18);
  temp_v7 = 0;
  temp_v9 = *(char *)(temp_v0 + 0x9b4) == '\x12';
  *(unsigned char *)(temp_v0 + 0x9c0) = 0;
  do {
    temp_v8 = -1 < *(char *)(temp_v1 + temp_v7 + 0x1ca0);
    if (temp_v8) {
      temp_v2 = *(int *)(temp_v0 + 0xe84);
    }
    else {
      *(unsigned char *)(temp_v0 + temp_v7 + 0x9c1) = 0;
    }
    if (temp_v8 && 0 < temp_v2) {
      temp_v2 = 0;
      if (*(char *)(temp_v0 + temp_v7 + 0x9c1) != '\0') {
        temp_v2 = FUN_001ab854();
        temp_v3 = *(int *)(temp_v0 + 0x107c);
        FUN_004da344(temp_v3,*(unsigned int *)(temp_v0 + 0xe7c) & 0xffff,*(unsigned short *)(temp_v2 + 0x62),temp_v9,
                     temp_v10);
        if (temp_v3 != 0) {
          temp_v2 = FUN_002a4b28(temp_v12);
          if (temp_v2 == 0) {
            temp_v2 = temp_v0 + temp_v7 * 4;
            temp_v4 = *(unsigned int *)(temp_v2 + 0xfd0) | 0x80;
            *(unsigned int *)(temp_v2 + 0xfd0) = temp_v4;
          }
        }
        else {
          *(unsigned char *)(temp_v0 + temp_v7 + 0x9c1) = 0;
          if (temp_v11 != 1) {
            if (temp_v11 != 2) {
              if (temp_v11 == 3) {
                temp_v2 = temp_v0 + temp_v7 * 4;
                *(unsigned int *)(temp_v2 + 0xfd0) = *(unsigned int *)(temp_v2 + 0xfd0) | 4;
              }
            }
            else {
              temp_v2 = temp_v0 + temp_v7 * 4;
              temp_v4 = *(unsigned int *)(temp_v2 + 0xfd0) | 2;
              *(unsigned int *)(temp_v2 + 0xfd0) = temp_v4;
            }
          }
          else {
            temp_v2 = temp_v0 + temp_v7 * 4;
            temp_v4 = *(unsigned int *)(temp_v2 + 0xfd0) | 8;
            *(unsigned int *)(temp_v2 + 0xfd0) = temp_v4;
          }
          temp_v2 = FUN_001ab854((int)*(char *)(temp_v1 + temp_v7 + 0x1ca0));
          if ((unsigned int)*(unsigned short *)(temp_v2 + 0x62) == *(unsigned int *)(temp_v0 + 0xe7c)) {
            temp_v2 = temp_v0 + temp_v7 * 4;
            temp_v4 = *(unsigned int *)(temp_v2 + 0xfd0) | 0x40;
            *(unsigned int *)(temp_v2 + 0xfd0) = temp_v4;
          }
        }
        temp_v3 = temp_v0 + temp_v7 * 2;
        temp_v2 = temp_v3 + 0x1000;
        *(unsigned short *)(temp_v3 + 0x103e) = temp_v12;
      }
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 3);
  temp_v7 = 0;
  do {
    if ((-1 < *(char *)(temp_v1 + temp_v7 + 0x1ca0)) &&
       (temp_v2 = FUN_001ab854(), (*(unsigned short *)(temp_v2 + 0x60) & 4) != 0)) {
      temp_v2 = temp_v0 + temp_v7 * 4;
      *(unsigned int *)(temp_v2 + 0xfd0) = *(unsigned int *)(temp_v2 + 0xfd0) | 0x10;
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 3);
  temp_v7 = 0;
  do {
    temp_v2 = temp_v0 + temp_v7 * 8;
    if (*(int *)(temp_v2 + 0xa80) < 0) {
      *(unsigned short *)(temp_v2 + 0xa84) = 0;
    }
    else {
      temp_v3 = FUN_001ab854();
      if ((*(unsigned short *)(temp_v3 + 0x60) & 0x400) != 0) {
        temp_v3 = temp_v0 + temp_v7 * 4;
        *(unsigned short *)(temp_v2 + 0xa84) = 0;
        *(unsigned int *)(temp_v3 + 0xfdc) = *(unsigned int *)(temp_v3 + 0xfdc) | 0x20;
      }
      else {
        if ((*(unsigned short *)(temp_v3 + 0x60) & 4) != 0) {
          temp_v5 = temp_v0 + temp_v7 * 4;
          *(unsigned int *)(temp_v5 + 0xfdc) = *(unsigned int *)(temp_v5 + 0xfdc) | 0x10;
        }
        if ((0 < *(int *)(temp_v0 + 0xe84)) && (*(short *)(temp_v2 + 0xa84) != 0)) {
          temp_v5 = *(int *)(temp_v0 + 0x107c);
          FUN_004da344(temp_v5,*(unsigned int *)(temp_v0 + 0xe7c) & 0xffff,*(unsigned short *)(temp_v3 + 0x62),temp_v9,
                       temp_v10);
          if (temp_v5 != 0) {
            temp_v2 = FUN_002a4b28(temp_v12);
            if (temp_v2 == 0) {
              temp_v2 = temp_v0 + temp_v7 * 4;
              temp_v4 = *(unsigned int *)(temp_v2 + 0xfdc) | 0x80;
              *(unsigned int *)(temp_v2 + 0xfdc) = temp_v4;
            }
          }
          else {
            *(unsigned short *)(temp_v2 + 0xa84) = 0;
            if (temp_v11 != 1) {
              if (temp_v11 != 2) {
                if (temp_v11 == 3) {
                  temp_v2 = temp_v0 + temp_v7 * 4;
                  *(unsigned int *)(temp_v2 + 0xfdc) = *(unsigned int *)(temp_v2 + 0xfdc) | 4;
                }
              }
              else {
                temp_v2 = temp_v0 + temp_v7 * 4;
                temp_v4 = *(unsigned int *)(temp_v2 + 0xfdc) | 2;
                *(unsigned int *)(temp_v2 + 0xfdc) = temp_v4;
              }
            }
            else {
              temp_v2 = temp_v0 + temp_v7 * 4;
              temp_v4 = *(unsigned int *)(temp_v2 + 0xfdc) | 8;
              *(unsigned int *)(temp_v2 + 0xfdc) = temp_v4;
            }
            if (*(unsigned int *)(temp_v0 + 0xe7c) == (unsigned int)*(unsigned short *)(temp_v3 + 0x62)) {
              temp_v2 = temp_v0 + temp_v7 * 4;
              temp_v4 = *(unsigned int *)(temp_v2 + 0xfdc) | 0x40;
              *(unsigned int *)(temp_v2 + 0xfdc) = temp_v4;
            }
          }
          *(unsigned short *)(temp_v0 + temp_v7 * 2 + 0x1044) = temp_v12;
        }
      }
    }
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x18) {
      temp_v7 = 0;
      if (temp_v7 < *(int *)(temp_v0 + 0xe84)) {
        do {
          temp_v4 = *(unsigned int *)(temp_v0 + temp_v7 * 4 + 0xe7c);
          if ((-1 < (int)temp_v4) && (temp_v2 = FUN_0019e4d4(temp_v4 & 0xffff), temp_v2 != 0)) {
            temp_v3 = 0;
            do {
              if ((-1 < *(char *)(temp_v1 + temp_v3 + 0x1ca0)) &&
                 (temp_v5 = FUN_001ab854(), *(short *)(temp_v5 + 0x62) == *(short *)(temp_v2 + 0x62))) {
                temp_v5 = temp_v0 + temp_v3 * 4;
                *(unsigned char *)(temp_v0 + temp_v3 + 0x9c1) = 0;
                *(unsigned char *)(*(int *)(temp_v5 + 0xa14) + 0x28) = 0;
                *(unsigned char *)(*(int *)(temp_v5 + 0xa14) + 0x27) = 1;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 3);
            temp_v3 = 0;
            do {
              temp_v5 = temp_v0 + temp_v3 * 8;
              if ((-1 < *(int *)(temp_v5 + 0xa80)) &&
                 (temp_v6 = FUN_001ab854(), *(short *)(temp_v6 + 0x62) == *(short *)(temp_v2 + 0x62))) {
                *(unsigned short *)(temp_v5 + 0xa84) = 0;
                temp_v5 = temp_v0 + temp_v3 * 4;
                *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x28) = 0;
                *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x27) = 1;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 0x18);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < *(int *)(temp_v0 + 0xe84));
      }
      return;
    }
  } while( 1 );
}

} /* extern "C" */
