/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018844c` (_code @ 0x18844c, 0xf98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_00188940; /* 0x188940 */
extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_0029933c. */
/* Supplied declaration required: FUN_002993d4. */
/* Supplied declaration required: FUN_00299410. */
extern unsigned int FUN_002994b4(int, unsigned int);
/* Supplied declaration required: FUN_00299558. */
/* Supplied declaration required: FUN_0029957c. */
/* Supplied declaration required: FUN_0029960c. */
extern int FUN_00299874(short);
extern unsigned int FUN_002998d8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00299974. */
/* Supplied declaration required: FUN_002999e8. */
/* Supplied declaration required: FUN_00299b9c. */
/* Supplied declaration required: FUN_00299e60. */
/* Supplied declaration required: FUN_0029a020. */
/* Supplied declaration required: FUN_0029a03c. */
extern int FUN_0029a25c(void);
/* Supplied declaration required: FUN_0029a2b0. */
extern unsigned int FUN_0029a2d0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0029a320. */
/* Supplied declaration required: FUN_0029a368. */
/* Supplied declaration required: FUN_0029a384. */
/* Supplied declaration required: FUN_0029a3c4. */
/* Supplied declaration required: FUN_0029a400. */
/* Supplied declaration required: FUN_0029c768. */
/* Supplied declaration required: FUN_0029ccf8. */
extern int FUN_0029d8fc(int);
/* Supplied declaration required: FUN_0029d924. */
extern int FUN_0029e248(void);
extern int FUN_0029e398(void);
/* Supplied declaration required: FUN_0029e5c8. */
/* Supplied declaration required: FUN_0029e63c. */
/* Supplied declaration required: FUN_0029e8e8. */
/* Supplied declaration required: FUN_0029eba8. */
extern int FUN_0029ebf8(int);
/* Supplied declaration required: FUN_0029f10c. */
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_0029f278. */
/* Supplied declaration required: FUN_0029f878. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a7aa0. */
extern int FUN_002ae16c(int);
extern short *FUN_002b66ec(void);
/* Supplied declaration required: FUN_002b8b78. */
extern unsigned char FUN_002b8ccc(void);
/* Supplied declaration required: FUN_002bc200. */
/* Supplied declaration required: FUN_002bdac0. */
extern unsigned int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf9e8. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c1830. */


/* WARNING: Removing unreachable block (ram,0x00188f88) */
/* WARNING: Removing unreachable block (ram,0x00188f90) */
/* WARNING: Removing unreachable block (ram,0x00188f98) */
/* WARNING: Removing unreachable block (ram,0x00188cec) */
/* WARNING: Removing unreachable block (ram,0x00188cf4) */
/* WARNING: Removing unreachable block (ram,0x00188cfc) */

void FUN_0018844c(unsigned int param_1)

{
/* irregular: 2 goto(s); 41 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  short *psVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  short temp_v8;
  unsigned int *puVar11;
  int *piVar12;
  int temp_v9;
  short *psVar14;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  char temp_v13 [8];
  
  temp_v5 = DAT_0043da90;
  psVar3 = (short *)FUN_002b66ec();
  temp_v12 = 0;
  temp_v11 = 0;
  temp_v9 = 0;
  if (param_1 != 0x11) {
    if (param_1 != 0x12) {
      if (param_1 != 0x13) {
        if (param_1 != 0x14) {
          if (param_1 != 0x15) {
            if (param_1 != 0x16) {
              if (param_1 == 0x17) {
                temp_v11 = temp_v5 + 0x4fc;
                temp_v9 = temp_v5 + 0x2390;
                temp_v2 = 6;
                FUN_0029a400(temp_v2);
              }
            }
            else {
              temp_v11 = temp_v5 + 0x498;
              temp_v9 = temp_v5 + 0x22a0;
              FUN_0029a400(5);
              temp_v12 = 1;
            }
          }
          else {
            temp_v11 = temp_v5 + 0x434;
            temp_v9 = temp_v5 + 0x21b0;
            FUN_0029a400(4);
            temp_v12 = 1;
          }
        }
        else {
          temp_v11 = temp_v5 + 0x3d0;
          temp_v9 = temp_v5 + 0x20c0;
          FUN_0029a400(3);
          temp_v12 = 1;
        }
      }
      else {
        temp_v11 = temp_v5 + 0x36c;
        temp_v9 = temp_v5 + 0x205c;
        temp_v2 = 2;
        FUN_0029a400(temp_v2);
      }
    }
    else {
      temp_v11 = temp_v5 + 0x308;
      temp_v9 = temp_v5 + 0x1f6c;
      temp_v2 = 1;
      FUN_0029a400(temp_v2);
    }
  }
  else {
    temp_v11 = temp_v5 + 0x2a4;
    temp_v9 = temp_v5 + 0x1e7c;
    temp_v2 = 0;
    FUN_0029a400(temp_v2);
  }
  switch(*(unsigned int *)(temp_v5 + 0x1c)) {
  case 0:
    temp_v4 = FUN_0029e248();
    if (temp_v4 != 0) {
      return;
    }
    temp_v4 = FUN_0029e398();
    if (temp_v4 == 0) {
      return;
    }
    FUN_0029a3c4(3);
    FUN_0029c768(1);
    FUN_0029a384(psVar3);
    FUN_0029a368(psVar3);
    FUN_0029d924(1);
    temp_v4 = FUN_0029f260(temp_v11);
    temp_v11 = FUN_0029f248(temp_v11);
    temp_v8 = *(short *)(temp_v9 + (temp_v11 + temp_v4) * 2);
    if (param_1 != 0x14) {
      if (param_1 != 0x15) {
        if (param_1 != 0x16) {
          FUN_0029a320(0,psVar3[3]);
          FUN_0029a320(1,psVar3[4]);
          temp_v8 = psVar3[5];
        }
        else {
          FUN_0029a320(0,psVar3[3]);
          FUN_0029a320(1,psVar3[4]);
        }
        temp_v2 = 2;
      }
      else {
        FUN_0029a320(0,psVar3[3]);
        FUN_0029a320(2,psVar3[5]);
        temp_v2 = 1;
      }
    }
    else {
      FUN_0029a320(1,psVar3[4]);
      FUN_0029a320(2,psVar3[5]);
      temp_v2 = 0;
    }
    FUN_0029a320(temp_v2,temp_v8);
    temp_v2 = FUN_0029a2d0(&LAB_00188940,7);
    *(unsigned int *)(temp_v5 + 0x25c0) = temp_v2;
    *(int *)(temp_v5 + 0x1c) = *(int *)(temp_v5 + 0x1c) + 1;
    return;
  case 1:
    piVar12 = (int *)(temp_v5 + 0x25c0);
    temp_v9 = FUN_002ae16c(*piVar12);
    if ((temp_v9 != 0) && (*(int *)(*(int *)(*piVar12 + 8) + 0xc) < 0)) {
      FUN_002a06c8(*piVar12,1);
      FUN_0029a2b0(*(unsigned int *)(*piVar12 + 8),0);
    }
    temp_v9 = FUN_0029a25c();
    if (temp_v9 == 0) {
      return;
    }
    temp_v9 = FUN_002ae16c(*piVar12);
    if (temp_v9 == 0) {
      return;
    }
    if (temp_v12) {
      *(unsigned char *)(temp_v5 + 0x32) = 1;
    }
    *(int *)(temp_v5 + 0x1c) = *(int *)(temp_v5 + 0x1c) + 1;
    return;
  case 2:
    break;
  case 3:
    if (*(int *)(temp_v5 + 0x24) == 0x29) {
      *(unsigned int *)(temp_v5 + 0x24) = 0x1a;
      if (temp_v12) {
        FUN_00299974(0);
        *(unsigned char *)(temp_v5 + 0x32) = 1;
      }
      else {
        FUN_002999e8(param_1);
      }
    }
    if ((*(char *)(temp_v11 + 0x61) != '\0') || (*(char *)(temp_v11 + 0x60) != '\0')) {
      if (temp_v12) {
        FUN_00299974(0);
        *(unsigned char *)(temp_v5 + 0x32) = 1;
      }
    }
    else if (*(char *)(temp_v5 + 0x32) != '\0') {
      temp_v4 = FUN_0029f260(temp_v11);
      temp_v6 = FUN_0029f248(temp_v11);
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v9 + (temp_v6 + temp_v4) * 2);
      if (param_1 != 0x14) {
        if (param_1 == 0x15) {
          temp_v2 = 1;
          temp_v3 = FUN_002998d8(temp_v2,temp_v3);
        }
        else if (param_1 == 0x16) {
          temp_v2 = 2;
          temp_v3 = FUN_002998d8(temp_v2,temp_v3);
        }
      }
      else {
        temp_v3 = FUN_002998d8(0,temp_v3);
      }
      if (temp_v12) {
        temp_v3 = param_1;
      }
      *(unsigned char *)(temp_v5 + 0x32) = 0;
      if (temp_v12) {
        FUN_002999e8(temp_v3);
      }
    }
    else {
      temp_v4 = FUN_0029a25c();
      if (temp_v4 != 0) {
        FUN_00299974(1);
      }
    }
    temp_v4 = FUN_0029a25c();
    if (temp_v4 == 0) {
      return;
    }
    temp_v13[0] = '\0';
    temp_v2 = FUN_002bf6d0(0x1d,0x572);
    temp_v4 = temp_v11;
    FUN_0029f878(temp_v11,temp_v2,temp_v5 + 0xe0c,(int)*(short *)(temp_v5 + 0xe02),
                 (int)*(short *)(temp_v5 + 0xe04),(int)*(short *)(temp_v5 + 0xe06),temp_v13,0,1);
    if ((temp_v4 != 0) || (temp_v4 = temp_v11, FUN_0029f278(temp_v11,1), temp_v4 != 0)) {
      FUN_00299b9c(param_1);
      FUN_002999e8(param_1);
      return;
    }
    temp_v4 = FUN_002c1830(0,1);
    if (temp_v4 != 0 || temp_v13[0] != '\0') {
      temp_v5 = FUN_0029f260(temp_v11);
      temp_v11 = FUN_0029f248(temp_v11);
      psVar14 = (short *)(temp_v9 + (temp_v11 + temp_v5) * 2);
      temp_v5 = FUN_00299874(*psVar14);
      if (temp_v5 == 0) {
        FUN_002bc200(0x100016e);
        return;
      }
      temp_v12 = 1;
      if (param_1 != 0x11) {
        if (param_1 != 0x12) {
          if (param_1 != 0x13) {
            if (param_1 != 0x14) {
              if (param_1 != 0x15) {
                if (param_1 != 0x16) {
                  if ((param_1 == 0x17) &&
                     (temp_v8 = *psVar14, temp_v0 = psVar3[6], psVar3[6] = temp_v8, temp_v0 == temp_v8)) {
                    temp_v12 = 0;
                  }
                }
                else {
                  temp_v8 = *psVar14;
                  temp_v0 = psVar3[5];
                  psVar3[5] = temp_v8;
                  temp_v12 = temp_v0 != temp_v8;
                }
              }
              else {
                temp_v8 = *psVar14;
                temp_v0 = psVar3[4];
                psVar3[4] = temp_v8;
                temp_v12 = temp_v0 != temp_v8;
              }
            }
            else {
              temp_v8 = *psVar14;
              temp_v0 = psVar3[3];
              psVar3[3] = temp_v8;
              temp_v12 = temp_v0 != temp_v8;
            }
          }
          else {
            temp_v8 = *psVar14;
            temp_v0 = psVar3[2];
            psVar3[2] = temp_v8;
            temp_v12 = temp_v0 != temp_v8;
          }
        }
        else {
          temp_v8 = *psVar14;
          temp_v0 = psVar3[1];
          psVar3[1] = temp_v8;
          temp_v12 = temp_v0 != temp_v8;
        }
      }
      else {
        temp_v8 = *psVar14;
        temp_v0 = *psVar3;
        *psVar3 = temp_v8;
        temp_v12 = temp_v0 != temp_v8;
      }
      FUN_0029960c(0);
      if (!temp_v12) {
        return;
      }
      FUN_0029a384(psVar3);
      FUN_0029a368(psVar3);
      FUN_002bc200(0x100016d);
      FUN_002bf9e8(0x100025f);
      return;
    }
    temp_v4 = FUN_002c1830(1);
    if (temp_v4 != 0) {
      FUN_00299974(0);
      FUN_0029957c(0);
      FUN_0029957c(1);
      FUN_0029957c(2);
      *(int *)(temp_v5 + 0x1c) = *(int *)(temp_v5 + 0x1c) + 1;
      temp_v2 = 0x100016e;
    }
    else {
      temp_v4 = FUN_002c1830(8,0);
      if ((temp_v4 == 0) && (temp_v4 = FUN_0029d8fc((int)*(short *)(temp_v5 + 0xe08)), temp_v4 != 6)) {
        temp_v4 = FUN_002c1830(7,0);
        if ((temp_v4 == 0) && (temp_v4 = FUN_0029d8fc((int)*(short *)(temp_v5 + 0xe0a)), temp_v4 != 6)) {
          temp_v9 = FUN_002c1830(9,1);
          if (temp_v9 == 0) {
            return;
          }
          if (param_1 != 0x11) {
            if (param_1 != 0x12) {
              if (param_1 != 0x13) {
                if (param_1 == 0x14) {
                  temp_v2 = 8;
LAB_00189224:
                  FUN_0029e63c(temp_v2,0);
                  FUN_0029e5c8(4);
                  FUN_0029e5c8(0x24);
                  FUN_0029e5c8(0x25);
                  FUN_0029e5c8(0x26);
                  FUN_0029e5c8(0x27);
                  FUN_0029e5c8(0x28);
                  FUN_0029e5c8(3);
                }
                else if (param_1 == 0x16) {
                  temp_v2 = 10;
                  goto LAB_00189224;
                }
                if (param_1 != 0x15) {
                  if (param_1 == 0x17) {
                    FUN_0029e63c(0xb,0);
                    FUN_0029e5c8(0x33);
                    FUN_0029e5c8(3);
                  }
                }
                else {
                  FUN_0029e63c(9,0);
                  FUN_0029e5c8(4);
                  FUN_0029e5c8(0x32);
                  FUN_0029e5c8(3);
                }
              }
              else {
                FUN_0029e63c(7,0);
                FUN_0029e5c8(6);
                FUN_0029e5c8(0x1f);
                FUN_0029e5c8(0x13);
                FUN_0029e5c8(3);
              }
            }
            else {
              FUN_0029e63c(6,0);
              FUN_0029e5c8(6);
              FUN_0029e5c8(0x11);
              FUN_0029e5c8(0x12);
              FUN_0029e5c8(3);
            }
          }
          else {
            FUN_0029e63c(5,0);
            FUN_0029e5c8(6);
            FUN_0029e5c8(0x11);
            FUN_0029e5c8(0x12);
            FUN_0029e5c8(3);
          }
          *(unsigned char *)(temp_v5 + 0x33) = 1;
          FUN_0029f10c(0,0x323232ff);
          temp_v1 = FUN_002b8ccc();
          *(unsigned char *)(temp_v5 + 0x31) = temp_v1;
          temp_v5 = DAT_0043da90;
          puVar11 = (unsigned int *)(DAT_0043da90 + 0x18);
          *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
          *puVar11 = 0x28;
          *(unsigned int *)(temp_v5 + 0x1c) = 0;
          *(unsigned int *)(temp_v5 + 0x14) = 0;
          temp_v2 = 0x100016d;
          FUN_002bc200(temp_v2);
          return;
        }
        temp_v4 = FUN_0029f260(temp_v11);
        temp_v6 = FUN_0029f248(temp_v11);
        temp_v6 = temp_v6 + temp_v4;
        if (param_1 != 0x14) {
          if (param_1 != 0x15) {
            if ((param_1 == 0x16) && (psVar3[5] != *(short *)(temp_v9 + temp_v6 * 2))) {
              temp_v2 = 2;
              FUN_0029957c(temp_v2);
              FUN_00299974(0);
              *(unsigned char *)(temp_v5 + 0x32) = 1;
            }
          }
          else if (psVar3[4] != *(short *)(temp_v9 + temp_v6 * 2)) {
            temp_v2 = 1;
            FUN_0029957c(temp_v2);
            FUN_00299974(0);
            *(unsigned char *)(temp_v5 + 0x32) = 1;
          }
        }
        else if (psVar3[3] != *(short *)(temp_v9 + temp_v6 * 2)) {
          FUN_00299974(0);
          *(unsigned char *)(temp_v5 + 0x32) = 1;
        }
        temp_v9 = FUN_0029eba8(temp_v5 + 0x34);
        temp_v6 = 0;
        temp_v4 = FUN_0029ebf8(temp_v5 + 0x34);
        if (0 < temp_v4) {
          do {
            temp_v9 = temp_v9 + 1;
            temp_v4 = FUN_0029ebf8(temp_v5 + 0x34);
            if (temp_v4 <= temp_v9) {
              temp_v9 = 0;
            }
            temp_v10 = temp_v5 + temp_v9 * 100;
            temp_v4 = FUN_0029ebf8(temp_v10 + 0x2a4);
            temp_v7 = FUN_002c0ba8(0x410);
            if ((temp_v7 == 0) && (0 < temp_v9)) {
              temp_v4 = FUN_0029ebf8(temp_v10 + 0x36c);
            }
            if (0 < temp_v4) {
              FUN_00299558(temp_v5 + 0x34,temp_v9);
              temp_v2 = FUN_0029eba8(temp_v5 + 0x34);
              param_1 = FUN_002994b4((int)*(char *)(temp_v5 + 0x98),temp_v2);
              FUN_00299b9c();
              break;
            }
            temp_v6 = temp_v6 + 1;
            temp_v4 = FUN_0029ebf8(temp_v5 + 0x34);
          } while (temp_v6 < temp_v4);
        }
        FUN_00299410(temp_v11,0);
        *(unsigned int *)(temp_v5 + 0x1c) = 2;
        if (param_1 == 0x11) {
          temp_v5 = FUN_002c0ba8(0x410);
          if (temp_v5 == 0) {
            temp_v2 = 0x15;
            FUN_002b8b78(temp_v2);
            temp_v2 = 0x100016f;
            FUN_002bc200(temp_v2);
            return;
          }
          temp_v2 = 0xe;
          FUN_002b8b78(temp_v2);
          temp_v2 = 0x100016f;
          FUN_002bc200(temp_v2);
          return;
        }
        if (param_1 == 0x12) {
          temp_v2 = 0xf;
          FUN_002b8b78(temp_v2);
          temp_v2 = 0x100016f;
          FUN_002bc200(temp_v2);
          return;
        }
        if (param_1 == 0x13) {
          temp_v2 = 0x10;
          FUN_002b8b78(temp_v2);
          temp_v2 = 0x100016f;
          FUN_002bc200(temp_v2);
          return;
        }
        if (param_1 == 0x14) {
          temp_v5 = FUN_002c0ba8(0x410);
          if (temp_v5 == 0) {
            temp_v2 = 0x16;
            FUN_002b8b78(temp_v2);
            temp_v2 = 0x100016f;
            FUN_002bc200(temp_v2);
            return;
          }
          temp_v2 = 0x11;
          FUN_002b8b78(temp_v2);
          temp_v2 = 0x100016f;
          FUN_002bc200(temp_v2);
          return;
        }
        if (param_1 == 0x15) {
          temp_v2 = 0x12;
          FUN_002b8b78(temp_v2);
          temp_v2 = 0x100016f;
          FUN_002bc200(temp_v2);
          return;
        }
        if (param_1 == 0x16) {
          temp_v2 = 0x13;
          FUN_002b8b78(temp_v2);
          temp_v2 = 0x100016f;
          FUN_002bc200(temp_v2);
          return;
        }
joined_r0x00188e3c:
        if (param_1 == 0x17) {
          FUN_002b8b78(0x14);
        }
      }
      else {
        temp_v4 = FUN_0029f260(temp_v11);
        temp_v6 = FUN_0029f248(temp_v11);
        temp_v6 = temp_v6 + temp_v4;
        if (param_1 != 0x14) {
          if (param_1 != 0x15) {
            if ((param_1 == 0x16) && (psVar3[5] != *(short *)(temp_v9 + temp_v6 * 2))) {
              FUN_00299974(0);
              *(unsigned char *)(temp_v5 + 0x32) = 1;
            }
          }
          else if (psVar3[4] != *(short *)(temp_v9 + temp_v6 * 2)) {
            temp_v2 = 1;
            FUN_0029957c(temp_v2);
            FUN_00299974(0);
            *(unsigned char *)(temp_v5 + 0x32) = 1;
          }
        }
        else if (psVar3[3] != *(short *)(temp_v9 + temp_v6 * 2)) {
          temp_v2 = 0;
          FUN_0029957c(temp_v2);
          FUN_00299974(0);
          *(unsigned char *)(temp_v5 + 0x32) = 1;
        }
        temp_v9 = FUN_0029eba8(temp_v5 + 0x34);
        temp_v6 = 0;
        temp_v4 = FUN_0029ebf8(temp_v5 + 0x34);
        if (0 < temp_v4) {
          do {
            temp_v9 = temp_v9 - 1;
            if (temp_v9 < 0) {
              temp_v9 = FUN_0029ebf8(temp_v5 + 0x34);
              temp_v9 = temp_v9 - 1;
            }
            temp_v10 = temp_v5 + temp_v9 * 100;
            temp_v4 = FUN_0029ebf8(temp_v10 + 0x2a4);
            temp_v7 = FUN_002c0ba8(0x410);
            if ((temp_v7 == 0) && (0 < temp_v9)) {
              temp_v4 = FUN_0029ebf8(temp_v10 + 0x36c);
            }
            if (0 < temp_v4) {
              FUN_00299558(temp_v5 + 0x34,temp_v9);
              temp_v2 = FUN_0029eba8(temp_v5 + 0x34);
              param_1 = FUN_002994b4((int)*(char *)(temp_v5 + 0x98),temp_v2);
              FUN_00299b9c();
              break;
            }
            temp_v6 = temp_v6 + 1;
            temp_v4 = FUN_0029ebf8(temp_v5 + 0x34);
          } while (temp_v6 < temp_v4);
        }
        FUN_00299410(temp_v11,0);
        *(unsigned int *)(temp_v5 + 0x1c) = 2;
        if (param_1 != 0x11) {
          if (param_1 != 0x12) {
            if (param_1 != 0x13) {
              if (param_1 != 0x14) {
                if (param_1 != 0x15) {
                  if (param_1 != 0x16) goto joined_r0x00188e3c;
                  temp_v2 = 0x13;
                }
                else {
                  temp_v2 = 0x12;
                }
              }
              else {
                temp_v5 = FUN_002c0ba8(0x410);
                if (temp_v5 != 0) {
                  temp_v2 = 0x11;
                  FUN_002b8b78(temp_v2);
                  temp_v2 = 0x100016f;
                  FUN_002bc200(temp_v2);
                  return;
                }
                temp_v2 = 0x16;
              }
            }
            else {
              temp_v2 = 0x10;
            }
          }
          else {
            temp_v2 = 0xf;
          }
        }
        else {
          temp_v5 = FUN_002c0ba8(0x410);
          if (temp_v5 != 0) {
            temp_v2 = 0xe;
            FUN_002b8b78(temp_v2);
            temp_v2 = 0x100016f;
            FUN_002bc200(temp_v2);
            return;
          }
          temp_v2 = 0x15;
        }
        FUN_002b8b78(temp_v2);
      }
      temp_v2 = 0x100016f;
    }
    FUN_002bc200(temp_v2);
    return;
  case 4:
    temp_v9 = FUN_0029a25c();
    if (temp_v9 != 0) {
      FUN_0029a400(0xffffffff);
      FUN_0029c768(0);
      FUN_0029ccf8();
      FUN_0029a3c4(0);
      FUN_00299b9c(0);
      FUN_002bdac0(temp_v5 + 0x6d4,3,0);
      *(unsigned int *)(temp_v5 + 0x20) = 6;
      temp_v9 = DAT_0043da90;
      puVar11 = (unsigned int *)(DAT_0043da90 + 0x18);
      *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
      *puVar11 = 5;
      *(unsigned int *)(temp_v9 + 0x1c) = 0;
      *(unsigned int *)(temp_v9 + 0x14) = 0;
      FUN_002a7aa0(*(unsigned int *)(temp_v5 + 0x25c0));
      *(unsigned int *)(temp_v5 + 0x25c0) = 0;
      FUN_00299410(temp_v11,0);
      FUN_002993d4();
      FUN_0029e8e8(1,0);
      FUN_0029933c();
      return;
    }
  default:
    return;
  }
  switch(param_1) {
  case 0x11:
    FUN_0029a03c(0x11);
    temp_v2 = 0;
    FUN_0029a020(temp_v2);
    break;
  case 0x12:
    FUN_0029a03c(0x12);
    temp_v2 = 0;
    FUN_0029a020(temp_v2);
    break;
  case 0x13:
    FUN_0029a03c(0x13);
    FUN_0029a020(0);
    break;
  case 0x14:
    FUN_0029a03c(0x14);
    temp_v2 = 1;
    FUN_0029a020(temp_v2);
    break;
  case 0x15:
    FUN_0029a03c(0x15);
    FUN_0029a020(0);
    break;
  case 0x16:
    FUN_0029a03c(0x16);
    temp_v2 = 2;
    FUN_0029a020(temp_v2);
    break;
  case 0x17:
    FUN_0029a03c(0x17);
    FUN_0029a020(0);
  }
  *(unsigned char *)(temp_v5 + 0x33) = 0;
  FUN_00299e60(temp_v11,0);
  FUN_00299b9c(param_1);
  if (!temp_v12) {
    FUN_002999e8();
  }
  *(int *)(temp_v5 + 0x1c) = *(int *)(temp_v5 + 0x1c) + 1;
  return;
}
