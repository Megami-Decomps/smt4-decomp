/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b7e20` (_code @ 0x4b7e20, 0x3dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_004b8200; /* 0x4b8200 */
extern unsigned char LAB_004b820c; /* 0x4b820c */
extern int DAT_0058800c; /* 0x58800c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0019ea64. */
/* Supplied declaration required: FUN_001f4e20. */
/* Supplied declaration required: FUN_00203d04. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002a49e4. */
/* Supplied declaration required: FUN_002bf4f4. */
extern unsigned int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_004072b0. */
/* Supplied declaration required: FUN_00407360. */
/* Supplied declaration required: FUN_0040738c. */
/* Supplied declaration required: FUN_00407424. */
/* Supplied declaration required: FUN_0040792c. */
/* Supplied declaration required: FUN_00407a80. */
/* Supplied declaration required: FUN_004080bc. */
extern int FUN_004186e0(void);
/* Supplied declaration required: FUN_004b726c. */
/* Supplied declaration required: FUN_004b7d88. */
extern int FUN_004ba660(int, int);
extern int FUN_004ba698(int);
/* Supplied declaration required: FUN_004bad28. */
/* Supplied declaration required: FUN_004bb020. */


void FUN_004b7e20(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 22 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned char temp_v4 [32];
  
  temp_v2 = *(int *)(param_1 + 0x2c);
  if (temp_v2 == 0x15) {
    temp_v2 = *(int *)(param_1 + 0x38);
    temp_v3 = temp_v2 + 1;
    if (temp_v3 >= 0xf) {
      temp_v2 = 99;
    }
    *(int *)(param_1 + 0x38) = temp_v3;
    if (temp_v3 >= 0xf) {
      *(int *)(param_1 + 0x2c) = temp_v2;
    }
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0040738c(*(unsigned int *)(param_1 + 0x1218));
    return;
  }
  if (temp_v2 < 0x16) {
    if (temp_v2 != 10) {
      if (temp_v2 >= 10) {
        if (temp_v2 != 0xb) {
          if (temp_v2 == 0x14) {
            if (DAT_0058800c != 0) {
              FUN_0019ea64(1);
              FUN_004b7d88(param_1);
              FUN_004bb020(param_1 + 0x9c);
              FUN_004bad28(param_1 + 0x9c);
              *(unsigned char *)(param_1 + 0xa88) = 0;
              temp_v2 = 0x28;
              DAT_0058800c = 0;
            }
            else {
              FUN_0019ea64(1);
              if ((*(char *)(*(int *)(param_1 + 0x111c) + 0x7c) != '\0') &&
                 (temp_v2 = FUN_004186e0(), temp_v2 != 0)) {
                FUN_00275f44(*(unsigned int *)(param_1 + 0x1158),0x3b);
                if (*(char *)(param_1 + 0xa88) == '\0') {
                  *(unsigned char *)(param_1 + 0xa88) = 1;
                }
                FUN_001681cc(0x92);
                FUN_0019de98(0,0xf4f4f4ff);
                temp_v2 = 0x1e;
              }
              else {
                if (*(char *)(param_1 + 0x1214) != '\0') {
                  temp_v2 = FUN_004ba660(param_1 + 0x9c,(int)*(short *)(param_1 + 0x4c));
                  if (!(*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) {
                    FUN_004080bc(*(unsigned int *)(param_1 + 0x1218),(int)*(short *)(temp_v2 + 0x28),
                                 (int)*(char *)(temp_v2 + 0x2a));
                  }
                  else {
                    temp_v0 = *(char *)(temp_v2 + 0x2a);
                    if (!(temp_v0 == '\0' || temp_v0 == '\x06')) {
                      FUN_004080bc(*(unsigned int *)(param_1 + 0x1218),(int)*(short *)(temp_v2 + 0x28));
                      FUN_00407424(*(unsigned int *)(param_1 + 0x1218),0);
                      temp_v1 = *(unsigned int *)(param_1 + 0x1218);
                    }
                    else {
                      FUN_00407a80(*(unsigned int *)(param_1 + 0x1218));
                      FUN_004080bc(*(unsigned int *)(param_1 + 0x1218),(int)*(short *)(temp_v2 + 0x28),
                                   (int)*(char *)(temp_v2 + 0x2a));
                      FUN_004072b0(*(unsigned int *)(param_1 + 0x1218),&LAB_004b820c,0);
                      FUN_0040792c(*(unsigned int *)(param_1 + 0x1218),0);
                      FUN_00407424(*(unsigned int *)(param_1 + 0x1218),1);
                      temp_v1 = *(unsigned int *)(param_1 + 0x1218);
                    }
                    FUN_00407360(temp_v1,temp_v0 != '\0' && temp_v0 != '\x06');
                  }
                }
                *(unsigned int *)(param_1 + 0x38) = 0;
                temp_v2 = *(int *)(param_1 + 0x2c) + 1;
              }
            }
            *(int *)(param_1 + 0x2c) = temp_v2;
            return;
          }
        }
        else {
          temp_v2 = FUN_00224880(*(unsigned int *)(param_1 + 0x1130));
          if (temp_v2 == 2) {
            *(unsigned int *)(param_1 + 0x2c) = 0x14;
            return;
          }
        }
        return;
      }
      if (temp_v2 == 0) {
        temp_v2 = 1;
      }
      else {
        if (temp_v2 != 1) {
          return;
        }
        DAT_0058800c = 0;
        FUN_00203d04(0);
        temp_v2 = 10;
      }
      *(int *)(param_1 + 0x2c) = temp_v2;
      return;
    }
    else if (DAT_0058800c == 0) {
      if (*(char *)(*(int *)(param_1 + 0x111c) + 0x6c) == '0') {
        *(unsigned int *)(param_1 + 0x2c) = 0x14;
        return;
      }
      FUN_00100388(temp_v4,&LAB_004b8200,*(int *)(param_1 + 0x111c) + 0x6c);
      temp_v1 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x1128),temp_v4);
      FUN_0019ea64(0);
      FUN_001681cc(0x92);
      FUN_00275f44(*(unsigned int *)(param_1 + 0x1130),temp_v1);
      *(unsigned char *)(param_1 + 0xa88) = 1;
      temp_v2 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = temp_v2;
      return;
    }
  }
  else {
    if (temp_v2 == 0x1e) {
      FUN_0019ea64(0);
      temp_v2 = FUN_00224880(*(unsigned int *)(param_1 + 0x1158));
      if (temp_v2 != 2) {
        return;
      }
      *(unsigned int *)(param_1 + 0x2c) = 0x1f;
      FUN_004b7d88(param_1);
      FUN_004bb020(param_1 + 0x9c);
      FUN_004bad28(param_1 + 0x9c);
      *(unsigned char *)(param_1 + 0xa88) = 0;
      DAT_0058800c = 0;
      FUN_002bf4f4(1);
      FUN_001f4e20(0);
      FUN_002a49e4(*(unsigned int *)(param_1 + 0x113c),
                   *(unsigned char *)(*(int *)(param_1 + 0x1118) + 0x3f));
      return;
    }
    if (temp_v2 == 0x1f) {
      temp_v2 = FUN_004ba698(param_1 + 0x9c);
      if (temp_v2 == 0) {
        return;
      }
      FUN_0019ea64(1);
      *(unsigned int *)(param_1 + 0x2c) = 0;
      *(unsigned int *)(param_1 + 0x28) = 5;
      DAT_0058800c = 0;
      *(unsigned char *)(param_1 + 0xa8a) = 0;
      return;
    }
    if (temp_v2 != 0x28) {
      if (temp_v2 != 99) {
        return;
      }
      FUN_004b726c(param_1,*(unsigned int *)(param_1 + 0x111c));
      return;
    }
    temp_v2 = FUN_004ba698(param_1 + 0x9c);
    if (temp_v2 == 0) {
      return;
    }
  }
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x28) = 5;
  FUN_001f4e20(0);
  FUN_002a49e4(*(unsigned int *)(param_1 + 0x113c),*(unsigned char *)(*(int *)(param_1 + 0x1118) + 0x3f))
  ;
  DAT_0058800c = 0;
  *(unsigned char *)(param_1 + 0xa8a) = 0;
  return;
}
