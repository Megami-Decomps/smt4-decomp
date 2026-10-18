/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b878` (_code @ 0x18b878, 0x6a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_0043dc58; /* 0x43dc58 */

/* Supplied declaration required: FUN_00195408. */
/* Supplied declaration required: FUN_0019dfbc. */
/* Supplied declaration required: FUN_001d14fc. */
/* Supplied declaration required: FUN_00297128. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972e8. */
/* Supplied declaration required: FUN_002972f8. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_00297688. */
/* Supplied declaration required: FUN_0029c0fc. */
extern int FUN_0029d8fc(int);
/* Supplied declaration required: FUN_0029f10c. */
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_0029f278. */
extern unsigned short FUN_002b88c4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b91c4. */
/* Supplied declaration required: FUN_002bc200. */
/* Supplied declaration required: FUN_002bf6d0. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c0e4c. */
/* Supplied declaration required: FUN_002c0e9c. */
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1830. */


void FUN_0018b878(void)

{
/* irregular: 2 goto(s); 17 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  
  temp_v8 = DAT_0043dc58;
  temp_v10 = 0;
  temp_v2 = *(int *)(DAT_0043dc58 + 100);
  if (temp_v2 == 0) {
    if (*(int *)(DAT_0043dc58 + 0xac) == 0) {
      return;
    }
    if (*(int *)(DAT_0043dc58 + 0xb0) == 0) {
      return;
    }
    temp_v1 = FUN_002b88c4(0x2f,0x20);
    *(unsigned short *)(temp_v8 + 0x70) = temp_v1;
    *(unsigned int *)(temp_v8 + 0xb4) = 0;
    *(short *)(temp_v8 + 0x74) = *(short *)(temp_v8 + 0x74) + 1;
    temp_v9 = *(unsigned int *)(temp_v8 + 0xac);
    FUN_002972f8(temp_v9,*(unsigned int *)(temp_v8 + 0xb0));
    *(unsigned int *)(temp_v8 + 0xb4) = temp_v9;
    FUN_002972e8(0);
    FUN_002971e4(*(unsigned int *)(temp_v8 + 0xb4),0);
    temp_v2 = FUN_00297688();
    temp_v5 = 1;
    temp_v3 = FUN_002c0ba8(0x555);
    if ((temp_v3 != 0) && (temp_v3 = FUN_002c0ba8(0x557), temp_v3 != 0)) {
      if (temp_v2 != 0) {
        if (temp_v2 != 1) {
          if (temp_v2 == 2) {
            temp_v5 = 2;
          }
        }
        else {
          temp_v5 = 0;
        }
      }
    }
    else {
      temp_v3 = FUN_002c0ba8(0x557);
      if (temp_v3 != 0) {
        if ((temp_v2 != 0) && (temp_v2 == 1)) {
          temp_v5 = 0;
        }
      }
      else {
        temp_v3 = FUN_002c0ba8(0x555);
        if ((temp_v3 != 0) && (temp_v2 == 0)) {
          temp_v5 = 0;
        }
      }
    }
    *(unsigned int *)(temp_v8 + 0x80) = temp_v5;
    temp_v2 = FUN_002c0ba8(0x555);
    if ((temp_v2 != 0) && (temp_v2 = FUN_002c0ba8(0x557), temp_v2 == 0)) {
      temp_v5 = temp_v5 + 1;
    }
    temp_v9 = FUN_002c0ec4(0x36,1);
    temp_v2 = FUN_002c0e9c();
    temp_v7 = FUN_002c0e4c(temp_v9);
    if (temp_v5 < temp_v7) {
      temp_v10 = temp_v2 + temp_v5 * 0x50;
    }
    FUN_0029f10c(temp_v10,0x323232ff);
    FUN_001d14fc();
    *(unsigned int *)(temp_v8 + 100) = 1;
    return;
  }
  if (temp_v2 != 1) {
    if (temp_v2 != 2) {
      return;
    }
    temp_v2 = FUN_0019dfbc(*(unsigned int *)(DAT_0043dc58 + 0xb4));
    if (temp_v2 != 2) {
      return;
    }
    temp_v10 = FUN_00297674();
    temp_v2 = DAT_0043dc58;
    if (temp_v10 == 0) {
      temp_v10 = FUN_002c0ba8(0x555);
      if ((temp_v10 != 0) && (temp_v10 = FUN_002c0ba8(0x557), temp_v10 != 0)) {
        temp_v2 = *(int *)(temp_v2 + 0x80);
        if (temp_v2 == 0) {
LAB_0018be50:
          temp_v2 = FUN_00297688();
          FUN_00195408(1);
          if (temp_v2 != 1) {
            FUN_0029c0fc(0x29,1);
          }
          FUN_002971e4(*(unsigned int *)(temp_v8 + 0xb4),0);
          FUN_002972e8(0);
          *(unsigned int *)(temp_v8 + 100) = 1;
          return;
        }
        if ((temp_v2 == 1) || (temp_v2 != 2)) {
          FUN_00297688();
          temp_v9 = 0;
        }
        else {
          FUN_00297688();
          temp_v9 = 2;
        }
      }
      else {
        temp_v10 = FUN_002c0ba8(0x557);
        if (temp_v10 != 0) {
          if (*(int *)(temp_v2 + 0x80) == 0) goto LAB_0018be50;
        }
        else {
          temp_v10 = FUN_002c0ba8(0x555);
          if (((temp_v10 != 0) && (*(int *)(temp_v2 + 0x80) != 0)) && (*(int *)(temp_v2 + 0x80) == 1)) {
            FUN_00297688();
            temp_v9 = 2;
            FUN_00195408(temp_v9);
            FUN_002971e4(*(unsigned int *)(temp_v8 + 0xb4),0);
            FUN_002972e8(0);
            *(unsigned int *)(temp_v8 + 100) = 1;
            return;
          }
        }
        FUN_00297688();
        temp_v9 = 0;
      }
      FUN_00195408(temp_v9);
    }
    FUN_002971e4(*(unsigned int *)(temp_v8 + 0xb4),0);
    FUN_002972e8(0);
    *(unsigned int *)(temp_v8 + 100) = 1;
    return;
  }
  FUN_002bf6d0(0x2f,0x59);
  FUN_0019dfbc(*(unsigned int *)(temp_v8 + 0xb4));
  temp_v2 = DAT_0043dc58;
  temp_v3 = FUN_0029f260(DAT_0043dc58);
  temp_v4 = FUN_0029f248(temp_v2);
  temp_v9 = FUN_002c0ec4(0x36,0);
  FUN_002c0e9c();
  FUN_002c0e4c(temp_v9);
  temp_v3 = temp_v2 + (temp_v3 + temp_v4) * 4;
  temp_v0 = 0;
  temp_v5 = *(unsigned int *)(temp_v3 + 0x80);
  if (*(char *)(temp_v2 + 0xa8) != '\0') {
    temp_v4 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x78));
    temp_v6 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x7a));
    temp_v2 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x7c));
    if (!(temp_v4 == 1 || temp_v4 == 2)) {
      if (!(temp_v6 == 1 || temp_v6 == 2)) {
        if (temp_v2 == 1 || temp_v2 == 2) {
          temp_v7 = 2;
          *(unsigned int *)(temp_v3 + 0x80) = temp_v7;
        }
        else {
          temp_v2 = FUN_002c1830(4,0);
          if (temp_v2 != 0) {
            temp_v2 = *(int *)(temp_v3 + 0x80) - 1;
            *(int *)(temp_v3 + 0x80) = temp_v2;
            if (temp_v2 < 0) {
              *(unsigned int *)(temp_v3 + 0x80) = 2;
            }
            temp_v0 = 1;
          }
          else {
            temp_v2 = FUN_002c1830(3,0);
            if (temp_v2 != 0) {
              temp_v2 = *(int *)(temp_v3 + 0x80) + 1;
              *(int *)(temp_v3 + 0x80) = temp_v2;
              if (temp_v2 >= 3) {
                *(unsigned int *)(temp_v3 + 0x80) = 0;
              }
              temp_v0 = 1;
            }
          }
        }
      }
      else {
        *(unsigned int *)(temp_v3 + 0x80) = 1;
      }
    }
    else {
      *(unsigned int *)(temp_v3 + 0x80) = 0;
    }
  }
  else {
    temp_v4 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x78));
    temp_v2 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x7a));
    if (!(temp_v4 == 1 || temp_v4 == 2)) {
      if (!(temp_v2 == 1 || temp_v2 == 2)) {
        temp_v2 = FUN_002c1830(4,0);
        if ((temp_v2 != 0) || (temp_v2 = FUN_002c1830(3,0), temp_v2 != 0)) {
          temp_v0 = 1;
          temp_v7 = *(unsigned int *)(temp_v3 + 0x80) ^ 1;
          *(unsigned int *)(temp_v3 + 0x80) = temp_v7;
        }
      }
      else {
        *(unsigned int *)(temp_v3 + 0x80) = 1;
      }
    }
    else {
      *(unsigned int *)(temp_v3 + 0x80) = 0;
    }
  }
  temp_v7 = *(unsigned int *)(temp_v3 + 0x80);
  if (temp_v7 != temp_v5) {
    temp_v8 = FUN_002c0ba8(0x555);
    if ((temp_v8 != 0) && (temp_v8 = FUN_002c0ba8(0x557), temp_v8 == 0)) {
      temp_v7 = temp_v7 + 1;
    }
    temp_v9 = FUN_002c0ec4(0x36,1);
    temp_v8 = FUN_002c0e9c();
    temp_v5 = FUN_002c0e4c(temp_v9);
    if (temp_v7 < temp_v5) {
      temp_v10 = temp_v8 + temp_v7 * 0x50;
    }
    FUN_0029f10c(temp_v10,0x323232ff);
    if (!temp_v0) {
      return;
    }
    FUN_002b91c4(0x100016c);
    return;
  }
  temp_v3 = temp_v8;
  FUN_0029f278(temp_v8,1);
  temp_v2 = DAT_0043dc58;
  if (temp_v3 != 0) {
    temp_v8 = FUN_0029f260(DAT_0043dc58);
    temp_v2 = FUN_0029f248(temp_v2);
    temp_v9 = FUN_002c0ec4(0x36,0);
    temp_v3 = FUN_002c0e9c();
    temp_v5 = FUN_002c0e4c(temp_v9);
    if ((unsigned int)(temp_v8 + temp_v2) < temp_v5) {
      temp_v10 = temp_v3 + (temp_v8 + temp_v2) * 0x80;
    }
    FUN_0029f10c(temp_v10 + 0x3c,0x323232ff);
    FUN_001d14fc();
    return;
  }
  temp_v10 = FUN_002c1830(0,1);
  temp_v2 = DAT_0043dc58;
  if (temp_v10 == 0) {
    if (*(char *)(DAT_0043dc58 + 0xa8) != '\x01') {
      temp_v10 = FUN_0029d8fc((int)*(short *)(DAT_0043dc58 + 0x78));
      if (temp_v10 != 6) {
        temp_v2 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x7a));
joined_r0x0018bd84:
        if (temp_v2 != 6) {
          temp_v2 = FUN_002c1830(1);
          if (temp_v2 == 0) {
            return;
          }
          FUN_002bc200(0x100016e);
          FUN_002972e8(1);
          temp_v9 = 3;
          *(unsigned int *)(temp_v8 + 100) = temp_v9;
          return;
        }
      }
    }
    else {
      temp_v10 = FUN_0029d8fc((int)*(short *)(DAT_0043dc58 + 0x78));
      if ((temp_v10 != 6) && (temp_v10 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x7a)), temp_v10 != 6)) {
        temp_v2 = FUN_0029d8fc((int)*(short *)(temp_v2 + 0x7c));
        goto joined_r0x0018bd84;
      }
    }
  }
  temp_v8 = DAT_0043dc58;
  FUN_002b91c4(0x100016d);
  FUN_00297128();
  FUN_002972e8(1);
  FUN_002971e4(*(unsigned int *)(temp_v8 + 0xb4),1);
  temp_v9 = 2;
  *(unsigned int *)(temp_v8 + 0xb8) = 0;
  *(unsigned int *)(temp_v8 + 100) = temp_v9;
  return;
}
