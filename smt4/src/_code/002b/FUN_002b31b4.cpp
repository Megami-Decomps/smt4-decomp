/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b31b4` (_code @ 0x2b31b4, 0x784 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00145148(void);
int FUN_00145370(int);
int FUN_001454f0(int);
int FUN_0014553c(void);
int FUN_00145628(unsigned int, unsigned int);
int FUN_00145aa8(int *);
int FUN_002ae424(int);

typedef int romwright_code(...);
extern romwright_code *DAT_00464d5c; /* 0x464d5c */
extern unsigned char DAT_004def18; /* 0x4def18 */
extern unsigned char DAT_004def28; /* 0x4def28 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_00145148. */
/* Supplied declaration required: FUN_00145370. */
/* Supplied declaration required: FUN_001454f0. */
/* Supplied declaration required: FUN_0014553c. */
/* Supplied declaration required: FUN_00145628. */
/* Supplied declaration required: FUN_00145aa8. */
/* Supplied declaration required: FUN_002ae424. */


int FUN_002b31b4(int *param_1)

{
/* irregular: 4 goto(s); 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  short temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v8 = param_1[2];
  temp_v4 = *param_1;
  temp_v6 = *(short *)(temp_v4 + temp_v8 * 0x20);
  if (temp_v6 == -1) {
    *(unsigned char *)(param_1 + 0x11) = 2;
    param_1[0xc] = 0;
    if ((param_1[0xd] & 0x300U) == 0) {
      return 1;
    }
    FUN_0014553c();
    temp_v4 = param_1[3];
    if (temp_v4 < param_1[4] + temp_v4) {
      do {
        FUN_00145370(*(unsigned short *)(*param_1 + temp_v4 * 0x20));
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < param_1[3] + param_1[4]);
    }
    temp_v5 = param_1[0xd];
  }
  else {
    if (param_1[4] == 0) {
      if (temp_v6 == -0x7ee) {
        do {
          temp_v8 = param_1[2];
          param_1[2] = temp_v8 + 1;
          param_1[4] = param_1[4] + 1;
        } while (*(short *)(temp_v4 + (temp_v8 + 1) * 0x20) != 0);
        temp_v6 = 0;
      }
      else if (temp_v6 == -0x7ed) {
        param_1[2] = temp_v8 + 1;
        param_1[4] = 1;
        temp_v1 = *(unsigned short *)(temp_v4 + (temp_v8 + 1) * 0x20);
        param_1[2] = temp_v8 + 2;
        param_1[4] = 2;
        temp_v2 = *(unsigned short *)(temp_v4 + (temp_v8 + 2) * 0x20);
        param_1[4] = 3;
        temp_v11 = romwright_piece_2_2(temp_v2,temp_v1);
        param_1[2] = temp_v8 + 3;
        temp_v1 = *(unsigned short *)(temp_v4 + (temp_v8 + 3) * 0x20);
        param_1[2] = temp_v8 + 4;
        param_1[4] = 4;
        temp_v12 = romwright_piece_2_2(*(unsigned short *)(temp_v4 + (temp_v8 + 4) * 0x20),temp_v1);
        if (DAT_00464d5c != (romwright_code *)0x0) {
          (*DAT_00464d5c)(temp_v11,temp_v12);
        }
        if ((param_1[0xd] & 0x100U) != 0) {
          FUN_00145628(temp_v11,temp_v12);
        }
        goto LAB_002b338c;
      }
      temp_v4 = 0;
      do {
        if ((*(int *)(temp_v4 * 4 + 0x4daee8) != 0) &&
           (*(short *)(&DAT_004def18 + temp_v4 * 2) == temp_v6)) {
          FUN_00145aa8(param_1);
          break;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
    }
LAB_002b338c:
    temp_v4 = param_1[2];
    param_1[2] = temp_v4 + 1;
    param_1[4] = param_1[4] + 1;
    temp_v0 = *(unsigned short *)(*param_1 + (temp_v4 + 1) * 0x20);
    if (temp_v0 != 0xffff) {
      temp_v4 = 0;
      temp_v8 = FUN_002ae424(temp_v0);
joined_r0x002b3444:
      if (temp_v8 == 0) {
        return temp_v4;
      }
      temp_v8 = 0;
      do {
        if ((*(int *)(temp_v8 * 4 + 0x4daee8) != 0) &&
           (*(unsigned short *)(&DAT_004def18 + temp_v8 * 2) == temp_v0)) {
          temp_v8 = 0;
          goto LAB_002b34c8;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 8);
      if (temp_v0 != 0xf813) {
        if (temp_v0 < 0xf813) {
          if (temp_v0 == 0xf805) {
            temp_v4 = param_1[2];
            param_1[2] = temp_v4 + 1;
            param_1[4] = param_1[4] + 1;
            temp_v0 = *(unsigned short *)(*param_1 + (temp_v4 + 1) * 0x20);
            *(unsigned char *)(param_1 + 0x11) = 4;
            param_1[10] = 0;
            param_1[0xb] = (unsigned int)temp_v0;
            return 1;
          }
          if (temp_v0 < 0xf805) {
            if (temp_v0 != 0xf801) {
              if (temp_v0 != 0xf802) {
                if (temp_v0 == 0xf804) {
                  param_1[2] = param_1[2] + 1;
                  param_1[4] = param_1[4] + 1;
                }
              }
              else {
                *(unsigned char *)(param_1 + 0x11) = 2;
                temp_v4 = 1;
                param_1[0xc] = 0;
              }
            }
          }
          else {
            if (temp_v0 == 0xf806) {
              *(unsigned char *)(param_1 + 0x11) = 3;
              return 1;
            }
            if (temp_v0 == 0xf812) {
              do {
                temp_v8 = param_1[2];
                param_1[2] = temp_v8 + 1;
                param_1[4] = param_1[4] + 1;
              } while (*(short *)(*param_1 + (temp_v8 + 1) * 0x20) != 0);
            }
          }
        }
        else {
          switch(temp_v0) {
          case 0xf814:
            param_1[2] = param_1[2] + 2;
            param_1[4] = param_1[4] + 2;
            break;
          case 0xf817:
            do {
              do {
                temp_v8 = param_1[2];
                param_1[2] = temp_v8 + 1;
                param_1[4] = param_1[4] + 1;
                temp_v6 = *(short *)(*param_1 + (temp_v8 + 1) * 0x20);
                temp_v8 = FUN_002ae424(temp_v6);
              } while (temp_v8 == 0);
            } while (temp_v6 != -0x7e8);
            break;
          case 0xf819:
          case 0xf81a:
            param_1[2] = param_1[2] + 1;
            param_1[4] = param_1[4] + 1;
          }
        }
      }
      else {
        temp_v8 = param_1[2];
        param_1[2] = temp_v8 + 1;
        temp_v7 = param_1[4];
        param_1[4] = temp_v7 + 1;
        temp_v9 = *param_1;
        temp_v1 = *(unsigned short *)(temp_v9 + (temp_v8 + 1) * 0x20);
        param_1[2] = temp_v8 + 2;
        param_1[4] = temp_v7 + 2;
        temp_v2 = *(unsigned short *)(temp_v9 + (temp_v8 + 2) * 0x20);
        param_1[2] = temp_v8 + 3;
        param_1[4] = temp_v7 + 3;
        temp_v12 = romwright_piece_2_2(temp_v2,temp_v1);
        temp_v1 = *(unsigned short *)(temp_v9 + (temp_v8 + 3) * 0x20);
        param_1[2] = temp_v8 + 4;
        param_1[4] = temp_v7 + 4;
        temp_v11 = romwright_piece_2_2(*(unsigned short *)(temp_v9 + (temp_v8 + 4) * 0x20),temp_v1);
        if (DAT_00464d5c != (romwright_code *)0x0) {
          (*DAT_00464d5c)(temp_v12,temp_v11);
        }
        if ((param_1[0xd] & 0x100U) != 0) {
          FUN_00145628(temp_v12,temp_v11);
        }
      }
      goto LAB_002b3880;
    }
    *(unsigned char *)(param_1 + 0x11) = 2;
    param_1[0xc] = 0;
    if ((param_1[0xd] & 0x300U) == 0) {
      return 1;
    }
    FUN_0014553c();
    temp_v4 = param_1[3];
    if (temp_v4 < param_1[4] + temp_v4) {
      do {
        FUN_00145370(*(unsigned short *)(*param_1 + temp_v4 * 0x20));
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < param_1[4] + param_1[3]);
    }
    temp_v5 = param_1[0xd];
  }
  if ((temp_v5 & 0x200) != 0) {
    FUN_001454f0(1);
  }
  FUN_00145148();
  return 1;
  while (temp_v8 = temp_v8 + 1, temp_v8 < 8) {
LAB_002b34c8:
    if ((*(int *)(temp_v8 * 4 + 0x4daee8) != 0) && (*(unsigned short *)(&DAT_004def18 + temp_v8 * 2) == temp_v0))
    {
      temp_v7 = *(int *)(&DAT_004def28 + temp_v8 * 4);
      if (temp_v7 != 1) {
        if (temp_v7 != 2) {
          if (temp_v7 != 3) {
            if (temp_v7 == 4) {
              temp_v7 = param_1[2];
              param_1[2] = temp_v7 + 1;
              temp_v9 = param_1[4];
              param_1[4] = temp_v9 + 1;
              temp_v10 = *param_1;
              temp_v1 = *(unsigned short *)(temp_v10 + (temp_v7 + 1) * 0x20);
              param_1[4] = temp_v9 + 2;
              param_1[2] = temp_v7 + 2;
              temp_v2 = *(unsigned short *)(temp_v10 + (temp_v7 + 2) * 0x20);
              param_1[2] = temp_v7 + 3;
              param_1[4] = temp_v9 + 3;
              temp_v3 = *(unsigned short *)(temp_v10 + (temp_v7 + 3) * 0x20);
              param_1[2] = temp_v7 + 4;
              param_1[4] = temp_v9 + 4;
              (**(romwright_code **)(temp_v8 * 4 + 0x4daee8))
                        (temp_v1,temp_v2,temp_v3,*(unsigned short *)(temp_v10 + (temp_v7 + 4) * 0x20));
            }
          }
          else {
            temp_v7 = param_1[2];
            param_1[2] = temp_v7 + 1;
            temp_v9 = param_1[4];
            param_1[4] = temp_v9 + 1;
            temp_v10 = *param_1;
            temp_v1 = *(unsigned short *)(temp_v10 + (temp_v7 + 1) * 0x20);
            param_1[2] = temp_v7 + 2;
            param_1[4] = temp_v9 + 2;
            temp_v2 = *(unsigned short *)(temp_v10 + (temp_v7 + 2) * 0x20);
            param_1[4] = temp_v9 + 3;
            param_1[2] = temp_v7 + 3;
            (**(romwright_code **)(temp_v8 * 4 + 0x4daee8))
                      (temp_v1,temp_v2,*(unsigned short *)(temp_v10 + (temp_v7 + 3) * 0x20));
          }
        }
        else {
          temp_v7 = param_1[2];
          temp_v9 = temp_v7 + 1;
          param_1[2] = temp_v9;
          temp_v10 = param_1[4];
          temp_v7 = temp_v7 + 2;
          param_1[4] = temp_v10 + 1;
          temp_v1 = *(unsigned short *)(*param_1 + temp_v9 * 0x20);
          param_1[2] = temp_v7;
          param_1[4] = temp_v10 + 2;
          (**(romwright_code **)(temp_v8 * 4 + 0x4daee8))(temp_v1,*(unsigned short *)(*param_1 + temp_v7 * 0x20));
        }
      }
      else {
        temp_v7 = param_1[2];
        param_1[2] = temp_v7 + 1;
        param_1[4] = param_1[4] + 1;
        (**(romwright_code **)(temp_v8 * 4 + 0x4daee8))(*(unsigned short *)(*param_1 + (temp_v7 + 1) * 0x20));
      }
      break;
    }
  }
LAB_002b3880:
  temp_v8 = param_1[2];
  param_1[2] = temp_v8 + 1;
  param_1[4] = param_1[4] + 1;
  temp_v0 = *(unsigned short *)(*param_1 + (temp_v8 + 1) * 0x20);
  if (temp_v4 != 0) {
    if ((param_1[0xd] & 0x300U) == 0) {
      return temp_v4;
    }
    FUN_0014553c();
    temp_v8 = param_1[3];
    if (temp_v8 < param_1[4] + temp_v8) {
      do {
        FUN_00145370(*(unsigned short *)(*param_1 + temp_v8 * 0x20));
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < param_1[3] + param_1[4]);
    }
    if ((param_1[0xd] & 0x200U) != 0) {
      FUN_001454f0(1);
    }
    FUN_00145148();
    return temp_v4;
  }
  temp_v8 = FUN_002ae424(temp_v0);
  goto joined_r0x002b3444;
}

} /* extern "C" */
