/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c04a0` (_code @ 0x2c04a0, 0x398 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001ab888. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_002a2cf0(void);
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_002bf520. */
/* Supplied declaration required: FUN_002c0b5c. */
extern int FUN_002e2014(void);
/* Supplied declaration required: FUN_002f4014. */
/* Supplied declaration required: FUN_00319e58. */
/* Supplied declaration required: FUN_0031f0a8. */
/* Supplied declaration required: FUN_0032e30c. */
/* Supplied declaration required: FUN_0034280c. */
extern int FUN_00345388(unsigned int);
extern int FUN_0035b044(void);
/* Supplied declaration required: FUN_0035b084. */
/* Supplied declaration required: FUN_0037b708. */
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_002c04a0(int *param_1,int param_2)

{
/* irregular: 2 goto(s); 14 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = *param_1;
  if (*(char *)(temp_v3 + 0x3d) != '\0') {
    if (*(char *)(temp_v3 + 0x40) == '\0') {
      if (*(char *)(temp_v3 + 0x3e) != '\0') {
        temp_v1 = FUN_002e2014();
        if (temp_v1 == 0) {
          return 0;
        }
        FUN_0037b708();
        *(unsigned char *)(temp_v3 + 0x40) = 1;
        return 0;
      }
      if ((*(unsigned char *)(temp_v3 + 0x3c) & 1) != 0) {
        temp_v1 = FUN_00224880(*(unsigned int *)(temp_v3 + 4));
        if (temp_v1 == 2) {
          temp_v1 = *(int *)(temp_v3 + 0x38);
          if (temp_v1 != 0) {
            if (temp_v1 == 6 || temp_v1 == 8) {
              FUN_00319e58();
              FUN_002bf520();
              FUN_0032e30c();
              FUN_002bf520();
              FUN_002c0b5c();
              FUN_002bf520();
              FUN_002f4014();
              FUN_003fd63c(0x550,1);
              *(unsigned char *)(temp_v3 + 0x3c) = 0;
              *(unsigned char *)(temp_v3 + 0x40) = 1;
              if ((*(char *)(temp_v3 + 0x3f) != '\0') &&
                 (temp_v1 = FUN_00224880(*(unsigned int *)(temp_v3 + 4)), temp_v1 == 2)) {
                *(unsigned char *)(temp_v3 + 0x40) = 1;
              }
              return 0;
            }
            if (temp_v1 != 9) {
              if (temp_v1 != 7) {
                *(unsigned char *)(temp_v3 + 0x40) = 1;
              }
              else {
                FUN_0034280c(1);
                *(unsigned char *)(temp_v3 + 0x3e) = 1;
              }
            }
            else {
              temp_v1 = FUN_002a4b74();
              if (temp_v1 != 0) {
                if (temp_v1 == 1) {
                  *(unsigned char *)(temp_v3 + 0x40) = 1;
                }
                if ((*(char *)(temp_v3 + 0x3f) != '\0') &&
                   (temp_v1 = FUN_00224880(*(unsigned int *)(temp_v3 + 4)), temp_v1 == 2)) {
                  *(unsigned char *)(temp_v3 + 0x40) = 1;
                }
                return 0;
              }
              FUN_0035b084();
              FUN_00275f44(*(unsigned int *)(temp_v3 + 4),9);
              FUN_001ab888();
              *(unsigned char *)(temp_v3 + 0x3f) = 1;
            }
          }
          else {
            temp_v1 = FUN_002a4b74();
            if (temp_v1 == 0) {
              FUN_001681cc(0x3e);
              temp_v1 = FUN_0035b044();
              temp_v4 = temp_v1 == 3;
              if (temp_v4) {
                temp_v1 = 3;
              }
              *(unsigned char *)(temp_v3 + 0x3c) = (*(unsigned char *)(temp_v3 + 0x3c) & 0xfe) | 2;
              if (!temp_v4) {
                if (temp_v1 != 0x81) {
                  if (temp_v1 != 0x11) {
                    FUN_00319e58();
                    FUN_002bf520();
                    FUN_0032e30c();
                    FUN_002bf520();
                    temp_v1 = FUN_002c0b5c();
                    if (temp_v1 == 5) {
                      *(unsigned int *)(temp_v3 + 0x38) = 1;
                    }
                    else if (temp_v1 == 9) {
                      *(unsigned int *)(temp_v3 + 0x38) = 2;
                    }
                    else if (*(int *)(temp_v3 + 0x38) != 2 && *(int *)(temp_v3 + 0x38) != 1) {
                      FUN_0031f0a8(0x20,1);
                      temp_v1 = 6;
                      goto LAB_002c0648;
                    }
                    FUN_0035b084();
                  }
                  else {
                    *(unsigned int *)(temp_v3 + 0x38) = 4;
                    FUN_0035b084();
                  }
                  if ((*(char *)(temp_v3 + 0x3f) != '\0') &&
                     (temp_v1 = FUN_00224880(*(unsigned int *)(temp_v3 + 4)), temp_v1 == 2)) {
                    *(unsigned char *)(temp_v3 + 0x40) = 1;
                  }
                  return 0;
                }
                temp_v1 = FUN_00345388(0x20);
                if (temp_v1 != 0) {
                  temp_v1 = 5;
                }
                else {
                  FUN_0031f0a8(0x20,1);
                  temp_v1 = 8;
                }
              }
LAB_002c0648:
              *(int *)(temp_v3 + 0x38) = temp_v1;
              if ((*(char *)(temp_v3 + 0x3f) != '\0') &&
                 (temp_v1 = FUN_00224880(*(unsigned int *)(temp_v3 + 4)), temp_v1 == 2)) {
                *(unsigned char *)(temp_v3 + 0x40) = 1;
              }
              return 0;
            }
            if (temp_v1 != 1) {
              if ((*(char *)(temp_v3 + 0x3f) != '\0') &&
                 (temp_v1 = FUN_00224880(*(unsigned int *)(temp_v3 + 4)), temp_v1 == 2)) {
                *(unsigned char *)(temp_v3 + 0x40) = 1;
              }
              return 0;
            }
            FUN_001681cc(0x3e);
            temp_v1 = FUN_002a2cf0();
            if ((temp_v1 != 0) && (temp_v1 = FUN_00345388(0x20), temp_v1 != 0)) {
              *(unsigned int *)(temp_v3 + 0x38) = 9;
              temp_v0 = (*(unsigned char *)(temp_v3 + 0x3c) & 0xfe) | 2;
              goto LAB_002c0810;
            }
            temp_v1 = FUN_002a2cf0();
            if (temp_v1 == 0) {
              temp_v2 = 8;
            }
            else {
              temp_v2 = 0xc;
            }
            FUN_00275f44(*(unsigned int *)(temp_v3 + 4),temp_v2);
            *(unsigned char *)(temp_v3 + 0x3f) = 1;
          }
          *(unsigned char *)(temp_v3 + 0x3c) = 0;
        }
      }
      else if ((*(unsigned char *)(temp_v3 + 0x3c) & 2) != 0) {
        FUN_00275f44(*(unsigned int *)(temp_v3 + 4),
                     *(unsigned int *)(temp_v3 + *(int *)(temp_v3 + 0x38) * 4 + 0x10));
        temp_v0 = (*(unsigned char *)(temp_v3 + 0x3c) & 0xfd) | 1;
LAB_002c0810:
        *(unsigned char *)(temp_v3 + 0x3c) = temp_v0;
      }
    }
  }
  else {
    temp_v1 = *(int *)(temp_v3 + 8);
    if (temp_v1 != 0) {
      param_2 = *(int *)(temp_v3 + 0xc);
    }
    if (temp_v1 != 0 && param_2 != 0) {
      FUN_00275bc8();
      *(int *)(temp_v3 + 4) = temp_v1;
      *(unsigned int *)(temp_v1 + 0x108) = 2;
      *(unsigned char *)(temp_v3 + 0x3d) = 1;
    }
  }
  if ((*(char *)(temp_v3 + 0x3f) != '\0') &&
     (temp_v1 = FUN_00224880(*(unsigned int *)(temp_v3 + 4)), temp_v1 == 2)) {
    *(unsigned char *)(temp_v3 + 0x40) = 1;
  }
  return 0;
}
