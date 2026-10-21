/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d06f8` (_code @ 0x2d06f8, 0x1044 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00178b04(...);
int FUN_001cd3ec(...);
int controllerSetDestination(...);
int FUN_003fd7c0(...);
int FUN_003fd924(...);
int FUN_003fda08(...);
int FUN_003fe86c(...);
int FUN_0040a908(...);
int FUN_0040a918(...);
int moriModelContentCreateBody(...);
int FUN_0040a9fc(...);
int FUN_0040aad4(...);
int FUN_0040ab7c(...);
int FUN_0040ab8c(...);
int FUN_0040ab9c(...);
int FUN_0040ace8(...);
int FUN_00416168(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int spD8; /* 0xd8: local_d8 */
} void_stack;

extern unsigned char LAB_002d0adc; /* 0x2d0adc */
extern unsigned char LAB_002d0b08; /* 0x2d0b08 */
extern unsigned char LAB_002d13d0; /* 0x2d13d0 */
extern unsigned char LAB_002d13ec; /* 0x2d13ec */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_mapDepartWork; /* 0x58069c */
extern int DAT_005f1bdc; /* 0x5f1bdc */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00178b04. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_001cd3ec. */
extern int mapTableGetValue(int);
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
/* Supplied declaration required: FUN_003fda08. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: moriModelContentCreateBody. */
/* Supplied declaration required: FUN_0040a9fc. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
/* Supplied declaration required: FUN_0040ab8c. */
/* Supplied declaration required: FUN_0040ab9c. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_00416168. */


unsigned int FUN_002d06f8(void)

{
/* irregular: 1 goto(s); 18 native warning(s); review required */
  unsigned short *puVar1;
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned long long temp_v4;
  unsigned long long temp_v5;
  unsigned long long temp_v6;
  unsigned long long temp_v7;
  unsigned char temp_v8 [128];
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  
  temp_v2 = g_mapDepartWork;
  temp_v3 = 0;
  temp_v0 = *(short *)(g_mapDepartWork + 8);
  if (temp_v0 != 10) {
    if (temp_v0 >= 10) {
      if (temp_v0 != 0xb) {
        if (temp_v0 != 99) {
          return 0;
        }
        return 1;
      }
      temp_v2 = FUN_0040ab8c(*(unsigned int *)(g_mapDepartWork + 0xc));
      if (temp_v2 == 0) {
        return 0;
      }
      temp_v2 = FUN_0040ab8c(*(unsigned int *)(g_mapDepartWork + 0x14));
      if (temp_v2 == 0) {
        return 0;
      }
      FUN_0040ab7c(*(unsigned int *)(g_mapDepartWork + 0xc),2);
      FUN_0040a9fc(*(unsigned int *)(g_mapDepartWork + 0xc));
      FUN_0040ab9c(*(unsigned int *)(g_mapDepartWork + 0x14),
                   *(unsigned int *)(*(int *)(g_mapDepartWork + 0xc) + 0xc));
      FUN_00416168(*(unsigned int *)(*(int *)(g_mapDepartWork + 0xc) + 0xc),
                   *(unsigned int *)(*(int *)(g_mapDepartWork + 0x14) + 0xc));
      moriModelContentCreateBody(*(unsigned int *)(g_mapDepartWork + 0xc),0);
      temp_v3 = *(unsigned int *)(*(int *)(g_mapDepartWork + 0xc) + 4);
      FUN_0040ace8(g_handleRegistry,temp_v3);
      FUN_003fd924(temp_v3,0,2);
      FUN_003fd7c0(temp_v3,0,2);
      temp_v2 = gameFlagIsSet(0x8a);
      if (((temp_v2 != 0) && (*(short *)(g_mapDepartWork + 0x20) == 0x27)) &&
         ((temp_v0 = *(short *)(g_mapDepartWork + 0x22), temp_v0 == 6 || temp_v0 == 7 ||
          ((((temp_v0 == 8 || temp_v0 == 9 || (temp_v0 == 10 || temp_v0 == 0xb)) ||
            (temp_v0 == 0xe || temp_v0 == 1)) ||
           ((temp_v0 == 2 || temp_v0 == 3 || (temp_v0 == 4 || temp_v0 == 5)))))))) {
        FUN_003fda08(temp_v3,1,2);
      }
      temp_v2 = gameFlagIsSet(0x170);
      if ((temp_v2 != 0) && (*(short *)(g_mapDepartWork + 0x20) == 0x14)) {
        FUN_003fda08(temp_v3,1,2);
      }
      temp_v2 = gameFlagIsSet(0x184);
      if ((((((temp_v2 == 0) || (*(short *)(g_mapDepartWork + 0x20) != 0x1a)) ||
            ((*(short *)(g_mapDepartWork + 0x22) == 2 &&
             (FUN_003fd7c0(temp_v3,1,2), *(short *)(g_mapDepartWork + 0x20) != 0x1a)))) ||
           ((*(short *)(g_mapDepartWork + 0x22) == 4 &&
            (FUN_003fd7c0(temp_v3,1,2), *(short *)(g_mapDepartWork + 0x20) != 0x1a)))) ||
          ((*(short *)(g_mapDepartWork + 0x22) == 7 &&
           (FUN_003fd7c0(temp_v3,1,2), *(short *)(g_mapDepartWork + 0x20) != 0x1a)))) ||
         (((*(short *)(g_mapDepartWork + 0x22) == 9 &&
           (FUN_003fd7c0(temp_v3,1,2), *(short *)(g_mapDepartWork + 0x20) != 0x1a)) ||
          ((*(short *)(g_mapDepartWork + 0x22) == 0xb &&
           (FUN_003fd7c0(temp_v3,1,2), *(short *)(g_mapDepartWork + 0x20) != 0x1a)))))) {
        *(unsigned short *)(g_mapDepartWork + 8) = 99;
        return 0;
      }
      temp_v0 = *(short *)(g_mapDepartWork + 0x22);
      if (temp_v0 == 0xf) {
        FUN_003fd7c0(temp_v3,1,2);
      }
      *(unsigned short *)(g_mapDepartWork + 8) = 99;
      return 0;
    }
    temp_v4 = 0xc641c00000000000;
    temp_v5 = 0xc7115000c6c1c000;
    temp_v6 = 0xc7723000c741c000;
    temp_v7 = 0xc69c4000c7915000;
    if (temp_v0 != 0) {
      if (temp_v0 != 1) {
        return 0;
      }
LAB_002d0a48:
      temp_v2 = FUN_0040ab8c(*(unsigned int *)(g_mapDepartWork + 0x10));
      if (temp_v2 == 0) {
        return 0;
      }
      FUN_0040ab7c(*(unsigned int *)(g_mapDepartWork + 0x10),2);
      FUN_0040a908(*(unsigned int *)(g_mapDepartWork + 0x10),0x10000);
      FUN_0040a918(*(unsigned int *)(g_mapDepartWork + 0x10),0x30000);
      FUN_0040aad4(*(unsigned int *)(g_mapDepartWork + 0x10),0);
      temp_v3 = *(unsigned int *)(*(int *)(g_mapDepartWork + 0x10) + 4);
      FUN_003fe86c(temp_v3,0,2);
      if ((*(int *)(g_mapDepartWork + 0x1c) == 0xd) && (temp_v2 = gameFlagIsSet(0x184), temp_v2 != 0)) {
        FUN_003fd7c0(temp_v3,1,2);
      }
      FUN_0040ace8(g_handleRegistry,temp_v3);
      if (*(short *)(g_mapDepartWork + 4) == 0x1a) {
        temp_v0 = *(short *)(g_mapDepartWork + 6);
        temp_v9 = (unsigned int)temp_v4;
        temp_v11 = temp_v9;
        if (!(temp_v0 == 4 || temp_v0 == 5)) {
          if (!((temp_v0 == 6 || temp_v0 == 7) || temp_v0 == 8)) {
            if (!(temp_v0 == 9 || temp_v0 == 10)) {
              if ((!(temp_v0 == 0xb || temp_v0 == 0xc)) && (!(temp_v0 == 0xd || temp_v0 == 0xe))) {
                if (!(temp_v0 == 0xf || temp_v0 == 0x10)) {
                  if (temp_v0 != 0x11 && temp_v0 != 0x12) {
                    *(unsigned short *)(g_mapDepartWork + 8) = 10;
                    return 0;
                  }
                  temp_v10 = (unsigned int)temp_v7;
                  controllerSetDestination(temp_v3,&temp_v9);
                }
                else {
                  temp_v10 = (unsigned int)((unsigned long long)temp_v6 >> 0x20);
                  controllerSetDestination(temp_v3,&temp_v9);
                }
              }
              else {
                temp_v10 = (unsigned int)temp_v6;
                controllerSetDestination(temp_v3,&temp_v9);
              }
            }
            else {
              temp_v10 = (unsigned int)((unsigned long long)temp_v5 >> 0x20);
              controllerSetDestination(temp_v3,&temp_v9);
            }
          }
          else {
            temp_v10 = (unsigned int)temp_v5;
            controllerSetDestination(temp_v3,&temp_v9);
          }
        }
        else {
          temp_v10 = (unsigned int)((unsigned long long)temp_v4 >> 0x20);
          controllerSetDestination(temp_v3,&temp_v9);
        }
      }
      temp_v10 = (unsigned int)((unsigned long long)temp_v7 >> 0x20);
      temp_v9 = (unsigned int)temp_v4;
      temp_v0 = *(short *)(g_mapDepartWork + 4);
    }
    else {
      if (DAT_005f1bdc == 1) {
        *(unsigned int *)(g_mapDepartWork + 0xc) = 0;
        *(unsigned short *)(temp_v2 + 8) = 99;
        *(unsigned int *)(temp_v2 + 0x14) = 0;
        return 0;
      }
      if (*(int *)(g_mapDepartWork + 0x10) == 0) {
        temp_v1 = mapTableGetValue((int)*(short *)(g_mapDepartWork + 6));
        temp_v2 = g_mapDepartWork;
        *(int *)(g_mapDepartWork + 0x1c) = temp_v1;
        if (temp_v1 < 1) {
          *(unsigned short *)(temp_v2 + 8) = 10;
          return 0;
        }
        temp_v2 = 0x20;
        FUN_00178b04(0x20,&LAB_002d0adc,0x113);
        temp_v3 = 0;
        if (temp_v2 != 0) {
          temp_v3 = FUN_0040ac08();
        }
        *(unsigned int *)(g_mapDepartWork + 0x10) = temp_v3;
        FUN_0040a908();
        FUN_0040a918(*(unsigned int *)(g_mapDepartWork + 0x10),0x30000);
        textFormatBuffer(temp_v8,&LAB_002d0b08,*(unsigned int *)(g_mapDepartWork + 0x1c));
        FUN_001cd3ec(*(unsigned int *)(g_mapDepartWork + 0x10),temp_v8);
        *(short *)(g_mapDepartWork + 8) = *(short *)(g_mapDepartWork + 8) + 1;
        goto LAB_002d0a48;
      }
      temp_v2 = FUN_0040ab8c();
      if (temp_v2 != 0) {
        FUN_0040ab7c(*(unsigned int *)(g_mapDepartWork + 0x10),2);
        FUN_0040a908(*(unsigned int *)(g_mapDepartWork + 0x10),0x10000);
        FUN_0040a918(*(unsigned int *)(g_mapDepartWork + 0x10),0x30000);
        FUN_0040aad4(*(unsigned int *)(g_mapDepartWork + 0x10),0);
        temp_v3 = *(unsigned int *)(*(int *)(g_mapDepartWork + 0x10) + 4);
        FUN_003fe86c(temp_v3,0,2);
        if ((*(int *)(g_mapDepartWork + 0x1c) == 0xd) && (temp_v2 = gameFlagIsSet(0x184), temp_v2 != 0)) {
          FUN_003fd7c0(temp_v3,1,2);
        }
        FUN_0040ace8(g_handleRegistry,temp_v3);
      }
      if (*(short *)(g_mapDepartWork + 4) == 0x1a) {
        temp_v0 = *(short *)(g_mapDepartWork + 6);
        temp_v9 = (unsigned int)temp_v4;
        temp_v11 = temp_v9;
        if (!(temp_v0 == 4 || temp_v0 == 5)) {
          if (!((temp_v0 == 6 || temp_v0 == 7) || temp_v0 == 8)) {
            if (!(temp_v0 == 9 || temp_v0 == 10)) {
              if ((!(temp_v0 == 0xb || temp_v0 == 0xc)) && (!(temp_v0 == 0xd || temp_v0 == 0xe))) {
                if (!(temp_v0 == 0xf || temp_v0 == 0x10)) {
                  if (temp_v0 != 0x11 && temp_v0 != 0x12) {
                    *(unsigned short *)(g_mapDepartWork + 8) = 10;
                    return 0;
                  }
                  temp_v10 = (unsigned int)temp_v7;
                  controllerSetDestination(temp_v3,&temp_v9);
                }
                else {
                  temp_v10 = (unsigned int)((unsigned long long)temp_v6 >> 0x20);
                  controllerSetDestination(temp_v3,&temp_v9);
                }
              }
              else {
                temp_v10 = (unsigned int)temp_v6;
                controllerSetDestination(temp_v3,&temp_v9);
              }
            }
            else {
              temp_v10 = (unsigned int)((unsigned long long)temp_v5 >> 0x20);
              controllerSetDestination(temp_v3,&temp_v9);
            }
          }
          else {
            temp_v10 = (unsigned int)temp_v5;
            controllerSetDestination(temp_v3,&temp_v9);
          }
        }
        else {
          temp_v10 = (unsigned int)((unsigned long long)temp_v4 >> 0x20);
          controllerSetDestination(temp_v3,&temp_v9);
        }
      }
      temp_v10 = (unsigned int)((unsigned long long)temp_v7 >> 0x20);
      temp_v9 = (unsigned int)temp_v4;
      temp_v0 = *(short *)(g_mapDepartWork + 4);
    }
    if (temp_v0 == 0x13) {
      temp_v11 = temp_v9;
      controllerSetDestination(temp_v3,&temp_v9);
    }
    *(unsigned short *)(g_mapDepartWork + 8) = 10;
    return 0;
  }
  if (*(int *)(g_mapDepartWork + 0xc) != 0) {
    temp_v2 = FUN_0040ab8c();
    if ((temp_v2 == 0) || (temp_v2 = FUN_0040ab8c(*(unsigned int *)(g_mapDepartWork + 0x14)), temp_v2 == 0)) {
      *(unsigned short *)(g_mapDepartWork + 8) = 99;
      return 0;
    }
    FUN_0040ab7c(*(unsigned int *)(g_mapDepartWork + 0xc),2);
    FUN_0040a908(*(unsigned int *)(g_mapDepartWork + 0xc),0x10000);
    FUN_0040a918(*(unsigned int *)(g_mapDepartWork + 0xc),0x20000);
    FUN_0040a9fc(*(unsigned int *)(g_mapDepartWork + 0xc));
    FUN_0040ab9c(*(unsigned int *)(g_mapDepartWork + 0x14),
                 *(unsigned int *)(*(int *)(g_mapDepartWork + 0xc) + 0xc));
    FUN_00416168(*(unsigned int *)(*(int *)(g_mapDepartWork + 0xc) + 0xc),
                 *(unsigned int *)(*(int *)(g_mapDepartWork + 0x14) + 0xc));
    moriModelContentCreateBody(*(unsigned int *)(g_mapDepartWork + 0xc),0);
    temp_v3 = *(unsigned int *)(*(int *)(g_mapDepartWork + 0xc) + 4);
    FUN_0040ace8(g_handleRegistry,temp_v3);
    FUN_003fd924(temp_v3,0,2);
    FUN_003fd7c0(temp_v3,0,2);
    temp_v2 = gameFlagIsSet(0x8a);
    if (((temp_v2 != 0) && (*(short *)(g_mapDepartWork + 0x20) == 0x27)) &&
       ((((temp_v0 = *(short *)(g_mapDepartWork + 0x22), temp_v0 == 6 || temp_v0 == 7 ||
          (temp_v0 == 8 || temp_v0 == 9)) || (temp_v0 == 10 || temp_v0 == 0xb)) ||
        (((temp_v0 == 0xe || temp_v0 == 1 || (temp_v0 == 2 || temp_v0 == 3)) || (temp_v0 == 4 || temp_v0 == 5)))
        ))) {
      FUN_003fda08(temp_v3,1,2);
    }
    temp_v2 = gameFlagIsSet(0x170);
    if ((temp_v2 != 0) && (*(short *)(g_mapDepartWork + 0x20) == 0x14)) {
      FUN_003fda08(temp_v3,1,2);
    }
    temp_v2 = gameFlagIsSet(0x184);
    if ((((temp_v2 == 0) || (*(short *)(g_mapDepartWork + 0x20) != 0x1a)) ||
        (((*(short *)(g_mapDepartWork + 0x22) == 2 &&
          (FUN_003fd7c0(temp_v3,1,2), *(short *)(g_mapDepartWork + 0x20) != 0x1a)) ||
         ((*(short *)(g_mapDepartWork + 0x22) == 4 &&
          (FUN_003fd7c0(temp_v3,1,2), *(short *)(g_mapDepartWork + 0x20) != 0x1a)))))) ||
       (((*(short *)(g_mapDepartWork + 0x22) == 7 &&
         (FUN_003fd7c0(temp_v3,1,2), *(short *)(g_mapDepartWork + 0x20) != 0x1a)) ||
        (((*(short *)(g_mapDepartWork + 0x22) == 9 &&
          (FUN_003fd7c0(temp_v3,1,2), *(short *)(g_mapDepartWork + 0x20) != 0x1a)) ||
         ((*(short *)(g_mapDepartWork + 0x22) == 0xb &&
          (FUN_003fd7c0(temp_v3,1,2), *(short *)(g_mapDepartWork + 0x20) != 0x1a)))))))) {
      *(unsigned short *)(g_mapDepartWork + 8) = 99;
      return 0;
    }
    temp_v0 = *(short *)(g_mapDepartWork + 0x22);
    if (temp_v0 == 0xf) {
      FUN_003fd7c0(temp_v3,1,2);
    }
    *(unsigned short *)(g_mapDepartWork + 8) = 99;
    return 0;
  }
  puVar1 = (unsigned short *)(g_mapDepartWork + 6);
  *(unsigned short *)(g_mapDepartWork + 0x20) = *(unsigned short *)(g_mapDepartWork + 4);
  *(unsigned short *)(temp_v2 + 0x22) = *puVar1;
  temp_v2 = 0x20;
  FUN_00178b04(0x20,&LAB_002d0adc,0x268);
  temp_v3 = 0;
  if (temp_v2 != 0) {
    temp_v3 = FUN_0040ac08();
  }
  temp_v2 = g_mapDepartWork;
  *(unsigned int *)(g_mapDepartWork + 0xc) = temp_v3;
  temp_v1 = (int)*(short *)(temp_v2 + 0x20);
  textFormatBuffer(temp_v8,&LAB_002d13d0,temp_v1,temp_v1,(int)*(short *)(temp_v2 + 0x22));
  temp_v2 = gameFlagIsSet(0x9d);
  if ((((temp_v2 != 0) && (*(short *)(g_mapDepartWork + 0x20) == 0x27)) &&
      ((*(short *)(g_mapDepartWork + 0x22) != 1 ||
       (textFormatBuffer(temp_v8,&LAB_002d13d0,0x27,0x27,0xf),
       *(short *)(g_mapDepartWork + 0x20) == 0x27)))) &&
     ((((*(short *)(g_mapDepartWork + 0x22) != 2 ||
        (textFormatBuffer(temp_v8,&LAB_002d13d0,0x27,0x27,0x10),
        *(short *)(g_mapDepartWork + 0x20) == 0x27)) &&
       ((*(short *)(g_mapDepartWork + 0x22) != 3 ||
        (textFormatBuffer(temp_v8,&LAB_002d13d0,0x27,0x27,0x11),
        *(short *)(g_mapDepartWork + 0x20) == 0x27)))) &&
      ((*(short *)(g_mapDepartWork + 0x22) != 4 ||
       (textFormatBuffer(temp_v8,&LAB_002d13d0,0x27,0x27,0x12),
       *(short *)(g_mapDepartWork + 0x20) == 0x27)))))) {
    if (*(short *)(g_mapDepartWork + 0x22) == 5) {
      textFormatBuffer(temp_v8,&LAB_002d13d0,0x27,0x27,0x13);
      if (*(short *)(g_mapDepartWork + 0x20) == 0x2c || *(short *)(g_mapDepartWork + 0x20) == 0x2f) {
        textFormatBuffer(temp_v8,&LAB_002d13d0,0x2b,0x2b,2);
      }
      if (*(short *)(g_mapDepartWork + 0x20) == 0x2d || *(short *)(g_mapDepartWork + 0x20) == 0x2e) {
        textFormatBuffer(temp_v8,&LAB_002d13d0,0x2b,0x2b,1);
      }
    }
  }
  else {
    if (*(short *)(g_mapDepartWork + 0x20) == 0x2c || *(short *)(g_mapDepartWork + 0x20) == 0x2f) {
      textFormatBuffer(temp_v8,&LAB_002d13d0,0x2b,0x2b,2);
    }
    if (*(short *)(g_mapDepartWork + 0x20) == 0x2d || *(short *)(g_mapDepartWork + 0x20) == 0x2e) {
      textFormatBuffer(temp_v8,&LAB_002d13d0,0x2b,0x2b,1);
    }
  }
  FUN_001cd3ec(*(unsigned int *)(g_mapDepartWork + 0xc),temp_v8);
  FUN_0040a908(*(unsigned int *)(g_mapDepartWork + 0xc),0x10000);
  FUN_0040a918(*(unsigned int *)(g_mapDepartWork + 0xc),0x10000);
  temp_v2 = 0x20;
  FUN_00178b04(0x20,&LAB_002d0adc,0x294);
  temp_v3 = 0;
  if (temp_v2 != 0) {
    temp_v3 = FUN_0040ac08();
  }
  temp_v2 = g_mapDepartWork;
  *(unsigned int *)(g_mapDepartWork + 0x14) = temp_v3;
  temp_v1 = (int)*(short *)(temp_v2 + 0x20);
  textFormatBuffer(temp_v8,&LAB_002d13ec,temp_v1,temp_v1,(int)*(short *)(temp_v2 + 0x22));
  temp_v2 = gameFlagIsSet(0x9d);
  if ((((((temp_v2 != 0) && (*(short *)(g_mapDepartWork + 0x20) == 0x27)) &&
        ((*(short *)(g_mapDepartWork + 0x22) != 1 ||
         (textFormatBuffer(temp_v8,&LAB_002d13ec,0x27,0x27,0xf),
         *(short *)(g_mapDepartWork + 0x20) == 0x27)))) &&
       ((*(short *)(g_mapDepartWork + 0x22) != 2 ||
        (textFormatBuffer(temp_v8,&LAB_002d13ec,0x27,0x27,0x10),
        *(short *)(g_mapDepartWork + 0x20) == 0x27)))) &&
      ((*(short *)(g_mapDepartWork + 0x22) != 3 ||
       (textFormatBuffer(temp_v8,&LAB_002d13ec,0x27,0x27,0x11),
       *(short *)(g_mapDepartWork + 0x20) == 0x27)))) &&
     ((*(short *)(g_mapDepartWork + 0x22) != 4 ||
      (textFormatBuffer(temp_v8,&LAB_002d13ec,0x27,0x27,0x12),
      *(short *)(g_mapDepartWork + 0x20) == 0x27)))) {
    if (*(short *)(g_mapDepartWork + 0x22) != 5) {
      FUN_001cd3ec(*(unsigned int *)(g_mapDepartWork + 0x14),temp_v8);
      FUN_0040a908(*(unsigned int *)(g_mapDepartWork + 0x14),0x10000);
      FUN_0040a918(*(unsigned int *)(g_mapDepartWork + 0x14),0x20000);
      *(short *)(g_mapDepartWork + 8) = *(short *)(g_mapDepartWork + 8) + 1;
      return 0;
    }
    textFormatBuffer(temp_v8,&LAB_002d13ec,0x27,0x27,0x13);
  }
  if (*(short *)(g_mapDepartWork + 0x20) == 0x2c || *(short *)(g_mapDepartWork + 0x20) == 0x2f) {
    textFormatBuffer(temp_v8,&LAB_002d13ec,0x2b,0x2b,2);
  }
  if (*(short *)(g_mapDepartWork + 0x20) == 0x2d || *(short *)(g_mapDepartWork + 0x20) == 0x2e) {
    textFormatBuffer(temp_v8,&LAB_002d13ec,0x2b,0x2b,1);
  }
  FUN_001cd3ec(*(unsigned int *)(g_mapDepartWork + 0x14),temp_v8);
  FUN_0040a908(*(unsigned int *)(g_mapDepartWork + 0x14),0x10000);
  FUN_0040a918(*(unsigned int *)(g_mapDepartWork + 0x14),0x20000);
  *(short *)(g_mapDepartWork + 8) = *(short *)(g_mapDepartWork + 8) + 1;
  return 0;
}

} /* extern "C" */
