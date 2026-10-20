/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4b48` (_code @ 0x2c4b48, 0x6cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001695a0(void);
int FUN_002292ac(void);
int FUN_0036db68(...);

int FUN_0015f858(unsigned int, int);
int FUN_00180118(unsigned int);
int FUN_001ab854(...);
int FUN_001ad9b4(void);
int FUN_00237898(...);
int FUN_00275bb0(...);
int FUN_00275fe4(...);
int FUN_002852f0(int);
int FUN_002c76c0(...);
int FUN_002e342c(unsigned int [32], unsigned int);
int FUN_002e6354(unsigned int [32], int);
int FUN_003180c4(int, unsigned int [32]);
int FUN_00359974(int, unsigned int, unsigned int, int);
int FUN_0037c88c(void);
int FUN_004185c4(...);
int FUN_0046a0f0(void);
int QuestCenter_GetActiveEntry(void);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

/* Supplied declaration required: FUN_0015f858. */
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_001ab854. */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_002292ac. */
/* Supplied declaration required: FUN_00237898. */
extern int FUN_0026272c(void);
/* Supplied declaration required: FUN_00275bb0. */
/* Supplied declaration required: FUN_00275fe4. */
/* Supplied declaration required: FUN_002852f0. */
extern int FUN_002a4b74(void);
extern int FUN_002ba85c(void);
/* Supplied declaration required: FUN_002c76c0. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003180c4. */
extern int FUN_00331194(void);
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: FUN_0036db68. */
/* Supplied declaration required: FUN_0037c88c. */
extern int FUN_0037d6c4(void);
/* Supplied declaration required: FUN_004185c4. */
/* Supplied declaration required: FUN_0046a0f0. */
extern int FUN_004bd340(unsigned int, unsigned int);
/* Supplied declaration required: QuestCenter_GetActiveEntry. */


unsigned int FUN_002c4b48(void)

{
/* irregular: 2 goto(s); 20 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  char temp_v11;
  unsigned int temp_v12 [32];
  int temp_v13;
  unsigned int temp_v14;
  
  temp_v3 = QuestCenter_GetActiveEntry();
  if (temp_v3 == 0) {
    FUN_002c76c0(0xffffffff);
    FUN_002852f0(0);
    return 1;
  }
  temp_v3 = FUN_002deb84();
  if (temp_v3 == 0) {
    FUN_00275fe4(0);
    FUN_00275fe4(1,0);
    FUN_00275fe4(2,0);
    FUN_00275fe4(3,0);
    puVar5 = (unsigned int *)QuestCenter_GetActiveEntry();
    *puVar5 = *puVar5 & 0xfffeffff;
    FUN_002c76c0(1);
  }
  temp_v3 = FUN_00275bb0(0);
  if (temp_v3 == 100) {
    FUN_002c76c0(0xffffffff);
    FUN_002852f0(0);
    return 1;
  }
  temp_v13 = FUN_002ba85c();
  temp_v1 = 0;
  temp_v11 = '\0';
  temp_v14 = 0;
  QuestCenter_GetActiveEntry();
  temp_v4 = FUN_0046a0f0() & 0xffff;
  FUN_001ad9b4();
  temp_v3 = FUN_00275bb0(3);
  if (temp_v3 < 4) {
    temp_v9 = temp_v4 + temp_v3 * 8;
    temp_v0 = *(short *)(temp_v9 + 0x100);
    if (temp_v0 != 0) {
      if (temp_v0 != 1) {
        if (temp_v0 == 2) {
          temp_v1 = 1;
          FUN_002e6354(temp_v12,0x80);
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v9 + 0x102);
          FUN_00180118(temp_v5);
          FUN_002e342c(temp_v12,temp_v5);
          FUN_003180c4(8,temp_v12);
          FUN_00359974(0x18,*(unsigned int *)(temp_v9 + 0x104),0xffffffff,0);
          temp_v6 = FUN_001ab888();
          temp_v10 = 0;
          do {
            if ((-1 < *(char *)(temp_v6 + temp_v10 + 0x1c88)) &&
               (temp_v7 = FUN_001ab854(), *(short *)(temp_v7 + 0x62) == *(short *)(temp_v9 + 0x102))) {
              temp_v8 = FUN_001ab854((int)*(char *)(temp_v6 + temp_v10 + 0x1c88));
              temp_v9 = FUN_004bd340(temp_v8,2);
              temp_v11 = temp_v9 != 0;
              temp_v8 = FUN_001ab854((int)*(char *)(temp_v6 + temp_v10 + 0x1c88));
              temp_v9 = FUN_004bd340(temp_v8,10);
              if (temp_v9 != 0) {
                temp_v11 = '\x02';
              }
              break;
            }
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < 0x18);
        }
      }
      else {
        temp_v14 = (unsigned int)*(unsigned short *)(temp_v9 + 0x102);
        temp_v8 = *(unsigned int *)(temp_v9 + 0x104);
        FUN_002e6354(temp_v12,0x80);
        temp_v5 = temp_v14;
        FUN_0015f858(temp_v14,1);
        FUN_002e342c(temp_v12,temp_v5);
        FUN_003180c4(0,temp_v12);
        FUN_00359974(0x18,temp_v8,0xffffffff,0);
      }
    }
    else {
      FUN_00275fe4(0,0x14);
    }
  }
  else {
    FUN_00275fe4(0,0x14);
  }
  temp_v9 = FUN_00275bb0(0);
  if (temp_v9 == 5) {
    temp_v3 = FUN_0026272c();
    if (temp_v3 == 0) {
      return 0;
    }
    FUN_0037c88c();
    FUN_00275fe4(0,0x14);
    temp_v3 = 1;
    temp_v8 = 2;
    FUN_00275fe4(temp_v8,temp_v3);
    return 0;
  }
  if (temp_v9 >= 5) {
    if (temp_v9 != 10) {
      if (temp_v9 != 0xb) {
        if (temp_v9 != 0x13) {
          if (temp_v9 != 0x14) {
            return 0;
          }
          temp_v3 = FUN_00275bb0(2);
          if (temp_v3 != 0) {
            puVar5 = (unsigned int *)QuestCenter_GetActiveEntry();
            temp_v4 = *puVar5 & 0xfffeffff;
          }
          else {
            if (*(char *)(temp_v4 + 6) == '\0') {
              temp_v3 = FUN_00162e8c();
              QuestCenter_GetActiveEntry();
              temp_v2 = FUN_0046a0f0();
              FUN_004185c4(temp_v2,0);
              *(unsigned short *)(temp_v3 + 0x1096) = 0;
              *(unsigned short *)(temp_v3 + 0x1094) = 0;
            }
            puVar5 = (unsigned int *)QuestCenter_GetActiveEntry();
            temp_v4 = *puVar5 | 0x10000;
          }
          *puVar5 = temp_v4;
          temp_v3 = 100;
        }
        else {
          temp_v3 = FUN_00331194();
          if (temp_v3 == 0) {
            return 0;
          }
          temp_v3 = 0x14;
        }
        temp_v8 = 0;
      }
      else {
        if (temp_v1) {
          temp_v8 = FUN_00275bb0(1);
          temp_v12[0] = 0;
          temp_v3 = temp_v13;
          FUN_00237898(temp_v13,0x6a,temp_v8,5);
        }
        else {
          temp_v8 = FUN_00275bb0(1);
          temp_v12[0] = 0;
          temp_v3 = temp_v13;
          FUN_00237898(temp_v13,0x69,temp_v8,5);
        }
        temp_v9 = FUN_00275bb0(1);
        FUN_00275fe4(1,temp_v9 + 1);
        if (temp_v3 != 1) {
          return 0;
        }
        FUN_00275fe4(0,1);
        FUN_00275fe4(1,0);
        temp_v3 = FUN_00275bb0(3);
        temp_v3 = temp_v3 + 1;
        temp_v8 = 3;
      }
    }
    else {
      FUN_00275fe4(0,0xb);
      temp_v3 = 0;
      temp_v8 = 1;
    }
    FUN_00275fe4(temp_v8,temp_v3);
    return 0;
  }
  if (temp_v9 == 0) {
    temp_v8 = FUN_00275bb0(1);
    temp_v12[0] = 0;
    temp_v3 = temp_v13;
    FUN_00237898(temp_v13,0x65,temp_v8,5);
    temp_v9 = FUN_00275bb0(1);
    FUN_00275fe4(1,temp_v9 + 1);
    if (temp_v3 != 1) {
      return 0;
    }
    FUN_00275fe4(0,1);
    temp_v3 = 0;
    temp_v8 = 1;
    FUN_00275fe4(temp_v8,temp_v3);
    return 0;
  }
  if (temp_v9 != 1) {
    if (temp_v9 != 2) {
      if (temp_v9 != 3) {
        return 0;
      }
      temp_v8 = FUN_00275bb0(1);
      temp_v12[0] = 0;
      temp_v3 = temp_v13;
      FUN_00237898(temp_v13,100,temp_v8,0xb);
      temp_v9 = FUN_00275bb0(1);
      FUN_00275fe4(1,temp_v9 + 1);
      if (temp_v3 != 1) {
        return 0;
      }
      temp_v3 = FUN_002a4b74();
      if (temp_v3 != 0) {
        FUN_00275fe4(0,0x13);
        temp_v8 = 2;
      }
      else {
        FUN_00275fe4(0,10);
        temp_v8 = 1;
      }
      FUN_00275fe4(temp_v8,temp_v3 != 0);
      FUN_0037c88c();
      return 0;
    }
  }
  else {
    temp_v9 = FUN_00275bb0(1);
    if (temp_v9 == 0 && temp_v11 == '\0') {
      FUN_002292ac();
    }
    if (*(char *)(temp_v4 + 6) != '\0') {
      FUN_001695a0();
      temp_v8 = FUN_00275bb0(1);
      temp_v12[0] = 1;
      FUN_00237898(temp_v13,0x68,temp_v8,5);
LAB_002c4ea8:
      if (temp_v11 == '\0') {
LAB_002c4f24:
        FUN_00275fe4(0,2);
        FUN_00275fe4(1,0);
        temp_v9 = FUN_0037d6c4();
        if (temp_v9 == 0) {
          return 0;
        }
        FUN_00275fe4(0,3);
        if (*(short *)(temp_v4 + temp_v3 * 8 + 0x100) != 1) {
          return 0;
        }
        FUN_0036db68(temp_v14);
        return 0;
      }
    }
    else {
      FUN_001695a0();
      if (!temp_v1) {
        temp_v8 = FUN_00275bb0(1);
        temp_v12[0] = 1;
        FUN_00237898(temp_v13,0x66,temp_v8,5);
        goto LAB_002c4ea8;
      }
      if (temp_v11 == '\0') {
        temp_v8 = FUN_00275bb0(1);
        temp_v12[0] = 1;
        FUN_00237898(temp_v13,0x67,temp_v8,5);
        goto LAB_002c4f24;
      }
      if (temp_v11 != '\x01') {
        temp_v8 = FUN_00275bb0(1);
        temp_v12[0] = 0;
        FUN_00237898(temp_v13,0x6e,temp_v8,5);
      }
      else {
        temp_v8 = FUN_00275bb0(1);
        temp_v12[0] = 0;
        FUN_00237898(temp_v13,0x6d,temp_v8,5);
      }
    }
    FUN_00275fe4(0,5);
    FUN_00275fe4(1,0);
  }
  temp_v9 = FUN_0037d6c4();
  if (temp_v9 == 0) {
    return 0;
  }
  FUN_00275fe4(0,3);
  if (*(short *)(temp_v4 + temp_v3 * 8 + 0x100) != 1) {
    return 0;
  }
  FUN_0036db68(temp_v14);
  return 0;
}

} /* extern "C" */
