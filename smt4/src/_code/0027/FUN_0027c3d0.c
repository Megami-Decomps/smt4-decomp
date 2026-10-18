/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027c3d0` (_code @ 0x27c3d0, 0x878 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_0027c9a4; /* 0x27c9a4 */
extern unsigned char LAB_0027c9b8; /* 0x27c9b8 */
extern unsigned char LAB_0027c9cc; /* 0x27c9cc */
extern unsigned char LAB_0027c9e0; /* 0x27c9e0 */
extern unsigned char LAB_0027c9f4; /* 0x27c9f4 */
extern int DAT_0044cd88; /* 0x44cd88 */
extern unsigned int DAT_0049fbf4; /* 0x49fbf4 */
extern unsigned int DAT_0049fbf8; /* 0x49fbf8 */
extern unsigned int DAT_0049fbfc; /* 0x49fbfc */
extern unsigned int DAT_0049fc00; /* 0x49fc00 */
extern unsigned int DAT_0049fc04; /* 0x49fc04 */
extern unsigned int DAT_0049fc08; /* 0x49fc08 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00248dfc(void);
extern int FUN_00253154(int);
extern unsigned int FUN_0025bc18(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0025beb8. */
/* Supplied declaration required: FUN_0027ee24. */
extern unsigned int FUN_0028522c(unsigned int, unsigned int);
extern unsigned int FUN_0029a034(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002a0428. */
extern int FUN_002adee0(unsigned int);
extern int FUN_002c09d0(void);
extern int FUN_002c2950(void);


unsigned int FUN_0027c3d0(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  int temp_v4;
  short temp_v5;
  short temp_v6;
  int temp_v7;
  char *pcVar11;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  int temp_v10;
  
  temp_v0 = FUN_002c2950();
  temp_v5 = *(short *)(DAT_0044cd88 + 8);
  if (temp_v5 != 0) {
    if (temp_v5 != 1) {
      if (temp_v5 != 2) {
        if (temp_v5 == 99) {
          return 1;
        }
        return 0;
      }
      temp_v2 = (int)*(short *)(DAT_0044cd88 + 10);
      if (((temp_v2 != 0) && (temp_v2 != 1 && temp_v2 != 3)) &&
         (temp_v2 = FUN_002adee0(*(unsigned int *)(DAT_0044cd88 + temp_v2 * 8 + 0x1c)), temp_v2 == 0)) {
        return 0;
      }
      goto LAB_0027c7c0;
    }
  }
  else {
    temp_v2 = 0;
    temp_v10 = 0;
    do {
      temp_v4 = 0;
      pcVar11 = (char *)0x0;
      temp_v7 = FUN_00248dfc();
      if (temp_v7 >= 1) {
        do {
          pcVar2 = pcVar11;
          FUN_0027ee24();
          if ((*pcVar2 != -1) && (temp_v7 = (int)*(short *)(DAT_0044cd88 + 4), *pcVar2 == temp_v7)) {
            temp_v1 = (int)*(short *)(DAT_0044cd88 + 6);
            temp_v9 = temp_v1 == 0;
            if (!temp_v9) {
              temp_v7 = (int)pcVar2[1];
            }
            temp_v8 = temp_v9 || temp_v7 == temp_v1;
            if (temp_v9 || temp_v7 == temp_v1) {
              temp_v1 = (int)pcVar2[0xb];
              temp_v8 = temp_v1 == temp_v2;
            }
            if (temp_v8) {
              temp_v9 = 0;
              if ((temp_v1 == 0 || temp_v1 == 6) &&
                 ((*(unsigned int *)(temp_v0 + ((int)(pcVar11 + ((unsigned int)((int)pcVar11 >> 0x1f) >> 0x1b)) >> 5)
                                     * 4 + 0x794) & (1 << (((int)pcVar11 % 0x20) & 0xffU))) == 0)) {
                temp_v9 = 1;
              }
              if (((((temp_v1 != 1) || (temp_v7 = FUN_00253154((int)(short)pcVar11), temp_v7 == 0)) &&
                   (!temp_v9)) &&
                  ((*(short *)(pcVar2 + 0xc) == 0 || (temp_v7 = FUN_002c09d0(), temp_v7 != 0)))) &&
                 ((*(short *)(pcVar2 + 0xe) == 0 || (temp_v7 = FUN_002c09d0(), temp_v7 == 0)))) {
                temp_v4 = temp_v4 + 1;
                temp_v10 = temp_v10 + 1;
              }
            }
          }
          pcVar11 = pcVar11 + 1;
          temp_v7 = FUN_00248dfc();
        } while ((int)pcVar11 < temp_v7);
        if (temp_v4 != 0) {
          if (temp_v4 != 1) {
            *(unsigned int *)(DAT_0044cd88 + temp_v2 * 8 + 0x18) = 2;
          }
          else {
            *(unsigned int *)(DAT_0044cd88 + temp_v2 * 8 + 0x18) = 1;
          }
        }
        else {
          *(unsigned int *)(DAT_0044cd88 + temp_v2 * 8 + 0x18) = 0;
        }
      }
      else {
        *(unsigned int *)(DAT_0044cd88 + temp_v2 * 8 + 0x18) = 0;
      }
      temp_v7 = DAT_0044cd88;
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
    if (temp_v10 == 0) {
      *(unsigned short *)(DAT_0044cd88 + 8) = 99;
      return 1;
    }
    *(unsigned short *)(DAT_0044cd88 + 10) = 0;
    *(short *)(temp_v7 + 8) = *(short *)(temp_v7 + 8) + 1;
  }
  temp_v2 = DAT_0044cd88;
  temp_v7 = (int)*(short *)(DAT_0044cd88 + 10);
  if (*(int *)(DAT_0044cd88 + temp_v7 * 8 + 0x18) == 0) {
    temp_v5 = *(short *)(DAT_0044cd88 + 10) + 1;
    *(short *)(DAT_0044cd88 + 10) = temp_v5;
    if (temp_v5 >= 8) {
      *(unsigned short *)(temp_v2 + 8) = 99;
      return 1;
    }
    return 0;
  }
  if (temp_v7 != 0) {
    if (temp_v7 != 1) {
      if (temp_v7 != 2) {
        if (temp_v7 != 3) {
          if (temp_v7 != 4) {
            if (temp_v7 != 5) {
              if (temp_v7 != 6) {
                temp_v3 = FUN_0029a034(&LAB_0027c9a4,0x1c0);
                *(unsigned int *)(DAT_0044cd88 + *(short *)(DAT_0044cd88 + 10) * 8 + 0x1c) = temp_v3;
              }
              else {
                temp_v3 = FUN_0029a034(&LAB_0027c9f4,0x1c0);
                *(unsigned int *)(DAT_0044cd88 + *(short *)(DAT_0044cd88 + 10) * 8 + 0x1c) = temp_v3;
              }
            }
            else {
              temp_v3 = FUN_0029a034(&LAB_0027c9e0,0x1c0);
              *(unsigned int *)(DAT_0044cd88 + *(short *)(DAT_0044cd88 + 10) * 8 + 0x1c) = temp_v3;
            }
          }
          else {
            temp_v3 = FUN_0029a034(&LAB_0027c9cc,0x1c0);
            *(unsigned int *)(DAT_0044cd88 + *(short *)(DAT_0044cd88 + 10) * 8 + 0x1c) = temp_v3;
          }
        }
        else {
          temp_v3 = FUN_0025bc18(DAT_0049fc04,DAT_0049fc08,0x1c0);
          *(unsigned int *)(DAT_0044cd88 + *(short *)(DAT_0044cd88 + 10) * 8 + 0x1c) = temp_v3;
        }
      }
      else {
        temp_v3 = FUN_0029a034(&LAB_0027c9b8,0x1c0);
        *(unsigned int *)(DAT_0044cd88 + *(short *)(DAT_0044cd88 + 10) * 8 + 0x1c) = temp_v3;
      }
    }
    else {
      temp_v3 = FUN_0025bc18(DAT_0049fbfc,DAT_0049fc00,0x1c0);
      *(unsigned int *)(DAT_0044cd88 + *(short *)(DAT_0044cd88 + 10) * 8 + 0x1c) = temp_v3;
    }
  }
  else {
    temp_v3 = FUN_0025bc18(DAT_0049fbf4,DAT_0049fbf8,0x1c0);
    *(unsigned int *)(DAT_0044cd88 + *(short *)(DAT_0044cd88 + 10) * 8 + 0x1c) = temp_v3;
  }
  temp_v2 = DAT_0044cd88;
  *(short *)(DAT_0044cd88 + 8) = *(short *)(DAT_0044cd88 + 8) + 1;
  if (*(unsigned short *)(temp_v2 + 10) >= 2 && *(unsigned short *)(temp_v2 + 10) != 3) {
    return 0;
  }
LAB_0027c7c0:
  temp_v5 = *(short *)(DAT_0044cd88 + 4);
  temp_v9 = temp_v5 == 0x65;
  if (temp_v9) {
    temp_v5 = *(short *)(DAT_0044cd88 + 10);
  }
  if (temp_v9 && temp_v5 == 3) {
    FUN_002a0428(*(unsigned int *)(DAT_0044cd88 + 0x34),1);
    temp_v2 = 0;
    puVar5 = *(unsigned int **)(DAT_0044cd88 + 0x34);
    *puVar5 = *puVar5 | 2;
    *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 0;
    do {
      temp_v7 = DAT_0044cd88 + temp_v2 * 0x4c;
      *(unsigned char *)(temp_v7 + 0x9d8) = 1;
      *(unsigned char *)(temp_v7 + 0x9f8) = 0;
      *(unsigned char *)(temp_v7 + 0xa04) = 1;
      temp_v3 = FUN_0028522c(*(unsigned int *)(DAT_0044cd88 + 0x34),0);
      *(unsigned int *)(temp_v7 + 0xa08) = temp_v3;
      *(unsigned char *)(temp_v7 + 0xa0c) = 1;
      *(unsigned int *)(temp_v7 + 0xa10) = 0;
      FUN_002a0428(temp_v3,1);
      FUN_0025beb8(*(unsigned int *)(*(int *)(temp_v7 + 0xa08) + 8),0);
      puVar5 = *(unsigned int **)(temp_v7 + 0xa08);
      temp_v2 = temp_v2 + 1;
      *puVar5 = *puVar5 | 2;
      *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 0;
    } while (temp_v2 < 3);
  }
  temp_v7 = 0;
  pcVar11 = (char *)0x0;
  temp_v2 = FUN_00248dfc();
  if (0 < temp_v2) {
    do {
      pcVar2 = pcVar11;
      FUN_0027ee24();
      if ((*pcVar2 != -1) && (temp_v2 = (int)*(short *)(DAT_0044cd88 + 4), *pcVar2 == temp_v2)) {
        temp_v4 = (int)*(short *)(DAT_0044cd88 + 6);
        if (temp_v4 != 0) {
          temp_v2 = (int)pcVar2[1];
        }
        if ((temp_v4 == 0 || temp_v2 == temp_v4) &&
           (temp_v2 = (int)pcVar2[0xb], temp_v2 == *(short *)(DAT_0044cd88 + 10))) {
          temp_v9 = 0;
          if (((temp_v2 == 0) || (temp_v2 == 6)) &&
             ((*(unsigned int *)(temp_v0 + ((int)(pcVar11 + ((unsigned int)((int)pcVar11 >> 0x1f) >> 0x1b)) >> 5) * 4
                        + 0x794) & (1 << (((int)pcVar11 % 0x20) & 0xffU))) == 0)) {
            temp_v9 = 1;
          }
          if ((((temp_v2 != 1) || (temp_v2 = FUN_00253154((int)(short)pcVar11), temp_v2 == 0)) &&
              (!temp_v9)) &&
             (((*(short *)(pcVar2 + 0xc) == 0 || (temp_v2 = FUN_002c09d0(), temp_v2 != 0)) &&
              ((*(short *)(pcVar2 + 0xe) == 0 || (temp_v2 = FUN_002c09d0(), temp_v2 == 0)))))) {
            temp_v2 = DAT_0044cd88;
            temp_v4 = 0;
            do {
              temp_v1 = temp_v4;
              if (*(char *)(DAT_0044cd88 + temp_v4 * 0x4c + 0x58) == '\0') break;
              temp_v4 = temp_v4 + 1;
              temp_v1 = -1;
            } while (temp_v4 < 0x20);
            *(short *)(DAT_0044cd88 + 0xc) = (short)temp_v1;
            temp_v4 = temp_v2 + (short)temp_v1 * 0x4c;
            *(int *)(temp_v2 + 0x10) = *(int *)(temp_v2 + 0x10) + 1;
            *(unsigned char *)(temp_v4 + 0x58) = 1;
            *(unsigned int *)(temp_v4 + 0x60) = 0;
            *(unsigned int *)(temp_v4 + 0x5c) = 1;
            temp_v3 = VectorSignedToFloat((int)*(short *)(pcVar2 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v4 + 100) = temp_v3;
            temp_v3 = VectorSignedToFloat((int)*(short *)(pcVar2 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v4 + 0x68) = temp_v3;
            temp_v3 = VectorSignedToFloat((int)*(short *)(pcVar2 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v4 + 0x6c) = temp_v3;
            temp_v3 = VectorSignedToFloat((int)*(short *)(pcVar2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v4 + 0x70) = temp_v3;
            *(unsigned int *)(temp_v4 + 0x74) = 0;
            *(unsigned char *)(temp_v4 + 0x78) = 1;
            *(short *)(temp_v4 + 0x7a) = (short)pcVar2[10];
            temp_v5 = *(short *)(DAT_0044cd88 + 10);
            *(short *)(temp_v4 + 0x7c) = temp_v5;
            *(char **)(temp_v4 + 0x80) = pcVar11;
            if (((temp_v5 == 3 || temp_v5 == 4) || (temp_v5 == 5 || temp_v5 == 7)) &&
               (temp_v2 = FUN_00253154((int)(short)pcVar11), temp_v2 != 0)) {
              *(unsigned int *)(temp_v4 + 0x74) = 2;
              *(unsigned int *)(temp_v4 + 0x5c) = 6;
            }
            temp_v2 = DAT_0044cd88;
            temp_v5 = *(short *)(DAT_0044cd88 + 4);
            temp_v9 = temp_v5 == 0x65;
            if (temp_v9) {
              temp_v5 = *(short *)(DAT_0044cd88 + 10);
            }
            if (temp_v9 && temp_v5 == 3) {
              *(unsigned char *)(temp_v4 + 0x94) = 1;
              *(unsigned int *)(temp_v4 + 0x98) = 0xffffffff;
            }
            else {
              *(unsigned char *)(temp_v4 + 0x94) = 0;
              *(unsigned int *)(temp_v4 + 0x98) = 0xffffffff;
              if (temp_v7 != 0) {
                *(unsigned char *)(temp_v4 + 0x84) = 1;
                temp_v3 = FUN_0028522c(*(unsigned int *)(temp_v2 + *(short *)(temp_v2 + 10) * 8 + 0x1c),0);
                *(unsigned int *)(temp_v4 + 0x88) = temp_v3;
                *(unsigned char *)(temp_v4 + 0x8c) = 1;
                *(unsigned int *)(temp_v4 + 0x90) = 0;
                FUN_002a0428(temp_v3,1);
                if (*(short *)(DAT_0044cd88 + 4) >= 100) {
                  FUN_0025beb8(*(unsigned int *)(*(int *)(temp_v4 + 0x88) + 8),0);
                }
              }
              else {
                *(unsigned char *)(temp_v4 + 0x84) = 0;
                *(unsigned int *)(temp_v4 + 0x88) = 0;
                *(unsigned char *)(temp_v4 + 0x8c) = 0;
                temp_v5 = *(short *)(temp_v2 + 10);
                *(int *)(temp_v4 + 0x90) = (int)temp_v5;
                FUN_002a0428(*(unsigned int *)(temp_v2 + temp_v5 * 8 + 0x1c),1);
                if (*(short *)(DAT_0044cd88 + 4) >= 100) {
                  FUN_0025beb8(*(unsigned int *)
                                (*(int *)(DAT_0044cd88 + *(int *)(temp_v4 + 0x90) * 8 + 0x1c) + 8),0);
                }
              }
            }
            temp_v7 = temp_v7 + 1;
          }
        }
      }
      pcVar11 = pcVar11 + 1;
      temp_v2 = FUN_00248dfc();
    } while ((int)pcVar11 < temp_v2);
  }
  temp_v0 = DAT_0044cd88;
  temp_v5 = *(short *)(DAT_0044cd88 + 10) + 1;
  *(short *)(DAT_0044cd88 + 10) = temp_v5;
  if (temp_v5 < 8) {
    temp_v6 = *(short *)(temp_v0 + 8) - 1;
  }
  else {
    temp_v6 = 99;
  }
  *(short *)(temp_v0 + 8) = temp_v6;
  if (temp_v5 >= 8) {
    return 1;
  }
  return 0;
}
