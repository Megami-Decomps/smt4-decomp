/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201998` (_code @ 0x201998, 0x6b8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

/* Supplied declaration required: FUN_001a1538. */
/* Supplied declaration required: FUN_002544fc. */
/* Supplied declaration required: FUN_00254514. */
/* Supplied declaration required: FUN_0025506c. */
extern int FUN_0028686c(void);
/* Supplied declaration required: FUN_00287ab4. */
/* Supplied declaration required: FUN_002892a0. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_0028df0c. */
/* Supplied declaration required: FUN_0028df3c. */
/* Supplied declaration required: FUN_00295904. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_0029cedc. */
extern int FUN_0029ee4c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0029f088. */
extern int FUN_002a0f88(void);
/* Supplied declaration required: FUN_002a89e4. */
extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002bd25c. */
extern unsigned int FUN_002be828(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c0128. */
extern int FUN_002c2b1c(void);
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002ed404. */
extern int FUN_002f61a4(void);
/* Supplied declaration required: FUN_00383884. */


unsigned int FUN_00201998(void)

{
/* irregular: 2 goto(s); 19 native warning(s); review required */
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
  unsigned int temp_v10;
  int temp_v11;
  char temp_v12;
  unsigned int temp_v13 [32];
  int temp_v14;
  unsigned int temp_v15;
  
  temp_v3 = FUN_002892a0();
  if (temp_v3 == 0) {
    FUN_0028df3c(0xffffffff);
    FUN_0028df0c(0);
    return 1;
  }
  temp_v3 = FUN_00289640();
  if (temp_v3 == 0) {
    FUN_00254514(0);
    FUN_00254514(1,0);
    FUN_00254514(2,0);
    FUN_00254514(3,0);
    puVar5 = (unsigned int *)FUN_002892a0();
    *puVar5 = *puVar5 & 0xfffeffff;
    FUN_0028df3c(1);
  }
  temp_v3 = FUN_002544fc(0);
  if (temp_v3 == 100) {
    FUN_0028df3c(0xffffffff);
    FUN_0028df0c(0);
    return 1;
  }
  temp_v14 = FUN_0028686c();
  temp_v1 = 0;
  temp_v12 = '\0';
  temp_v15 = 0;
  FUN_002892a0();
  temp_v4 = FUN_00383884() & 0xffff;
  FUN_002b6700();
  temp_v3 = FUN_002544fc(3);
  if (temp_v3 < 6) {
    temp_v9 = temp_v4 + temp_v3 * 8;
    temp_v0 = *(short *)(temp_v9 + 0x16c);
    if (temp_v0 != 0) {
      if (temp_v0 != 1) {
        if (temp_v0 == 2) {
          temp_v1 = 1;
          FUN_002c4b30(temp_v13,0x80);
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v9 + 0x16e);
          FUN_002bd25c(temp_v5);
          FUN_002bf86c(temp_v13,temp_v5);
          FUN_00295904(8,temp_v13);
          FUN_0029f088(0x18,*(unsigned int *)(temp_v9 + 0x170),0xffffffff,0);
          temp_v6 = FUN_002a8a08();
          temp_v11 = 0;
          do {
            if ((-1 < *(char *)(temp_v6 + temp_v11 + 0x90f0)) &&
               (temp_v7 = FUN_002a89e4(), *(short *)(temp_v7 + 0x46) == *(short *)(temp_v9 + 0x16e))) {
              temp_v8 = FUN_002a89e4((int)*(char *)(temp_v6 + temp_v11 + 0x90f0));
              temp_v9 = FUN_0029ee4c(temp_v8,2);
              temp_v12 = temp_v9 != 0;
              temp_v8 = FUN_002a89e4((int)*(char *)(temp_v6 + temp_v11 + 0x90f0));
              temp_v9 = FUN_0029ee4c(temp_v8,10);
              if (temp_v9 != 0) {
                temp_v12 = '\x02';
              }
              break;
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < 0x18);
        }
      }
      else {
        temp_v15 = (unsigned int)*(unsigned short *)(temp_v9 + 0x16e);
        temp_v10 = *(unsigned int *)(temp_v9 + 0x170);
        FUN_002c4b30(temp_v13,0x80);
        temp_v8 = FUN_002be828(temp_v15,1);
        FUN_002bf86c(temp_v13,temp_v8);
        FUN_00295904(0,temp_v13);
        FUN_0029f088(0x18,temp_v10,0xffffffff,0);
      }
    }
    else {
      FUN_00254514(0,0x14);
    }
  }
  else {
    FUN_00254514(0,0x14);
  }
  temp_v9 = FUN_002544fc(0);
  if (temp_v9 == 5) {
    temp_v3 = FUN_002a0f88();
    if (temp_v3 == 0) {
      return 0;
    }
    FUN_0029cedc();
    FUN_00254514(0,0x14);
    temp_v3 = 1;
    temp_v8 = 2;
    FUN_00254514(temp_v8,temp_v3);
    return 0;
  }
  if (temp_v9 >= 5) {
    if (temp_v9 == 10) {
      FUN_00254514(0,0xb);
      FUN_00254514(1,0);
      return 0;
    }
    if (temp_v9 != 0xb) {
      if (temp_v9 != 0x14) {
        return 0;
      }
      temp_v3 = FUN_002544fc(2);
      if (temp_v3 != 0) {
        puVar5 = (unsigned int *)FUN_002892a0();
        temp_v4 = *puVar5 & 0xfffeffff;
      }
      else {
        if (*(char *)(temp_v4 + 6) == '\0') {
          temp_v3 = FUN_002c2b1c();
          FUN_002892a0();
          temp_v2 = FUN_00383884();
          FUN_00287ab4(temp_v2,0);
          *(unsigned short *)(temp_v3 + 0x1062) = 0;
          *(unsigned short *)(temp_v3 + 0x1060) = 0;
        }
        puVar5 = (unsigned int *)FUN_002892a0();
        temp_v4 = *puVar5 | 0x10000;
      }
      *puVar5 = temp_v4;
      temp_v3 = 100;
      temp_v8 = 0;
    }
    else {
      if (temp_v1) {
        temp_v8 = FUN_002544fc(1);
        temp_v13[0] = 0;
        temp_v3 = temp_v14;
        FUN_0025506c(temp_v14,0x6a,temp_v8,5);
      }
      else {
        temp_v8 = FUN_002544fc(1);
        temp_v13[0] = 0;
        temp_v3 = temp_v14;
        FUN_0025506c(temp_v14,0x69,temp_v8,5);
      }
      temp_v9 = FUN_002544fc(1);
      FUN_00254514(1,temp_v9 + 1);
      if (temp_v3 != 1) {
        return 0;
      }
      FUN_00254514(0,1);
      FUN_00254514(1,0);
      temp_v3 = FUN_002544fc(3);
      temp_v3 = temp_v3 + 1;
      temp_v8 = 3;
    }
    FUN_00254514(temp_v8,temp_v3);
    return 0;
  }
  if (temp_v9 == 0) {
    temp_v8 = FUN_002544fc(1);
    temp_v13[0] = 0;
    temp_v3 = temp_v14;
    FUN_0025506c(temp_v14,0x65,temp_v8,5);
    temp_v9 = FUN_002544fc(1);
    FUN_00254514(1,temp_v9 + 1);
    if (temp_v3 != 1) {
      return 0;
    }
    FUN_00254514(0,1);
    temp_v3 = 0;
    temp_v8 = 1;
    FUN_00254514(temp_v8,temp_v3);
    return 0;
  }
  if (temp_v9 != 1) {
    if (temp_v9 != 2) {
      if (temp_v9 != 3) {
        return 0;
      }
      temp_v8 = FUN_002544fc(1);
      temp_v13[0] = 0;
      temp_v3 = temp_v14;
      FUN_0025506c(temp_v14,100,temp_v8,0xb);
      temp_v9 = FUN_002544fc(1);
      FUN_00254514(1,temp_v9 + 1);
      if (temp_v3 != 1) {
        return 0;
      }
      temp_v3 = FUN_00297674();
      if (temp_v3 != 0) {
        FUN_00254514(0,0x14);
        temp_v8 = 2;
      }
      else {
        FUN_00254514(0,10);
        temp_v8 = 1;
      }
      FUN_00254514(temp_v8,temp_v3 != 0);
      FUN_0029cedc();
      return 0;
    }
  }
  else {
    temp_v9 = FUN_002544fc(1);
    if (temp_v9 == 0 && temp_v12 == '\0') {
      FUN_001a1538();
    }
    if (*(char *)(temp_v4 + 6) != '\0') {
      FUN_002c0128();
      temp_v8 = FUN_002544fc(1);
      temp_v13[0] = 1;
      FUN_0025506c(temp_v14,0x68,temp_v8,5);
LAB_00201cf0:
      if (temp_v12 == '\0') {
LAB_00201d6c:
        FUN_00254514(0,2);
        FUN_00254514(1,0);
        temp_v9 = FUN_002f61a4();
        if (temp_v9 == 0) {
          return 0;
        }
        FUN_00254514(0,3);
        if (*(short *)(temp_v4 + temp_v3 * 8 + 0x16c) != 1) {
          return 0;
        }
        FUN_002ed404(temp_v15);
        return 0;
      }
    }
    else {
      FUN_002c0128();
      if (!temp_v1) {
        temp_v8 = FUN_002544fc(1);
        temp_v13[0] = 1;
        FUN_0025506c(temp_v14,0x66,temp_v8,5);
        goto LAB_00201cf0;
      }
      if (temp_v12 == '\0') {
        temp_v8 = FUN_002544fc(1);
        temp_v13[0] = 1;
        FUN_0025506c(temp_v14,0x67,temp_v8,5);
        goto LAB_00201d6c;
      }
      if (temp_v12 != '\x01') {
        temp_v8 = FUN_002544fc(1);
        temp_v13[0] = 0;
        FUN_0025506c(temp_v14,0x6e,temp_v8,5);
      }
      else {
        temp_v8 = FUN_002544fc(1);
        temp_v13[0] = 0;
        FUN_0025506c(temp_v14,0x6d,temp_v8,5);
      }
    }
    FUN_00254514(0,5);
    FUN_00254514(1,0);
  }
  temp_v9 = FUN_002f61a4();
  if (temp_v9 == 0) {
    return 0;
  }
  FUN_00254514(0,3);
  if (*(short *)(temp_v4 + temp_v3 * 8 + 0x16c) != 1) {
    return 0;
  }
  FUN_002ed404(temp_v15);
  return 0;
}
