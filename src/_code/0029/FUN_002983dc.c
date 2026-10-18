/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002983dc` (_code @ 0x2983dc, 0x674 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_00293074. */
/* Supplied declaration required: FUN_002931cc. */
/* Supplied declaration required: FUN_002931f0. */
extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_00297e30. */
extern unsigned int FUN_00297f40(int, unsigned int);
extern int FUN_0029d8e4(unsigned int);
/* Supplied declaration required: FUN_0029eba8. */
/* Supplied declaration required: FUN_0029ebf8. */
extern int FUN_0029f0f4(unsigned int);
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002a0f50. */
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002b88c4. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b8ccc(void);
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002c4450. */


void FUN_002983dc(int param_1,int param_2,int param_3)

{
/* irregular: 2 goto(s); 14 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  if (*(int *)(param_1 + 0x3048) == 0x22) {
    FUN_0029fae8(param_1 + 0x33a8,4,1,4,1,1);
  }
  if (*(int *)(param_1 + 0x3048) == 0x13 || *(int *)(param_1 + 0x3048) == 0x16) {
    FUN_002a0f50();
    FUN_002b8b78();
  }
  temp_v1 = *(int *)(param_1 + 0x3048);
  if ((temp_v1 == 0x22 || temp_v1 == 0x23) || temp_v1 == 0x24) {
    FUN_002a0f50();
    FUN_002b8b78();
  }
  temp_v1 = FUN_002b8ccc();
  if (temp_v1 == 0x3d) {
    FUN_00293c98();
    temp_v1 = FUN_002934d4();
    if (temp_v1 == 0) {
      FUN_002a0f50();
      FUN_002b8b78();
    }
  }
  if (*(int *)(param_1 + 0x3048) == 7) {
    if (*(int *)(param_1 + 0x304c) - 8U < 6) {
      FUN_002931f0();
    }
    else {
      temp_v2 = FUN_00297f40(param_1,1);
      FUN_00297e30(param_1,temp_v2,*(unsigned int *)(param_1 + 0x305c));
    }
  }
  if (param_2 != 2) {
    if (((!(param_2 == 9 || param_2 == 8)) && (!(param_2 == 0xb || param_2 == 10))) &&
       (!(param_2 == 0xd || param_2 == 0xc))) {
      if (param_2 == 1) {
        FUN_0029eba8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
        FUN_00293074();
      }
    }
    else {
      FUN_00293074();
    }
  }
  else {
    FUN_002931cc(0x10);
    FUN_002b8b78();
  }
  if (param_3 != 0) {
    *(unsigned int *)(param_1 + 0x304c) = *(unsigned int *)(param_1 + 0x3048);
  }
  *(unsigned int *)(param_1 + 0x3044) = 0;
  *(int *)(param_1 + 0x3048) = param_2;
  temp_v1 = 0;
  if (temp_v1 < *(short *)(param_1 + 0x5714)) {
    do {
      FUN_002b9008();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(param_1 + 0x5714));
  }
  *(unsigned short *)(param_1 + 0x5714) = 0;
  FUN_002c4450(param_1 + 0x5716,0x40,0xffffffff);
  if (param_2 != 1) {
    if (param_2 != 8) goto LAB_00298604;
LAB_00298698:
    temp_v3 = FUN_0029ebf8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
    temp_v1 = 0;
    if (temp_v1 < (int)temp_v3) {
      do {
        if ((temp_v3 & 1) == 0) {
          temp_v4 = temp_v1 + (int)(8 - temp_v3) / 2 + 0x106;
        }
        else {
          temp_v4 = temp_v1 + (int)(7 - temp_v3) / 2 + 0xff;
        }
        temp_v0 = FUN_002b88c4(0x15,temp_v4);
        temp_v4 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(unsigned short *)(param_1 + temp_v4 + 0x5716) = temp_v0;
        *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 1;
      } while (temp_v1 < (int)temp_v3);
    }
    puVar6 = (unsigned int *)(param_1 + 0x340c);
    temp_v4 = 0;
    temp_v1 = FUN_0029d8e4(*puVar6);
    if (0 < temp_v1) {
      do {
        if (*(int *)(param_1 + 0x305c) == 1) {
          temp_v1 = 0xc2;
        }
        else if (*(int *)(param_1 + 0x305c) == 2) {
          temp_v1 = 0xbb;
        }
        else {
          temp_v1 = 0xb3;
        }
        temp_v0 = FUN_002b88c4(0x15,temp_v1 + temp_v4);
        temp_v1 = temp_v4 * 2;
        temp_v4 = temp_v4 + 1;
        *(unsigned short *)(param_1 + temp_v1 + 0x572c) = temp_v0;
        *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 1;
        temp_v1 = FUN_0029d8e4(*puVar6);
      } while (temp_v4 < temp_v1);
    }
    temp_v1 = FUN_0029f0f4(*puVar6);
    temp_v4 = FUN_0029d8e4(*puVar6);
    if (temp_v4 < temp_v1) {
      if (*(int *)(param_1 + 0x305c) != 1) {
        if (*(int *)(param_1 + 0x305c) != 2) {
          temp_v0 = FUN_002b88c4(0x15,0x196);
          *(unsigned short *)(param_1 + 0x5726) = temp_v0;
          temp_v0 = FUN_002b88c4(0x15,0x194);
          *(unsigned short *)(param_1 + 0x5728) = temp_v0;
          temp_v0 = FUN_002b88c4(0x15,0x195);
          *(unsigned short *)(param_1 + 0x572a) = temp_v0;
        }
        else {
          temp_v0 = FUN_002b88c4(0x15,0x193);
          *(unsigned short *)(param_1 + 0x5726) = temp_v0;
          temp_v0 = FUN_002b88c4(0x15,0x191);
          *(unsigned short *)(param_1 + 0x5728) = temp_v0;
          temp_v0 = FUN_002b88c4(0x15,0x192);
          *(unsigned short *)(param_1 + 0x572a) = temp_v0;
        }
      }
      else {
        temp_v0 = FUN_002b88c4(0x15,0x199);
        *(unsigned short *)(param_1 + 0x5726) = temp_v0;
        temp_v0 = FUN_002b88c4(0x15,0x197);
        *(unsigned short *)(param_1 + 0x5728) = temp_v0;
        temp_v0 = FUN_002b88c4(0x15,0x198);
        *(unsigned short *)(param_1 + 0x572a) = temp_v0;
      }
      *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 3;
    }
  }
  else {
    temp_v3 = FUN_0029ebf8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
    temp_v1 = 0;
    if ((int)temp_v3 < 1) {
      return;
    }
    do {
      if ((temp_v3 & 1) == 0) {
        temp_v4 = temp_v1 + (int)(8 - temp_v3) / 2 + 0x106;
      }
      else {
        temp_v4 = temp_v1 + (int)(7 - temp_v3) / 2 + 0xff;
      }
      temp_v0 = FUN_002b88c4(0x15,temp_v4);
      temp_v4 = temp_v1 * 2;
      temp_v1 = temp_v1 + 1;
      *(unsigned short *)(param_1 + temp_v4 + 0x5716) = temp_v0;
      *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 1;
    } while (temp_v1 < (int)temp_v3);
LAB_00298604:
    if (param_2 == 10 || param_2 == 0xc) goto LAB_00298698;
  }
  if (param_2 != 0x13) {
    if (param_2 != 0x22) {
      if (param_2 != 0x2d) {
        return;
      }
    }
  }
  else {
    temp_v0 = FUN_002b88c4(0x15,0x1b3);
    *(unsigned short *)(param_1 + 0x5738) = temp_v0;
    temp_v1 = 0;
    *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 1;
    if (*(int *)(param_1 + 0x5758) < 1) {
      return;
    }
    do {
      temp_v4 = param_1 + temp_v1 * 0x2c;
      if (*(char *)(temp_v4 + 0x5778) != '\0') {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v4 + 0x5760);
        FUN_002b087c();
        if ((*(unsigned char *)(temp_v3 + 3) & 1) != 0) {
          if (*(char *)(param_1 + 0x575f) != '\0') {
            temp_v0 = FUN_002b88c4(0x15,0x1a0);
            *(unsigned short *)(param_1 + temp_v1 * 2 + 0x573a) = temp_v0;
          }
          else {
            temp_v3 = *(int *)(temp_v4 + 0x5780) - 0x14a;
            temp_v6 = temp_v3 >= 4;
            temp_v5 = temp_v3 == 4;
            if (temp_v3 >= 5) {
              temp_v3 = *(int *)(temp_v4 + 0x5780) - 0x165;
              temp_v6 = temp_v3 >= 3;
              temp_v5 = temp_v3 == 3;
            }
            if (!(temp_v6 && !temp_v5)) {
              temp_v0 = FUN_002b88c4(0x15,0x19f);
              *(unsigned short *)(param_1 + temp_v1 * 2 + 0x573a) = temp_v0;
            }
            else {
              temp_v0 = FUN_002b88c4(0x15,0x19e);
              *(unsigned short *)(param_1 + temp_v1 * 2 + 0x573a) = temp_v0;
            }
          }
        }
        else {
          temp_v0 = FUN_002b88c4(0x15,*(unsigned int *)(temp_v4 + 0x5780));
          *(unsigned short *)(param_1 + temp_v1 * 2 + 0x573a) = temp_v0;
        }
        *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 0x5758));
    if (param_2 != 0x2d) {
      return;
    }
  }
  temp_v4 = 0;
  temp_v1 = FUN_0029ebf8(param_1 + 0x33a8);
  if (0 < temp_v1) {
    do {
      if (*(char *)(param_1 + temp_v4 + 0x38d1) == '\0') {
        temp_v0 = FUN_002b88c4(0x15,temp_v4 + 0x36);
        *(unsigned short *)(param_1 + temp_v4 * 2 + 0x574e) = temp_v0;
        *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 1;
      }
      temp_v4 = temp_v4 + 1;
      temp_v1 = FUN_0029ebf8(param_1 + 0x33a8);
    } while (temp_v4 < temp_v1);
  }
  return;
}
