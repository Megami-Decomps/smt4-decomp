/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fdde8` (_code @ 0x1fdde8, 0x1170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019de98(...);
int ptrListRemoveClearOwner(...);
int FUN_0020b660(...);
int FUN_0021b274(...);
int FUN_0022e774(void);
int FUN_0026f148(...);
int FUN_002a4878(...);
int FUN_002adce8(...);
int FUN_002cb278(...);
int FUN_002f78a0(...);
int menuItemPlaySe(...);
int flaggedEntrySetValueB(...);
int FUN_0037c8e4(...);
int FUN_0037e0b8(...);
int FUN_0038843c(void);

int FUN_001517b4(...);
int eventQueueAddUniqueIfValid(...);
int FUN_00228b04(...);
int FUN_0028b088(...);
int FUN_0031f208(...);
int FUN_0031f27c(...);
int stateAtF4Apply(void);
int FUN_003450d4(...);
int engineForwardVariadicCommand(...);
int FUN_0036cf98(...);
int FUN_0038b57c(...);
int FUN_0038b5fc(...);
int FUN_0039a41c(...);
int FUN_003d2150(...);
int FUN_003df7c4(...);

int FUN_00178b04(...);
int gameGetPlayerData(void);
int FUN_002a7324(int);
int FUN_002c85b0(...);
int FUN_002f0384(...);
int FUN_00320940(...);
int objBStateAllowsAction(void);
int FUN_003343d8(...);
int FUN_0033449c(...);
int objBSetWordByIndex(...);
int gameGlobalsQueueValues(...);
int FUN_00372100(...);
int FUN_003fd7b4(...);
int FUN_003fe86c(...);
int FUN_0040aa6c(void);
int FUN_0040aad4(...);
int FUN_0040ab7c(...);
int FUN_0040ace8(...);
int FUN_0045b538(...);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_001fe2e8; /* 0x1fe2e8 */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_camp; /* 0x57f108 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern unsigned short ifTouchGetButtonHelpValue(void);
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: gameGetPlayerData. */
extern unsigned int FUN_001834a4(unsigned int, unsigned int);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: FUN_0020b660. */
/* Supplied declaration required: FUN_0021b274. */
/* Supplied declaration required: FUN_00228b04. */
extern int FUN_0022e714(void);
/* Supplied declaration required: FUN_0022e774. */
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_0026f148. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_0028b088. */
extern int FUN_002a4860(int);
/* Supplied declaration required: FUN_002a4878. */
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002a7324. */
/* Supplied declaration required: FUN_002adce8. */
extern unsigned int FUN_002bf520(void);
extern int FUN_002c2c4c(int);
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_002cb278. */
/* Supplied declaration required: FUN_002f0384. */
/* Supplied declaration required: FUN_002f78a0. */
/* Supplied declaration required: menuItemPlaySe. */
/* Supplied declaration required: flaggedEntrySetValueB. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: FUN_0031f27c. */
/* Supplied declaration required: FUN_00320940. */
/* Supplied declaration required: objBStateAllowsAction. */
/* Supplied declaration required: FUN_003343d8. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: stateAtF4Apply. */
/* Supplied declaration required: FUN_003450d4. */
/* Supplied declaration required: objBSetWordByIndex. */
/* Supplied declaration required: engineForwardVariadicCommand. */
extern int FUN_0036cf78(void);
/* Supplied declaration required: FUN_0036cf98. */
/* Supplied declaration required: gameGlobalsQueueValues. */
/* Supplied declaration required: FUN_00372100. */
/* Supplied declaration required: FUN_0037c8e4. */
/* Supplied declaration required: FUN_0037e0b8. */
/* Supplied declaration required: FUN_0038843c. */
/* Supplied declaration required: FUN_0038b57c. */
/* Supplied declaration required: FUN_0038b5fc. */
/* Supplied declaration required: FUN_0039a41c. */
/* Supplied declaration required: FUN_003d2150. */
extern int FUN_003da8f4(int, unsigned int);
/* Supplied declaration required: FUN_003df7c4. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
extern int FUN_0040ab8c(unsigned int);
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_0045b538. */
extern int unitMatchesAlignment(short);


/* WARNING: Removing unreachable block (ram,0x001feb8c) */
/* WARNING: Removing unreachable block (ram,0x001feb94) */
/* WARNING: Removing unreachable block (ram,0x001feb9c) */
/* WARNING: Removing unreachable block (ram,0x001fe9b0) */
/* WARNING: Removing unreachable block (ram,0x001fe9b8) */
/* WARNING: Removing unreachable block (ram,0x001fe9c0) */

void FUN_001fdde8(int param_1)

{
/* irregular: 5 goto(s); 55 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  short *psVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar8;
  int temp_v6;
  short temp_v7;
  int temp_v8;
  int temp_v9;
  short *psVar13;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  char temp_v14 [16];
  
  temp_v5 = g_camp;
  psVar4 = (short *)gameGetPlayerData();
  temp_v10 = (unsigned int)(param_1 - 0x48U < 7);
  temp_v13 = 0;
  temp_v9 = 0;
  if (param_1 == 0x13 || param_1 == 0x48) {
    temp_v13 = temp_v5 + 0x2b4;
    temp_v9 = temp_v5 + 0x2b68;
    FUN_003343d8(0);
  }
  if (param_1 == 0x14 || param_1 == 0x49) {
    temp_v13 = temp_v5 + 0x318;
    temp_v9 = temp_v5 + 0x2c58;
    FUN_003343d8(1);
  }
  if (param_1 == 0x15 || param_1 == 0x4a) {
    temp_v13 = temp_v5 + 0x37c;
    temp_v9 = temp_v5 + 0x2d48;
    FUN_003343d8(2);
  }
  if (param_1 == 0x16 || param_1 == 0x4b) {
    temp_v13 = temp_v5 + 0x3e0;
    temp_v9 = temp_v5 + 0x2dac;
    FUN_003343d8(3);
  }
  temp_v12 = (unsigned int)(param_1 == 0x16 || param_1 == 0x4b);
  if (param_1 == 0x17 || param_1 == 0x4c) {
    temp_v13 = temp_v5 + 0x444;
    temp_v9 = temp_v5 + 0x2e9c;
    FUN_003343d8(4);
    temp_v12 = 1;
  }
  if (param_1 == 0x18 || param_1 == 0x4d) {
    temp_v13 = temp_v5 + 0x4a8;
    temp_v9 = temp_v5 + 0x2f8c;
    FUN_003343d8(5);
    temp_v12 = 1;
  }
  if (param_1 == 0x19 || param_1 == 0x4e) {
    temp_v13 = temp_v5 + 0x50c;
    temp_v9 = temp_v5 + 0x307c;
    FUN_003343d8(6);
  }
  switch(*(unsigned int *)(temp_v5 + 0x20)) {
  case 0:
    if (temp_v10 == 0) {
      temp_v4 = FUN_0022e714();
      if (temp_v4 != 0) {
        return;
      }
      temp_v4 = FUN_0023b3d0();
      if (temp_v4 == 0) {
        return;
      }
      FUN_002c85b0(3);
      FUN_0033449c(1);
      gameGlobalsQueueValues(psVar4,0);
      FUN_00372100(psVar4,0);
      FUN_002a7324(1);
      temp_v4 = FUN_002a4860(temp_v13);
      temp_v13 = FUN_002a4894(temp_v13);
      temp_v7 = *(short *)(temp_v9 + (temp_v13 + temp_v4) * 2);
      if (param_1 != 0x16) {
        if (param_1 != 0x17) {
          if (param_1 != 0x18) {
            objBSetWordByIndex(0,psVar4[3]);
            objBSetWordByIndex(1,psVar4[4]);
            temp_v7 = psVar4[5];
          }
          else {
            objBSetWordByIndex(0,psVar4[3]);
            objBSetWordByIndex(1,psVar4[4]);
          }
          temp_v3 = 2;
        }
        else {
          objBSetWordByIndex(0,psVar4[3]);
          objBSetWordByIndex(2,psVar4[5]);
          temp_v3 = 1;
        }
      }
      else {
        objBSetWordByIndex(1,psVar4[4]);
        objBSetWordByIndex(2,psVar4[5]);
        temp_v3 = 0;
      }
      objBSetWordByIndex(temp_v3,temp_v7);
      temp_v9 = 0x20;
      FUN_00178b04(0x20,&LAB_001fe2e8,0x1e47);
      temp_v3 = 0;
      if (temp_v9 != 0) {
        temp_v3 = FUN_0040ac08();
      }
      *(unsigned int *)(temp_v5 + 0x32ac) = temp_v3;
      FUN_0040aa6c();
      FUN_0040ab7c(*(unsigned int *)(temp_v5 + 0x32ac),0);
      FUN_0040aad4(*(unsigned int *)(temp_v5 + 0x32ac),0);
      FUN_0045b538(*(int *)(*(int *)(temp_v5 + 0x32ac) + 0xc) + 0xc);
      *(int *)(temp_v5 + 0x20) = *(int *)(temp_v5 + 0x20) + 1;
      return;
    }
    temp_v9 = 2;
    *(int *)(temp_v5 + 0x20) = temp_v9;
    return;
  case 1:
    temp_v9 = FUN_0040ab8c(*(unsigned int *)(temp_v5 + 0x32ac));
    if (temp_v9 != 0) {
      temp_v3 = *(unsigned int *)(*(int *)(temp_v5 + 0x32ac) + 4);
      FUN_0040ace8(g_handleRegistry,temp_v3);
      FUN_003fe86c(temp_v3,0,2);
      FUN_003fd7b4(temp_v3);
    }
    temp_v9 = objBStateAllowsAction();
    if (temp_v9 == 0) {
      return;
    }
    temp_v9 = FUN_0040ab8c(*(unsigned int *)(temp_v5 + 0x32ac));
    if (temp_v9 == 0) {
      return;
    }
    if (temp_v12 != 0) {
      *(unsigned char *)(temp_v5 + 0x3c) = 1;
    }
    *(int *)(temp_v5 + 0x20) = *(int *)(temp_v5 + 0x20) + 1;
    return;
  case 2:
    goto LAB_001fe16c;
  case 3:
    if (*(int *)(temp_v5 + 0x28) == 0x2c) {
      *(unsigned int *)(temp_v5 + 0x28) = 0x1d;
      if (temp_v12 != 0) {
        if (temp_v10 == 0) {
          FUN_002f0384(0);
        }
        *(unsigned char *)(temp_v5 + 0x3c) = 1;
      }
      else if (temp_v10 == 0) {
        FUN_00320940(param_1);
      }
    }
    if ((*(char *)(temp_v13 + 0x61) != '\0') || (*(char *)(temp_v13 + 0x60) != '\0')) {
      if (temp_v12 != 0) {
        if (temp_v10 != 0) {
          *(unsigned char *)(temp_v5 + 0x3c) = 1;
          temp_v4 = FUN_0036cf78();
        }
        else {
          FUN_002f0384(0);
          *(unsigned char *)(temp_v5 + 0x3c) = 1;
          temp_v4 = objBStateAllowsAction();
        }
      }
      else if (temp_v10 != 0) {
        temp_v4 = FUN_0036cf78();
      }
      else {
        temp_v4 = objBStateAllowsAction();
      }
    }
    else {
      if (*(char *)(temp_v5 + 0x3c) != '\0') {
        temp_v4 = FUN_002a4860(temp_v13);
        temp_v8 = FUN_002a4894(temp_v13);
        temp_v2 = *(unsigned short *)(temp_v9 + (temp_v8 + temp_v4) * 2);
        if (param_1 != 0x16) {
          if (param_1 == 0x17) {
            temp_v3 = 1;
            FUN_0038b5fc(temp_v3,temp_v2);
          }
          else if (param_1 == 0x18) {
            temp_v3 = 2;
            FUN_0038b5fc(temp_v3,temp_v2);
          }
          else if ((param_1 == 0x4b || param_1 == 0x4c) || param_1 == 0x4d) {
            FUN_0039a41c();
          }
        }
        else {
          FUN_0038b5fc(0,temp_v2);
        }
        *(unsigned char *)(temp_v5 + 0x3c) = 0;
        if ((temp_v12 & ~temp_v10) != 0) {
          FUN_00320940(param_1);
        }
      }
      else {
        temp_v12 = objBStateAllowsAction();
        if ((temp_v12 & ~temp_v10) != 0) {
          FUN_002f0384(1);
        }
      }
      if (temp_v10 != 0) {
        temp_v4 = FUN_0036cf78();
      }
      else {
        temp_v4 = objBStateAllowsAction();
      }
    }
    if (temp_v4 == 0) {
      return;
    }
    temp_v14[0] = '\0';
    temp_v3 = FUN_001834a4(0x14,0x572);
    temp_v8 = (int)*(short *)(temp_v5 + 0x1b36);
    temp_v4 = temp_v13;
    FUN_003450d4(temp_v13,temp_v3,temp_v5 + 0x1b3e,(int)*(short *)(temp_v5 + 0x1b34),temp_v8,
                 (int)*(short *)(temp_v5 + 0x1b38),temp_v14,0,1);
    temp_v2 = (unsigned short)((unsigned int)temp_v8 >> 0x10);
    if (temp_v4 != 0) {
      FUN_0028b088(param_1);
      if (temp_v10 != 0) {
        return;
      }
      FUN_00320940(param_1);
      return;
    }
    temp_v4 = temp_v13;
    FUN_00228b04(temp_v13,1);
    if (temp_v4 != 0) {
      FUN_0028b088(param_1);
      if (temp_v10 != 0) {
        return;
      }
      FUN_00320940(param_1);
      return;
    }
    temp_v4 = 0;
    FUN_001517b4(0,1);
    if (temp_v4 != 0 || temp_v14[0] != '\0') {
      temp_v5 = FUN_002a4860(temp_v13);
      temp_v13 = FUN_002a4894(temp_v13);
      psVar13 = (short *)(temp_v9 + (temp_v13 + temp_v5) * 2);
      temp_v5 = unitMatchesAlignment(*psVar13);
      if (temp_v5 == 0) {
        eventQueueAddUniqueIfValid(0x100020f);
        return;
      }
      temp_v1 = 1;
      if ((param_1 == 0x13 || param_1 == 0x48) &&
         (temp_v7 = *psVar13, temp_v0 = *psVar4, *psVar4 = temp_v7, temp_v0 == temp_v7)) {
        temp_v1 = 0;
      }
      if ((param_1 == 0x14 || param_1 == 0x49) &&
         (temp_v7 = *psVar13, temp_v0 = psVar4[1], psVar4[1] = temp_v7, temp_v0 == temp_v7)) {
        temp_v1 = 0;
      }
      if ((param_1 == 0x15 || param_1 == 0x4a) &&
         (temp_v7 = *psVar13, temp_v0 = psVar4[2], psVar4[2] = temp_v7, temp_v0 == temp_v7)) {
        temp_v1 = 0;
      }
      if ((param_1 == 0x16 || param_1 == 0x4b) &&
         (temp_v7 = *psVar13, temp_v0 = psVar4[3], psVar4[3] = temp_v7, temp_v0 == temp_v7)) {
        temp_v1 = 0;
      }
      if ((param_1 == 0x17 || param_1 == 0x4c) &&
         (temp_v7 = *psVar13, temp_v0 = psVar4[4], psVar4[4] = temp_v7, temp_v0 == temp_v7)) {
        temp_v1 = 0;
      }
      if ((param_1 == 0x18 || param_1 == 0x4d) &&
         (temp_v7 = *psVar13, temp_v0 = psVar4[5], psVar4[5] = temp_v7, temp_v0 == temp_v7)) {
        temp_v1 = 0;
      }
      if ((param_1 == 0x19 || param_1 == 0x4e) &&
         (temp_v7 = *psVar13, temp_v0 = psVar4[6], psVar4[6] = temp_v7, temp_v0 == temp_v7)) {
        temp_v1 = 0;
      }
      if (temp_v10 == 0) {
        FUN_003df7c4(0);
      }
      if (!temp_v1) {
        return;
      }
      if (temp_v10 != 0) {
        puVar8 = (unsigned int *)gameGetPlayerData();
        temp_v3 = FUN_002bf520();
        engineForwardVariadicCommand(temp_v3,*puVar8,puVar8[1],puVar8[2],romwright_piece_2_2(temp_v2,*(unsigned short *)(puVar8 + 3)));
        stateAtF4Apply();
      }
      else {
        gameGlobalsQueueValues(psVar4,0);
        FUN_00372100(psVar4,0);
      }
      eventQueueAddUniqueIfValid(0x100020e);
      FUN_003d2150(0x10000cc);
      return;
    }
    temp_v4 = 1;
    FUN_001517b4();
    if (temp_v4 != 0) {
      if (temp_v10 != 0) {
        FUN_0039a41c();
        FUN_0036cf98(0);
      }
      else {
        FUN_002f0384(0);
        FUN_0038b57c(0);
        FUN_0038b57c(1);
        FUN_0038b57c(2);
      }
      *(int *)(temp_v5 + 0x20) = *(int *)(temp_v5 + 0x20) + 1;
      temp_v3 = 0x100020f;
      eventQueueAddUniqueIfValid(temp_v3);
      return;
    }
    temp_v4 = 8;
    FUN_001517b4(8,0);
    if ((temp_v4 == 0) && (temp_v4 = FUN_00284140((int)*(short *)(temp_v5 + 0x1b3a)), temp_v4 != 6)) {
      temp_v4 = 7;
      FUN_001517b4(7,0);
      if ((temp_v4 == 0) && (temp_v4 = FUN_00284140((int)*(short *)(temp_v5 + 0x1b3c)), temp_v4 != 6)) {
        temp_v9 = 9;
        FUN_001517b4(9,1);
        if (temp_v9 == 0) {
          return;
        }
        if (param_1 == 0x13 || param_1 == 0x48) {
          FUN_0031f27c(5,0);
          FUN_0031f208(6);
          FUN_0031f208(0x11);
          FUN_0031f208(0x12);
          FUN_0031f208(3);
        }
        if (param_1 == 0x14 || param_1 == 0x49) {
          FUN_0031f27c(6,0);
          FUN_0031f208(6);
          FUN_0031f208(0x11);
          FUN_0031f208(0x12);
          FUN_0031f208(3);
        }
        if (param_1 == 0x15 || param_1 == 0x4a) {
          FUN_0031f27c(7,0);
          FUN_0031f208(6);
          FUN_0031f208(0x1f);
          FUN_0031f208(0x13);
          FUN_0031f208(3);
        }
        if ((param_1 == 0x16 || param_1 == 0x4b) || (param_1 == 0x18 || param_1 == 0x4d)) {
          FUN_0031f27c();
          FUN_0031f208(4);
          FUN_0031f208(0x24);
          FUN_0031f208(0x25);
          FUN_0031f208(0x26);
          FUN_0031f208(0x27);
          FUN_0031f208(0x28);
          FUN_0031f208(3);
        }
        if (param_1 == 0x17 || param_1 == 0x4c) {
          FUN_0031f27c(9,0);
          FUN_0031f208(4);
          FUN_0031f208(0x32);
          FUN_0031f208(3);
        }
        if (param_1 == 0x19 || param_1 == 0x4e) {
          FUN_0031f27c(0xb,0);
          FUN_0031f208(0x33);
          FUN_0031f208(3);
        }
        *(unsigned char *)(temp_v5 + 0x3d) = 1;
        FUN_0019de98(0,0xf4f4f4ff);
        temp_v2 = ifTouchGetButtonHelpValue();
        *(unsigned short *)(temp_v5 + 0x3a) = temp_v2;
        FUN_0020b660(0x2b);
        temp_v3 = 0x100020e;
        eventQueueAddUniqueIfValid(temp_v3);
        return;
      }
      temp_v4 = FUN_002a4860(temp_v13);
      temp_v8 = FUN_002a4894(temp_v13);
      temp_v8 = temp_v8 + temp_v4;
      if (param_1 != 0x16) {
        if (param_1 != 0x17) {
          if ((param_1 == 0x18) && (psVar4[5] != *(short *)(temp_v9 + temp_v8 * 2))) {
            temp_v3 = 2;
            FUN_0038b57c(temp_v3);
            FUN_002f0384(0);
            *(unsigned char *)(temp_v5 + 0x3c) = 1;
          }
        }
        else if (psVar4[4] != *(short *)(temp_v9 + temp_v8 * 2)) {
          temp_v3 = 1;
          FUN_0038b57c(temp_v3);
          FUN_002f0384(0);
          *(unsigned char *)(temp_v5 + 0x3c) = 1;
        }
      }
      else if (psVar4[3] != *(short *)(temp_v9 + temp_v8 * 2)) {
        FUN_002f0384(0);
        *(unsigned char *)(temp_v5 + 0x3c) = 1;
      }
      temp_v9 = FUN_002a4878(temp_v5 + 0x40);
      temp_v8 = 0;
      temp_v4 = FUN_002c2c4c(temp_v5 + 0x40);
      if (0 < temp_v4) {
        do {
          temp_v9 = temp_v9 + 1;
          temp_v4 = FUN_002c2c4c(temp_v5 + 0x40);
          if (temp_v4 <= temp_v9) {
            temp_v9 = 0;
          }
          temp_v11 = temp_v5 + temp_v9 * 100;
          temp_v4 = FUN_002c2c4c(temp_v11 + 0x2b4);
          temp_v6 = gameFlagIsSet(0x410);
          if ((temp_v6 == 0) && (0 < temp_v9)) {
            temp_v4 = FUN_002c2c4c(temp_v11 + 0x37c);
          }
          if (0 < temp_v4) goto LAB_001fea60;
          temp_v8 = temp_v8 + 1;
          temp_v4 = FUN_002c2c4c(temp_v5 + 0x40);
        } while (temp_v8 < temp_v4);
      }
    }
    else {
      temp_v4 = FUN_002a4860(temp_v13);
      temp_v8 = FUN_002a4894(temp_v13);
      temp_v8 = temp_v8 + temp_v4;
      if (param_1 != 0x16) {
        if (param_1 != 0x17) {
          if ((param_1 == 0x18) && (psVar4[5] != *(short *)(temp_v9 + temp_v8 * 2))) {
            FUN_002f0384(0);
            *(unsigned char *)(temp_v5 + 0x3c) = 1;
          }
        }
        else if (psVar4[4] != *(short *)(temp_v9 + temp_v8 * 2)) {
          temp_v3 = 1;
          FUN_0038b57c(temp_v3);
          FUN_002f0384(0);
          *(unsigned char *)(temp_v5 + 0x3c) = 1;
        }
      }
      else if (psVar4[3] != *(short *)(temp_v9 + temp_v8 * 2)) {
        temp_v3 = 0;
        FUN_0038b57c(temp_v3);
        FUN_002f0384(0);
        *(unsigned char *)(temp_v5 + 0x3c) = 1;
      }
      temp_v9 = FUN_002a4878(temp_v5 + 0x40);
      temp_v8 = 0;
      temp_v4 = FUN_002c2c4c(temp_v5 + 0x40);
      if (0 < temp_v4) {
        do {
          temp_v9 = temp_v9 - 1;
          if (temp_v9 < 0) {
            temp_v9 = FUN_002c2c4c(temp_v5 + 0x40);
            temp_v9 = temp_v9 - 1;
          }
          temp_v11 = temp_v5 + temp_v9 * 100;
          temp_v4 = FUN_002c2c4c(temp_v11 + 0x2b4);
          temp_v6 = gameFlagIsSet(0x410);
          if ((temp_v6 == 0) && (0 < temp_v9)) {
            temp_v4 = FUN_002c2c4c(temp_v11 + 0x37c);
          }
          if (0 < temp_v4) goto LAB_001fea60;
          temp_v8 = temp_v8 + 1;
          temp_v4 = FUN_002c2c4c(temp_v5 + 0x40);
        } while (temp_v8 < temp_v4);
      }
    }
    FUN_002adce8(temp_v13,0);
    *(unsigned int *)(temp_v5 + 0x20) = 2;
    menuItemPlaySe(param_1);
    temp_v3 = 0x1000210;
    eventQueueAddUniqueIfValid(temp_v3);
    return;
  case 4:
    if (temp_v10 != 0) {
      FUN_0028b088(0);
      *(unsigned int *)(temp_v5 + 0x24) = 6;
      FUN_0020b660(5);
      FUN_002adce8(temp_v13,0);
      return;
    }
    temp_v9 = objBStateAllowsAction();
    if (temp_v9 != 0) {
      FUN_003343d8(0xffffffff);
      FUN_0033449c(0);
      FUN_0022e774();
      FUN_002c85b0(0);
      FUN_0028b088(0);
      FUN_0021b274(3,0xffffffff,0);
      *(unsigned int *)(temp_v5 + 0x24) = 6;
      FUN_0020b660(5);
      ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v5 + 0x32ac) + 4));
      if (*(int **)(temp_v5 + 0x32ac) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v5 + 0x32ac) + 4))();
        *(unsigned int *)(temp_v5 + 0x32ac) = 0;
      }
      FUN_002adce8(temp_v13,0);
      FUN_0037c8e4(1,0);
      FUN_0038843c();
      FUN_002f78a0(temp_v5);
      return;
    }
  default:
    return;
  }
LAB_001fea60:
  flaggedEntrySetValueB(temp_v5 + 0x40,temp_v9);
  temp_v3 = FUN_002a4878(temp_v5 + 0x40);
  param_1 = FUN_003da8f4((int)*(char *)(temp_v5 + 0xa4),temp_v3);
  FUN_0028b088();
  FUN_002adce8(temp_v13,0);
  *(unsigned int *)(temp_v5 + 0x20) = 2;
  menuItemPlaySe(param_1);
  temp_v3 = 0x1000210;
  eventQueueAddUniqueIfValid(temp_v3);
  return;
LAB_001fe16c:
  if (param_1 == 0x48) {
    FUN_0026f148(0x48);
    FUN_0037e0b8(0);
    temp_v2 = 0;
    goto LAB_001fe40c;
  }
  if (0x48 >= param_1) {
    switch(param_1) {
    case 0x13:
      FUN_0026f148(0x13);
      temp_v3 = 0;
      FUN_0037e0b8(temp_v3);
      break;
    case 0x14:
      FUN_0026f148(0x14);
      temp_v3 = 0;
      FUN_0037e0b8(temp_v3);
      break;
    case 0x15:
      FUN_0026f148(0x15);
      FUN_0037e0b8(0);
      break;
    case 0x16:
      FUN_0026f148(0x16);
      temp_v3 = 1;
      FUN_0037e0b8(temp_v3);
      break;
    case 0x17:
      FUN_0026f148(0x17);
      FUN_0037e0b8(0);
      break;
    case 0x18:
      FUN_0026f148(0x18);
      temp_v3 = 2;
      FUN_0037e0b8(temp_v3);
      break;
    case 0x19:
      FUN_0026f148(0x19);
      FUN_0037e0b8(0);
    }
  }
  else {
    switch(param_1) {
    case 0x49:
      FUN_0026f148(0x49);
      FUN_0037e0b8(0);
      temp_v2 = 0;
      break;
    case 0x4a:
      FUN_0026f148(0x4a);
      FUN_0037e0b8(0);
      temp_v2 = 0;
      break;
    case 0x4b:
      FUN_0026f148(0x4b);
      FUN_0037e0b8(1);
      temp_v4 = FUN_002a4860(temp_v13);
      temp_v8 = FUN_002a4894(temp_v13);
      temp_v2 = *(unsigned short *)(temp_v9 + (temp_v8 + temp_v4) * 2);
      break;
    case 0x4c:
      FUN_0026f148(0x4c);
      FUN_0037e0b8(0);
      temp_v4 = FUN_002a4860(temp_v13);
      temp_v8 = FUN_002a4894(temp_v13);
      temp_v2 = *(unsigned short *)(temp_v9 + (temp_v8 + temp_v4) * 2);
      break;
    case 0x4d:
      FUN_0026f148(0x4d);
      FUN_0037e0b8(2);
      temp_v4 = FUN_002a4860(temp_v13);
      temp_v8 = FUN_002a4894(temp_v13);
      temp_v2 = *(unsigned short *)(temp_v9 + (temp_v8 + temp_v4) * 2);
      break;
    case 0x4e:
      FUN_0026f148(0x4e);
      FUN_0037e0b8(0);
      FUN_0039a41c(0);
    default:
      goto LAB_001fe410;
    }
LAB_001fe40c:
    FUN_0039a41c(temp_v2);
  }
LAB_001fe410:
  *(unsigned char *)(temp_v5 + 0x3d) = 0;
  FUN_002cb278(temp_v13,0);
  FUN_0028b088(param_1);
  if (temp_v12 == 0 && temp_v10 == 0) {
    FUN_00320940(param_1);
  }
  temp_v9 = *(int *)(temp_v5 + 0x20) + 1;
  *(int *)(temp_v5 + 0x20) = temp_v9;
  return;
}

} /* extern "C" */
