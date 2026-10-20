/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018a3e0` (_code @ 0x18a3e0, 0x880 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f8d7c(void);
int FUN_00210ce0(...);
int FUN_002990a0(void);
int guestWinRequestOpen(void);
int FUN_0029e328(...);
int FUN_0029e39c(...);
int FUN_0029e648(...);
int FUN_0029ee6c(...);
int FUN_0029efd8(...);
int FUN_002a0cc8(...);
int FUN_002b8838(...);

int FUN_00298940(void);
int FUN_00298ad8(void);
int FUN_00298d0c(...);
int FUN_00298d28(...);
int FUN_00299174(...);
int FUN_00299218(...);
int FUN_00299900(...);
int FUN_00299bc4(int, int);
int FUN_0029a924(...);
int FUN_0029a9d4(...);
int FUN_0029acb0(void);
int FUN_0029ca58(void);
int FUN_0029d684(...);
int FUN_0029d8f4(...);
int FUN_0029defc(...);
int FUN_0029dfc0(...);
int FUN_0029f5d8(...);
int FUN_002a8740(void);
int FUN_002b8cc8(void);
int FUN_002bc01c(...);
int timerStart(...);
int FUN_002c1658(...);

/* stack frame of void: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_001f8d7c. */
/* Supplied declaration required: FUN_00210ce0. */
extern int FUN_002987d8(unsigned int, unsigned int);
extern int FUN_00298848(unsigned int, int);
/* Supplied declaration required: FUN_00298940. */
/* Supplied declaration required: FUN_00298ad8. */
/* Supplied declaration required: FUN_00298d0c. */
/* Supplied declaration required: FUN_00298d28. */
/* Supplied declaration required: FUN_002990a0. */
/* Supplied declaration required: guestWinRequestOpen. */
/* Supplied declaration required: FUN_00299174. */
/* Supplied declaration required: FUN_00299218. */
/* Supplied declaration required: FUN_00299900. */
/* Supplied declaration required: FUN_00299bc4. */
/* Supplied declaration required: FUN_0029a924. */
/* Supplied declaration required: FUN_0029a9d4. */
/* Supplied declaration required: FUN_0029acb0. */
/* Supplied declaration required: FUN_0029ca58. */
extern int FUN_0029d644(int);
/* Supplied declaration required: FUN_0029d684. */
/* Supplied declaration required: FUN_0029d8f4. */
/* Supplied declaration required: FUN_0029defc. */
extern int FUN_0029dfa8(void);
/* Supplied declaration required: FUN_0029dfc0. */
extern int gameGetFlagByte12e8(void);
extern int FUN_0029e02c(void);
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: FUN_0029e39c. */
/* Supplied declaration required: FUN_0029e648. */
extern unsigned int FUN_0029e908(int);
extern int FUN_0029ee54(int);
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_0029efd8. */
/* Supplied declaration required: FUN_0029f5d8. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: FUN_002a8740. */
extern int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002b8838. */
extern unsigned char FUN_002b898c(void);
/* Supplied declaration required: FUN_002b8cc8. */
/* Supplied declaration required: FUN_002bc01c. */
/* Supplied declaration required: timerStart. */
extern unsigned int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1658. */


void FUN_0018a3e0(void)

{
/* irregular: 1 goto(s); 33 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar9;
  unsigned char temp_v7;
  char temp_v8 [8];
  
  temp_v6 = DAT_0043da90;
  if (*(int *)(DAT_0043da90 + 0x1c) != 0) {
    if (*(int *)(DAT_0043da90 + 0x1c) != 1) {
      return;
    }
  }
  else {
    temp_v3 = FUN_0029efc0(DAT_0043da90 + 0x1dc);
    temp_v4 = FUN_0029efa8(temp_v6 + 0x1dc);
    temp_v3 = temp_v6 + (temp_v4 + temp_v3) * 8;
    temp_v5 = *(unsigned int *)(temp_v3 + 0xe3c);
    if (*(int *)(temp_v3 + 0xe40) < 0) {
      temp_v3 = FUN_0029a9d4(temp_v5,1);
    }
    else {
      temp_v3 = FUN_0029a924(temp_v5);
    }
    FUN_00298d28(0,-temp_v3);
    FUN_00299bc4(temp_v6 + 0x1dc,1);
    *(int *)(temp_v6 + 0x1c) = *(int *)(temp_v6 + 0x1c) + 1;
  }
  temp_v3 = FUN_0029ee54(temp_v6 + 0x1dc);
  if (temp_v3 < 1) {
    temp_v3 = 1;
    FUN_002c1658();
    if (temp_v3 == 0) {
      return;
    }
    FUN_00299174(temp_v6 + 0x1dc,1);
    FUN_0029ca58();
    FUN_00298d0c(0);
    FUN_00299900(0);
    timerStart(temp_v6 + 0x6d4,3,0);
    *(unsigned int *)(temp_v6 + 0x20) = 6;
    temp_v3 = DAT_0043da90;
    puVar9 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar9 = 5;
    *(unsigned int *)(temp_v3 + 0x1c) = 0;
    *(unsigned int *)(temp_v3 + 0x14) = 0;
    if (*(char *)(temp_v6 + 0x25bc) != '\0') {
      *(unsigned char *)(temp_v6 + 0x98) = 1;
      FUN_00298ad8();
      *(unsigned char *)(temp_v6 + 0x25bc) = 0;
    }
    FUN_002bc01c(0x100016e);
    return;
  }
  FUN_00298940();
  temp_v3 = FUN_0029efc0(temp_v6 + 0x1dc);
  temp_v4 = FUN_0029efa8(temp_v6 + 0x1dc);
  temp_v3 = temp_v3 + temp_v4;
  temp_v7 = 0;
  if ((*(char *)(temp_v6 + 0x23d) != '\0') || (*(char *)(temp_v6 + 0x23c) != '\0')) {
    temp_v7 = 1;
    psVar6 = (short *)FUN_0029acb0();
    temp_v4 = *(int *)(temp_v6 + temp_v3 * 8 + 0xe40);
    if (*psVar6 < 0) {
      if (-1 < temp_v4) {
        FUN_0029dfc0(0);
      }
    }
    else if ((temp_v4 < 0) ||
            (temp_v4 = FUN_002a8740(), (unsigned int)*(unsigned short *)(temp_v4 + 0x46) != (int)*psVar6)) {
      FUN_0029dfc0(0);
    }
  }
  else {
    temp_v4 = FUN_0029dfa8();
    if (temp_v4 == 0) {
      if (*(int *)(temp_v6 + temp_v3 * 8 + 0xe40) < 0) {
        FUN_0029defc(0xffffffff,0);
        FUN_0029d684(1);
      }
      else {
        temp_v5 = FUN_002a8740();
        FUN_0029d8f4(temp_v5,0);
        FUN_0029d684(1);
      }
    }
    temp_v4 = FUN_0029e02c();
    if (temp_v4 != 0) {
      FUN_0029acb0();
      FUN_00299174(temp_v6 + 0x1dc,1);
      temp_v4 = 0;
      temp_v3 = FUN_0029d644(temp_v6 + 0x1dc);
      if (0 < temp_v3) {
        do {
          FUN_002b8cc8();
          temp_v3 = temp_v4 * 2;
          temp_v4 = temp_v4 + 1;
          *(unsigned short *)(temp_v6 + temp_v3 + 0xe0c) = 0xffff;
          temp_v3 = FUN_0029d644(temp_v6 + 0x1dc);
        } while (temp_v4 < temp_v3);
      }
      temp_v3 = gameGetFlagByte12e8();
      if (temp_v3 < 0) {
        timerStart(temp_v6 + 0x6d4,4,0);
      }
      else {
        temp_v3 = gameGetFlagByte12e8();
        if (0 < temp_v3) {
          timerStart(temp_v6 + 0x6d4,3,0);
        }
      }
      *(unsigned int *)(temp_v6 + 0x20) = 0x15;
      temp_v6 = DAT_0043da90;
      puVar9 = (unsigned int *)(DAT_0043da90 + 0x18);
      *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
      *puVar9 = 5;
      *(unsigned int *)(temp_v6 + 0x1c) = 0;
      *(unsigned int *)(temp_v6 + 0x14) = 0;
      return;
    }
  }
  temp_v8[0] = '\0';
  temp_v5 = FUN_002bf4f8(0x1d,0x56d);
  temp_v4 = temp_v6 + 0x1dc;
  FUN_0029f5d8(temp_v4,temp_v5,temp_v6 + 0xe0c,(int)*(short *)(temp_v6 + 0xe02),
               (int)*(short *)(temp_v6 + 0xe04),(int)*(short *)(temp_v6 + 0xe06),temp_v8,0,1);
  if (temp_v4 != 0) {
    temp_v5 = FUN_0029e908(temp_v6 + 0x34);
    FUN_00299218((int)*(char *)(temp_v6 + 0x98),temp_v5);
    FUN_00299900();
    temp_v6 = DAT_0043da90;
    temp_v3 = FUN_0029efc0(DAT_0043da90 + 0x1dc);
    temp_v4 = FUN_0029efa8(temp_v6 + 0x1dc);
    temp_v6 = temp_v6 + (temp_v4 + temp_v3) * 8;
    temp_v3 = *(int *)(temp_v6 + 0xe40);
    if (temp_v3 < 0) {
      temp_v6 = FUN_0029a9d4(*(unsigned int *)(temp_v6 + 0xe3c),1);
    }
    else {
      temp_v6 = FUN_0029a924(*(unsigned int *)(temp_v6 + 0xe3c));
    }
    FUN_00298d28(0,-temp_v6);
    return;
  }
  temp_v4 = temp_v6 + 0x1dc;
  FUN_0029efd8(temp_v4,1);
  if (temp_v4 != 0) {
    temp_v5 = FUN_0029e908(temp_v6 + 0x34);
    FUN_00299218((int)*(char *)(temp_v6 + 0x98),temp_v5);
    FUN_00299900();
    temp_v6 = DAT_0043da90;
    temp_v3 = FUN_0029efc0(DAT_0043da90 + 0x1dc);
    temp_v4 = FUN_0029efa8(temp_v6 + 0x1dc);
    temp_v6 = temp_v6 + (temp_v4 + temp_v3) * 8;
    temp_v3 = *(int *)(temp_v6 + 0xe40);
    if (temp_v3 < 0) {
      temp_v6 = FUN_0029a9d4(*(unsigned int *)(temp_v6 + 0xe3c),1);
    }
    else {
      temp_v6 = FUN_0029a924(*(unsigned int *)(temp_v6 + 0xe3c));
    }
    FUN_00298d28(0,-temp_v6);
    return;
  }
  temp_v4 = 0;
  FUN_002c1658(0,1);
  temp_v5 = 0x100016d;
  if ((!(temp_v4 == 0 && temp_v8[0] == '\0')) && (temp_v4 = FUN_0029dfa8(), temp_v4 != 0)) {
    temp_v4 = temp_v6 + temp_v3 * 8;
    temp_v3 = FUN_00298848(*(unsigned int *)(temp_v4 + 0xe3c),(int)(short)*(unsigned int *)(temp_v4 + 0xe40));
    if ((temp_v3 != 0) &&
       (temp_v3 = FUN_002987d8(*(unsigned int *)(temp_v4 + 0xe40),*(unsigned int *)(temp_v4 + 0xe3c)),
       temp_v3 != 0)) {
      if (*(int *)(temp_v4 + 0xe40) < 0) {
        temp_v3 = FUN_002b63ac();
        if ((*(unsigned short *)(temp_v3 + 0x72) & 2) == 0) {
LAB_0018a948:
          if (*(int *)(temp_v4 + 0xe3c) == 0x8c) {
            FUN_001f8d7c();
            if (*(int *)(temp_v4 + 0xe40) < 0) {
              temp_v6 = FUN_002b63ac();
              temp_v2 = FUN_0029a9d4(*(unsigned int *)(temp_v4 + 0xe3c),1);
              temp_v2 = *(short *)(temp_v6 + 0x2c) - temp_v2;
              *(short *)(temp_v6 + 0x2c) = temp_v2;
            }
            else {
              temp_v6 = FUN_002a8740();
              temp_v2 = FUN_0029a924(*(unsigned int *)(temp_v4 + 0xe3c));
              temp_v2 = *(short *)(temp_v6 + 0x2c) - temp_v2;
              *(short *)(temp_v6 + 0x2c) = temp_v2;
            }
            if (temp_v2 < 0) {
              *(unsigned short *)(temp_v6 + 0x2c) = 0;
            }
            if (*(int *)(temp_v4 + 0xe40) < 0) {
              FUN_0029defc(0xffffffff,0);
              FUN_0029d684(0);
            }
            else {
              temp_v5 = FUN_002a8740();
              FUN_0029d8f4(temp_v5,0);
              FUN_0029d684(0);
            }
            FUN_002bc01c(0x100017c);
            FUN_00210ce0(0);
            temp_v6 = DAT_0043da90;
            puVar9 = (unsigned int *)(DAT_0043da90 + 0x18);
            *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
            *puVar9 = 0x35;
            *(unsigned int *)(temp_v6 + 0x1c) = 0;
            *(unsigned int *)(temp_v6 + 0x14) = 0;
            FUN_002b8838(0x9e);
            FUN_002a0cc8(1);
            return;
          }
          FUN_00299174(temp_v6 + 0x1dc,1);
          timerStart(temp_v6 + 0x6d4,3,0);
          FUN_0029dfc0(0);
          FUN_00298d0c(0);
          *(unsigned int *)(temp_v6 + 0x20) = 0xf;
          temp_v6 = DAT_0043da90;
          puVar9 = (unsigned int *)(DAT_0043da90 + 0x18);
          *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
          *puVar9 = 5;
          *(unsigned int *)(temp_v6 + 0x1c) = 0;
          *(unsigned int *)(temp_v6 + 0x14) = 0;
          FUN_002bc01c(temp_v5);
          return;
        }
      }
      else {
        temp_v3 = FUN_002a8740();
        if (((temp_v3 != 0) && (temp_v0 = *(unsigned short *)(temp_v3 + 0x44), (temp_v0 & 2) == 0)) &&
           ((temp_v0 & 0x400) == 0 && (temp_v0 & 4) == 0)) goto LAB_0018a948;
      }
    }
    temp_v5 = 0x100016e;
  }
  else {
    temp_v3 = 1;
    FUN_002c1658();
    if ((temp_v3 == 0) || (temp_v3 = FUN_0029e02c(), temp_v3 != 0)) {
      if (!temp_v7) {
        temp_v3 = 9;
        FUN_002c1658(9,1);
        if (temp_v3 != 0) {
          FUN_0029e39c(1,0);
          FUN_0029e328(0xb);
          FUN_0029e328(0x20);
          FUN_0029e328(0xd);
          FUN_0029e328(0xf);
          FUN_0029e328(0x11);
          FUN_0029e328(3);
          FUN_0029ee6c(0,0x323232ff);
          temp_v1 = FUN_002b898c();
          *(unsigned char *)(temp_v6 + 0x31) = temp_v1;
          temp_v6 = DAT_0043da90;
          puVar9 = (unsigned int *)(DAT_0043da90 + 0x18);
          *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
          *puVar9 = 0x28;
          *(unsigned int *)(temp_v6 + 0x1c) = 0;
          *(unsigned int *)(temp_v6 + 0x14) = 0;
          FUN_002bc01c(temp_v5);
          return;
        }
      }
      return;
    }
    FUN_00299174(temp_v6 + 0x1dc,1);
    if (*(char *)(temp_v6 + 0x25bc) != '\0') {
      *(unsigned char *)(temp_v6 + 0x98) = 1;
      FUN_00298ad8();
      *(unsigned char *)(temp_v6 + 0x25bc) = 0;
    }
    FUN_00298d28(0);
    FUN_0029ca58();
    FUN_00298d0c(0);
    FUN_00299900(0);
    timerStart(temp_v6 + 0x6d4,3,0);
    *(unsigned int *)(temp_v6 + 0x20) = 6;
    temp_v6 = DAT_0043da90;
    puVar9 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar9 = 5;
    *(unsigned int *)(temp_v6 + 0x1c) = 0;
    *(unsigned int *)(temp_v6 + 0x14) = 0;
    guestWinRequestOpen();
    FUN_0029e648(1,0);
    FUN_002990a0();
    temp_v5 = 0x100016e;
  }
  FUN_002bc01c(temp_v5);
  return;
}

} /* extern "C" */
