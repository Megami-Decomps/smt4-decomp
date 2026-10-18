/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018a2e0` (_code @ 0x18a2e0, 0x880 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_001f8cd8. */
/* Supplied declaration required: FUN_00210be4. */
extern int FUN_00298a74(unsigned int, unsigned int);
extern int FUN_00298ae4(unsigned int, int);
/* Supplied declaration required: FUN_00298bdc. */
/* Supplied declaration required: FUN_00298d74. */
/* Supplied declaration required: FUN_00298fa8. */
/* Supplied declaration required: FUN_00298fc4. */
/* Supplied declaration required: FUN_0029933c. */
/* Supplied declaration required: FUN_002993d4. */
/* Supplied declaration required: FUN_00299410. */
/* Supplied declaration required: FUN_002994b4. */
/* Supplied declaration required: FUN_00299b9c. */
/* Supplied declaration required: FUN_00299e60. */
/* Supplied declaration required: FUN_0029abc0. */
/* Supplied declaration required: FUN_0029ac70. */
/* Supplied declaration required: FUN_0029af4c. */
/* Supplied declaration required: FUN_0029ccf8. */
extern int FUN_0029d8e4(int);
/* Supplied declaration required: FUN_0029d924. */
/* Supplied declaration required: FUN_0029db94. */
/* Supplied declaration required: FUN_0029e19c. */
extern int FUN_0029e248(void);
/* Supplied declaration required: FUN_0029e260. */
extern int FUN_0029e2b0(void);
extern int FUN_0029e2cc(void);
/* Supplied declaration required: FUN_0029e5c8. */
/* Supplied declaration required: FUN_0029e63c. */
/* Supplied declaration required: FUN_0029e8e8. */
extern unsigned int FUN_0029eba8(int);
extern int FUN_0029f0f4(int);
/* Supplied declaration required: FUN_0029f10c. */
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_0029f278. */
/* Supplied declaration required: FUN_0029f878. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002a89e4. */
extern int FUN_002b66ec(void);
/* Supplied declaration required: FUN_002b8b78. */
extern unsigned char FUN_002b8ccc(void);
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002bc200. */
/* Supplied declaration required: FUN_002bdac0. */
extern unsigned int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1830. */


void FUN_0018a2e0(void)

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
    temp_v3 = FUN_0029f260(DAT_0043da90 + 0x1dc);
    temp_v4 = FUN_0029f248(temp_v6 + 0x1dc);
    temp_v3 = temp_v6 + (temp_v4 + temp_v3) * 8;
    temp_v5 = *(unsigned int *)(temp_v3 + 0xe3c);
    if (*(int *)(temp_v3 + 0xe40) < 0) {
      temp_v3 = FUN_0029ac70(temp_v5,1);
    }
    else {
      temp_v3 = FUN_0029abc0(temp_v5);
    }
    FUN_00298fc4(0,-temp_v3);
    FUN_00299e60(temp_v6 + 0x1dc,1);
    *(int *)(temp_v6 + 0x1c) = *(int *)(temp_v6 + 0x1c) + 1;
  }
  temp_v3 = FUN_0029f0f4(temp_v6 + 0x1dc);
  if (temp_v3 < 1) {
    temp_v3 = FUN_002c1830(1);
    if (temp_v3 == 0) {
      return;
    }
    FUN_00299410(temp_v6 + 0x1dc,1);
    FUN_0029ccf8();
    FUN_00298fa8(0);
    FUN_00299b9c(0);
    FUN_002bdac0(temp_v6 + 0x6d4,3,0);
    *(unsigned int *)(temp_v6 + 0x20) = 6;
    temp_v3 = DAT_0043da90;
    puVar9 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar9 = 5;
    *(unsigned int *)(temp_v3 + 0x1c) = 0;
    *(unsigned int *)(temp_v3 + 0x14) = 0;
    if (*(char *)(temp_v6 + 0x25bc) != '\0') {
      *(unsigned char *)(temp_v6 + 0x98) = 1;
      FUN_00298d74();
      *(unsigned char *)(temp_v6 + 0x25bc) = 0;
    }
    FUN_002bc200(0x100016e);
    return;
  }
  FUN_00298bdc();
  temp_v3 = FUN_0029f260(temp_v6 + 0x1dc);
  temp_v4 = FUN_0029f248(temp_v6 + 0x1dc);
  temp_v3 = temp_v3 + temp_v4;
  temp_v7 = 0;
  if ((*(char *)(temp_v6 + 0x23d) != '\0') || (*(char *)(temp_v6 + 0x23c) != '\0')) {
    temp_v7 = 1;
    psVar6 = (short *)FUN_0029af4c();
    temp_v4 = *(int *)(temp_v6 + temp_v3 * 8 + 0xe40);
    if (*psVar6 < 0) {
      if (-1 < temp_v4) {
        FUN_0029e260(0);
      }
    }
    else if ((temp_v4 < 0) ||
            (temp_v4 = FUN_002a89e4(), (unsigned int)*(unsigned short *)(temp_v4 + 0x46) != (int)*psVar6)) {
      FUN_0029e260(0);
    }
  }
  else {
    temp_v4 = FUN_0029e248();
    if (temp_v4 == 0) {
      if (*(int *)(temp_v6 + temp_v3 * 8 + 0xe40) < 0) {
        FUN_0029e19c(0xffffffff,0);
        FUN_0029d924(1);
      }
      else {
        temp_v5 = FUN_002a89e4();
        FUN_0029db94(temp_v5,0);
        FUN_0029d924(1);
      }
    }
    temp_v4 = FUN_0029e2cc();
    if (temp_v4 != 0) {
      FUN_0029af4c();
      FUN_00299410(temp_v6 + 0x1dc,1);
      temp_v4 = 0;
      temp_v3 = FUN_0029d8e4(temp_v6 + 0x1dc);
      if (0 < temp_v3) {
        do {
          FUN_002b9008();
          temp_v3 = temp_v4 * 2;
          temp_v4 = temp_v4 + 1;
          *(unsigned short *)(temp_v6 + temp_v3 + 0xe0c) = 0xffff;
          temp_v3 = FUN_0029d8e4(temp_v6 + 0x1dc);
        } while (temp_v4 < temp_v3);
      }
      temp_v3 = FUN_0029e2b0();
      if (temp_v3 < 0) {
        FUN_002bdac0(temp_v6 + 0x6d4,4,0);
      }
      else {
        temp_v3 = FUN_0029e2b0();
        if (0 < temp_v3) {
          FUN_002bdac0(temp_v6 + 0x6d4,3,0);
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
  temp_v5 = FUN_002bf6d0(0x1d,0x56d);
  temp_v4 = temp_v6 + 0x1dc;
  FUN_0029f878(temp_v4,temp_v5,temp_v6 + 0xe0c,(int)*(short *)(temp_v6 + 0xe02),
               (int)*(short *)(temp_v6 + 0xe04),(int)*(short *)(temp_v6 + 0xe06),temp_v8,0,1);
  if (temp_v4 != 0) {
    temp_v5 = FUN_0029eba8(temp_v6 + 0x34);
    FUN_002994b4((int)*(char *)(temp_v6 + 0x98),temp_v5);
    FUN_00299b9c();
    temp_v6 = DAT_0043da90;
    temp_v3 = FUN_0029f260(DAT_0043da90 + 0x1dc);
    temp_v4 = FUN_0029f248(temp_v6 + 0x1dc);
    temp_v6 = temp_v6 + (temp_v4 + temp_v3) * 8;
    temp_v3 = *(int *)(temp_v6 + 0xe40);
    if (temp_v3 < 0) {
      temp_v6 = FUN_0029ac70(*(unsigned int *)(temp_v6 + 0xe3c),1);
    }
    else {
      temp_v6 = FUN_0029abc0(*(unsigned int *)(temp_v6 + 0xe3c));
    }
    FUN_00298fc4(0,-temp_v6);
    return;
  }
  temp_v4 = temp_v6 + 0x1dc;
  FUN_0029f278(temp_v4,1);
  if (temp_v4 != 0) {
    temp_v5 = FUN_0029eba8(temp_v6 + 0x34);
    FUN_002994b4((int)*(char *)(temp_v6 + 0x98),temp_v5);
    FUN_00299b9c();
    temp_v6 = DAT_0043da90;
    temp_v3 = FUN_0029f260(DAT_0043da90 + 0x1dc);
    temp_v4 = FUN_0029f248(temp_v6 + 0x1dc);
    temp_v6 = temp_v6 + (temp_v4 + temp_v3) * 8;
    temp_v3 = *(int *)(temp_v6 + 0xe40);
    if (temp_v3 < 0) {
      temp_v6 = FUN_0029ac70(*(unsigned int *)(temp_v6 + 0xe3c),1);
    }
    else {
      temp_v6 = FUN_0029abc0(*(unsigned int *)(temp_v6 + 0xe3c));
    }
    FUN_00298fc4(0,-temp_v6);
    return;
  }
  temp_v4 = FUN_002c1830(0,1);
  temp_v5 = 0x100016d;
  if ((!(temp_v4 == 0 && temp_v8[0] == '\0')) && (temp_v4 = FUN_0029e248(), temp_v4 != 0)) {
    temp_v4 = temp_v6 + temp_v3 * 8;
    temp_v3 = FUN_00298ae4(*(unsigned int *)(temp_v4 + 0xe3c),(int)(short)*(unsigned int *)(temp_v4 + 0xe40));
    if ((temp_v3 != 0) &&
       (temp_v3 = FUN_00298a74(*(unsigned int *)(temp_v4 + 0xe40),*(unsigned int *)(temp_v4 + 0xe3c)),
       temp_v3 != 0)) {
      if (*(int *)(temp_v4 + 0xe40) < 0) {
        temp_v3 = FUN_002b66ec();
        if ((*(unsigned short *)(temp_v3 + 0x72) & 2) == 0) {
LAB_0018a848:
          if (*(int *)(temp_v4 + 0xe3c) == 0x8c) {
            FUN_001f8cd8();
            if (*(int *)(temp_v4 + 0xe40) < 0) {
              temp_v6 = FUN_002b66ec();
              temp_v2 = FUN_0029ac70(*(unsigned int *)(temp_v4 + 0xe3c),1);
              temp_v2 = *(short *)(temp_v6 + 0x2c) - temp_v2;
              *(short *)(temp_v6 + 0x2c) = temp_v2;
            }
            else {
              temp_v6 = FUN_002a89e4();
              temp_v2 = FUN_0029abc0(*(unsigned int *)(temp_v4 + 0xe3c));
              temp_v2 = *(short *)(temp_v6 + 0x2c) - temp_v2;
              *(short *)(temp_v6 + 0x2c) = temp_v2;
            }
            if (temp_v2 < 0) {
              *(unsigned short *)(temp_v6 + 0x2c) = 0;
            }
            if (*(int *)(temp_v4 + 0xe40) < 0) {
              FUN_0029e19c(0xffffffff,0);
              FUN_0029d924(0);
            }
            else {
              temp_v5 = FUN_002a89e4();
              FUN_0029db94(temp_v5,0);
              FUN_0029d924(0);
            }
            FUN_002bc200(0x100017c);
            FUN_00210be4(0);
            temp_v6 = DAT_0043da90;
            puVar9 = (unsigned int *)(DAT_0043da90 + 0x18);
            *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
            *puVar9 = 0x35;
            *(unsigned int *)(temp_v6 + 0x1c) = 0;
            *(unsigned int *)(temp_v6 + 0x14) = 0;
            FUN_002b8b78(0x9e);
            FUN_002a0f68(1);
            return;
          }
          FUN_00299410(temp_v6 + 0x1dc,1);
          FUN_002bdac0(temp_v6 + 0x6d4,3,0);
          FUN_0029e260(0);
          FUN_00298fa8(0);
          *(unsigned int *)(temp_v6 + 0x20) = 0xf;
          temp_v6 = DAT_0043da90;
          puVar9 = (unsigned int *)(DAT_0043da90 + 0x18);
          *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
          *puVar9 = 5;
          *(unsigned int *)(temp_v6 + 0x1c) = 0;
          *(unsigned int *)(temp_v6 + 0x14) = 0;
          FUN_002bc200(temp_v5);
          return;
        }
      }
      else {
        temp_v3 = FUN_002a89e4();
        if (((temp_v3 != 0) && (temp_v0 = *(unsigned short *)(temp_v3 + 0x44), (temp_v0 & 2) == 0)) &&
           ((temp_v0 & 0x400) == 0 && (temp_v0 & 4) == 0)) goto LAB_0018a848;
      }
    }
    temp_v5 = 0x100016e;
  }
  else {
    temp_v3 = FUN_002c1830(1);
    if ((temp_v3 == 0) || (temp_v3 = FUN_0029e2cc(), temp_v3 != 0)) {
      if ((temp_v7) || (temp_v3 = FUN_002c1830(9,1), temp_v3 == 0)) {
        return;
      }
      FUN_0029e63c(1,0);
      FUN_0029e5c8(0xb);
      FUN_0029e5c8(0x20);
      FUN_0029e5c8(0xd);
      FUN_0029e5c8(0xf);
      FUN_0029e5c8(0x11);
      FUN_0029e5c8(3);
      FUN_0029f10c(0,0x323232ff);
      temp_v1 = FUN_002b8ccc();
      *(unsigned char *)(temp_v6 + 0x31) = temp_v1;
      temp_v6 = DAT_0043da90;
      puVar9 = (unsigned int *)(DAT_0043da90 + 0x18);
      *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
      *puVar9 = 0x28;
      *(unsigned int *)(temp_v6 + 0x1c) = 0;
      *(unsigned int *)(temp_v6 + 0x14) = 0;
    }
    else {
      FUN_00299410(temp_v6 + 0x1dc,1);
      if (*(char *)(temp_v6 + 0x25bc) != '\0') {
        *(unsigned char *)(temp_v6 + 0x98) = 1;
        FUN_00298d74();
        *(unsigned char *)(temp_v6 + 0x25bc) = 0;
      }
      FUN_00298fc4(0);
      FUN_0029ccf8();
      FUN_00298fa8(0);
      FUN_00299b9c(0);
      FUN_002bdac0(temp_v6 + 0x6d4,3,0);
      *(unsigned int *)(temp_v6 + 0x20) = 6;
      temp_v6 = DAT_0043da90;
      puVar9 = (unsigned int *)(DAT_0043da90 + 0x18);
      *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
      *puVar9 = 5;
      *(unsigned int *)(temp_v6 + 0x1c) = 0;
      *(unsigned int *)(temp_v6 + 0x14) = 0;
      FUN_002993d4();
      FUN_0029e8e8(1,0);
      FUN_0029933c();
      temp_v5 = 0x100016e;
    }
  }
  FUN_002bc200(temp_v5);
  return;
}
