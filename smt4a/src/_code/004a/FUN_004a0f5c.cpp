/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a0f5c` (_code @ 0x4a0f5c, 0x3e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00180118(unsigned int);
int FUN_001ab854(...);
int FUN_002b5c88(void);
int FUN_003df57c(int, int);
int FUN_004bcbb4(int, int);

/* Supplied declaration required: FUN_00180118. */
extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_001ab854. */
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);
/* Supplied declaration required: FUN_002b5c88. */
extern unsigned int FUN_002e5220(unsigned short);
/* Supplied declaration required: FUN_003df57c. */
extern int FUN_004a0404(void);
/* Supplied declaration required: FUN_004bcbb4. */


unsigned int FUN_004a0f5c(void)

{
/* irregular: 2 goto(s); irregular input(s): in_r3; 5 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int in_r3;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  char acStack_a8 [132];
  
  temp_v1 = FUN_004a0404();
  if (temp_v1 == 0) {
    return 0;
  }
  temp_v9 = 0;
  temp_v1 = FUN_001b347c();
  temp_v2 = FUN_001ab888();
  temp_v8 = 0;
  if (temp_v8 < temp_v1) {
    do {
      if ((-1 < *(char *)(temp_v2 + 0x1c88 + temp_v8)) && (temp_v3 = FUN_001ab854(), temp_v3 != 0)) {
        temp_v6 = 0;
        do {
          temp_v7 = temp_v3 + temp_v6 * 2;
          temp_v10 = *(short *)(temp_v7 + 0x34) == 0x8c;
          if (!temp_v10) {
            in_r3 = (unsigned int)*(unsigned short *)(temp_v7 + 0x36);
          }
          if (temp_v10 || in_r3 == 0x8c) {
            temp_v6 = FUN_004bcbb4(temp_v3,0x8c);
            if (temp_v6 < *(short *)(temp_v3 + 0x2c)) {
              acStack_a8[temp_v9] = *(char *)(temp_v2 + 0x1c88 + temp_v8);
              temp_v9 = temp_v9 + 1;
            }
            break;
          }
          temp_v6 = temp_v6 + 2;
        } while (temp_v6 < 8);
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < temp_v1);
  }
  temp_v1 = 0;
  temp_v2 = 0;
  if (0 < temp_v9) {
    do {
      temp_v8 = FUN_001ab854((int)acStack_a8[temp_v2]);
      if (temp_v8 != 0) {
        temp_v3 = FUN_001ab888();
        temp_v3 = temp_v3 + 0x68;
        temp_v6 = 0;
        do {
          if ((temp_v3 == temp_v8) || (*(char *)(temp_v3 + 0x66) == *(char *)(temp_v8 + 0x66)))
          goto LAB_004a1070;
          temp_v6 = temp_v6 + 1;
          temp_v3 = temp_v3 + 300;
        } while (temp_v6 < 0x18);
      }
      temp_v6 = -1;
LAB_004a1070:
      temp_v3 = FUN_001ab888();
      if ((((*(char *)(temp_v3 + 0x1ca0) < 0) || (*(char *)(temp_v3 + 0x1ca0) != temp_v6)) &&
          ((*(char *)(temp_v3 + 0x1ca1) < 0 || (*(char *)(temp_v3 + 0x1ca1) != temp_v6)))) &&
         ((*(char *)(temp_v3 + 0x1ca2) < 0 || (*(char *)(temp_v3 + 0x1ca2) != temp_v6)))) {
        if ((temp_v1 != 0) && (*(short *)(temp_v1 + 0x2c) >= *(short *)(temp_v8 + 0x2c))) {
          if (*(short *)(temp_v1 + 0x2c) == *(short *)(temp_v8 + 0x2c)) {
            if (*(unsigned short *)(temp_v1 + 100) >= *(unsigned short *)(temp_v8 + 100)) {
              if (*(unsigned short *)(temp_v1 + 100) == *(unsigned short *)(temp_v8 + 100)) {
                temp_v4 = FUN_002e5220(*(unsigned short *)(temp_v1 + 0x62));
                temp_v5 = FUN_002e5220(*(unsigned short *)(temp_v8 + 0x62));
                if (temp_v5 < temp_v4) {
                  temp_v1 = temp_v8;
                }
              }
            }
            else {
              temp_v1 = temp_v8;
            }
          }
        }
        else {
          temp_v1 = temp_v8;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v9);
    if (temp_v1 != 0) {
      FUN_002b5c88();
      temp_v0 = FUN_004bcbb4(temp_v1,0x8c);
      temp_v0 = *(short *)(temp_v1 + 0x2c) - temp_v0;
      *(short *)(temp_v1 + 0x2c) = temp_v0;
      if (temp_v0 < 0) {
        *(unsigned short *)(temp_v1 + 0x2c) = 0;
      }
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
      FUN_00180118(temp_v4);
      return temp_v4;
    }
  }
  temp_v2 = 0;
  if (0 < temp_v9) {
    do {
      temp_v8 = FUN_001ab854((int)acStack_a8[temp_v2]);
      if (temp_v8 != 0) {
        temp_v3 = FUN_001ab888();
        temp_v3 = temp_v3 + 0x68;
        temp_v6 = 0;
        do {
          if ((temp_v3 == temp_v8) || (*(char *)(temp_v3 + 0x66) == *(char *)(temp_v8 + 0x66)))
          goto LAB_004a11b0;
          temp_v6 = temp_v6 + 1;
          temp_v3 = temp_v3 + 300;
        } while (temp_v6 < 0x18);
      }
      temp_v6 = -1;
LAB_004a11b0:
      temp_v3 = FUN_001ab888();
      if ((((-1 < *(char *)(temp_v3 + 0x1ca0)) && (*(char *)(temp_v3 + 0x1ca0) == temp_v6)) ||
          ((-1 < *(char *)(temp_v3 + 0x1ca1) && (*(char *)(temp_v3 + 0x1ca1) == temp_v6)))) ||
         ((-1 < *(char *)(temp_v3 + 0x1ca2) && (*(char *)(temp_v3 + 0x1ca2) == temp_v6)))) {
        if ((temp_v1 != 0) && (*(short *)(temp_v1 + 0x2c) >= *(short *)(temp_v8 + 0x2c))) {
          if (*(short *)(temp_v1 + 0x2c) == *(short *)(temp_v8 + 0x2c)) {
            if (*(unsigned short *)(temp_v1 + 100) >= *(unsigned short *)(temp_v8 + 100)) {
              if (*(unsigned short *)(temp_v1 + 100) == *(unsigned short *)(temp_v8 + 100)) {
                temp_v4 = FUN_002e5220(*(unsigned short *)(temp_v1 + 0x62));
                temp_v5 = FUN_002e5220(*(unsigned short *)(temp_v8 + 0x62));
                if (temp_v5 < temp_v4) {
                  temp_v1 = temp_v8;
                }
              }
            }
            else {
              temp_v1 = temp_v8;
            }
          }
        }
        else {
          temp_v1 = temp_v8;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v9);
    if (temp_v1 != 0) {
      FUN_002b5c88();
      temp_v0 = FUN_004bcbb4(temp_v1,0x8c);
      temp_v0 = *(short *)(temp_v1 + 0x2c) - temp_v0;
      *(short *)(temp_v1 + 0x2c) = temp_v0;
      if (temp_v0 < 0) {
        *(unsigned short *)(temp_v1 + 0x2c) = 0;
      }
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
      FUN_00180118(temp_v4);
      return temp_v4;
    }
  }
  temp_v1 = FUN_001801a4();
  temp_v2 = 0;
  while( 1 ) {
    temp_v8 = temp_v1 + temp_v2 * 2;
    temp_v10 = *(short *)(temp_v8 + 0x34) == 0x8c;
    if (!temp_v10) {
      in_r3 = (unsigned int)*(unsigned short *)(temp_v8 + 0x36);
    }
    if (temp_v10 || in_r3 == 0x8c) break;
    temp_v2 = temp_v2 + 2;
    if (temp_v2 >= 8) {
      return 0;
    }
  }
  temp_v1 = FUN_001801a4();
  temp_v2 = FUN_003df57c(0x8c,1);
  if (*(short *)(temp_v1 + 0x2c) <= temp_v2) {
    return 0;
  }
  FUN_002b5c88();
  temp_v0 = FUN_003df57c(0x8c,1);
  temp_v0 = *(short *)(temp_v1 + 0x2c) - temp_v0;
  *(short *)(temp_v1 + 0x2c) = temp_v0;
  if (temp_v0 < 0) {
    *(unsigned short *)(temp_v1 + 0x2c) = 0;
  }
  temp_v1 = FUN_001801a4();
  return temp_v1 + 0x4c;
}

} /* extern "C" */
