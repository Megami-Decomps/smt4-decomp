/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201afc` (_code @ 0x201afc, 0x6b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

/* Supplied declaration required: FUN_001a1648. */
/* Supplied declaration required: FUN_002542bc. */
/* Supplied declaration required: FUN_002542d4. */
/* Supplied declaration required: FUN_00254e2c. */
extern int FUN_002865f8(void);
/* Supplied declaration required: FUN_0028784c. */
/* Supplied declaration required: FUN_00289038. */
extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_0028dc68. */
/* Supplied declaration required: FUN_0028dc98. */
/* Supplied declaration required: FUN_00295660. */
extern int FUN_002973d8(void);
/* Supplied declaration required: FUN_0029cc3c. */
extern int FUN_0029ebac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0029ede8. */
extern int FUN_002a0ce8(void);
/* Supplied declaration required: FUN_002a8740. */
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b63c0. */
extern unsigned int FUN_002bd06c(unsigned short);
extern unsigned int FUN_002be650(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002bff50. */
extern int FUN_002c2950(void);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002ed45c. */
extern int FUN_002f61e8(void);
/* Supplied declaration required: FUN_00383674. */


unsigned int FUN_00201afc(void)

{
/* irregular: 2 goto(s); 18 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  char temp_v11;
  unsigned int temp_v12 [32];
  int temp_v13;
  unsigned int temp_v14;
  
  temp_v3 = FUN_00289038();
  if (temp_v3 == 0) {
    FUN_0028dc98(0xffffffff);
    FUN_0028dc68(0);
    return 1;
  }
  temp_v3 = FUN_002893d8();
  if (temp_v3 == 0) {
    FUN_002542d4(0);
    FUN_002542d4(1,0);
    FUN_002542d4(2,0);
    FUN_002542d4(3,0);
    puVar5 = (unsigned int *)FUN_00289038();
    *puVar5 = *puVar5 & 0xfffeffff;
    FUN_0028dc98(1);
  }
  temp_v3 = FUN_002542bc(0);
  if (temp_v3 == 100) {
    FUN_0028dc98(0xffffffff);
    FUN_0028dc68(0);
    return 1;
  }
  temp_v13 = FUN_002865f8();
  temp_v1 = 0;
  temp_v11 = '\0';
  temp_v14 = 0;
  FUN_00289038();
  temp_v4 = FUN_00383674() & 0xffff;
  FUN_002b63c0();
  temp_v3 = FUN_002542bc(3);
  if (temp_v3 < 6) {
    temp_v8 = temp_v4 + temp_v3 * 8;
    temp_v0 = *(short *)(temp_v8 + 0x16c);
    if (temp_v0 != 0) {
      if (temp_v0 != 1) {
        if (temp_v0 == 2) {
          temp_v1 = 1;
          FUN_002c4938(temp_v12,0x80);
          temp_v7 = FUN_002bd06c(*(unsigned short *)(temp_v8 + 0x16e));
          FUN_002bf694(temp_v12,temp_v7);
          FUN_00295660(8,temp_v12);
          FUN_0029ede8(0x18,*(unsigned int *)(temp_v8 + 0x170),0xffffffff,0);
          temp_v5 = FUN_002a8764();
          temp_v10 = 0;
          do {
            if ((-1 < *(char *)(temp_v5 + temp_v10 + 0x90f0)) &&
               (temp_v6 = FUN_002a8740(), *(short *)(temp_v6 + 0x46) == *(short *)(temp_v8 + 0x16e))) {
              temp_v7 = FUN_002a8740((int)*(char *)(temp_v5 + temp_v10 + 0x90f0));
              temp_v8 = FUN_0029ebac(temp_v7,2);
              temp_v11 = temp_v8 != 0;
              temp_v7 = FUN_002a8740((int)*(char *)(temp_v5 + temp_v10 + 0x90f0));
              temp_v8 = FUN_0029ebac(temp_v7,10);
              if (temp_v8 != 0) {
                temp_v11 = '\x02';
              }
              break;
            }
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < 0x18);
        }
      }
      else {
        temp_v14 = (unsigned int)*(unsigned short *)(temp_v8 + 0x16e);
        temp_v9 = *(unsigned int *)(temp_v8 + 0x170);
        FUN_002c4938(temp_v12,0x80);
        temp_v7 = FUN_002be650(temp_v14,1);
        FUN_002bf694(temp_v12,temp_v7);
        FUN_00295660(0,temp_v12);
        FUN_0029ede8(0x18,temp_v9,0xffffffff,0);
      }
    }
    else {
      FUN_002542d4(0,0x14);
    }
  }
  else {
    FUN_002542d4(0,0x14);
  }
  temp_v8 = FUN_002542bc(0);
  if (temp_v8 == 5) {
    temp_v3 = FUN_002a0ce8();
    if (temp_v3 == 0) {
      return 0;
    }
    FUN_0029cc3c();
    FUN_002542d4(0,0x14);
    temp_v3 = 1;
    temp_v7 = 2;
    FUN_002542d4(temp_v7,temp_v3);
    return 0;
  }
  if (temp_v8 >= 5) {
    if (temp_v8 == 10) {
      FUN_002542d4(0,0xb);
      FUN_002542d4(1,0);
      return 0;
    }
    if (temp_v8 != 0xb) {
      if (temp_v8 != 0x14) {
        return 0;
      }
      temp_v3 = FUN_002542bc(2);
      if (temp_v3 != 0) {
        puVar5 = (unsigned int *)FUN_00289038();
        temp_v4 = *puVar5 & 0xfffeffff;
      }
      else {
        if (*(char *)(temp_v4 + 6) == '\0') {
          temp_v3 = FUN_002c2950();
          FUN_00289038();
          temp_v2 = FUN_00383674();
          FUN_0028784c(temp_v2,0);
          *(unsigned short *)(temp_v3 + 0x1062) = 0;
          *(unsigned short *)(temp_v3 + 0x1060) = 0;
        }
        puVar5 = (unsigned int *)FUN_00289038();
        temp_v4 = *puVar5 | 0x10000;
      }
      *puVar5 = temp_v4;
      temp_v3 = 100;
      temp_v7 = 0;
    }
    else {
      if (temp_v1) {
        temp_v7 = FUN_002542bc(1);
        temp_v12[0] = 0;
        temp_v3 = temp_v13;
        FUN_00254e2c(temp_v13,0x6a,temp_v7,5);
      }
      else {
        temp_v7 = FUN_002542bc(1);
        temp_v12[0] = 0;
        temp_v3 = temp_v13;
        FUN_00254e2c(temp_v13,0x69,temp_v7,5);
      }
      temp_v8 = FUN_002542bc(1);
      FUN_002542d4(1,temp_v8 + 1);
      if (temp_v3 != 1) {
        return 0;
      }
      FUN_002542d4(0,1);
      FUN_002542d4(1,0);
      temp_v3 = FUN_002542bc(3);
      temp_v3 = temp_v3 + 1;
      temp_v7 = 3;
    }
    FUN_002542d4(temp_v7,temp_v3);
    return 0;
  }
  if (temp_v8 == 0) {
    temp_v7 = FUN_002542bc(1);
    temp_v12[0] = 0;
    temp_v3 = temp_v13;
    FUN_00254e2c(temp_v13,0x65,temp_v7,5);
    temp_v8 = FUN_002542bc(1);
    FUN_002542d4(1,temp_v8 + 1);
    if (temp_v3 != 1) {
      return 0;
    }
    FUN_002542d4(0,1);
    temp_v3 = 0;
    temp_v7 = 1;
    FUN_002542d4(temp_v7,temp_v3);
    return 0;
  }
  if (temp_v8 != 1) {
    if (temp_v8 != 2) {
      if (temp_v8 != 3) {
        return 0;
      }
      temp_v7 = FUN_002542bc(1);
      temp_v12[0] = 0;
      temp_v3 = temp_v13;
      FUN_00254e2c(temp_v13,100,temp_v7,0xb);
      temp_v8 = FUN_002542bc(1);
      FUN_002542d4(1,temp_v8 + 1);
      if (temp_v3 != 1) {
        return 0;
      }
      temp_v3 = FUN_002973d8();
      if (temp_v3 != 0) {
        FUN_002542d4(0,0x14);
        temp_v7 = 2;
      }
      else {
        FUN_002542d4(0,10);
        temp_v7 = 1;
      }
      FUN_002542d4(temp_v7,temp_v3 != 0);
      FUN_0029cc3c();
      return 0;
    }
  }
  else {
    temp_v8 = FUN_002542bc(1);
    if (temp_v8 == 0 && temp_v11 == '\0') {
      FUN_001a1648();
    }
    if (*(char *)(temp_v4 + 6) != '\0') {
      FUN_002bff50();
      temp_v7 = FUN_002542bc(1);
      temp_v12[0] = 1;
      FUN_00254e2c(temp_v13,0x68,temp_v7,5);
LAB_00201e54:
      if (temp_v11 == '\0') {
LAB_00201ed0:
        FUN_002542d4(0,2);
        FUN_002542d4(1,0);
        temp_v8 = FUN_002f61e8();
        if (temp_v8 == 0) {
          return 0;
        }
        FUN_002542d4(0,3);
        if (*(short *)(temp_v4 + temp_v3 * 8 + 0x16c) != 1) {
          return 0;
        }
        FUN_002ed45c(temp_v14);
        return 0;
      }
    }
    else {
      FUN_002bff50();
      if (!temp_v1) {
        temp_v7 = FUN_002542bc(1);
        temp_v12[0] = 1;
        FUN_00254e2c(temp_v13,0x66,temp_v7,5);
        goto LAB_00201e54;
      }
      if (temp_v11 == '\0') {
        temp_v7 = FUN_002542bc(1);
        temp_v12[0] = 1;
        FUN_00254e2c(temp_v13,0x67,temp_v7,5);
        goto LAB_00201ed0;
      }
      if (temp_v11 != '\x01') {
        temp_v7 = FUN_002542bc(1);
        temp_v12[0] = 0;
        FUN_00254e2c(temp_v13,0x6e,temp_v7,5);
      }
      else {
        temp_v7 = FUN_002542bc(1);
        temp_v12[0] = 0;
        FUN_00254e2c(temp_v13,0x6d,temp_v7,5);
      }
    }
    FUN_002542d4(0,5);
    FUN_002542d4(1,0);
  }
  temp_v8 = FUN_002f61e8();
  if (temp_v8 == 0) {
    return 0;
  }
  FUN_002542d4(0,3);
  if (*(short *)(temp_v4 + temp_v3 * 8 + 0x16c) != 1) {
    return 0;
  }
  FUN_002ed45c(temp_v14);
  return 0;
}
