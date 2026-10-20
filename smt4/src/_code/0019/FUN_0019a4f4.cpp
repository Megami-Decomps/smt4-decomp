/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019a4f4` (_code @ 0x19a4f4, 0x3230 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028da40(...);
int FUN_0028e9ec(...);
int FUN_002942c4(...);
int FUN_002958f8(...);
int FUN_002bf810(...);
int FUN_00338bd4(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int __aeabi_idivmod(...);

int FUN_001990d4(...);
int FUN_00199424(...);
int FUN_0028ca0c(...);
int FUN_0028ca60(...);
int FUN_0028caf8(...);
int FUN_0028cb40(...);
int FUN_0028cdec(...);
int FUN_0028cf30(...);
int FUN_0028cfd8(void);
int FUN_00292c0c(void);
int FUN_0029ca58(void);
int FUN_0029cc44(...);
int FUN_0029ee6c(...);
int uiSpriteSetImageKeyframe(...);
int dataTable08Sub1GetRecord(...);
int FUN_002b8ee0(...);
int timerStart(...);
int FUN_00338c38(void);

int FUN_00190ab0(...);
int FUN_0028d310(void);
int FUN_0028d320(...);
int FUN_0028d5ac(void);
int FUN_00292f4c(...);
int FUN_002987d8(...);
int FUN_0029e17c(void);
int useCounterStart(void);
int FUN_0029e328(...);
int sortMenuCreate(...);
int FUN_0029efa8(...);
int FUN_0029efc0(...);
int gameGetUnitRecord(...);
int FUN_002ae164(void);
int buttonHelpSetPreset(...);
int FUN_002bee58(...);
int FUN_002bf4f8(...);

int FUN_00292dd0(...);
int flagBitIsSet(...);
int btlGetMainState(void);
int FUN_00297b94(...);
int FUN_00297ca4(...);
int playSceneSetState(...);
int FUN_0029e8b8(...);
int FUN_0029e908(...);
int FUN_0029eb5c(char *, int);
int FUN_0029efd8(...);
int FUN_0029f5d8(...);
int FUN_0029f848(...);
int gameGetSlotTable(void);
int gameGetPlayerData(void);
int FUN_002bc01c(...);
int FUN_002bf818(...);
int FUN_002c1658(...);

/* stack frame of param_3: 14 slot(s), 50 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned char sp64; /* 0x64: local_64 */
    unsigned char sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_3_stack;

extern signed char DAT_00435de0; /* 0x435de0 */
extern signed char DAT_00435de1; /* 0x435de1 */
extern unsigned int DAT_00435de4; /* 0x435de4 */
extern int DAT_00435de8; /* 0x435de8 */
extern int DAT_00435dec; /* 0x435dec */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00190ab0. */
/* Supplied declaration required: FUN_001990d4. */
/* Supplied declaration required: FUN_00199424. */
/* Supplied declaration required: FUN_0028ca0c. */
/* Supplied declaration required: FUN_0028ca60. */
extern unsigned int FUN_0028cab8(void);
extern int statusScreenIsClosed(void);
/* Supplied declaration required: FUN_0028caf8. */
/* Supplied declaration required: FUN_0028cb40. */
/* Supplied declaration required: FUN_0028cdec. */
/* Supplied declaration required: FUN_0028cf30. */
extern int FUN_0028cfbc(int);
/* Supplied declaration required: FUN_0028cfd8. */
extern unsigned long long FUN_0028d1f4(unsigned short);
extern unsigned int FUN_0028d24c(void);
extern unsigned int listGetU16OrZero(unsigned int, int);
/* Supplied declaration required: FUN_0028d310. */
/* Supplied declaration required: FUN_0028d320. */
extern int FUN_0028d594(void);
/* Supplied declaration required: FUN_0028d5ac. */
/* Supplied declaration required: FUN_0028da40. */
extern int FUN_0028dba8(unsigned int);
extern int FUN_0028e9a0(unsigned int);
extern int flagValueIsPositive(unsigned int);
/* Supplied declaration required: FUN_0028e9ec. */
/* Supplied declaration required: FUN_00292c0c. */
/* Supplied declaration required: FUN_00292dd0. */
/* Supplied declaration required: flagBitIsSet. */
/* Supplied declaration required: FUN_00292f4c. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_002942c4. */
extern int FUN_00295618(void);
/* Supplied declaration required: FUN_002958f8. */
/* Supplied declaration required: FUN_00297b94. */
/* Supplied declaration required: FUN_00297ca4. */
/* Supplied declaration required: playSceneSetState. */
/* Supplied declaration required: FUN_002987d8. */
extern int FUN_0029a924(unsigned int);
extern int FUN_0029a9d4(unsigned int, unsigned int);
extern int FUN_0029c3ec(void);
/* Supplied declaration required: FUN_0029ca58. */
/* Supplied declaration required: FUN_0029cc44. */
extern int FUN_0029d644(char *);
extern int FUN_0029d65c(int);
extern int FUN_0029e130(void);
/* Supplied declaration required: FUN_0029e17c. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: sortMenuCreate. */
/* Supplied declaration required: FUN_0029e8b8. */
/* Supplied declaration required: FUN_0029e908. */
extern int FUN_0029e958(int);
/* Supplied declaration required: FUN_0029eb5c. */
extern int flagWordTestBit(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_0029efa8. */
/* Supplied declaration required: FUN_0029efc0. */
/* Supplied declaration required: FUN_0029efd8. */
/* Supplied declaration required: FUN_0029f5d8. */
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: gameGetUnitRecord. */
/* Supplied declaration required: gameGetSlotTable. */
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */
/* Supplied declaration required: gameGetPlayerData. */
extern int FUN_002b6ad0(void);
/* Supplied declaration required: buttonHelpSetPreset. */
extern int FUN_002b8d54(void);
extern int FUN_002b8d68(void);
/* Supplied declaration required: FUN_002b8ee0. */
/* Supplied declaration required: FUN_002bc01c. */
/* Supplied declaration required: timerStart. */
extern short vec2GetYInt(int);
extern short vec2GetXInt(int);
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf810. */
/* Supplied declaration required: FUN_002bf818. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: FUN_00338bd4. */
/* Supplied declaration required: FUN_00338c38. */
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_0019a4f4(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 20 goto(s); irregular input(s): in_fpscr; 63 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  short *psVar8;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int *puVar13;
  int *piVar14;
  int temp_v12;
  unsigned int temp_v13;
  unsigned short temp_v14;
  unsigned char temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned char temp_v19;
  unsigned char temp_v20;
  unsigned char temp_v21;
  unsigned int in_fpscr;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned long long temp_v29;
  unsigned long long temp_v30;
  unsigned int *temp_v31;
  unsigned int temp_v32;
  char *temp_v33;
  unsigned int temp_v34;
  unsigned char *temp_v35;
  char temp_v36 [4];
  char temp_v37 [4];
  int temp_v38;
  int temp_v39;
  int temp_v40;
  int temp_v41;
  unsigned char *temp_v42;
  int temp_v43;
  unsigned int *temp_v44;
  
  temp_v17 = 0;
  temp_v36[0] = '\0';
  temp_v37[0] = '\0';
  temp_v5 = btlGetMainState();
  temp_v33 = (char *)(param_1 + 0x3218);
  if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x40) != 0) {
    if (DAT_00435de0 == '\0') {
      if ((*(int *)(param_1 + 0x305c) == 0) && (temp_v5 = gameFlagIsSet(0x410), temp_v5 != 0)) {
        temp_v6 = gameGetPlayerData();
        temp_v19 = *(short *)(temp_v6 + 2) != 0;
        if (temp_v19) {
          temp_v6 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
        }
        if (temp_v19 && temp_v6 != 0) {
          param_3 = 6;
          temp_v31 = (unsigned int *)0x1;
          temp_v32 = 1;
          FUN_0029f848(temp_v33,0x191);
          FUN_0029eb5c(temp_v33,DAT_00435de8 + 2);
          goto LAB_0019a5e0;
        }
      }
      param_3 = 6;
      temp_v31 = (unsigned int *)0x1;
      temp_v32 = 1;
      FUN_0029f848(temp_v33,400,6,1);
      FUN_0029eb5c(temp_v33,DAT_00435de8 + 1);
    }
LAB_0019a5e0:
    DAT_00435de0 = 1;
  }
  else {
    if (DAT_00435de0 != '\0') {
      if (*(int *)(param_1 + 0x305c) != 0) {
        temp_v7 = param_1 + *(int *)(param_1 + 0x305c) * 0x10;
        temp_v5 = 1;
        temp_v3 = *(short *)(temp_v7 + 0x341e);
        if (*(short *)(temp_v7 + 0x341c) != 0) {
          temp_v5 = 2;
        }
        temp_v16 = 0;
        temp_v8 = 3;
        psVar8 = (short *)(temp_v7 + 0x341c);
        do {
          if (temp_v3 != 0) {
            temp_v5 = temp_v5 + 1;
          }
          temp_v3 = psVar8[3];
          if (psVar8[2] != 0) {
            temp_v16 = temp_v16 + 1;
          }
          temp_v8 = temp_v8 - 1;
          psVar8 = psVar8 + 2;
        } while (temp_v8 != 0);
        temp_v5 = temp_v5 + temp_v16;
        temp_v3 = *(short *)(temp_v7 + 0x342a);
      }
      else {
        temp_v5 = 2;
        temp_v7 = gameFlagIsSet(0x410);
        if (temp_v7 != 0) {
          temp_v6 = gameGetPlayerData();
          temp_v19 = *(short *)(temp_v6 + 2) != 0;
          if (temp_v19) {
            temp_v6 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
          }
          if (!temp_v19 || temp_v6 == 0) {
            temp_v5 = 1;
          }
        }
        else {
          temp_v5 = 1;
        }
        temp_v7 = 0;
        temp_v3 = *(short *)(param_1 + 0x341e);
        if (*(short *)(param_1 + 0x341c) != 0) {
          temp_v5 = temp_v5 + 1;
        }
        temp_v16 = 3;
        psVar8 = (short *)(param_1 + 0x341c);
        do {
          if (temp_v3 != 0) {
            temp_v5 = temp_v5 + 1;
          }
          temp_v3 = psVar8[3];
          if (psVar8[2] != 0) {
            temp_v7 = temp_v7 + 1;
          }
          temp_v16 = temp_v16 - 1;
          psVar8 = psVar8 + 2;
        } while (temp_v16 != 0);
        temp_v5 = temp_v5 + temp_v7;
        temp_v3 = *(short *)(param_1 + 0x342a);
      }
      if (temp_v3 != 0) {
        temp_v5 = temp_v5 + 1;
      }
      temp_v31 = (unsigned int *)0x0;
      temp_v32 = 1;
      param_3 = 6;
      FUN_0029f848(temp_v33,temp_v5,6,1);
    }
    DAT_00435de0 = 0;
  }
  temp_v5 = btlGetMainState();
  temp_v34 = param_1 + 0x3344;
  if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x1000) != 0) {
    if (DAT_00435de1 == '\0') {
      param_3 = 6;
      temp_v31 = (unsigned int *)0x0;
      temp_v32 = 1;
      FUN_0029f848(temp_v34,6,6,1);
      DAT_00435de1 = '\x01';
    }
  }
  else if (DAT_00435de1 != '\0') {
    temp_v7 = 0;
    temp_v5 = temp_v7;
    do {
      temp_v16 = flagBitIsSet(temp_v7 + 0x2e);
      if (temp_v16 != 0) {
        temp_v5 = temp_v5 + 1;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 6);
    temp_v31 = (unsigned int *)0x0;
    temp_v32 = 1;
    param_3 = 6;
    FUN_0029f848(temp_v34,temp_v5,6,1);
    DAT_00435de1 = '\0';
  }
  FUN_002bf818(param_1 + 0xac);
  FUN_002bf818(param_1 + 0x598);
  FUN_002bf818(param_1 + 0x624);
  FUN_002bf818(param_1 + 0x6b0);
  FUN_002bf818(param_1 + 0x122c);
  temp_v39 = gameGetSlotTable();
  temp_v5 = 0;
  do {
    temp_v7 = FUN_002b8d68();
    if (temp_v7 == *(short *)(param_1 + temp_v5 * 2 + 0x5716)) goto LAB_0019a82c;
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x20);
  temp_v5 = -1;
LAB_0019a82c:
  temp_v7 = 0;
  *(unsigned char *)(param_1 + 0x3060) = 0x20;
  do {
    if (temp_v7 <= *(int *)(param_1 + 0x3044)) {
      FUN_002bf818(param_1 + temp_v7 * 0x8c + 0xe58);
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 6);
  switch(*(unsigned int *)(param_1 + 0x3048)) {
  case 1:
    if ((*(int *)(param_1 + 0x59bc) == 0) || (*(char *)(param_1 + 0x307c) != '\0')) break;
    temp_v5 = FUN_0029e908(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
    temp_v33 = temp_v37;
    temp_v32 = 0xffffffff;
    temp_v34 = 1;
    temp_v31 = (unsigned int *)0xffffffff;
    temp_v35 = (unsigned char *)0x1;
    temp_v17 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
    FUN_0029f5d8(temp_v17,0,param_1 + 0x5716,0xffffffff);
    if (temp_v17 != 0) {
      temp_v9 = FUN_00297ca4(param_1,1);
      FUN_00297b94(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
      if (temp_v5 == 0) {
        temp_v5 = FUN_0029e908(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
        goto joined_r0x0019aa34;
      }
      temp_v5 = FUN_0029e908(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
      if (temp_v5 != 0) break;
      temp_v9 = 1;
      FUN_00292dd0(temp_v9);
      break;
    }
    temp_v17 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
    FUN_0029efd8(temp_v17,1);
    if (temp_v17 != 0) {
      temp_v9 = FUN_00297ca4(param_1,1);
      FUN_00297b94(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
      temp_v17 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
      if (temp_v5 != 0) {
        temp_v5 = FUN_0029e908(temp_v17);
        if (temp_v5 == 0) {
          FUN_00292dd0(1);
        }
        break;
      }
      temp_v5 = FUN_0029e908(temp_v17);
joined_r0x0019aa34:
      if (temp_v5 == 0) break;
      temp_v9 = 0;
      FUN_00292dd0(temp_v9);
      break;
    }
    temp_v5 = 0;
    FUN_002c1658(0,1);
    if (temp_v5 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    if (temp_v5 == 0 && temp_v37[0] == '\0') {
      temp_v5 = 1;
      FUN_002c1658(1,1);
      if (temp_v5 != 0) {
        *(unsigned char *)(param_1 + 0x3060) = 1;
        if (*(char *)(param_1 + 0x3082) != '\0') {
          *(unsigned char *)(param_1 + 0x3083) = 1;
          playSceneSetState(param_1,0x2d,1);
          temp_v9 = 0x100016e;
          FUN_002bc01c(temp_v9);
          break;
        }
        temp_v5 = FUN_0029e908(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
        if (temp_v5 < 1) break;
        FUN_0029e8b8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088,0);
        temp_v9 = FUN_00297ca4(param_1,1);
        FUN_00297b94(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
        FUN_00292dd0(1);
        temp_v9 = 0x100016e;
        FUN_002bc01c(temp_v9);
        break;
      }
      temp_v5 = 9;
      FUN_002c1658(9,1);
      if (temp_v5 != 0) {
        *(unsigned char *)(param_1 + 0x3060) = 9;
        playSceneSetState(param_1,2,1);
        temp_v9 = 0x100016d;
        FUN_002bc01c(temp_v9);
        break;
      }
      temp_v5 = flagBitIsSet(0x7f);
      if (temp_v5 == 0) break;
      temp_v5 = 10;
      FUN_002c1658(10,1);
      if (temp_v5 == 0) break;
      *(unsigned char *)(param_1 + 0x3060) = 10;
      playSceneSetState(param_1,3,1);
      temp_v9 = 0x100016d;
      FUN_002bc01c(temp_v9);
      break;
    }
    temp_v5 = FUN_00190ab0(param_1);
    if (temp_v5 != 0) {
      temp_v9 = 0x100016d;
      FUN_002bc01c(temp_v9);
      break;
    }
    temp_v9 = 0x100016e;
    FUN_002bc01c(temp_v9);
    break;
  case 3:
    playSceneSetState(param_1,4,0);
    sortMenuCreate(0xffffffff,1);
    FUN_0029e328(10);
    FUN_0029e328(9);
    useCounterStart();
    break;
  case 4:
    temp_v5 = useCounterIsFinished();
    if (temp_v5 == 0) {
      temp_v5 = FUN_0029e130();
      if (temp_v5 != 9) {
        if (temp_v5 == 10) {
          FUN_0028d5ac();
          FUN_0029e17c();
          playSceneSetState(param_1,5,0);
        }
      }
      else {
        *(unsigned int *)(param_1 + 0x3050) = *(unsigned int *)(param_1 + 0x304c);
        playSceneSetState(param_1,7,0);
        FUN_0028d5ac();
        FUN_0029e17c();
      }
      break;
    }
    FUN_0029e17c();
    if (*(int *)(param_1 + 0x304c) - 8U < 6) {
      FUN_00292f4c(param_1);
    }
    else {
      temp_v9 = FUN_00297ca4(param_1,0);
      FUN_00297b94(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
    }
    playSceneSetState(param_1,*(unsigned int *)(param_1 + 0x304c),0);
    break;
  case 5:
    FUN_002bee58(param_1 + 0x11a0,0);
    *(unsigned int *)(param_1 + 0x5918) = 1;
    playSceneSetState(param_1,6,0);
    temp_v9 = 0x33;
    buttonHelpSetPreset(temp_v9);
    break;
  case 8:
    goto LAB_0019ade4;
  case 9:
    param_3 = 1;
    playSceneSetState(param_1,8);
    FUN_00292f4c(param_1);
LAB_0019ade4:
    temp_v5 = FUN_0028d594();
    if (temp_v5 == 0) {
      FUN_00292f4c(param_1);
    }
    if (*(char *)(param_1 + 0x307c) != '\0') break;
    temp_v5 = gameFlagIsSet(0x525);
    FUN_00297ca4(param_1,1);
    if (temp_v5 == 0) {
      temp_v9 = FUN_002bf4f8(0x15,200);
      temp_v32 = (unsigned int)*(short *)(param_1 + 0x572a);
      temp_v33 = temp_v36;
      temp_v34 = 0;
      temp_v35 = (unsigned char *)0x1;
      temp_v31 = (unsigned int *)(int)*(short *)(param_1 + 0x5728);
      temp_v17 = *(int *)(param_1 + 0x340c);
      param_3 = param_1 + 0x572c;
      FUN_0029f5d8(temp_v17,temp_v9,param_3,(int)*(short *)(param_1 + 0x5726));
      if (temp_v17 == 0) {
        temp_v17 = *(int *)(param_1 + 0x340c);
        FUN_0029efd8(temp_v17,1);
        if (temp_v17 == 0) goto LAB_0019aebc;
      }
      FUN_00292f4c(param_1);
      break;
    }
    temp_v17 = FUN_0029d65c((int)*(short *)(param_1 + 0x572c));
    if (temp_v17 == 6) {
      temp_v36[0] = '\x01';
    }
LAB_0019aebc:
    temp_v17 = 0;
    FUN_002c1658(0,1);
    if (temp_v17 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    if (!(temp_v17 == 0 && temp_v36[0] == '\0')) {
      temp_v20 = 0;
      temp_v31 = (unsigned int *)(param_1 + 0x340c);
      temp_v33 = (char *)0x0;
      temp_v19 = 0;
      temp_v5 = FUN_0029efc0(*temp_v31);
      temp_v17 = FUN_0029efa8(*temp_v31);
      temp_v5 = temp_v5 + temp_v17;
      temp_v17 = FUN_00297ca4(param_1,1);
      if (temp_v17 == 1) {
        if (*(int *)(param_1 + 0x305c) != 0) {
          if (temp_v5 != 0) {
            temp_v17 = btlGetMainState();
            if ((*(unsigned int *)(temp_v17 + 0x44a8) & 0x40) != 0) {
              DAT_00435de8 = temp_v5 - 1;
              *(int *)(param_1 + 0x3068) = temp_v5;
              temp_v6 = *(unsigned int *)(param_1 + 0x3068);
            }
            else {
              temp_v6 = (unsigned int)*(unsigned short *)
                             (param_1 + *(int *)(param_1 + 0x305c) * 0x10 + temp_v5 * 2 + 0x341a);
              *(unsigned int *)(param_1 + 0x3068) = temp_v6;
            }
            FUN_002ae164();
            temp_v5 = gameGetSlotTable();
            if (-1 < *(char *)(*(int *)(param_1 + 0x305c) + temp_v5 + 0x9107)) {
              temp_v5 = gameGetSlotTable();
              temp_v9 = *(unsigned int *)(param_1 + 0x3068);
              temp_v5 = FUN_002987d8((int)*(char *)(*(int *)(param_1 + 0x305c) + temp_v5 + 0x9107),
                                   temp_v9);
              if ((temp_v5 == 0) || (temp_v5 = FUN_0028d320(temp_v9), temp_v5 != 0)) {
                temp_v20 = 0;
              }
              else {
                temp_v20 = 1;
              }
            }
            piVar14 = (int *)(param_1 + 0x3504);
            *piVar14 = 0;
            temp_v5 = FUN_0029a924(*(unsigned int *)(param_1 + 0x3068));
            param_3 = *(unsigned int *)(param_1 + 0x305c);
            *(int *)(param_1 + param_3 * 4 + 0x3470) = -temp_v5;
            temp_v5 = gameGetSlotTable();
            temp_v5 = gameGetUnitRecord((int)*(char *)(*(int *)(param_1 + 0x305c) + temp_v5 + 0x9107));
            if ((*(unsigned int *)(temp_v6 + 0x38) & 0x200) != 0) {
              *piVar14 = -(int)*(short *)(temp_v5 + 0x2a);
            }
            temp_v10 = *(unsigned int *)(temp_v6 + 0x38);
            if ((temp_v10 & 0x400) != 0) {
              *piVar14 = -(*(short *)(temp_v5 + 0x2a) - 1);
            }
            goto LAB_0019b2b0;
          }
          *(unsigned int *)(param_1 + 0x3068) = 0;
        }
        else {
          if (temp_v5 != 0) {
            if ((temp_v5 == 1) && (temp_v17 = gameFlagIsSet(0x410), temp_v17 != 0)) {
              temp_v6 = gameGetPlayerData();
              temp_v20 = *(short *)(temp_v6 + 2) != 0;
              if (temp_v20) {
                temp_v6 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
              }
              if (temp_v20 && temp_v6 != 0) {
                *(unsigned int *)(param_1 + 0x3068) = 2;
                FUN_002bee58(param_1 + 0x11a0,0);
                playSceneSetState(param_1,0x12,1);
                temp_v9 = 0x100016d;
                FUN_002bc01c(temp_v9);
                break;
              }
            }
            temp_v7 = 2;
            temp_v17 = gameFlagIsSet(0x410);
            if (temp_v17 != 0) {
              temp_v6 = gameGetPlayerData();
              temp_v20 = *(short *)(temp_v6 + 2) != 0;
              if (temp_v20) {
                temp_v6 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
              }
              if (!temp_v20 || temp_v6 == 0) {
                temp_v7 = 1;
              }
            }
            else {
              temp_v7 = 1;
            }
            temp_v17 = btlGetMainState();
            if ((*(unsigned int *)(temp_v17 + 0x44a8) & 0x40) != 0) {
              DAT_00435de8 = temp_v5 - temp_v7;
              *(int *)(param_1 + 0x3068) = DAT_00435de8 + 1;
              temp_v6 = *(unsigned int *)(param_1 + 0x3068);
            }
            else {
              temp_v6 = (unsigned int)*(unsigned short *)
                             (param_1 + *(int *)(param_1 + 0x305c) * 0x10 + (temp_v5 - temp_v7) * 2 +
                             0x341c);
              *(unsigned int *)(param_1 + 0x3068) = temp_v6;
            }
            FUN_002ae164();
            temp_v9 = *(unsigned int *)(param_1 + 0x3068);
            temp_v5 = FUN_002987d8(0xffffffff,temp_v9);
            if ((temp_v5 == 0) || (temp_v5 = FUN_0028d320(temp_v9), temp_v5 != 0)) {
              temp_v20 = 0;
            }
            else {
              temp_v20 = 1;
            }
            piVar14 = (int *)(param_1 + 0x3504);
            *piVar14 = 0;
            temp_v5 = FUN_0029a9d4(*(unsigned int *)(param_1 + 0x3068),1);
            param_3 = *(unsigned int *)(param_1 + 0x305c);
            temp_v10 = -temp_v5;
            *(unsigned int *)(param_1 + param_3 * 4 + 0x3470) = temp_v10;
            if ((*(unsigned int *)(temp_v6 + 0x38) & 0x200) != 0) {
              temp_v30 = FUN_0028d310();
              temp_v10 = (unsigned int)((unsigned long long)temp_v30 >> 0x20);
              *piVar14 = -(int)temp_v30;
            }
            if ((*(unsigned int *)(temp_v6 + 0x38) & 0x400) != 0) {
              temp_v30 = FUN_0028d310();
              temp_v10 = (unsigned int)((unsigned long long)temp_v30 >> 0x20);
              *piVar14 = -((int)temp_v30 - 1);
            }
            goto LAB_0019b2b0;
          }
          *(unsigned int *)(param_1 + 0x3068) = 1;
        }
        FUN_002bee58(param_1 + 0x11a0,0);
        playSceneSetState(param_1,0x12,1);
        temp_v9 = 0x100016d;
        FUN_002bc01c(temp_v9);
        break;
      }
      temp_v17 = FUN_00297ca4(param_1,1);
      if (temp_v17 == 2) {
        temp_v17 = btlGetMainState();
        if ((*(unsigned int *)(temp_v17 + 0x44a8) & 0x40) != 0) {
          temp_v9 = btlGetMainState();
          temp_v9 = listGetU16OrZero(temp_v9,temp_v5);
          *(unsigned int *)(param_1 + 0x3068) = temp_v9;
          temp_v6 = *(unsigned int *)(param_1 + 0x3068);
          DAT_00435dec = temp_v5;
        }
        else {
          btlGetMainState();
          temp_v6 = FUN_0028d24c();
          *(unsigned int *)(param_1 + 0x3068) = temp_v6;
        }
        FUN_002ae164();
        temp_v5 = btlGetMainState();
        if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x40) == 0) {
          piVar14 = (int *)gameGetSlotTable();
          temp_v5 = *piVar14;
          temp_v30 = FUN_0028d1f4(*(unsigned short *)(temp_v6 + 0x20));
          temp_v10 = (unsigned int)((unsigned long long)temp_v30 >> 0x20);
          if (temp_v5 < (int)temp_v30) goto LAB_0019b2b0;
        }
        temp_v20 = 1;
        temp_v30 = FUN_0028d320(*(unsigned int *)(param_1 + 0x3068));
        temp_v10 = (unsigned int)((unsigned long long)temp_v30 >> 0x20);
        if ((int)temp_v30 != 0) {
          temp_v20 = 0;
        }
LAB_0019b2b0:
        if (temp_v6 != 0) {
          temp_v6 = *(unsigned int *)(temp_v6 + 0x28);
          temp_v19 = (temp_v6 & 0x1e0) != 0;
          if (temp_v19) {
            temp_v10 = temp_v6 << 0x17;
          }
          temp_v21 = temp_v10 >> 0x1c != 1;
          if (temp_v19 && temp_v21) {
            param_3 = 6;
          }
          temp_v19 = (!temp_v19 || !temp_v21) || param_3 == temp_v10 >> 0x1c;
          if ((temp_v6 & 0x1e0) == 0xa0) {
            temp_v33 = (char *)0x1;
          }
        }
        if (temp_v20) {
          if (temp_v19) {
            FUN_002bee58(param_1 + 0x11a0,0);
            playSceneSetState(param_1,0x12,1);
          }
          else if (temp_v33 != (char *)0x0) {
            temp_v5 = 0;
            *(unsigned int *)(param_1 + 0x345c) = 0x1010101;
            do {
              temp_v17 = gameGetSlotTable();
              if (*(char *)(temp_v17 + temp_v5 + 0x9108) < '\0') {
                *(unsigned char *)(param_1 + temp_v5 + 0x345d) = 0;
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < 3);
            playSceneSetState(param_1,0x16,1);
            buttonHelpSetPreset(0x38);
          }
          else {
            playSceneSetState(param_1,0x14,1);
          }
          temp_v9 = 0x100016d;
          FUN_002bc01c(temp_v9);
          break;
        }
      }
      temp_v9 = 0x100016e;
    }
    else {
      if (temp_v5 != 0) break;
      temp_v5 = 1;
      FUN_002c1658(1,1);
      if (temp_v5 != 0) {
        *(unsigned char *)(param_1 + 0x3060) = 1;
        *(unsigned int *)(param_1 + 0x3504) = 0;
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = 0;
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = 0;
        temp_v9 = FUN_00297ca4(param_1,1);
        FUN_00297b94(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
        playSceneSetState(param_1,1);
        FUN_00297ca4(param_1,1);
        temp_v9 = 0x100016e;
        FUN_002bc01c(temp_v9);
        break;
      }
      temp_v5 = 9;
      FUN_002c1658(9,1);
      if (temp_v5 == 0) {
        temp_v5 = flagBitIsSet(0x7f);
        if (temp_v5 != 0) {
          temp_v5 = 10;
          FUN_002c1658(10,1);
          if (temp_v5 != 0) {
            *(unsigned char *)(param_1 + 0x3060) = 10;
            playSceneSetState(param_1,3,1);
            temp_v9 = 0x100016d;
            FUN_002bc01c(temp_v9);
            break;
          }
        }
        temp_v5 = FUN_0029e908(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
        temp_v33 = temp_v37;
        temp_v32 = 0xffffffff;
        temp_v34 = 1;
        temp_v31 = (unsigned int *)0xffffffff;
        temp_v35 = (unsigned char *)0x1;
        temp_v17 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
        FUN_0029f5d8(temp_v17,0,param_1 + 0x5716,0xffffffff);
        temp_v7 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
        if (temp_v17 != 0) {
          temp_v17 = FUN_0029e908();
          if (temp_v17 != temp_v5) {
LAB_0019b58c:
            *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = 0;
            *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = 0;
            *(unsigned int *)(param_1 + 0x3504) = 0;
            playSceneSetState(param_1,1);
            temp_v9 = FUN_00297ca4(param_1,1);
            FUN_00297b94(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
            temp_v5 = FUN_00297ca4(param_1,1);
            if ((temp_v5 == 1 || temp_v5 == 2) || (temp_v5 == 7 || temp_v5 == 3)) {
              FUN_00190ab0(param_1);
            }
            break;
          }
        }
        else {
          FUN_0029efd8(temp_v7,1);
          if (temp_v7 != 0) goto LAB_0019b58c;
        }
        temp_v5 = FUN_0029efc0(*(unsigned int *)(param_1 + 0x340c));
        temp_v17 = FUN_0029efa8(*(unsigned int *)(param_1 + 0x340c));
        piVar14 = (int *)(param_1 + 0x3504);
        temp_v6 = temp_v5 + temp_v17;
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = 0;
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = 0;
        *piVar14 = 0;
        temp_v5 = FUN_00297ca4(param_1,1);
        if (temp_v5 != 1) break;
        if (*(int *)(param_1 + 0x305c) != 0) {
          if (temp_v6 != 0) {
            temp_v5 = btlGetMainState();
            if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x40) == 0) {
              temp_v6 = (unsigned int)*(unsigned short *)
                             (param_1 + *(int *)(param_1 + 0x305c) * 0x10 + temp_v6 * 2 + 0x341a);
            }
            temp_v10 = temp_v6;
            FUN_002ae164();
            temp_v5 = gameGetSlotTable();
            if (-1 < *(char *)(*(int *)(param_1 + 0x305c) + temp_v5 + 0x9107)) {
              temp_v5 = gameGetSlotTable();
              temp_v5 = FUN_002987d8((int)*(char *)(*(int *)(param_1 + 0x305c) + temp_v5 + 0x9107),temp_v6
                                  );
              if (temp_v5 != 0) {
                FUN_0028d320(temp_v6);
              }
            }
            temp_v5 = FUN_0029a924(temp_v6);
            *(int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = -temp_v5;
            temp_v5 = gameGetSlotTable();
            temp_v5 = gameGetUnitRecord((int)*(char *)(*(int *)(param_1 + 0x305c) + temp_v5 + 0x9107));
            if ((*(unsigned int *)(temp_v10 + 0x38) & 0x200) != 0) {
              temp_v3 = *(short *)(temp_v5 + 0x2a);
              *piVar14 = -(int)temp_v3;
              *(int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = -(int)temp_v3;
            }
            if ((*(unsigned int *)(temp_v10 + 0x38) & 0x400) != 0) {
              temp_v5 = -(*(short *)(temp_v5 + 0x2a) - 1);
              *piVar14 = temp_v5;
              *(int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = temp_v5;
            }
          }
          break;
        }
        if (temp_v6 == 0) break;
        if ((temp_v6 == 1) && (temp_v5 = gameFlagIsSet(0x410), temp_v5 != 0)) {
          temp_v10 = gameGetPlayerData();
          temp_v19 = *(short *)(temp_v10 + 2) != 0;
          if (temp_v19) {
            temp_v10 = (unsigned int)*(unsigned short *)(temp_v10 + 4);
          }
          if (temp_v19 && temp_v10 != 0) break;
        }
        temp_v17 = 2;
        temp_v5 = gameFlagIsSet(0x410);
        if (temp_v5 != 0) {
          temp_v10 = gameGetPlayerData();
          temp_v19 = *(short *)(temp_v10 + 2) != 0;
          if (temp_v19) {
            temp_v10 = (unsigned int)*(unsigned short *)(temp_v10 + 4);
          }
          if (!temp_v19 || temp_v10 == 0) {
            temp_v17 = 1;
          }
        }
        else {
          temp_v17 = 1;
        }
        temp_v5 = btlGetMainState();
        if ((*(unsigned int *)(temp_v5 + 0x44a8) & 0x40) != 0) {
          temp_v6 = (temp_v6 - temp_v17) + 1;
        }
        else {
          temp_v6 = (unsigned int)*(unsigned short *)
                         (param_1 + *(int *)(param_1 + 0x305c) * 0x10 + (temp_v6 - temp_v17) * 2 +
                         0x341c);
        }
        temp_v10 = temp_v6;
        FUN_002ae164();
        temp_v5 = FUN_002987d8(0xffffffff,temp_v6);
        if (temp_v5 != 0) {
          FUN_0028d320(temp_v6);
        }
        temp_v5 = FUN_0029a9d4(temp_v6,1);
        *(int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = -temp_v5;
        if ((*(unsigned int *)(temp_v10 + 0x38) & 0x200) != 0) {
          temp_v5 = FUN_0028d310();
          *piVar14 = -temp_v5;
          *(int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = -temp_v5;
        }
        if ((*(unsigned int *)(temp_v10 + 0x38) & 0x400) != 0) {
          temp_v5 = FUN_0028d310();
          *piVar14 = -(temp_v5 - 1);
          *(int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = -(temp_v5 - 1);
        }
        break;
      }
      *(unsigned char *)(param_1 + 0x3060) = 9;
      playSceneSetState(param_1,2,1);
      temp_v9 = 0x100016d;
    }
    FUN_002bc01c(temp_v9);
    break;
  case 10:
    goto LAB_0019b924;
  case 0xb:
    playSceneSetState(param_1,10,1);
    FUN_00292f4c(param_1);
LAB_0019b924:
    temp_v17 = FUN_0028d594();
    if (temp_v17 == 0) {
      FUN_00292f4c(param_1);
    }
    if (*(char *)(param_1 + 0x307c) != '\0') break;
    temp_v9 = FUN_002bf4f8(0x15,200);
    temp_v32 = (unsigned int)*(short *)(param_1 + 0x572a);
    temp_v33 = temp_v36;
    temp_v34 = 0;
    temp_v35 = (unsigned char *)0x1;
    piVar14 = (int *)(param_1 + 0x340c);
    temp_v31 = (unsigned int *)(int)*(short *)(param_1 + 0x5728);
    temp_v17 = *piVar14;
    FUN_0029f5d8(temp_v17,temp_v9,param_1 + 0x572c,(int)*(short *)(param_1 + 0x5726));
    if (temp_v17 != 0) {
      FUN_00292f4c(param_1);
      break;
    }
    temp_v17 = *piVar14;
    FUN_0029efd8(temp_v17,1);
    if (temp_v17 != 0) {
      FUN_00292f4c(param_1);
      break;
    }
    temp_v17 = 0;
    FUN_002c1658(0,1);
    if (temp_v17 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    temp_v19 = temp_v17 != 0;
    temp_v20 = temp_v36[0] != '\0';
    if (temp_v19 || temp_v20) {
      temp_v5 = 0;
    }
    temp_v6 = (unsigned int)(temp_v19 || temp_v20);
    if (temp_v19 || temp_v20) {
      do {
        temp_v17 = flagValueIsPositive(temp_v6);
        if ((temp_v17 != 0) && (temp_v17 = FUN_0028e9a0(temp_v6), temp_v17 != 0)) {
          temp_v5 = temp_v5 + 1;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x3d);
      if (temp_v5 < 1) {
        playSceneSetState(param_1,1);
        temp_v9 = 0x100016d;
        FUN_002bc01c(temp_v9);
        break;
      }
      temp_v5 = FUN_0029efc0(*piVar14);
      temp_v17 = FUN_0029efa8(*piVar14);
      temp_v10 = (unsigned int)*(unsigned short *)(param_1 + (temp_v17 + temp_v5) * 2 + 0x3480);
      temp_v6 = temp_v10;
      FUN_0028cfd8();
      if (temp_v6 == 0) {
        dataTable08Sub1GetRecord();
        temp_v6 = (unsigned int)*(unsigned short *)(temp_v10 + 0x62);
        if (temp_v6 == 0) {
          playSceneSetState(param_1,0x15,1);
          temp_v9 = 0x100016d;
          FUN_002bc01c(temp_v9);
          break;
        }
        FUN_002ae164();
        temp_v6 = *(unsigned int *)(temp_v6 + 0x28);
        temp_v19 = (temp_v6 & 0x1e0) != 0;
        if (temp_v19) {
          temp_v6 = temp_v6 << 0x17;
        }
        temp_v20 = temp_v6 >> 0x1c != 1;
        temp_v10 = temp_v11;
        if (temp_v19 && temp_v20) {
          temp_v10 = 6;
        }
        if ((temp_v19 && temp_v20) && temp_v10 != temp_v6 >> 0x1c) {
          playSceneSetState(param_1,0x15,1);
          temp_v9 = 0x100016d;
          FUN_002bc01c(temp_v9);
          break;
        }
        FUN_002bee58(param_1 + 0x11a0,0);
        playSceneSetState(param_1,0x12,1);
        temp_v9 = 0x100016d;
        FUN_002bc01c(temp_v9);
        break;
      }
      temp_v9 = 0x100016e;
      FUN_002bc01c(temp_v9);
      break;
    }
    temp_v5 = 1;
    FUN_002c1658(1,1);
    if (temp_v5 == 0) {
      temp_v5 = 9;
      FUN_002c1658(9,1);
      if (temp_v5 != 0) {
        *(unsigned char *)(param_1 + 0x3060) = 9;
        playSceneSetState(param_1,2,1);
        FUN_002bc01c(0x100016d);
        break;
      }
      temp_v5 = flagBitIsSet(0x7f);
      if (temp_v5 != 0) {
        temp_v5 = 10;
        FUN_002c1658(10,1);
        if (temp_v5 != 0) {
          *(unsigned char *)(param_1 + 0x3060) = 10;
          playSceneSetState(param_1,3,1);
          FUN_002bc01c(0x100016d);
          break;
        }
      }
      temp_v5 = FUN_0029e908(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
      temp_v33 = temp_v37;
      temp_v32 = 0xffffffff;
      temp_v34 = 1;
      temp_v31 = (unsigned int *)0xffffffff;
      temp_v35 = (unsigned char *)0x1;
      temp_v17 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
      FUN_0029f5d8(temp_v17,0,param_1 + 0x5716,0xffffffff);
      if (temp_v17 != 0) {
        temp_v17 = FUN_0029e908(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
        if (temp_v17 == temp_v5) break;
      }
      else {
        temp_v5 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
        FUN_0029efd8(temp_v5,1);
        if (temp_v5 == 0) break;
      }
      playSceneSetState(param_1,1);
      temp_v9 = FUN_00297ca4(param_1,1);
      FUN_00297b94(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
      temp_v5 = FUN_00297ca4(param_1,1);
      if ((temp_v5 != 1 && temp_v5 != 2) && (temp_v5 != 7 && temp_v5 != 3)) break;
      FUN_00190ab0(param_1);
      break;
    }
    *(unsigned char *)(param_1 + 0x3060) = 1;
    temp_v9 = FUN_00297ca4(param_1,1);
    FUN_00297b94(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
    playSceneSetState(param_1,1);
    temp_v9 = 0x100016e;
    FUN_002bc01c(temp_v9);
    break;
  case 0xc:
    goto LAB_0019bce0;
  case 0xd:
    playSceneSetState(param_1,0xc,1);
    FUN_00292f4c(param_1);
LAB_0019bce0:
    if (*(char *)(param_1 + 0x307c) != '\0') break;
    temp_v9 = FUN_002bf4f8(0x15,200);
    temp_v32 = (unsigned int)*(short *)(param_1 + 0x572a);
    temp_v33 = temp_v36;
    temp_v34 = 0;
    temp_v35 = (unsigned char *)0x1;
    temp_v31 = (unsigned int *)(int)*(short *)(param_1 + 0x5728);
    temp_v5 = *(int *)(param_1 + 0x340c);
    FUN_0029f5d8(temp_v5,temp_v9,param_1 + 0x572c,(int)*(short *)(param_1 + 0x5726));
    if (temp_v5 != 0) {
      FUN_00292f4c(param_1);
      break;
    }
    temp_v5 = *(int *)(param_1 + 0x340c);
    FUN_0029efd8(temp_v5,1);
    if (temp_v5 != 0) {
      FUN_00292f4c(param_1);
      break;
    }
    temp_v5 = 0;
    FUN_002c1658(0,1);
    if (temp_v5 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    if (temp_v5 != 0 || temp_v36[0] != '\0') {
      FUN_002bee58(param_1 + 0x11a0,0);
      playSceneSetState(param_1,0x12,1);
      FUN_002bc01c(0x100016d);
      break;
    }
    temp_v5 = 1;
    FUN_002c1658(1,1);
    if (temp_v5 == 0) {
      temp_v5 = 9;
      FUN_002c1658(9,1);
      if (temp_v5 != 0) {
        *(unsigned char *)(param_1 + 0x3060) = 9;
        playSceneSetState(param_1,2,1);
        temp_v9 = 0x100016d;
        FUN_002bc01c(temp_v9);
        break;
      }
      temp_v5 = flagBitIsSet(0x7f);
      if (temp_v5 != 0) {
        temp_v5 = 10;
        FUN_002c1658(10,1);
        if (temp_v5 == 0) goto LAB_0019be74;
        *(unsigned char *)(param_1 + 0x3060) = 10;
        playSceneSetState(param_1,3,1);
        FUN_002bc01c(0x100016d);
        break;
      }
LAB_0019be74:
      temp_v5 = FUN_0029e908(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
      temp_v33 = temp_v37;
      temp_v32 = 0xffffffff;
      temp_v34 = 1;
      temp_v31 = (unsigned int *)0xffffffff;
      temp_v35 = (unsigned char *)0x1;
      temp_v17 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
      FUN_0029f5d8(temp_v17,0,param_1 + 0x5716,0xffffffff);
      temp_v7 = param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088;
      if (temp_v17 != 0) {
        temp_v17 = FUN_0029e908();
        if (temp_v17 == temp_v5) break;
      }
      else {
        FUN_0029efd8(temp_v7,1);
        if (temp_v7 == 0) break;
      }
      playSceneSetState(param_1,1);
      temp_v9 = FUN_00297ca4(param_1,1);
      FUN_00297b94(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
      temp_v5 = FUN_00297ca4(param_1,1);
      if ((temp_v5 != 1 && temp_v5 != 2) && (temp_v5 != 7 && temp_v5 != 3)) break;
      FUN_00190ab0(param_1);
      break;
    }
    *(unsigned char *)(param_1 + 0x3060) = 1;
    temp_v9 = FUN_00297ca4(param_1,1);
    FUN_00297b94(param_1,temp_v9,*(unsigned int *)(param_1 + 0x305c));
    playSceneSetState(param_1,1);
    temp_v9 = 0x100016e;
    FUN_002bc01c(temp_v9);
    break;
  case 0xe:
    temp_v5 = FUN_0028dba8(*(unsigned int *)(param_1 + 0x3040));
    if ((temp_v5 != 0) && (temp_v5 = FUN_002b6ad0(), temp_v5 != 0)) {
      if (((*(int *)(param_1 + 0x3044) >= 0x18) &&
          (temp_v17 = FUN_002bf818(param_1 + 0x96c), *(int *)(param_1 + 0x3044) == 0x18)) &&
         ((*(unsigned int *)(*(int *)(param_1 + 0x3040) + 0x44a0) & 0x2000000) == 0)) {
        FUN_00338c38();
      }
    }
    else {
      temp_v17 = 1;
    }
    temp_v5 = 0;
    do {
      if ((temp_v5 * 3 <= *(int *)(param_1 + 0x3044)) &&
         (FUN_002b8ee0(param_1 + temp_v5 * 0x8c + 0x73c,0), temp_v5 == 3)) {
        if ((*(char *)(param_1 + 0x96a) != '\0') && (temp_v17 != 0)) {
          playSceneSetState(param_1,0xf,1);
          puVar13 = (unsigned int *)(*(int *)(param_1 + 0x3040) + 0x44a0);
          *puVar13 = *puVar13 & 0xfdffffff;
        }
        break;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 4);
    break;
  case 0xf:
    if (*(char *)(param_1 + 0x307f) == '\0') {
      playSceneSetState(param_1,0x1e,1);
    }
    break;
  case 0x10:
    FUN_002b8ee0(param_1 + 0x20,0);
    temp_v5 = FUN_0028cfbc(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
    temp_v17 = FUN_0029d644(temp_v33);
    temp_v7 = 0;
    do {
      if ((temp_v5 <= temp_v7) || (temp_v7 <= *(int *)(param_1 + 0x3044) - 1)) {
        FUN_002b8ee0(param_1 + temp_v7 * 0x8c + 0x138,0);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 8);
    if ((((*(int *)(param_1 + 0x3044) >= 6) && (temp_v5 <= *(int *)(param_1 + 0x3044) - 1)) &&
        (*(char *)(param_1 + temp_v5 * 0x8c + 0x136) != '\0')) &&
       ((temp_v17 <= *(int *)(param_1 + 0x3044) - 1 &&
        (*(char *)(param_1 + temp_v17 * 0x8c + 0xe56) != '\0')))) {
      playSceneSetState(param_1,*(unsigned int *)(param_1 + 0x3054),0);
    }
    break;
  case 0x11:
    if (*(char *)(param_1 + 0x307d) != '\0') {
      FUN_0028cf30(param_1,*(unsigned int *)(param_1 + 0x305c),(int)*(char *)(param_1 + 0x307e));
    }
    break;
  case 0x12:
    FUN_001990d4(param_1);
    temp_v5 = FUN_002b8ee0(param_1 + 0x11a0,0);
    if (temp_v5 == 0) break;
    playSceneSetState(param_1,0x13,0);
    temp_v9 = 0x38;
    buttonHelpSetPreset(temp_v9);
    break;
  case 0x13:
    *(unsigned char *)(param_1 + 0x575d) = 0;
    if (*(char *)(param_1 + 0x307c) != '\0') break;
    if (-1 < temp_v5) {
      temp_v17 = FUN_002b8d54();
      if ((temp_v17 == 1) || (temp_v17 = FUN_002b8d54(), temp_v17 == 2)) {
        if (temp_v5 == 0x11) {
          *(unsigned char *)(param_1 + 0x3060) = 1;
        }
        else if (*(char *)(param_1 + 0x575c) == '\0') {
          temp_v6 = *(unsigned int *)(param_1 + 0x5758);
          if (0 < (int)temp_v6) {
            temp_v10 = temp_v6 & 1;
            if (temp_v10 == 1) {
              *(unsigned char *)(param_1 + 0x5788) = 0;
            }
            temp_v13 = (unsigned int)(temp_v10 == 1);
            if ((int)temp_v10 < (int)temp_v6) {
              do {
                temp_v17 = temp_v13 + 1;
                *(unsigned char *)(param_1 + temp_v13 * 0x2c + 0x5788) = 0;
                temp_v13 = temp_v13 + 2;
                *(unsigned char *)(param_1 + temp_v17 * 0x2c + 0x5788) = 0;
                temp_v10 = temp_v10 + 2;
              } while ((int)temp_v10 < (int)*(unsigned int *)(param_1 + 0x5758));
            }
          }
          temp_v5 = param_1 + temp_v5 * 0x2c;
          if (*(char *)(temp_v5 + 0x5460) != '\0') {
            *(unsigned char *)(temp_v5 + 0x5470) = 1;
            *(unsigned char *)(param_1 + 0x575d) = 1;
          }
        }
        break;
      }
      temp_v17 = FUN_002b8d54();
      if (temp_v17 == 6) {
        if (temp_v5 != 0x11) {
          *(unsigned char *)(param_1 + 0x3060) = 0;
        }
        break;
      }
    }
    temp_v15 = 0;
    temp_v5 = 0;
    FUN_002c1658(0,1);
    if (temp_v5 == 0) {
      temp_v5 = 1;
      FUN_002c1658(1,1);
      goto joined_r0x0019c3c8;
    }
    *(unsigned char *)(param_1 + 0x3060) = temp_v15;
    break;
  case 0x16:
    temp_v15 = 0;
    temp_v5 = 0;
    FUN_002c1658(0,1);
    if (temp_v5 == 0) {
      temp_v5 = 1;
      FUN_002c1658(1,1);
joined_r0x0019c3c8:
      temp_v15 = 1;
      if (temp_v5 == 0) break;
    }
    *(unsigned char *)(param_1 + 0x3060) = temp_v15;
    break;
  case 0x18:
    if (*(int *)(param_1 + 0x3044) >= 9) {
      playSceneSetState(param_1,*(unsigned int *)(param_1 + 0x3054),1);
    }
    break;
  case 0x1c:
    if (*(int *)(param_1 + 0x3044) >= 9) {
      FUN_0029ee6c(0,0x323232ff);
      playSceneSetState(param_1,0x1d,0);
    }
    break;
  case 0x1f:
    if (*(char *)(param_1 + 0x3081) == '\0') {
      if (*(int *)(param_1 + 0x3044) < 0x26) {
        FUN_002b8ee0(param_1 + 0x1344,0);
        break;
      }
      if (*(int *)(param_1 + 0x3044) == 0x26) {
        FUN_002bee58(param_1 + 0x1344,10);
        break;
      }
      temp_v5 = FUN_002bf818(param_1 + 0x1344);
      if (temp_v5 == 0) break;
    }
    playSceneSetState(param_1,0x20,1);
    break;
  case 0x22:
    temp_v5 = btlGetMainState();
    if ((temp_v5 != 0) && (*(short *)(temp_v5 + 0x1fc4) < 4)) {
      temp_v10 = 0;
      temp_v6 = 0xffffffff;
      do {
        temp_v13 = *(unsigned int *)(*(int *)(temp_v5 + 0x1fc0) + temp_v10 * 0x288);
        if (((temp_v13 & 1) != 0) && ((temp_v13 & 0x40) == 0)) {
          temp_v6 = temp_v10;
        }
        temp_v10 = temp_v10 + 1;
      } while ((int)temp_v10 < 4);
      if (temp_v6 < 3) {
        *(unsigned int *)(param_1 + 0x33f8) = temp_v6 + 1;
        *(unsigned int *)(param_1 + 0x33ec) = temp_v6 + 1;
      }
    }
    temp_v17 = param_1 + 0x33a8;
    temp_v7 = FUN_0029e908();
    temp_v33 = temp_v36;
    temp_v32 = 0xffffffff;
    temp_v34 = 1;
    temp_v31 = (unsigned int *)0xffffffff;
    temp_v35 = (unsigned char *)0x1;
    temp_v5 = temp_v17;
    FUN_0029f5d8(temp_v17,0,param_1 + 0x574e,0xffffffff);
    if (temp_v5 != 0) {
      temp_v5 = FUN_0029e908(temp_v17);
      if (temp_v5 != temp_v7) {
        FUN_002bee58(param_1 + 0xac,1);
        temp_v5 = FUN_00297ca4(param_1,1);
        *(unsigned int *)(param_1 + 0x3460) = 0;
        *(unsigned int *)(param_1 + 0x3464) = 0;
        *(unsigned int *)(param_1 + 0x3468) = 0;
        *(unsigned int *)(param_1 + 0x346c) = 0;
        if (temp_v5 != 7) {
          FUN_0028cdec(param_1);
        }
        else {
          *(unsigned int *)(param_1 + 0x3470) = 0;
          *(unsigned int *)(param_1 + 0x3474) = 0;
          *(unsigned int *)(param_1 + 0x3478) = 0;
          *(unsigned int *)(param_1 + 0x347c) = 0;
          temp_v34 = temp_v34 & 0xffff0000;
          temp_v31 = (unsigned int *)((unsigned int)temp_v31 & 0xffff0000);
          FUN_0028cb40(param_1,&temp_v34,&temp_v31);
          temp_v5 = FUN_0029e908(temp_v17);
          if (temp_v5 != 0) {
            temp_v17 = gameGetSlotTable();
            temp_v7 = param_1 + temp_v5 * 4;
            FUN_0028caf8((int)*(char *)(temp_v17 + temp_v5 + 0x9107),(int)(short)(int)temp_v31,temp_v7 + 0x3460
                         ,temp_v7 + 0x3470);
            temp_v17 = gameGetSlotTable();
            if (*(char *)(temp_v17 + temp_v5 + 0x9107) < '\0') {
              dataTable08Sub1GetRecord((int)(short)(int)temp_v31);
            }
          }
          else {
            FUN_0028caf8(0xffffffff,(int)(short)(int)temp_v31,param_1 + 0x3460,param_1 + 0x3470);
          }
        }
      }
      break;
    }
    temp_v5 = 0;
    FUN_002c1658(0,1);
    if (temp_v5 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    if (temp_v5 == 0 && temp_v36[0] == '\0') {
      temp_v5 = 1;
      FUN_002c1658(1,1);
      if (temp_v5 == 0) {
        temp_v5 = temp_v17;
        FUN_0029efd8(temp_v17,1);
        if (temp_v5 != 0) {
          do {
            FUN_002bee58(param_1 + 0xac,1);
            temp_v5 = FUN_00297ca4(param_1,1);
            *(unsigned int *)(param_1 + 0x3460) = 0;
            *(unsigned int *)(param_1 + 0x3464) = 0;
            *(unsigned int *)(param_1 + 0x3468) = 0;
            *(unsigned int *)(param_1 + 0x346c) = 0;
            if (temp_v5 != 7) {
              temp_v5 = param_1;
              FUN_0028cdec();
              if (temp_v5 != 0) break;
            }
            else {
              *(unsigned int *)(param_1 + 0x3470) = 0;
              *(unsigned int *)(param_1 + 0x3474) = 0;
              *(unsigned int *)(param_1 + 0x3478) = 0;
              *(unsigned int *)(param_1 + 0x347c) = 0;
              temp_v33 = (char *)((unsigned int)temp_v33 & 0xffff0000);
              temp_v32 = temp_v32 & 0xffff0000;
              FUN_0028cb40(param_1,&temp_v33,&temp_v32);
              temp_v5 = FUN_0029e908(temp_v17);
              if (temp_v5 == 0) {
                FUN_0028caf8(0xffffffff,(int)(short)temp_v32,param_1 + 0x3460,param_1 + 0x3470);
                break;
              }
              temp_v7 = gameGetSlotTable();
              temp_v16 = param_1 + temp_v5 * 4;
              FUN_0028caf8((int)*(char *)(temp_v7 + temp_v5 + 0x9107),(int)(short)temp_v32,
                           temp_v16 + 0x3460,temp_v16 + 0x3470);
              temp_v7 = gameGetSlotTable();
              if (-1 < *(char *)(temp_v7 + temp_v5 + 0x9107)) break;
              temp_v5 = (int)(short)temp_v32;
              dataTable08Sub1GetRecord();
              if ((((temp_v5 == 0) || ((*(unsigned char *)(temp_v5 + 0x6a) & 0x80) != 0)) ||
                  (*(short *)(temp_v5 + 0x62) != 0)) || ((*(unsigned char *)(temp_v5 + 0x6a) & 0x7f) == 1))
              break;
            }
            FUN_0029efd8(temp_v17,0);
          } while( 1 );
        }
        break;
      }
      *(unsigned char *)(param_1 + 0x3060) = 1;
      *(unsigned int *)(param_1 + 0x3460) = 0;
      *(unsigned int *)(param_1 + 0x3464) = 0;
      *(unsigned int *)(param_1 + 0x3468) = 0;
      *(unsigned int *)(param_1 + 0x346c) = 0;
      *(unsigned int *)(param_1 + 0x3470) = 0;
      *(unsigned int *)(param_1 + 0x3474) = 0;
      *(unsigned int *)(param_1 + 0x3478) = 0;
      *(unsigned int *)(param_1 + 0x347c) = 0;
      playSceneSetState(param_1,*(unsigned int *)(param_1 + 0x304c),1);
      temp_v9 = 0x100016e;
      FUN_002bc01c(temp_v9);
      break;
    }
    temp_v5 = FUN_0029e908(temp_v17);
    if (*(char *)(temp_v5 + param_1 + 0x345c) == '\0') break;
    temp_v9 = FUN_0029e908(temp_v17);
    *(unsigned int *)(param_1 + 0x3064) = temp_v9;
    temp_v5 = FUN_00297ca4(param_1,1);
    if (temp_v5 == 2) goto LAB_0019c9b8;
    playSceneSetState(param_1,0x26,1);
LAB_0019c714:
    *(unsigned int *)(param_1 + 0x3460) = 0;
    *(unsigned int *)(param_1 + 0x3464) = 0;
    *(unsigned int *)(param_1 + 0x3468) = 0;
    *(unsigned int *)(param_1 + 0x346c) = 0;
    *(unsigned int *)(param_1 + 0x3470) = 0;
    *(unsigned int *)(param_1 + 0x3474) = 0;
    *(unsigned int *)(param_1 + 0x3478) = 0;
    *(unsigned int *)(param_1 + 0x347c) = 0;
    temp_v9 = 0x100016d;
    FUN_002bc01c(temp_v9);
    break;
  case 0x23:
    temp_v17 = 0;
    temp_v5 = FUN_0029e958(param_1 + 0x33a8);
    if (0 < temp_v5) {
      do {
        temp_v5 = FUN_0029d65c((int)*(short *)(param_1 + temp_v17 * 2 + 0x574e));
        if (temp_v5 == 6) {
          temp_v36[0] = '\x01';
          break;
        }
        temp_v17 = temp_v17 + 1;
        temp_v5 = FUN_0029e958(param_1 + 0x33a8);
      } while (temp_v17 < temp_v5);
    }
    temp_v5 = 0;
    FUN_002c1658(0,1);
    if (temp_v5 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    if (temp_v5 != 0 || temp_v36[0] != '\0') {
      *(unsigned int *)(param_1 + 0x3064) = 9999;
      temp_v5 = FUN_00297ca4(param_1,1);
      if (temp_v5 != 2) {
        playSceneSetState(param_1,0x26,1);
      }
      else {
LAB_0019c9b8:
        playSceneSetState(param_1,0x25,1);
      }
      goto LAB_0019c714;
    }
    temp_v5 = 1;
    FUN_002c1658(1,1);
    if (temp_v5 == 0) break;
    *(unsigned char *)(param_1 + 0x3060) = 1;
    *(unsigned int *)(param_1 + 0x3460) = 0;
    *(unsigned int *)(param_1 + 0x3464) = 0;
    *(unsigned int *)(param_1 + 0x3468) = 0;
    *(unsigned int *)(param_1 + 0x346c) = 0;
    *(unsigned int *)(param_1 + 0x3470) = 0;
    *(unsigned int *)(param_1 + 0x3474) = 0;
    *(unsigned int *)(param_1 + 0x3478) = 0;
    *(unsigned int *)(param_1 + 0x347c) = 0;
    playSceneSetState(param_1,*(unsigned int *)(param_1 + 0x304c),1);
    temp_v9 = 0x100016e;
    FUN_002bc01c(temp_v9);
    break;
  case 0x24:
    temp_v5 = FUN_0029d65c((int)*(short *)(param_1 + *(int *)(param_1 + 0x305c) * 2 + 0x574e));
    temp_v17 = 0;
    if (temp_v5 == 6) {
      temp_v36[0] = '\x01';
    }
    FUN_002c1658(0,1);
    if (temp_v17 != 0) {
      *(unsigned char *)(param_1 + 0x3060) = 0;
    }
    if (temp_v17 == 0 && temp_v36[0] == '\0') {
      temp_v5 = 1;
      FUN_002c1658(1,1);
      if (temp_v5 == 0) break;
      *(unsigned char *)(param_1 + 0x3060) = 1;
      playSceneSetState(param_1,*(unsigned int *)(param_1 + 0x304c),1);
      temp_v9 = 0x100016e;
      FUN_002bc01c(temp_v9);
      break;
    }
    temp_v9 = FUN_0029e908(param_1 + 0x33a8);
    *(unsigned int *)(param_1 + 0x3064) = temp_v9;
    temp_v5 = FUN_00297ca4(param_1,1);
    if (temp_v5 != 2) {
      playSceneSetState(param_1,0x26,1);
    }
    else {
      playSceneSetState(param_1,0x25,1);
    }
    temp_v9 = 0x100016d;
    FUN_002bc01c(temp_v9);
    break;
  case 0x25:
    temp_v5 = FUN_0029c3ec();
    if (temp_v5 == 1) {
      FUN_0029cc44(1);
      playSceneSetState(param_1,0x26,0);
    }
    break;
  case 0x27:
    temp_v5 = FUN_002bf818(param_1 + 0x12b8);
    if (temp_v5 == 0) break;
    playSceneSetState(param_1,*(unsigned int *)(param_1 + 0x304c),0);
    break;
  case 0x2a:
    if (*(char *)(param_1 + 0x3080) == '\0') {
      FUN_002bee58(param_1 + 0x20,0);
      temp_v5 = 0;
      do {
        FUN_002bee58(param_1 + temp_v5 * 0x8c + 0x138,0);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 8);
      temp_v5 = 0;
      do {
        uiSpriteSetImageKeyframe(param_1 + temp_v5 * 0x8c + 0xe58,0);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 6);
      *(unsigned int *)(param_1 + 0x3054) = 0x11;
      playSceneSetState(param_1,0x10,1);
    }
    break;
  case 0x2b:
    FUN_002bf818(param_1 + 0x12b8);
    temp_v5 = statusScreenIsClosed();
    if (temp_v5 != 0) {
      temp_v6 = FUN_0028cab8();
      if (temp_v6 != 0) {
        FUN_0028ca60(temp_v6 & 0xffff);
      }
      FUN_0028ca0c(DAT_00435de4 & 0xffff);
      DAT_00435de4 = DAT_00435de4 + 1;
      FUN_0029ca58();
      playSceneSetState(param_1,0x2c,1);
    }
    break;
  case 0x2c:
    temp_v5 = FUN_00295618();
    if (temp_v5 != 0) {
      FUN_00292c0c();
      timerStart(param_1 + 0x12b8,0);
      playSceneSetState(param_1,1);
    }
    break;
  case 0x2d:
    temp_v17 = param_1 + 0x33a8;
    temp_v7 = FUN_0029e908();
    temp_v33 = temp_v36;
    temp_v32 = 0xffffffff;
    temp_v34 = 1;
    temp_v31 = (unsigned int *)0xffffffff;
    temp_v35 = (unsigned char *)0x1;
    temp_v5 = temp_v17;
    FUN_0029f5d8(temp_v17,0,param_1 + 0x574e,0xffffffff);
    if (temp_v5 != 0) {
      temp_v5 = FUN_0029e908(temp_v17);
      if (temp_v5 == temp_v7) break;
    }
    else {
      temp_v5 = temp_v17;
      FUN_0029efd8(temp_v17,1);
      if (temp_v5 == 0) {
        temp_v5 = 0;
        FUN_002c1658(0,1);
        if (temp_v5 != 0) {
          *(unsigned char *)(param_1 + 0x3060) = 0;
        }
        if (temp_v5 == 0 && temp_v36[0] == '\0') break;
        temp_v5 = FUN_0029e908(temp_v17);
        if (temp_v5 != 0) {
          temp_v17 = gameGetSlotTable();
          if (*(char *)(temp_v17 + temp_v5 + 0x9108) < '\0') break;
          temp_v0 = *(char *)(param_1 + temp_v5 + 0x38cc);
        }
        else {
          temp_v0 = *(char *)(param_1 + 0x38cc);
        }
        if (temp_v0 != '\0') break;
        *(int *)(param_1 + 0x305c) = temp_v5;
        *(unsigned char *)(param_1 + 0x3083) = 0;
        FUN_00199424(param_1);
        temp_v5 = 0;
        do {
          uiSpriteSetImageKeyframe(param_1 + temp_v5 * 0x8c + 0xe58,0);
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 6);
        FUN_0028cf30(param_1,*(unsigned int *)(param_1 + 0x305c),1);
        temp_v9 = 0x100016d;
        FUN_002bc01c(temp_v9);
        break;
      }
    }
    FUN_002bee58(param_1 + 0xac,1);
    temp_v9 = FUN_0029e908(temp_v17);
    *(unsigned int *)(param_1 + 0x305c) = temp_v9;
    FUN_0028e9ec(param_1);
  }
  temp_v35 = (unsigned char *)(param_1 + 0x38cc);
  temp_v42 = (unsigned char *)(param_1 + 0x38d1);
  temp_v30 = 0x3f8000003e20d97c;
  temp_v29 = 0x3dcccccd;
  temp_v38 = param_1 + 0x9f8;
  temp_v5 = 0;
  do {
    temp_v17 = param_1 + temp_v5;
    if (*(char *)(temp_v17 + 0x37bc) != '\0') {
      temp_v7 = param_1 + temp_v5 * 4;
      piVar14 = (int *)(temp_v7 + 0x37f0);
      if (*piVar14 < 0x14) {
        *piVar14 = *piVar14 + 1;
      }
      else {
        *(unsigned char *)(temp_v17 + 0x37bc) = 0;
        *(unsigned int *)(temp_v7 + 0x37c8) = 0;
        *(unsigned int *)(temp_v7 + 0x37dc) = 0;
        *piVar14 = 0;
      }
      if (*(char *)(temp_v17 + 0x37bc) == '\0') goto LAB_0019cec8;
    }
    else {
LAB_0019cec8:
      temp_v0 = *(char *)(temp_v17 + 0x38cc);
      temp_v19 = temp_v0 == '\0';
      if (temp_v19) {
        temp_v0 = *(char *)(temp_v17 + 0x38d1);
      }
      if (temp_v19 && temp_v0 == '\0') {
        if (temp_v5 != 0) {
          if (temp_v5 == 4) goto LAB_0019cf8c;
          if (((*(char *)(temp_v39 + temp_v5 + 0x9107) < '\0') || (temp_v7 = gameGetUnitRecord(), temp_v7 == 0)
              ) || ((*(unsigned short *)(temp_v7 + 0x44) & 2) != 0)) {
            *(unsigned char *)(temp_v17 + 0x38cc) = 1;
            FUN_002bf810(0x1000188);
          }
        }
        else {
          temp_v7 = gameGetPlayerData();
          if ((*(unsigned short *)(temp_v7 + 0x72) & 2) != 0) {
            *temp_v35 = 1;
          }
        }
        if (*(char *)(temp_v17 + 0x38cc) != '\0') {
          if (temp_v5 != 0) {
            temp_v7 = param_1 + temp_v5 * 0x8c;
            uiSpriteSetImageKeyframe(temp_v7 + 0x9f8,8,0);
            FUN_002bee58(temp_v7 + 0xc28,6);
          }
          else {
            uiSpriteSetImageKeyframe(temp_v38,9,0);
          }
          FUN_0028da40(param_1,temp_v5,0);
        }
      }
    }
LAB_0019cf8c:
    temp_v16 = param_1 + temp_v5 * 4;
    temp_v7 = *(int *)(temp_v16 + 0x385c);
    if (0 < temp_v7) {
      *(int *)(temp_v16 + 0x385c) = temp_v7 - 1;
    }
    temp_v40 = temp_v17 + 0x3800;
    if ((*(char *)(temp_v17 + 0x389c) != '\0') &&
       (temp_v7 = *(int *)(temp_v16 + 0x38a4) + 1, *(int *)(temp_v16 + 0x38a4) = temp_v7, temp_v7 >= 0x15)) {
      *(unsigned char *)(temp_v17 + 0x389c) = 0;
    }
    temp_v7 = param_1 + temp_v5 * 2;
    temp_v41 = temp_v7;
    switch(*(unsigned short *)(temp_v7 + 0x5950)) {
    case 1:
      temp_v8 = FUN_002bf818(param_1 + temp_v5 * 0x8c + 0x13d0);
      if (temp_v8 != 0) {
        temp_v1 = 2;
        *(unsigned short *)(temp_v7 + 0x5950) = temp_v1;
      }
      break;
    case 2:
      temp_v8 = FUN_002bf818(param_1 + temp_v5 * 0x8c + 0x1600);
      if (temp_v8 != 0) {
        temp_v1 = 3;
        *(unsigned short *)(temp_v7 + 0x5950) = temp_v1;
      }
      break;
    case 3:
      *(float *)(temp_v16 + 0x5964) = *(float *)(temp_v16 + 0x5964) + (float)temp_v30;
      temp_v43 = param_1 + temp_v5 * 0x8c;
      if (*(char *)(temp_v43 + 0x18ba) != '\0') {
        temp_v2 = *(short *)(temp_v7 + 0x595a) + 1;
        *(unsigned short *)(temp_v7 + 0x595a) = temp_v2;
        if (temp_v2 >= 2) {
          *(unsigned short *)(temp_v7 + 0x595a) = 0;
          temp_v3 = vec2GetXInt(temp_v43 + 0x1600);
          *(short *)(temp_v7 + 0x597e) = *(short *)(temp_v43 + 0x1618) + temp_v3;
          temp_v4 = vec2GetYInt(temp_v43 + 0x1600);
          temp_v3 = *(short *)(temp_v43 + 0x161a);
          *(unsigned short *)(temp_v7 + 0x5950) = 4;
          *(short *)(temp_v7 + 0x5988) = temp_v3 + temp_v4;
          FUN_002bee58(temp_v43 + 0x13d0,0xc);
          FUN_002bee58(temp_v43 + 0x1600,0xf);
        }
      }
      else {
        FUN_002bf818(temp_v43 + 0x1830);
      }
      break;
    case 4:
      if (*(unsigned short *)(temp_v7 + 0x595a) < 6) {
        temp_v8 = FUN_002bf4f8(0x15,0xbba);
        temp_v18 = param_1 + temp_v5 * 0x8c;
        temp_v14 = *(short *)(temp_v7 + 0x595a) + 1;
        temp_v25 = *(float *)(temp_v18 + 0x1628);
        temp_v23 = *(float *)(temp_v18 + 0x162c);
        temp_v6 = (unsigned int)temp_v14;
        temp_v28 = (float)((unsigned long long)temp_v30 >> 0x20);
        temp_v22 = (float)VectorUnsignedToFloat
                                  ((*(unsigned short *)(temp_v8 + 4) & 0xffff7fff) >> 1,
                                   (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v2 = *(unsigned short *)(temp_v8 + 6);
        *(unsigned short *)(temp_v7 + 0x595a) = temp_v14;
        temp_v24 = (float)VectorUnsignedToFloat
                                  ((temp_v2 & 0xffff7fff) >> 1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v27 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v26 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v22 = (float)VectorSignedToFloat((int)(short)(int)(temp_v22 * (temp_v28 - temp_v25)) +
                                            ((int)*(short *)(temp_v7 + 0x5992) -
                                            (int)*(short *)(temp_v7 + 0x597e)),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(short *)(temp_v7 + 0x59a6) = (short)(int)(temp_v22 * temp_v27 * (float)temp_v29);
        temp_v22 = (float)VectorSignedToFloat(((int)*(short *)(temp_v7 + 0x599c) -
                                            (int)*(short *)(temp_v7 + 0x5988)) -
                                            (int)(short)(int)(temp_v24 * (temp_v28 - temp_v23)),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(short *)(temp_v7 + 0x59b0) = (short)(int)(temp_v22 * temp_v26 * (float)temp_v29);
        if (temp_v6 >= 4) {
          *(unsigned char *)(temp_v17 + 0x5978) = 1;
        }
      }
      temp_v8 = param_1 + temp_v5 * 0x8c;
      temp_v31 = (unsigned int *)(temp_v8 + 0x13d0);
      FUN_002bf818();
      FUN_002bf818(temp_v8 + 0x1600);
      if ((*(char *)((int)temp_v31 + 0x8a) != '\0') && (*(char *)(temp_v8 + 0x168a) != '\0')) {
        *(unsigned short *)(temp_v7 + 0x595a) = 0;
        *(unsigned short *)(temp_v7 + 0x5950) = 5;
      }
      break;
    case 5:
      *(short *)(temp_v7 + 0x595a) = *(short *)(temp_v7 + 0x595a) + 1;
    }
    if (*(char *)(temp_v40 + 0xcc) != '\0') {
      if (temp_v5 != 0) {
        temp_v18 = param_1 + temp_v5 * 0x8c;
        temp_v8 = FUN_002bf818(temp_v18 + 0x9f8);
        if ((temp_v8 != 0) && (temp_v8 = FUN_002bf818(temp_v18 + 0xc28), temp_v8 != 0)) {
          temp_v8 = *(int *)(temp_v16 + 0x340c);
          if (0 < temp_v8) {
            FUN_002958f8((int)(short)temp_v8,1);
            *(int *)(temp_v16 + 0x340c) = 0;
          }
          *(unsigned char *)(temp_v17 + 0x38cc) = 0;
          *(unsigned char *)(temp_v17 + 0x38d1) = 1;
        }
        goto LAB_0019d3e4;
      }
      temp_v7 = FUN_002bf818(temp_v38);
      if (temp_v7 != 0) {
        *temp_v35 = 0;
        *temp_v42 = 1;
      }
    }
    else {
LAB_0019d3e4:
      if ((0 < temp_v5) && (temp_v43 = temp_v17 + 0x5900, *(char *)(temp_v17 + 0x5925) != '\0')) {
        piVar14 = (int *)(temp_v16 + 0x592c);
        temp_v8 = *piVar14;
        *piVar14 = temp_v8 + 1;
        if (*(short *)(temp_v7 + 0x5940) >= 0) {
          temp_v31 = (unsigned int *)gameGetUnitRecord((int)*(short *)(temp_v7 + 0x5940));
          if (*piVar14 == 8) {
            temp_v44 = (unsigned int *)(temp_v16 + 0x340c);
            temp_v6 = *temp_v44;
            if (temp_v6 == *(unsigned short *)((int)temp_v31 + 0x46)) goto LAB_0019d5d8;
            if (0 < (int)temp_v6) {
              FUN_002958f8((int)(short)temp_v6,1);
            }
            FUN_002942c4((int)*(short *)((int)temp_v31 + 0x46),1);
            *temp_v44 = (unsigned int)*(unsigned short *)((int)temp_v31 + 0x46);
            *(unsigned short *)(temp_v41 + 0x38f4) = *(unsigned short *)(temp_v7 + 0x5940);
            *(unsigned short *)(temp_v41 + 0x38d6) = *(unsigned short *)((int)temp_v31 + 0x2a);
            *(unsigned short *)(temp_v41 + 0x38e0) = *(unsigned short *)(temp_v31 + 0xb);
            *(unsigned short *)(temp_v41 + 0x38ea) = (unsigned short)*(unsigned char *)(temp_v31 + 0x12);
            *(unsigned char *)(temp_v17 + 0x38d1) = 0;
          }
          if (*piVar14 == 0x14) {
            if (*(char *)(temp_v43 + 0x4a) == '\0') goto LAB_0019d5d8;
            temp_v9 = btlGetMainState();
            FUN_00338bd4(temp_v9,(int)(short)temp_v5);
          }
          if (*piVar14 >= 0x2a) {
            *(unsigned char *)(temp_v17 + 0x5925) = 0;
            *piVar14 = 0;
            temp_v8 = flagWordTestBit(temp_v31,4);
            if (temp_v8 != 0) {
              *(unsigned char *)(temp_v17 + 0x5978) = 1;
              *(unsigned short *)(temp_v7 + 0x595a) = 0;
              *(unsigned short *)(temp_v7 + 0x5950) = 5;
            }
          }
        }
        else if (temp_v8 + 1 >= 8) {
          temp_v7 = *(int *)(temp_v16 + 0x340c);
          if (0 < temp_v7) {
            FUN_002958f8((int)(short)temp_v7,1);
            *(int *)(temp_v16 + 0x340c) = 0;
          }
          *(unsigned char *)(temp_v17 + 0x5925) = 0;
          *piVar14 = 0;
          *(unsigned short *)(temp_v41 + 0x38f4) = 0xffff;
          *(unsigned char *)(temp_v17 + 0x38d1) = 1;
        }
      }
    }
LAB_0019d5d8:
    if (*(char *)(temp_v17 + 0x37bc) == '\0') {
      temp_v6 = temp_v17 + 0x3500;
      temp_v19 = *(char *)(temp_v17 + 0x3530) == '\0';
      if (temp_v19) {
        temp_v6 = (unsigned int)*(unsigned char *)(temp_v17 + 0x3535);
      }
      if (((temp_v19 && temp_v6 == 0) && (*(char *)(temp_v40 + 0xcc) == '\0')) &&
         (*(char *)(temp_v17 + 0x5925) == '\0')) {
        FUN_0028da40(param_1,temp_v5,1);
      }
    }
    temp_v17 = 0;
    temp_v6 = 0;
    if (temp_v5 != 0) {
      if ((temp_v5 != 4) && (temp_v7 = gameGetSlotTable(), -1 < *(char *)(temp_v7 + temp_v5 + 0x9107))) {
        temp_v7 = gameGetSlotTable();
        temp_v7 = gameGetUnitRecord((int)*(char *)(temp_v7 + temp_v5 + 0x9107));
        temp_v6 = (unsigned int)*(unsigned short *)(temp_v7 + 0x44);
      }
    }
    else {
      temp_v7 = gameGetPlayerData();
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v7 + 0x72);
    }
    temp_v10 = 1;
    temp_v7 = 0;
    temp_v8 = 5;
    do {
      if ((temp_v6 & (1 << (temp_v10 & 0xff))) != 0) {
        temp_v17 = temp_v17 + 1;
      }
      if ((temp_v6 & (1 << ((temp_v10 + 1) & 0xff))) != 0) {
        temp_v7 = temp_v7 + 1;
      }
      temp_v8 = temp_v8 - 1;
      temp_v10 = temp_v10 + 2;
    } while (temp_v8 != 0);
    if (0 < temp_v7 + temp_v17) {
      piVar14 = (int *)(temp_v16 + 0x3508);
      temp_v17 = *piVar14;
      *piVar14 = temp_v17 + 1;
      if (temp_v17 + 1 >= 0x18) {
        __aeabi_idivmod(*(int *)(temp_v16 + 0x351c) + 1);
        *(int *)(temp_v16 + 0x351c) = temp_v12;
        *piVar14 = 0;
      }
    }
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 5) {
      *(int *)(param_1 + 0x3044) = *(int *)(param_1 + 0x3044) + 1;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
