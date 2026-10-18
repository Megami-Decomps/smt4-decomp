/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001378f0` (_code @ 0x1378f0, 0x564 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_00640118; /* 0x640118 */
extern int DAT_0064011c; /* 0x64011c */
extern int DAT_00640120; /* 0x640120 */
extern int DAT_00640124; /* 0x640124 */
extern signed char DAT_00640128; /* 0x640128 */
extern unsigned char DAT_00640130; /* 0x640130 */

/* Supplied declaration required: FUN_001407cc. */
/* Supplied declaration required: FUN_00142d8c. */
/* Supplied declaration required: FUN_00143ac8. */
/* Supplied declaration required: FUN_00152f68. */
/* Supplied declaration required: FUN_00153f74. */
/* Supplied declaration required: FUN_00162e30. */
extern int FUN_001696f4(void);
/* Supplied declaration required: FUN_0019a5a0. */


unsigned int FUN_001378f0(int param_1)

{
/* irregular: 5 goto(s); 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  
  if ((param_1 == 0) && (temp_v8 = 0, 0 < DAT_0064011c)) {
    do {
      for (temp_v7 = *(int *)(DAT_00640118 + temp_v8 * 8); temp_v7 != 0; temp_v7 = *(int *)(temp_v7 + 0x4c))
      {
        if ((*(unsigned int *)(temp_v7 + 0x1c) & 0x20000) != 0) {
          temp_v3 = *(int *)(temp_v7 + 0x58);
          while (temp_v3 != 0) {
            temp_v6 = *(int *)(temp_v3 + 0x5c);
            *(unsigned short *)(temp_v3 + 0x36) = *(unsigned short *)(temp_v7 + 0x36);
            FUN_00162e30();
            temp_v3 = temp_v6;
          }
          switch(*(unsigned char *)(temp_v7 + 0x98)) {
          case 1:
          case 2:
          case 3:
            *(unsigned char *)(temp_v7 + 0x98) = 4;
          }
        }
        else if ((*(unsigned int *)(temp_v7 + 0x1c) & 0x200000) == 0) {
          *(int *)(temp_v7 + 0xa0) = *(int *)(temp_v7 + 0x9c);
          *(int *)(temp_v7 + 0x9c) = *(int *)(temp_v7 + 0x9c) + 1;
          if (*(char *)(temp_v7 + 0x98) != '\x01') {
            if (*(char *)(temp_v7 + 0x98) == '\x02') {
LAB_001379d4:
              if (*(short *)(temp_v7 + 0x34) >= 1) {
                *(short *)(temp_v7 + 0x34) = *(short *)(temp_v7 + 0x34) - 1;
              }
              else {
                *(unsigned int *)(temp_v7 + 0x2c) = 0;
                *(unsigned int *)(temp_v7 + 0x30) = 0;
                if (*(romwright_code **)(temp_v7 + 0x38) != (romwright_code *)0x0) {
                  (**(romwright_code **)(temp_v7 + 0x38))(*(unsigned int *)(temp_v7 + 0x28));
                }
                *(unsigned char *)(temp_v7 + 0x98) = 3;
              }
            }
          }
          else {
            temp_v3 = FUN_00142d8c(temp_v7 + 0x6c);
            if (temp_v3 != 0) {
              *(unsigned char *)(temp_v7 + 0x98) = 2;
              goto LAB_001379d4;
            }
          }
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < DAT_0064011c);
  }
  temp_v8 = 0;
  if (temp_v8 < DAT_0064011c) {
    do {
      temp_v7 = *(int *)(DAT_00640118 + temp_v8 * 8);
      while (temp_v7 != 0) {
        if (0 < *(short *)(temp_v7 + 0x34)) {
          temp_v7 = *(int *)(temp_v7 + 0x4c);
          continue;
        }
        if ((*(int *)(temp_v7 + 0x20) < 0x200) && ((&DAT_00640130)[*(int *)(temp_v7 + 0x20)] == '\0')) {
          temp_v0 = 1;
        }
        else {
          temp_v2 = *(unsigned int *)(temp_v7 + 0x1c);
          if (((temp_v2 & 0x10) != 0) || (DAT_00640120 = temp_v7, (temp_v2 & 0x200000) != 0)) {
            temp_v7 = *(int *)(temp_v7 + 0x4c);
            continue;
          }
          if ((temp_v2 & 0x20000) != 0) {
            *(unsigned int *)(temp_v7 + 0x44) = 0xffffffff;
            temp_v3 = *(int *)(temp_v7 + 0x58);
            while (temp_v3 != 0) {
              temp_v6 = *(int *)(temp_v3 + 0x5c);
              *(unsigned short *)(temp_v3 + 0x36) = *(unsigned short *)(temp_v7 + 0x36);
              FUN_00162e30();
              temp_v3 = temp_v6;
            }
            switch(*(unsigned char *)(temp_v7 + 0x98)) {
            case 1:
            case 2:
            case 3:
              *(unsigned char *)(temp_v7 + 0x98) = 4;
            }
            temp_v0 = 1;
            DAT_00640120 = 0;
          }
          else {
            if (*(char *)(temp_v7 + 0x98) == '\x03') {
              if ((temp_v2 & 0x40) != 0) {
                FUN_001407cc(1);
              }
              if (((DAT_00640128 != '\0') && (temp_v3 = FUN_001696f4(), temp_v3 == 1)) &&
                 (*(int *)(temp_v7 + 100) == 0)) {
                FUN_00153f74(*(unsigned int *)(temp_v7 + 0x60));
              }
              temp_v3 = (**(romwright_code **)(temp_v7 + 0x3c))(*(unsigned int *)(temp_v7 + 0x28));
              if (((DAT_00640128 != '\0') && (temp_v6 = FUN_001696f4(), temp_v6 == 1)) &&
                 (*(int *)(temp_v7 + 100) == 0)) {
                FUN_00152f68(*(unsigned int *)(temp_v7 + 0x60),0);
              }
              FUN_001407cc(0);
              *(int *)(temp_v7 + 0x44) = temp_v3;
              if (temp_v3 != -1) {
                if (temp_v3 != 0) {
                  *(int *)(temp_v7 + 0x3c) = temp_v3;
                  *(unsigned int *)(temp_v7 + 0x44) = 0;
                }
                temp_v0 = 1;
                *(int *)(temp_v7 + 0x30) = *(int *)(temp_v7 + 0x30) + 1;
              }
              else {
                temp_v3 = *(int *)(temp_v7 + 0x58);
                while (temp_v3 != 0) {
                  temp_v6 = *(int *)(temp_v3 + 0x5c);
                  *(unsigned short *)(temp_v3 + 0x36) = *(unsigned short *)(temp_v7 + 0x36);
                  FUN_00162e30();
                  temp_v3 = temp_v6;
                }
                switch(*(unsigned char *)(temp_v7 + 0x98)) {
                case 1:
                case 2:
                case 3:
                  *(unsigned char *)(temp_v7 + 0x98) = 4;
                }
                temp_v0 = 0;
              }
            }
            else {
              temp_v0 = 1;
              *(int *)(temp_v7 + 0x30) = *(int *)(temp_v7 + 0x30) + 1;
            }
            DAT_00640120 = 0;
          }
        }
        if (temp_v0) {
          temp_v7 = *(int *)(temp_v7 + 0x4c);
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < DAT_0064011c);
  }
  if ((param_1 == 0) && (temp_v8 = 0, 0 < DAT_0064011c)) {
    do {
      temp_v7 = *(int *)(DAT_00640118 + temp_v8 * 8);
joined_r0x00137c50:
      while (temp_v3 = temp_v7, temp_v3 != 0) {
        temp_v7 = *(int *)(temp_v3 + 0x4c);
        if (*(char *)(temp_v3 + 0x98) == '\x04') goto LAB_00137c70;
        if (*(char *)(temp_v3 + 0x98) == '\x05') goto LAB_00137c88;
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < DAT_0064011c);
  }
  return 1;
LAB_00137c70:
  temp_v6 = FUN_00142d8c(temp_v3 + 0x7c,*(unsigned int *)(temp_v3 + 0xa0));
  if (temp_v6 != 0) {
    *(unsigned char *)(temp_v3 + 0x98) = 5;
LAB_00137c88:
    if (*(short *)(temp_v3 + 0x36) < 1) {
      if (*(romwright_code **)(temp_v3 + 0x40) != (romwright_code *)0x0) {
        (**(romwright_code **)(temp_v3 + 0x40))(*(unsigned int *)(temp_v3 + 0x28));
      }
      *(unsigned char *)(temp_v3 + 0x98) = 0;
      temp_v1 = DAT_00640118;
      for (temp_v6 = *(int *)(DAT_00640118 + (*(unsigned int *)(temp_v3 + 0x28) >> 0x14) * 8); temp_v6 != 0;
          temp_v6 = *(int *)(temp_v6 + 0x4c)) {
        if (*(unsigned int *)(temp_v6 + 0x24) == (*(unsigned int *)(temp_v3 + 0x28) & 0xfffff)) goto LAB_00137ce4;
      }
      temp_v6 = 0;
LAB_00137ce4:
      temp_v5 = *(int *)(temp_v6 + 0x54);
      if (temp_v5 != 0) {
        temp_v4 = *(int *)(temp_v5 + 0x58);
        if (temp_v4 == temp_v6) {
          *(unsigned int *)(temp_v5 + 0x58) = *(unsigned int *)(temp_v6 + 0x5c);
        }
        else {
          for (temp_v5 = *(int *)(temp_v4 + 0x5c); temp_v5 != temp_v6; temp_v5 = *(int *)(temp_v5 + 0x5c)) {
            temp_v4 = temp_v5;
          }
          temp_v5 = *(int *)(temp_v6 + 0x5c);
          *(int *)(temp_v4 + 0x5c) = temp_v5;
        }
        *(unsigned int *)(temp_v6 + 0x54) = 0;
        *(unsigned int *)(temp_v6 + 0x5c) = 0;
      }
      temp_v6 = *(int *)(temp_v3 + 0x50);
      if (temp_v6 != 0) {
        temp_v5 = *(int *)(temp_v3 + 0x4c);
      }
      puVar5 = (unsigned int *)(temp_v1 + *(int *)(temp_v3 + 0x20) * 8);
      if (temp_v6 != 0) {
        *(int *)(temp_v6 + 0x4c) = temp_v5;
      }
      else {
        *puVar5 = *(unsigned int *)(temp_v3 + 0x4c);
      }
      if (*(int *)(temp_v3 + 0x4c) != 0) {
        *(unsigned int *)(*(int *)(temp_v3 + 0x4c) + 0x50) = *(unsigned int *)(temp_v3 + 0x50);
      }
      else {
        puVar5[1] = *(unsigned int *)(temp_v3 + 0x50);
      }
      *(unsigned int *)(temp_v3 + 0x4c) = 0;
      *(unsigned int *)(temp_v3 + 0x50) = 0;
      DAT_00640124 = DAT_00640124 - 1;
      FUN_00143ac8(*(unsigned int *)(temp_v3 + 0x60));
      FUN_0019a5a0(temp_v3);
    }
    else {
      *(short *)(temp_v3 + 0x36) = *(short *)(temp_v3 + 0x36) - 1;
      if (*(int *)(temp_v3 + 0x44) != -1) {
        if ((*(unsigned int *)(temp_v3 + 0x1c) & 0x40) != 0) {
          FUN_001407cc(1);
        }
        if (((DAT_00640128 != '\0') && (temp_v6 = FUN_001696f4(), temp_v6 == 1)) &&
           (*(int *)(temp_v3 + 100) == 0)) {
          FUN_00153f74(*(unsigned int *)(temp_v3 + 0x60));
        }
        (**(romwright_code **)(temp_v3 + 0x3c))(*(unsigned int *)(temp_v3 + 0x28));
        if (((DAT_00640128 != '\0') && (temp_v6 = FUN_001696f4(), temp_v6 == 1)) &&
           (*(int *)(temp_v3 + 100) == 0)) {
          FUN_00152f68(*(unsigned int *)(temp_v3 + 0x60),0);
        }
        FUN_001407cc(0);
      }
    }
  }
  goto joined_r0x00137c50;
}
