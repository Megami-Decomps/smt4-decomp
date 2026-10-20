/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004eb928` (_code @ 0x4eb928, 0x7f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d9164(void);
int obj4FSlots28Reset(...);

int FUN_00178b04(...);
int dialogOpen(...);
int FUN_002a49e4(...);
int FUN_002c2d5c(...);
int halfRecClear(...);
int FUN_003f20f0(void);
int FUN_003f2638(...);
int FUN_004ac0bc(...);
int FUN_004d7a70(...);
int FUN_004d7fe4(...);
int FUN_004dcc5c(...);
int FUN_004dce1c(...);
int btlUnitSetParam(...);
int FUN_004e626c(...);
int FUN_004e7168(...);
int FUN_004ecd7c(...);
int FUN_004ecee8(...);
int FUN_004f612c(...);
int objRef1F50Release(...);
int FUN_004f84ec(...);
int FUN_004f8f08(void);
int FUN_004f8fa0(...);
int FUN_004fb4fc(...);
int FUN_004fdc0c(...);

int FUN_0023acdc(...);
int FUN_0034a290(void);
int FUN_003ee0c0(...);
int FUN_003efb18(...);
int FUN_003f2594(...);
int flagValueSub(...);
int FUN_004aa3d4(...);
int FUN_004e5f2c(...);
int FUN_004fb528(...);
int FUN_004fbc30(...);
int FUN_004fc094(...);
int FUN_004fddf4(...);
int FUN_004fe618(...);
int FUN_004fe9c0(...);
int FUN_004fed00(...);
int func_0x004fbd30(...);
int func_0x004fee24(...);

int FUN_00192550(void);
int FUN_002c7bf4(...);
int FUN_0047eccc(...);
int FUN_0047f138(...);
int FUN_004c3c84(...);
int FUN_004c571c(...);
int FUN_004de7a0(...);
int FUN_004fbeac(...);
int FUN_004fcfc0(...);
int FUN_004fd508(...);
int FUN_004fda3c(...);
int FUN_004fdcd8(...);
int func_0x004fb574(...);
int func_0x004fe7b0(...);

int FUN_001568f8(...);
int sysPlaySe(int);
int gameGetSlotTable(void);
int dataTable04FindById(void);
int FUN_00222488(unsigned int *);
int sysMemClear(int, int);
int FUN_003756c8(int);
int FUN_00388758(...);
int FUN_003e8bb0(...);
int FUN_003f0e20(...);
int FUN_003f2aac(...);
int FUN_004a92d0(int, int, int);
int FUN_004a9308(int, int, int, int);
int FUN_004aa8c8(int);
int FUN_004c4604(...);
int FUN_004dd0c4(int *, unsigned int *);
int FUN_004e0114(...);
int FUN_004e20c0(...);
int FUN_004e5a40(...);
int FUN_004e6b64(...);
int FUN_004e8454(int *);
int FUN_004eaa68(...);
int FUN_004ee5b4(int *, unsigned int *);
int FUN_004fb670(...);
int FUN_004fcde0(...);
int FUN_004fda78(...);
int FUN_004feecc(...);
int func_0x004fb5a8(...);

/* stack frame of param_2: 4 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned short sp42; /* 0x42: local_42 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x57113c */
extern int DAT_00571140; /* 0x571140 */
extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int DAT_00571160; /* 0x571160 */
extern unsigned int DAT_00571164; /* 0x571164 */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int DAT_00571210; /* 0x571210 */
extern unsigned int DAT_00571214; /* 0x571214 */
extern unsigned int DAT_00571218; /* 0x571218 */
extern unsigned int DAT_0057121c; /* 0x57121c */
extern unsigned int DAT_00571228; /* 0x571228 */
extern unsigned int DAT_0057122c; /* 0x57122c */
extern unsigned int DAT_00571280; /* 0x571280 */
extern unsigned int DAT_00571284; /* 0x571284 */
extern unsigned int DAT_00571290; /* 0x571290 */
extern unsigned int DAT_00571294; /* 0x571294 */
extern unsigned int DAT_005712a8; /* 0x5712a8 */
extern unsigned int DAT_005712ac; /* 0x5712ac */
extern unsigned int uRam005712d8; /* 0x5712d8 */
extern unsigned int uRam005712dc; /* 0x5712dc */
extern int g_btlCamera; /* 0x571508 */
extern int DAT_00571514; /* 0x571514 */
extern unsigned int DAT_00571518; /* 0x571518 */
extern int DAT_00571520; /* 0x571520 */
extern int DAT_00571524; /* 0x571524 */
extern int DAT_00571528; /* 0x571528 */
extern int DAT_0057152c; /* 0x57152c */
extern float DAT_00571578; /* 0x571578 */
extern int DAT_0057157c; /* 0x57157c */
extern float DAT_00571580; /* 0x571580 */
extern int DAT_00571584; /* 0x571584 */
extern unsigned int DAT_00571588; /* 0x571588 */
extern float DAT_0057158c; /* 0x57158c */
extern int DAT_00571590; /* 0x571590 */
extern unsigned int DAT_00571594; /* 0x571594 */
extern int DAT_00571598; /* 0x571598 */
extern unsigned int DAT_0057159c; /* 0x57159c */
extern int DAT_005715a0; /* 0x5715a0 */
extern unsigned int DAT_005715a4; /* 0x5715a4 */
extern int DAT_005715a8; /* 0x5715a8 */
extern int DAT_005715ac; /* 0x5715ac */
extern int DAT_00573808; /* 0x573808 */
extern int g_btlEvent; /* 0x573898 */
extern int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: FUN_001568f8. */
extern int lcgRandomRange(unsigned int);
extern int FUN_00167f08(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00178b04. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: gameGetSlotTable. */
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: FUN_00222488. */
extern unsigned int FUN_00228ab0(int);
/* Supplied declaration required: FUN_0023acdc. */
/* Supplied declaration required: FUN_002a49e4. */
/* Supplied declaration required: FUN_002c2d5c. */
/* Supplied declaration required: FUN_002c7bf4. */
/* Supplied declaration required: sysMemClear. */
extern int FUN_0034919c(void);
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: FUN_003756c8. */
/* Supplied declaration required: FUN_00388758. */
/* Supplied declaration required: FUN_003d9164. */
extern unsigned int FUN_003df57c(unsigned int, unsigned int);
extern short FUN_003e4a00(void);
extern unsigned int words3Clear(void);
extern int FUN_003e8430(int);
/* Supplied declaration required: FUN_003e8bb0. */
extern int FUN_003ec668(int, int, int);
extern int FUN_003eca48(int, unsigned short);
/* Supplied declaration required: halfRecClear. */
/* Supplied declaration required: FUN_003ee0c0. */
/* Supplied declaration required: FUN_003efb18. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_003f20f0. */
/* Supplied declaration required: FUN_003f2594. */
/* Supplied declaration required: FUN_003f2638. */
/* Supplied declaration required: FUN_003f2aac. */
/* Supplied declaration required: FUN_0047eccc. */
/* Supplied declaration required: FUN_0047f138. */
/* Supplied declaration required: flagValueSub. */
/* Supplied declaration required: FUN_004a92d0. */
/* Supplied declaration required: FUN_004a9308. */
/* Supplied declaration required: FUN_004aa3d4. */
/* Supplied declaration required: FUN_004aa8c8. */
/* Supplied declaration required: FUN_004ac0bc. */
extern unsigned short FUN_004bca20(void);
extern unsigned int FUN_004bcbb4(unsigned int, unsigned int);
extern int FUN_004bf67c(unsigned int);
extern int FUN_004c3a98(int, unsigned int);
/* Supplied declaration required: FUN_004c3c84. */
/* Supplied declaration required: FUN_004c4604. */
/* Supplied declaration required: FUN_004c571c. */
extern int FUN_004c6b5c(int, int);
extern int FUN_004c87e0(void);
/* Supplied declaration required: FUN_004d7a70. */
/* Supplied declaration required: FUN_004d7fe4. */
extern int isEntryUsable(int);
/* Supplied declaration required: FUN_004dcc5c. */
/* Supplied declaration required: FUN_004dce1c. */
/* Supplied declaration required: FUN_004dd0c4. */
/* Supplied declaration required: FUN_004de7a0. */
/* Supplied declaration required: btlUnitSetParam. */
/* Supplied declaration required: FUN_004e0114. */
/* Supplied declaration required: FUN_004e20c0. */
/* Supplied declaration required: FUN_004e5a40. */
/* Supplied declaration required: FUN_004e5f2c. */
/* Supplied declaration required: FUN_004e626c. */
/* Supplied declaration required: FUN_004e6b64. */
/* Supplied declaration required: FUN_004e7168. */
extern int FUN_004e83ac(int *, unsigned int *, int);
/* Supplied declaration required: FUN_004e8454. */
extern int FUN_004ea0c0(int *, unsigned int *);
/* Supplied declaration required: FUN_004eaa68. */
/* Supplied declaration required: FUN_004ecd7c. */
/* Supplied declaration required: FUN_004ecee8. */
/* Supplied declaration required: FUN_004ee5b4. */
extern int FUN_004f5710(int, int);
extern int FUN_004f59b0(int);
extern int FUN_004f5a40(int);
extern int FUN_004f5d2c(int);
/* Supplied declaration required: FUN_004f612c. */
extern int FUN_004f6478(int);
/* Supplied declaration required: objRef1F50Release. */
/* Supplied declaration required: obj4FSlots28Reset. */
extern int FUN_004f80e4(int);
/* Supplied declaration required: FUN_004f84ec. */
/* Supplied declaration required: FUN_004f8f08. */
/* Supplied declaration required: FUN_004f8fa0. */
extern int FUN_004f9ae4(int, unsigned int);
extern int FUN_004f9d44(int);
extern unsigned int FUN_004fa030(int);
/* Supplied declaration required: FUN_004fb4fc. */
/* Supplied declaration required: FUN_004fb528. */
/* Supplied declaration required: FUN_004fb670. */
/* Supplied declaration required: FUN_004fbc30. */
/* Supplied declaration required: FUN_004fbeac. */
/* Supplied declaration required: FUN_004fc094. */
/* Supplied declaration required: FUN_004fcde0. */
/* Supplied declaration required: FUN_004fcfc0. */
/* Supplied declaration required: FUN_004fd508. */
/* Supplied declaration required: FUN_004fda3c. */
/* Supplied declaration required: FUN_004fda78. */
/* Supplied declaration required: FUN_004fdc0c. */
/* Supplied declaration required: FUN_004fdcd8. */
/* Supplied declaration required: FUN_004fddf4. */
/* Supplied declaration required: FUN_004fe618. */
/* Supplied declaration required: FUN_004fe9c0. */
/* Supplied declaration required: FUN_004fed00. */
/* Supplied declaration required: FUN_004feecc. */
/* Supplied declaration required: func_0x004fb574. */
/* Supplied declaration required: func_0x004fb5a8. */
/* Supplied declaration required: func_0x004fbd30. */
/* Supplied declaration required: func_0x004fe7b0. */
/* Supplied declaration required: func_0x004fee24. */
extern unsigned int func_0x004fee98(int, unsigned int *, unsigned int);


void FUN_004eb928(int *param_1,unsigned int param_2)

{
/* irregular: 5 goto(s); 86 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int *piVar16;
  short *psVar17;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int *puVar20;
  char *pcVar21;
  unsigned int temp_v18;
  char temp_v19;
  int temp_v20;
  unsigned int *puVar25;
  int temp_v21;
  int temp_v22;
  short *psVar28;
  unsigned int *puVar29;
  unsigned char temp_v23;
  float temp_v24;
  int temp_v25;
  int temp_v26;
  short sStack_4d0;
  short sStack_4ce;
  short sStack_4ba;
  short sStack_4b8;
  short sStack_4b6;
  short asStack_49c [266];
  int uStack_288;
  unsigned int uStack_74;
  unsigned int uStack_70;
  int iStack_68;
  unsigned int uStack_64;
  unsigned int temp_v27;
  int temp_v28;
  unsigned int uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  char acStack_44 [2];
  unsigned short temp_v29;
  int *piStack_30;
  unsigned int *puStack_2c;
  
  temp_v3 = *param_1;
  temp_v20 = g_btlScriptUnit + *(int *)(temp_v3 + 0xa4) * 0x1254;
  puVar25 = (unsigned int *)(temp_v20 + 4);
  switch(param_2) {
  case 1:
    if (!((DAT_00571218 & *(unsigned int *)(temp_v3 + 0x45a0)) == 0 &&
         (DAT_0057121c & *(unsigned int *)(temp_v3 + 0x45a4)) == 0)) {
      temp_v17 = *puVar25 | 0x80;
      *puVar25 = temp_v17;
    }
    else {
      temp_v17 = *puVar25;
      if ((*(unsigned int *)(temp_v3 + 0x45a4) & DAT_0057122c) != 0 ||
          (*(unsigned int *)(temp_v3 + 0x45a0) & DAT_00571228) != 0) {
        temp_v17 = temp_v17 | 0x1000;
        *puVar25 = temp_v17;
      }
    }
    if ((temp_v17 & 0x800) != 0) {
      FUN_004a9308(g_btlUiBlock,*(unsigned short *)(temp_v20 + 0x30),
                   (int)*(short *)(*(int *)(temp_v20 + 0x2c) + 0x1be),1);
      *puVar25 = *puVar25 & 0xfffff7ff;
      *(unsigned short *)(*(int *)(temp_v20 + 0x2c) + 0x1be) = 0;
      *(unsigned short *)(*(int *)(temp_v20 + 0x2c) + 0x1c0) = 0;
    }
    else {
      FUN_004a92d0(g_btlUiBlock,*(unsigned short *)(temp_v20 + 0x30),1);
      temp_v3 = FUN_003e8430(*param_1);
      if ((temp_v3 == 0) && (temp_v3 = FUN_004c87e0(), temp_v3 != 0)) {
        *(unsigned char *)(g_btlUiBlock + 0x617e) = 1;
        return;
      }
    }
    break;
  case 2:
    FUN_00222488(puVar25);
    sysMemClear(temp_v20 + 0x3c,0x85);
    FUN_004e8454(param_1);
    temp_v3 = FUN_00167f08();
    temp_v20 = FUN_003e8430(*param_1);
    if (temp_v20 != 0) {
      if (temp_v3 != 0x3f) {
        sysPlaySe(0x3f);
      }
    }
    else if ((temp_v3 != 0xb5) && (temp_v3 != 0xb6)) {
      FUN_003756c8(0);
    }
    *(unsigned short *)(g_btlUiBlock + 0x73e2) = 0xffff;
    return;
  case 3:
  case 0xf:
    sysMemClear(temp_v20 + 0x3c,0x85);
    FUN_004e8454(param_1);
    return;
  case 5:
    sysMemClear(temp_v20 + 0x3c,0x85);
    return;
  case 6:
    FUN_004dd0c4(param_1,puVar25);
    return;
  case 8:
    FUN_004aa8c8(g_btlUiBlock);
    sysMemClear(temp_v20 + 0x3c,0x85);
    gameGetSlotTable();
    return;
  case 9:
    temp_v3 = gameGetSlotTable();
    temp_v20 = 0;
    do {
      puVar29 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v20 * 0x408);
      if (((puVar29[1] & DAT_0057114c) != 0 || (*puVar29 & DAT_00571148) != 0) &&
         ((*puVar29 & DAT_00571160) != 0 || (puVar29[1] & DAT_00571164) != 0)) {
        temp_v5 = 0;
        do {
          if ((-1 < *(char *)(temp_v3 + temp_v5 + 0x1ca0)) &&
             (temp_v17 = FUN_00228ab0(temp_v5),
             *(short *)(temp_v17 + 0x62) == *(short *)((int)puVar29 + 0x166))) {
            puVar29[0xff] = temp_v17;
            temp_v1 = FUN_004bca20();
            *(unsigned short *)(puVar29 + 0x5b) = temp_v1;
            goto LAB_004ebd00;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 3);
        FUN_004fcde0(0,puVar25,puVar29);
      }
LAB_004ebd00:
      temp_v20 = temp_v20 + 1;
      if (temp_v20 >= 4) {
        return;
      }
    } while( 1 );
  case 0xb:
    FUN_004ee5b4(param_1,puVar25);
    return;
  case 0xc:
    temp_v3 = 0;
    piStack_30 = param_1;
    puStack_2c = puVar25;
    if (*(short *)(*(int *)(temp_v20 + 0x2c) + 0x1be) == 2) {
      temp_v5 = (int)*(short *)(*(int *)(temp_v20 + 0x2c) + 0x1c0);
      dataTable04FindById();
      temp_v17 = temp_v16;
      if (temp_v5 != 0) {
        temp_v17 = (unsigned int)*(unsigned char *)(temp_v5 + 0x4d);
      }
      if (temp_v5 != 0 && temp_v17 != 0) {
        temp_v17 = *(unsigned int *)(*piStack_30 + 0x45a0);
        temp_v18 = *(unsigned int *)(*piStack_30 + 0x45a4);
        if (!((temp_v18 & DAT_0057121c) == 0 && (temp_v17 & DAT_00571218) == 0)) {
          temp_v17 = *puVar25 | 0x80;
          *puVar25 = temp_v17;
        }
        else if (!((temp_v17 & DAT_00571228) == 0 && (temp_v18 & DAT_0057122c) == 0)) {
          temp_v17 = *puVar25 | 0x1000;
          *puVar25 = temp_v17;
        }
      }
      if ((*(unsigned int *)(temp_v5 + 0x3c) & 0x4000000) != 0) {
        temp_v3 = 1;
      }
    }
    temp_v22 = 0;
    temp_v5 = 0;
    iStack_4c = 0;
    iStack_50 = 0;
    temp_v27 = temp_v20 + 0x1204;
    puVar29 = puVar25;
    if (((((puVar25 != (unsigned int *)0x0) && (temp_v6 = FUN_003e8430(*piStack_30), temp_v6 == 0)) &&
         (temp_v6 = *(int *)(temp_v20 + 0x24), temp_v6 != 0)) &&
        ((*(char *)(temp_v6 + 0x23a) != '\0' &&
         (temp_v6 = FUN_003eca48(*piStack_30,*(unsigned short *)(temp_v6 + 0x166)), temp_v6 != 0)))) &&
       ((temp_v6 = FUN_003ec668(*piStack_30,(int)*(char *)(temp_v6 + 2),(int)*(short *)(temp_v27 + 0x44)
                             ), temp_v6 != 0 && (temp_v5 = DAT_00571140, DAT_00571140 < 1)))) {
      temp_v5 = *(int *)(temp_v6 + 100);
    }
    temp_v6 = *(int *)(DAT_00573808 + 0x1f58);
    temp_v21 = *(int *)(DAT_00573808 + 0x1f54);
    *(unsigned int *)(temp_v20 + 0x14) = 0;
    *(unsigned int *)(temp_v20 + 0x1c) = 0;
    *(unsigned int *)(*piStack_30 + 0x4bc0) = 0;
    iStack_68 = (int)*(short *)(*(int *)(temp_v20 + 0x2c) + 0x1be);
    FUN_003e8bb0(&sStack_4d0,*piStack_30,*(unsigned int *)(temp_v20 + 0x24));
    uStack_74 = (unsigned int)sStack_4ba;
    temp_v7 = (int)sStack_4b8;
    uStack_64 = (unsigned int)sStack_4b6;
    temp_v8 = (int)sStack_4d0;
    temp_v28 = 0;
    iStack_54 = 0;
    uStack_58 = 0;
    if (((*puVar25 & 0x1080) != 0) && (temp_v9 = FUN_0034919c(), temp_v9 != 0)) {
      FUN_00388758(1);
    }
    FUN_004e6b64(piStack_30,puVar25,asStack_49c);
    temp_v9 = 0;
    temp_v10 = FUN_004f59b0(DAT_00573808);
    temp_v26 = 0;
    *(int *)(temp_v20 + 0x20) = temp_v10 + temp_v5;
    iStack_48 = 0;
    do {
      temp_v13 = iStack_48;
      temp_v10 = iStack_4c;
      psVar17 = asStack_49c + iStack_48 * 2;
      if (*psVar17 < 0) break;
      temp_v26 = *piStack_30;
      temp_v9 = iStack_4c;
      FUN_003f0e20();
      acStack_44[0] = '\0';
      temp_v18 = uStack_74;
      FUN_004c4604(uStack_74,temp_v7,(int)*(short *)(*(int *)(temp_v20 + 0x2c) + 0x1be),
                   (int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),(int)*psVar17,
                   (*puVar25 & 0x8000) >> 0xf,0,acStack_44);
      piVar16 = piStack_30;
      temp_v14 = iStack_50;
      temp_v17 = uStack_74;
      uStack_70 = temp_v18;
      if ((*(int *)(temp_v20 + 0x34) != 4) || (!(temp_v18 == 1 || temp_v18 == 2))) {
        if ((temp_v18 == 0) && (acStack_44[0] != '\0')) {
          uStack_58 = 1;
        }
      }
      else {
        uStack_70 = 3;
      }
      switch(uStack_70) {
      case 0:
      case 1:
      case 2:
      case 3:
        FUN_004e20c0(piStack_30,puVar25,uStack_70,uStack_74,temp_v7,uStack_64,
                     (int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),(int)*psVar17,
                     (int)asStack_49c[temp_v13 * 2 + 1],temp_v10 + temp_v5,temp_v22,&temp_v28);
        break;
      case 5:
        temp_v13 = (int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a);
        temp_v11 = (int)*psVar17;
        temp_v14 = FUN_004f9ae4(DAT_00573808,1);
        temp_v10 = temp_v14 + temp_v10 + temp_v5;
        temp_v14 = FUN_004f5d2c(DAT_00573808);
        temp_v14 = temp_v14 * temp_v22;
        if (*(int *)(temp_v20 + 0x59c) == 1) {
          temp_v14 = FUN_004f5d2c(DAT_00573808);
          temp_v14 = *(int *)(*(int *)(*piVar16 + 0x1ed4) + temp_v11 * 0x1d0 + 100) + temp_v14;
        }
        temp_v14 = temp_v14 + temp_v10;
        temp_v25 = temp_v11;
        FUN_004fda78(temp_v14,0,puVar25,*(int *)(*piVar16 + 0x1ed4) + temp_v11 * 0x1d0,3,0);
        temp_v12 = FUN_003e8430(*piVar16);
        if (temp_v12 == 0) {
          func_0x004fb5a8(temp_v14 + 1,puVar25,*(int *)(*piVar16 + 0x1ed4) + temp_v11 * 0x1d0);
        }
        temp_v11 = *piVar16;
        FUN_001568f8(temp_v11,temp_v13);
        if ((temp_v11 != 0) && ((*(unsigned short *)(temp_v11 + 0x110) & 0x10) == 0)) {
          FUN_003f2aac(*piVar16,temp_v13,0);
        }
        temp_v11 = *piVar16;
        if (0 < *(int *)(temp_v11 + 0x4d6c)) {
          temp_v17 = *(unsigned int *)(temp_v11 + 0x45a4) | DAT_005712ac;
          *(unsigned int *)(temp_v11 + 0x45a0) = *(unsigned int *)(temp_v11 + 0x45a0) | DAT_005712a8;
          *(unsigned int *)(temp_v11 + 0x45a4) = temp_v17;
        }
        FUN_004e0114(piVar16,puVar25,temp_v25,temp_v10,10,0x14);
        FUN_004e5a40(piVar16,temp_v25,1);
        temp_v10 = FUN_004c6b5c(temp_v13,temp_v25);
        temp_v13 = *(int *)(temp_v20 + 0x14);
        if (temp_v10 != 0) {
          if (temp_v13 < 0) {
            temp_v13 = 0;
          }
          *(int *)(temp_v20 + 0x14) = temp_v13;
          temp_v13 = *(int *)(temp_v20 + 0x20);
        }
        else {
          if (temp_v13 < 5) {
            temp_v13 = 5;
          }
          *(int *)(temp_v20 + 0x14) = temp_v13;
          temp_v13 = *(int *)(temp_v20 + 0x20);
        }
        if (temp_v14 <= temp_v13) {
          temp_v14 = temp_v13;
        }
        *(int *)(temp_v20 + 0x20) = temp_v14;
        break;
      case 6:
        FUN_004eaa68(piStack_30,puVar25,uStack_74,(int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),
                     (int)*psVar17,temp_v10 + temp_v5,iStack_50);
        iStack_50 = (int)(char)((char)iStack_50 + '\x01');
        break;
      case 7:
        temp_v13 = (int)*psVar17;
        puVar20 = (unsigned int *)*piStack_30;
        FUN_003f0e20(puVar20,temp_v13);
        temp_v10 = FUN_004f6478(DAT_00573808);
        if ((DAT_00571160 & *puVar20) == 0 && (DAT_00571164 & puVar20[1]) == 0) {
          FUN_004fda78(temp_v10 + temp_v14,0,puVar25,*(int *)(*piVar16 + 0x1ed4) + temp_v13 * 0x1d0,3,0);
          FUN_004e5a40(piVar16,temp_v13,1);
          temp_v10 = *(int *)(temp_v20 + 0x14);
          if (temp_v10 < 5) {
            temp_v10 = 5;
          }
          *(int *)(temp_v20 + 0x14) = temp_v10;
        }
        else if ((*puVar20 & DAT_00571148) != 0 || (puVar20[1] & DAT_0057114c) != 0) {
          FUN_004fcde0(temp_v10 + temp_v14,puVar25,puVar20);
        }
        iStack_50 = (int)(char)((char)iStack_50 + '\x01');
        break;
      case 9:
        *(unsigned int *)(*piStack_30 + 0xa8) = 4;
        *puVar25 = *puVar25 | 0x2000;
        FUN_004feecc(1,puVar25);
        FUN_004fb670(0,puVar25);
        *(unsigned int *)(g_btlCamera + 0x7cc) = 0xffffffff;
        break;
      case 0xb:
        temp_v2 = *psVar17;
        temp_v13 = *piStack_30;
        FUN_003f0e20(temp_v13,(int)temp_v2);
        FUN_004fcde0(temp_v10 + temp_v5 + 0x28,puVar25,temp_v13);
        FUN_004e0114(piVar16,puVar25,(int)temp_v2,temp_v10 + temp_v5,0x1e,0x1e);
        break;
      case 0xc:
        dataTable04FindById();
        if (temp_v17 == 0) break;
        switch(*(unsigned char *)(temp_v17 + 0x60)) {
        default:
          break;
        case 2:
          temp_v4 = 0x11;
          *(unsigned int *)(temp_v20 + 0x1c) = temp_v4;
          break;
        case 3:
          temp_v4 = 0x12;
          *(unsigned int *)(temp_v20 + 0x1c) = temp_v4;
          break;
        case 4:
          temp_v4 = 0x13;
          *(unsigned int *)(temp_v20 + 0x1c) = temp_v4;
          break;
        case 0xfc:
          *(unsigned int *)(temp_v20 + 0x1c) = 0x17;
          break;
        case 0xfd:
          temp_v4 = 0x16;
          *(unsigned int *)(temp_v20 + 0x1c) = temp_v4;
          break;
        case 0xfe:
          temp_v4 = 0x15;
          *(unsigned int *)(temp_v20 + 0x1c) = temp_v4;
          break;
        case 0xff:
          temp_v4 = 0x14;
          *(unsigned int *)(temp_v20 + 0x1c) = temp_v4;
        }
        break;
      case 0xd:
        if ((*puVar25 & 0x40000) == 0) {
          *(unsigned int *)(temp_v20 + 0x1c) = 0x18;
          *(char *)(*piStack_30 + 0x4e50) = *(char *)(*piStack_30 + 0x4e50) + '\x01';
          *puVar25 = *puVar25 | 0x40000;
        }
        break;
      case 0xe:
        temp_v13 = (int)*psVar17;
        temp_v10 = FUN_004f59b0(DAT_00573808);
        temp_v10 = temp_v10 + temp_v5;
        temp_v14 = FUN_004bf67c(temp_v17);
        func_0x004fb574(temp_v10,puVar25,-temp_v14);
        FUN_004e0114(piVar16,puVar25,temp_v13,temp_v10,10,0x14);
        if (temp_v14 != 0) {
          FUN_004e5a40(piVar16,temp_v13,3);
        }
        else {
          FUN_004e5a40(piVar16,temp_v13,2);
        }
        temp_v13 = *(int *)(temp_v20 + 0x14);
        if (temp_v13 < 0) {
          temp_v13 = 0;
        }
        *(int *)(temp_v20 + 0x14) = temp_v13;
        if (temp_v10 <= *(int *)(temp_v20 + 0x20)) {
          temp_v10 = *(int *)(temp_v20 + 0x20);
        }
        *(int *)(temp_v20 + 0x20) = temp_v10;
        break;
      case 0xf:
        temp_v13 = *(int *)(temp_v20 + 0x14);
        if (temp_v13 < 0) {
          temp_v13 = 0;
        }
        *(int *)(temp_v20 + 0x14) = temp_v13;
        temp_v13 = *(int *)(temp_v20 + 0x20);
        temp_v14 = temp_v10 + temp_v5;
        if (temp_v10 + temp_v5 <= temp_v13) {
          temp_v14 = temp_v13;
        }
        *(int *)(temp_v20 + 0x20) = temp_v14;
        break;
      case 0x10:
        temp_v13 = FUN_004f9ae4(DAT_00573808,1);
        temp_v14 = *(int *)(temp_v20 + 0x14);
        if (temp_v14 < 0) {
          temp_v14 = 0;
        }
        temp_v13 = temp_v13 + temp_v10 + temp_v5;
        *(int *)(temp_v20 + 0x14) = temp_v14;
        temp_v10 = *(int *)(temp_v20 + 0x20);
        if (*(int *)(temp_v20 + 0x20) < temp_v13) {
          temp_v10 = temp_v13;
        }
        *(int *)(temp_v20 + 0x20) = temp_v10;
        FUN_004fbeac(temp_v13,puVar25,0,0x1d,0);
        iStack_54 = 1;
        break;
      case 0x11:
        temp_v2 = *(short *)(*(int *)(temp_v20 + 0x28) + 0x6a);
        temp_v13 = FUN_004f5a40(DAT_00573808);
        temp_v17 = uStack_74;
        temp_v14 = *piStack_30;
        FUN_003f0e20(temp_v14,(int)temp_v2);
        dataTable04FindById();
        temp_v19 = '\0';
        if ((temp_v17 != 0) && (temp_v0 = *(char *)(temp_v17 + 0x4d), temp_v0 == '\x01' || temp_v0 == '\x02'))
        {
          temp_v19 = temp_v0;
        }
        FUN_004fda3c(temp_v13 + temp_v10 + temp_v5,puVar25,temp_v14,temp_v19);
      }
      if (temp_v21 != 0) {
        if (uStack_70 != 1 && uStack_70 != 2) {
          temp_v10 = 0;
          do {
            temp_v13 = FUN_004f59b0(DAT_00573808);
            if (-1 < temp_v13) {
              temp_v2 = *(short *)(temp_v21 + temp_v10 * 0x16 + 0x6a);
              temp_v13 = FUN_004f5d2c(DAT_00573808);
              switch(temp_v2) {
              case 0:
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 0xc:
                if ((temp_v2 == 0xc) && (-1 < *psVar17)) {
                  puVar20 = (unsigned int *)*piStack_30;
                  FUN_003f0e20();
                  if ((puVar20 != (unsigned int *)0x0) &&
                     ((*puVar20 & DAT_00571150) == 0 && (puVar20[1] & DAT_00571154) == 0)) break;
                }
                temp_v14 = temp_v21 + temp_v10 * 0x16;
                FUN_004fdcd8((int)*(short *)(temp_v14 + 0x68) + temp_v5 + temp_v13 * temp_v22,puVar29,
                             (int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),(int)*psVar17,1,temp_v10,
                             *(unsigned short *)(temp_v14 + 0x6a),temp_v14 + 0x58);
              }
            }
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < 4);
          goto code_r0x004ef594;
        }
      }
      else {
code_r0x004ef594:
        if ((uStack_70 == 3) && ((sStack_4ce == 6 || (sStack_4ce == 7)))) {
          FUN_004c3c84((int)*psVar17,0x16,0);
        }
      }
      piVar16 = piStack_30;
      psVar17 = asStack_49c;
      temp_v19 = *(char *)(*piStack_30 + 0xa0) - '\x01';
      *(char *)(*piStack_30 + 0xa0) = temp_v19;
      if ('\0' < temp_v19) {
        temp_v19 = *(char *)(*piStack_30 + 0xa1);
      }
      if (('\0' < temp_v19) && (*(int *)(temp_v20 + 0x574) == 0)) {
        temp_v13 = 0;
        temp_v10 = iStack_48;
        do {
          if ((*(char *)((int)puVar25 + temp_v13 + 0x38) != '\0') &&
             ((puVar20 = (unsigned int *)(*(int *)(*piVar16 + 0x1ffc) + temp_v13 * 0x408),
              (puVar20[1] & DAT_0057117c) != 0 || (DAT_00571178 & *puVar20) != 0 ||
              (temp_v14 = FUN_004e83ac(piVar16,puVar25,temp_v13), temp_v14 != 0)))) {
            *(unsigned char *)((int)puVar25 + temp_v13 + 0x38) = 0;
          }
          temp_v13 = temp_v13 + 1;
        } while (temp_v13 < 0x6d);
        temp_v14 = 0;
        temp_v2 = 0;
        temp_v13 = 0x85;
        pcVar21 = (char *)(temp_v20 + 0x3c);
        do {
          if (*pcVar21 != '\0') {
            temp_v11 = temp_v14 * 4;
            psVar28 = (short *)(&uStack_288 + temp_v14);
            temp_v14 = temp_v14 + 1;
            *psVar28 = temp_v2;
            *(unsigned short *)((int)&uStack_288 + temp_v11 + 2) = 0;
          }
          temp_v13 = temp_v13 - 1;
          temp_v2 = temp_v2 + 1;
          pcVar21 = pcVar21 + 1;
        } while (temp_v13 != 0);
        if (temp_v14 != 0) {
          if ((!((DAT_00571168 & **(unsigned int **)(temp_v20 + 0x24)) == 0 &&
                ((*(unsigned int **)(temp_v20 + 0x24))[1] & DAT_0057116c) == 0)) && (temp_v14 >= 2)) {
            FUN_004de7a0(piVar16,puVar25,&uStack_288);
            temp_v2 = (short)(int)piVar16;
          }
          else {
            temp_v13 = lcgRandomRange((temp_v14 - 1U) & 0xffff);
            temp_v2 = *(short *)(&uStack_288 + temp_v13);
            *(short *)((int)&uStack_288 + temp_v13 * 4 + 2) =
                 *(short *)((int)&uStack_288 + temp_v13 * 4 + 2) + 1;
          }
          psVar17[temp_v10 * 2 + 2] = temp_v2;
          psVar17[temp_v10 * 2 + 3] = 1;
        }
      }
      temp_v22 = temp_v22 + 1;
      iStack_48 = iStack_48 + 1;
    } while (iStack_48 < 0x85);
    temp_v17 = uStack_74;
    dataTable04FindById();
    if ((*puVar25 & 0x200) == 0) {
      if (*(short *)(*(int *)(temp_v20 + 0x2c) + 0x1be) == 1) {
        FUN_004c3c84((int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0xe,0);
        FUN_004c3c84((int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0x10,0);
        FUN_004c3c84((int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0x13,0);
        goto code_r0x004ef7e8;
      }
      if (temp_v17 != 0) {
        if (*(char *)(temp_v17 + 0x23) != '\0') {
          if (*(char *)(temp_v17 + 0x23) == '\x01') {
            FUN_004c3c84((int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0xf,0);
            FUN_004c3c84((int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0x11,0);
            temp_v18 = (*(unsigned int *)(temp_v17 + 0x28) & 0xffff) >> 0xb;
            if ((temp_v18 == 2 || temp_v18 == 3) || temp_v18 == 0x14) {
              temp_v4 = 0x2a;
              temp_v2 = *(short *)(*(int *)(temp_v20 + 0x28) + 0x6a);
              FUN_004c3c84((int)temp_v2,temp_v4,0);
            }
          }
        }
        else {
          FUN_004c3c84((int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0xe,0);
          FUN_004c3c84((int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0x10,0);
          temp_v4 = 0x13;
          temp_v2 = *(short *)(*(int *)(temp_v20 + 0x28) + 0x6a);
          FUN_004c3c84((int)temp_v2,temp_v4,0);
        }
        FUN_004c3c84((int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0x12,0);
        goto code_r0x004ef7f0;
      }
    }
    else {
code_r0x004ef7e8:
      if (temp_v17 != 0) {
code_r0x004ef7f0:
        if ('\0' < *(char *)(temp_v17 + 0x41)) {
          temp_v10 = *(int *)(temp_v20 + 0x2c);
          temp_v7 = (int)(char)(*(char *)(temp_v17 + 0x41) - '\x01');
          if (temp_v7 >= 0x15) {
            FUN_004c571c((int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0x17,1,0);
          }
          else {
            *(unsigned short *)(temp_v10 + 0x152) = *(unsigned short *)(temp_v10 + 0x128);
            *(unsigned short *)(temp_v10 + 0x154) = *(unsigned short *)(temp_v10 + 0x12a);
            *(unsigned short *)(temp_v10 + 0x156) = *(unsigned short *)(temp_v10 + 300);
            *(unsigned short *)(temp_v10 + 0x158) = *(unsigned short *)(temp_v10 + 0x12e);
            *(unsigned short *)(temp_v10 + 0x15a) = *(unsigned short *)(temp_v10 + 0x130);
            *(unsigned short *)(temp_v10 + 0x15c) = *(unsigned short *)(temp_v10 + 0x132);
            *(unsigned short *)(temp_v10 + 0x15e) = *(unsigned short *)(temp_v10 + 0x134);
            *(unsigned short *)(temp_v10 + 0x160) = *(unsigned short *)(temp_v10 + 0x136);
            *(unsigned short *)(temp_v10 + temp_v7 * 2 + 0x152) = 0x87d;
          }
        }
      }
    }
    if (temp_v21 != 0) {
      temp_v7 = 0;
      do {
        temp_v10 = FUN_004f59b0(DAT_00573808);
        if (-1 < temp_v10) {
          temp_v10 = temp_v21 + temp_v7 * 0x16;
          if (*(unsigned short *)(temp_v10 + 0x6a) - 6 < 6) {
            FUN_004fdcd8(*(short *)(temp_v10 + 0x68) + temp_v5,puVar29,
                         (int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0xffffffff,1,temp_v7,
                         (unsigned int)*(unsigned short *)(temp_v10 + 0x6a),temp_v10 + 0x58);
          }
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 4);
    }
    if ((*puVar25 & 0x1080) == 0) {
      if (iStack_68 == 2 || iStack_68 == 3) {
        FUN_0047eccc(uStack_74 & 0xffff);
        FUN_0047f138(uStack_74 & 0xffff,puVar29,temp_v5);
        if ((*puVar25 & 0x1080) != 0) {
          temp_v9 = 1;
        }
      }
    }
    else {
      temp_v9 = 1;
    }
    temp_v7 = *(int *)(temp_v20 + 0x20) + 5;
    temp_v2 = *(short *)(*(int *)(temp_v20 + 0x2c) + 0x1be);
    if ((temp_v2 != 10) && ((*puVar25 & 0x2000) == 0)) {
      if (temp_v2 != 9) {
        if (temp_v3 == 0) {
          if (temp_v22 >= 1) {
            if (*(int *)(temp_v20 + 0x34) == 0) {
              FUN_004fd508(temp_v9 + temp_v7,puVar29,*(unsigned int *)(temp_v20 + 0x14),
                           *(unsigned int *)(temp_v20 + 0x28),1);
            }
          }
          else {
            FUN_004fd508(temp_v9 + temp_v7,puVar29,0,*(unsigned int *)(temp_v20 + 0x28),1);
          }
        }
        temp_v3 = *(int *)(temp_v20 + 0x1c);
        if (temp_v3 != 0) {
          if (temp_v3 != 0x18) {
            FUN_004fd508(temp_v9 + temp_v7 + 0x14,puVar29,temp_v3,*(unsigned int *)(temp_v20 + 0x28),1);
          }
          else {
            func_0x004fe7b0(temp_v9 + temp_v7 + 0x14,puVar29);
          }
        }
      }
      else if (temp_v3 == 0) {
        FUN_004fd508(temp_v9 + temp_v7,puVar29,0xb,*(unsigned int *)(temp_v20 + 0x28),1);
      }
    }
    if ((*puVar25 & 0x1080) == 0) {
      if (!(iStack_68 == 2 || iStack_68 == 3)) {
        if (iStack_68 != 1) {
          if ((iStack_68 == 8) && (iStack_54 == 0)) {
            temp_v18 = uStack_64;
            FUN_00192550();
            temp_v2 = *(short *)(temp_v18 + 0x32);
            if (temp_v2 != 0) {
              temp_v3 = FUN_002c7bf4(temp_v2);
              temp_v22 = FUN_004f5a40(DAT_00573808);
              if (temp_v22 >= 1) {
                if (temp_v3 != 0) {
                  if ((*(unsigned int *)(temp_v3 + 0xc) & 0x10) != 0) {
                    FUN_004fcfc0(temp_v22 + temp_v5,puVar29,temp_v2,temp_v26);
                  }
                  else {
                    FUN_004fcfc0(temp_v22 + temp_v5,puVar29,temp_v2,*(unsigned int *)(temp_v20 + 0x24));
                  }
                }
              }
              else if (temp_v3 != 0) {
                if ((*(unsigned int *)(temp_v3 + 0xc) & 0x10) != 0) {
                  FUN_004fcfc0(temp_v9 + temp_v5 + 0x1e,puVar29,temp_v2,temp_v26);
                }
                else {
                  FUN_004fcfc0(temp_v9 + temp_v5 + 0x1e,puVar29,temp_v2,*(unsigned int *)(temp_v20 + 0x24));
                }
              }
            }
          }
        }
        else if (*(int *)(*piStack_30 + 0x4bc0) != 0) {
          temp_v3 = FUN_004f6478(DAT_00573808);
          if (temp_v3 + temp_v28 >= 1) {
            FUN_004fcfc0(temp_v3 + temp_v28 + temp_v5,puVar29,0,*(unsigned int *)(temp_v20 + 0x24));
          }
          else {
            FUN_004fcfc0(temp_v9 + temp_v5 + 0x1e,puVar29,0,*(unsigned int *)(temp_v20 + 0x24));
          }
        }
      }
      else if (iStack_54 == 0) {
        temp_v3 = FUN_002c7bf4(uStack_74);
        temp_v22 = FUN_004f5a40(DAT_00573808);
        if (temp_v22 >= 1) {
          if (temp_v3 != 0) {
            if ((*(unsigned int *)(temp_v3 + 0xc) & 0x10) != 0) {
              FUN_004fcfc0(temp_v22 + temp_v5,puVar29,uStack_74,temp_v26);
            }
            else {
              FUN_004fcfc0(temp_v22 + temp_v5,puVar29,uStack_74,*(unsigned int *)(temp_v20 + 0x24));
            }
          }
        }
        else if (temp_v3 != 0) {
          if ((*(unsigned int *)(temp_v3 + 0xc) & 0x10) != 0) {
            FUN_004fcfc0(temp_v9 + temp_v5 + 0x1e,puVar29,uStack_74,temp_v26);
          }
          else {
            FUN_004fcfc0(temp_v9 + temp_v5 + 0x1e,puVar29,uStack_74,*(unsigned int *)(temp_v20 + 0x24));
          }
        }
        if (*(int *)(*piStack_30 + 0x4bc0) != 0) {
          temp_v3 = FUN_004f6478(DAT_00573808);
          if (temp_v3 + temp_v28 >= 1) {
            FUN_004fcfc0(temp_v3 + temp_v28 + temp_v5,puVar29,uStack_74,*(unsigned int *)(temp_v20 + 0x24));
          }
          else {
            FUN_004fcfc0(temp_v9 + temp_v5 + 0x1e,puVar29,uStack_74,*(unsigned int *)(temp_v20 + 0x24));
          }
        }
      }
    }
    if (temp_v6 != 0) {
      temp_v3 = 0;
      do {
        temp_v22 = FUN_004f80e4(DAT_00573808);
        if (-1 < temp_v22) {
          temp_v22 = temp_v6 + temp_v3 * 0x16;
          FUN_004fdcd8(*(short *)(temp_v22 + 0x10) + temp_v5,puVar29,
                       (int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0,0,temp_v3,
                       *(unsigned short *)(temp_v22 + 0x12),temp_v22);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 4);
    }
    if ((*(char *)(temp_v20 + 0x5a0) == '\x01') && (temp_v21 != 0)) {
      temp_v3 = 0;
      do {
        temp_v22 = FUN_004f9d44(DAT_00573808);
        if (-1 < temp_v22) {
          temp_v7 = temp_v21 + temp_v3 * 0x16;
          temp_v22 = FUN_004f5710(DAT_00573808,temp_v7 + 0x108);
          if (temp_v22 != 0) {
            temp_v22 = FUN_004f9d44(DAT_00573808);
            func_0x004fbd30(temp_v22 + temp_v5,puVar29);
          }
          else if (*(int *)(temp_v20 + 0x598) != 0) {
            FUN_004fdcd8(*(short *)(temp_v7 + 0x118) + temp_v5,puVar29,
                         (int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0,3,temp_v3,
                         *(unsigned short *)(temp_v7 + 0x11a),temp_v7 + 0x108);
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 4);
    }
    temp_v9 = 0;
    temp_v3 = 0;
    temp_v22 = 0x6d;
    temp_v7 = *piStack_30;
    psVar17 = (short *)(*(int *)(temp_v7 + 0x1ed4) + 0x68);
    do {
      if (((-1 < *psVar17) && (*(char *)((int)puVar25 + *psVar17 + 0x38) != '\0')) && (temp_v9 == 0))
      {
        temp_v9 = *(int *)(temp_v7 + 0x1ed4) + temp_v3 * 0x1d0;
      }
      temp_v22 = temp_v22 - 1;
      psVar17 = psVar17 + 0xe8;
      temp_v3 = temp_v3 + 1;
    } while (temp_v22 != 0);
    uStack_288 = 0;
    if ((*(unsigned int *)(g_btlCamera + 0x64c) & 0x100) == 0) {
      temp_v3 = 0;
      do {
        if (*(int *)(DAT_00573808 + 0x1f54) != 0) {
          temp_v22 = temp_v21 + temp_v3 * 8;
          temp_v19 = *(char *)(temp_v22 + 0x160);
          if (temp_v19 != '\0') {
            if (temp_v19 != '\b') {
              if (temp_v19 != '\x13') {
                if (temp_v19 != '\x14') {
                  if (temp_v19 == '\r' || temp_v19 == '\x0f') {
                    temp_v9 = *(int *)(temp_v20 + 0x28);
                  }
                  if ((*puVar25 & 0x1080) == 0) {
                    uStack_288 = (unsigned int)*(unsigned char *)(temp_v22 + 0x161) + temp_v5;
                    FUN_004fddf4(uStack_288,puVar29,*(unsigned char *)(temp_v22 + 0x162),temp_v19,temp_v9,
                                 (int)*(short *)(temp_v22 + 0x164),(int)*(short *)(temp_v22 + 0x166),
                                 *(unsigned char *)(temp_v22 + 0x163),temp_v8);
                  }
                }
                else if ((*puVar25 & 0x1080) == 0) {
                  uStack_288 = (unsigned int)*(unsigned char *)(temp_v22 + 0x161) + temp_v5;
                  FUN_004fed00(uStack_288,puVar29,*(unsigned char *)(temp_v22 + 0x162),0,1);
                }
              }
              else if ((*puVar25 & 0x1080) == 0) {
                uStack_288 = (unsigned int)*(unsigned char *)(temp_v22 + 0x161) + temp_v5;
                func_0x004fee24(uStack_288,puVar29,*(unsigned char *)(temp_v22 + 0x162));
                *(unsigned int *)(g_btlCamera + 0x64c) = *(unsigned int *)(g_btlCamera + 0x64c) | 0x1000000;
              }
            }
            else if (((((*(unsigned int *)(*piStack_30 + 0x45a0) & DAT_00571210) == 0 &&
                        (*(unsigned int *)(*piStack_30 + 0x45a4) & DAT_00571214) == 0) || (iStack_68 != 2))
                     || (uStack_74 != 0x2a)) && ((*puVar25 & 0x1080) == 0)) {
              uStack_288 = (unsigned int)*(unsigned char *)(temp_v22 + 0x161) + temp_v5;
              FUN_004fed00(uStack_288,puVar29,*(unsigned char *)(temp_v22 + 0x162),1,1);
            }
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 6);
      if ((((*puVar25 & 0x1080) == 0) &&
          ((DAT_00571210 & *(unsigned int *)(*piStack_30 + 0x45a0)) != 0 ||
           (*(unsigned int *)(*piStack_30 + 0x45a4) & DAT_00571214) != 0)) &&
         ((iStack_68 == 2 && ((uStack_74 == 0x2d || uStack_74 == 0x2a || (uStack_74 == 0x24)))))) {
        uStack_288 = temp_v5 + 0x1e;
        func_0x004fee24(temp_v5 + 0x1e,puVar29,0);
        *(unsigned int *)(g_btlCamera + 0x64c) = *(unsigned int *)(g_btlCamera + 0x64c) | 0x1000000;
      }
    }
    else {
      temp_v24 = 100.0f;
      if ((*(unsigned int *)(temp_v7 + 0x45a0) & DAT_00571210) != 0 ||
          (*(unsigned int *)(temp_v7 + 0x45a4) & DAT_00571214) != 0) {
        temp_v9 = *(int *)(temp_v20 + 0x28);
      }
      if ((-1 < DAT_0057157c) && (-1 < DAT_00571514)) {
        FUN_004fddf4(DAT_0057157c,puVar29,DAT_00571514,0x15,temp_v9,(int)(DAT_00571578 * 100.0f),0,
                     DAT_00571518,temp_v8);
      }
      if ((-1 < DAT_00571584) && (-1 < DAT_00571520)) {
        FUN_004fddf4(DAT_00571584,puVar29,DAT_00571520,0x16,temp_v9,(int)(DAT_00571580 * temp_v24),0,
                     DAT_00571588,temp_v8);
      }
      if ((-1 < DAT_00571590) && (-1 < DAT_00571524)) {
        FUN_004fddf4(DAT_00571590,puVar29,DAT_00571524,0x17,temp_v9,(int)(DAT_0057158c * temp_v24),0,
                     DAT_00571594,temp_v8);
      }
      if ((-1 < DAT_00571598) && (-1 < DAT_00571528)) {
        FUN_004fddf4(DAT_00571598,puVar29,DAT_00571528,0x18,temp_v9,0,0,DAT_0057159c,temp_v8);
      }
      if ((-1 < DAT_005715a0) && (-1 < DAT_0057152c)) {
        FUN_004fddf4(DAT_005715a0,puVar29,DAT_0057152c,0x19,temp_v9,0,0,DAT_005715a4,temp_v8);
      }
      if ((-1 < DAT_005715a8) && (-1 < DAT_005715ac)) {
        FUN_004fed00(DAT_005715a8,puVar29,DAT_005715ac,1,1);
      }
    }
    temp_v3 = *(int *)(temp_v20 + 0x28);
    if ((*(unsigned int *)(temp_v3 + 0x50) & 0x400) == 0) {
      temp_v7 = 0;
      temp_v3 = -1;
      temp_v22 = 0;
      temp_v8 = 0x6d;
      pcVar21 = (char *)(temp_v20 + 0x3c);
      do {
        if (*pcVar21 != '\0') {
          temp_v7 = temp_v7 + 1;
          temp_v3 = temp_v22;
        }
        temp_v8 = temp_v8 - 1;
        temp_v22 = temp_v22 + 1;
        pcVar21 = pcVar21 + 1;
      } while (temp_v8 != 0);
      if ((temp_v7 == 1) && (-1 < temp_v3)) {
        temp_v22 = *(int *)(*piStack_30 + 0x1ffc);
        puVar20 = (unsigned int *)(temp_v22 + temp_v3 * 0x408);
        if ((*puVar20 & DAT_00571168) != 0 || (puVar20[1] & DAT_0057116c) != 0) {
          temp_v3 = *(int *)(*piStack_30 + 0x1ed4) + *(short *)(temp_v22 + temp_v3 * 0x408 + 8) * 0x1d0;
          goto code_r0x004f054c;
        }
      }
    }
    else {
code_r0x004f054c:
      if ((temp_v3 != 0) && ((*puVar25 & 0x1080) == 0)) {
        FUN_004fe618(0,puVar29,5);
      }
    }
    temp_v18 = 0;
    if ((temp_v6 != 0) && (temp_v18 = FUN_004fa030(DAT_00573808), -1 < (int)temp_v18)) {
      temp_v18 = func_0x004fee98(temp_v18 + temp_v5,puVar25,5);
    }
    temp_v15 = 0;
    if (temp_v17 != 0) {
      temp_v15 = uStack_74;
      temp_v18 = uStack_74;
    }
    if ((temp_v17 != 0 && temp_v18 != 0) && -1 < (int)temp_v15) {
      FUN_0023acdc((int)(short)temp_v18);
    }
    temp_v3 = 0;
    if ((*(int *)(temp_v20 + 0x574) == 0) &&
       (temp_v22 = *piStack_30,
       (*(unsigned int *)(temp_v22 + 0x45a8) & uRam005712d8) == 0 &&
       (*(unsigned int *)(temp_v22 + 0x45ac) & uRam005712dc) == 0)) {
      if (uStack_288 == 0) {
        uStack_288 = temp_v5 + 0x78;
      }
      temp_v5 = *(int *)(temp_v20 + 0x2c);
      temp_v2 = *(short *)(temp_v5 + 0x1be);
      if (temp_v2 != 2) {
        if (temp_v2 != 3) {
          if (temp_v2 == 8) {
            temp_v2 = *(short *)(temp_v5 + 0x1c0);
            temp_v3 = (int)temp_v2;
            FUN_00192550();
            if ((*(unsigned char *)(temp_v3 + 0x42) & 1) == 0) {
              flagValueSub((int)temp_v2,1);
            }
          }
        }
        else {
          FUN_003f2594(temp_v22);
        }
      }
      else if (temp_v17 != 0) {
        if ((*(unsigned int *)(temp_v17 + 0x3c) & 0x400) != 0) {
          temp_v3 = *(int *)(temp_v5 + 0xf4) - 1;
          FUN_003ee0c0(temp_v22);
          FUN_004fc094(uStack_288,puVar25,0,*(unsigned int *)(temp_v20 + 0x28),0,temp_v3,0xffffffff,
                       0xffffffff,*(unsigned int *)(*(int *)(temp_v20 + 0x2c) + 0xf4),
                       *(unsigned int *)(*(int *)(temp_v20 + 0x2c) + 0xf8),0,0,0,0,0,0,0,0,0,0xffffffff,
                       1,0,1,0,0,1);
          temp_v5 = gameFlagIsSet(0x591);
          if ((temp_v5 != 0) && ((*puVar25 & 0x20000) == 0)) {
            FUN_004fbeac(uStack_288,puVar25,0,0x45,1);
            *puVar25 = *puVar25 | 0x20000;
          }
        }
        if ((*(unsigned int *)(temp_v17 + 0x3c) & 0x200) != 0) {
          temp_v3 = *(int *)(*(int *)(temp_v20 + 0x2c) + 0xf8);
          FUN_003ee0c0(*piStack_30);
          FUN_004fc094(uStack_288,puVar25,0,*(unsigned int *)(temp_v20 + 0x28),0,temp_v3,0xffffffff,
                       0xffffffff,*(unsigned int *)(*(int *)(temp_v20 + 0x2c) + 0xf4),
                       *(unsigned int *)(*(int *)(temp_v20 + 0x2c) + 0xf8),0,0,0,0,0,0,0,0,0,0xffffffff,
                       1,0,1,0,0,1);
          FUN_004fbc30(uStack_288 + 0x19,puVar25,*(unsigned int *)(temp_v20 + 0x28),0);
        }
        FUN_004e5f2c(piStack_30,puVar25,(int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),-temp_v3);
        temp_v17 = (unsigned int)*(unsigned char *)(temp_v17 + 0x22);
        if (temp_v17 != 0) {
          puVar29 = *(unsigned int **)(temp_v20 + 0x24);
          if ((DAT_00571168 & *puVar29) == 0 && (DAT_0057116c & puVar29[1]) == 0) {
            if (!((puVar29[1] & DAT_00571154) == 0 && (*puVar29 & DAT_00571150) == 0)) {
              temp_v17 = FUN_003df57c(uStack_74,1);
              temp_v3 = FUN_004c3a98((int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0x24);
            }
            else {
              temp_v17 = FUN_004bcbb4(puVar29[0xff],uStack_74);
              temp_v3 = FUN_004c3a98((int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0x24);
            }
            if (0 < temp_v3) {
              temp_v17 = 0;
            }
          }
          FUN_004fe9c0(1,0,puVar25,*(unsigned int *)(temp_v20 + 0x28),temp_v17,0,1);
          FUN_004fb528(1,puVar25,*(unsigned int *)(temp_v20 + 0x28),-temp_v17,1);
        }
      }
    }
    if (((*puVar25 & 0x1080) == 0) && (temp_v3 = FUN_003efb18(*piStack_30), temp_v3 == 0)) {
      switch(iStack_68) {
      case 1:
        temp_v3 = *(int *)(*(int *)(temp_v20 + 0x24) + 0x150);
        FUN_0034a290();
        if (temp_v3 != 0) {
          FUN_004aa3d4(g_btlUiBlock,2,*(unsigned int *)(*(int *)(temp_v20 + 0x24) + 0x150) & 0xffff,
                       *(unsigned int *)(*(int *)(temp_v20 + 0x24) + 0x3f8),0,0);
        }
        else {
          temp_v3 = *(int *)(temp_v20 + 0x2c);
          temp_v23 = -1 < *(short *)(temp_v3 + 4);
          if (!temp_v23) {
            temp_v1 = *(unsigned short *)(temp_v3 + 2);
          }
          else {
            temp_v1 = *(unsigned short *)(temp_v3 + 4);
          }
          FUN_004aa3d4(g_btlUiBlock,iStack_68,0,*(unsigned int *)(*(int *)(temp_v20 + 0x24) + 0x3f8),
                       temp_v1,temp_v23);
        }
        break;
      case 2:
      case 3:
        FUN_004aa3d4(g_btlUiBlock,iStack_68,uStack_74 & 0xffff,
                     *(unsigned int *)(*(int *)(temp_v20 + 0x24) + 0x3f8),
                     *(unsigned short *)(*(int *)(temp_v20 + 0x2c) + 2),0);
        break;
      case 8:
        FUN_004aa3d4(g_btlUiBlock,iStack_68,uStack_64 & 0xffff,0,0,0);
        break;
      case 9:
      case 0xb:
      case 0xc:
        if ((*puVar25 & 0x2000000) == 0) {
          FUN_004aa3d4(g_btlUiBlock,iStack_68,1,0,0,0);
        }
        else {
          FUN_004aa3d4(g_btlUiBlock,iStack_68,0,0,0,0);
        }
        break;
      case 10:
        temp_v3 = 0;
        do {
          if (*(char *)((int)puVar25 + temp_v3 + 0x38) != '\0') {
            FUN_004aa3d4(g_btlUiBlock,iStack_68,0,0,0,0);
            break;
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x6d);
      }
    }
    if ((uStack_58 & *(unsigned int *)(*piStack_30 + 0x4bc0)) != 0) {
      FUN_004e5a40(piStack_30,(int)*(short *)(*(int *)(temp_v20 + 0x24) + 0x6e),5);
    }
    if ((*puVar25 & 0x1080) == 0) {
      temp_v3 = FUN_003efb18(*piStack_30);
      if (temp_v3 != 0) {
        temp_v2 = FUN_003e4a00();
        if (temp_v2 < 3) {
          FUN_002a49e4(*(unsigned int *)(*piStack_30 + 0x2268),0x3b);
        }
        else {
          if (temp_v2 < 6) {
            temp_v4 = 0x30;
          }
          else {
            temp_v4 = 0x3c;
          }
          FUN_002a49e4(*(unsigned int *)(*piStack_30 + 0x2268),temp_v4);
        }
        dialogOpen(1);
        FUN_002c2d5c(0xffffffff);
      }
      if ((*puVar25 & 0x1080) == 0) {
        if ((*(unsigned int *)(*(int *)(temp_v20 + 0x28) + 0x50) & 0x200000) != 0) {
          FUN_003f2638(*piStack_30,(int)*(short *)(temp_v27 + 0x44),*(int *)(temp_v20 + 0x28),0);
        }
        return;
      }
    }
    if ((*(unsigned int *)(*piStack_30 + 0x45a0) & DAT_00571280) == 0 &&
        (DAT_00571284 & *(unsigned int *)(*piStack_30 + 0x45a4)) == 0) {
      return;
    }
    FUN_004fb4fc(3,puVar25);
    if ((*puVar25 & 0x1080) != 0) {
      return;
    }
    if ((*(unsigned int *)(*(int *)(temp_v20 + 0x28) + 0x50) & 0x200000) != 0) {
      FUN_003f2638(*piStack_30,(int)*(short *)(temp_v27 + 0x44),*(int *)(temp_v20 + 0x28),0);
    }
    return;
  case 0xd:
    FUN_004ecd7c(param_1,puVar25);
    return;
  case 0xe:
    FUN_004e7168(param_1,puVar25);
    return;
  case 0x10:
    temp_v27 = 1;
    if ((*puVar25 & 0x1080) == 0) {
      temp_v4 = 0x32;
    }
    else {
      temp_v4 = 0;
    }
    FUN_004fd508(temp_v4,puVar25,0);
    return;
  case 0x11:
    *(unsigned short *)(*(int *)(temp_v20 + 0x2c) + 0x1be) = 2;
    *(unsigned short *)(*(int *)(temp_v20 + 0x2c) + 0x1c0) =
         *(unsigned short *)(*(int *)(temp_v20 + 0x2c) + 0x1d0);
    btlUnitSetParam(param_1,2,0,1);
    halfRecClear(*param_1,*(unsigned int *)(temp_v20 + 0x2c));
    temp_v3 = *param_1;
    FUN_003f20f0();
    if (temp_v3 == 0) {
      temp_v3 = *param_1;
      temp_v17 = ~DAT_00571294;
      *(unsigned int *)(temp_v3 + 0x45a0) = *(unsigned int *)(temp_v3 + 0x45a0) & ~DAT_00571290;
      *(unsigned int *)(temp_v3 + 0x45a4) = *(unsigned int *)(temp_v3 + 0x45a4) & temp_v17;
    }
    temp_v27 = 0;
    FUN_004fdc0c(0,puVar25,0x34,*(unsigned int *)(temp_v20 + 0x24));
    return;
  case 0x12:
    if (((*puVar25 & 0x1080) == 0) && (temp_v3 = FUN_003efb18(), temp_v3 == 0)) {
      FUN_003e8bb0(&uStack_58,*param_1,*(unsigned int *)(temp_v20 + 0x24));
      temp_v27 = (unsigned int)*(unsigned short *)(*(int *)(temp_v20 + 0x2c) + 2);
      temp_v28 = 0;
      FUN_004aa3d4(g_btlUiBlock,(int)*(short *)(*(int *)(temp_v20 + 0x2c) + 0x1be),temp_v29,
                   *(unsigned int *)(*(int *)(temp_v20 + 0x24) + 0x3f8));
      temp_v27 = 0;
      FUN_004fbeac(0xf,puVar25,0,0x31);
    }
    temp_v3 = FUN_003efb18(*param_1);
    if (temp_v3 == 0) {
      temp_v27 = 1;
      FUN_004fd508(0,puVar25,0,*(unsigned int *)(temp_v20 + 0x28));
    }
    temp_v27 = 5;
    temp_v28 = 5;
    FUN_004e0114(param_1,puVar25,(int)*(short *)(*(int *)(temp_v20 + 0x28) + 0x6a),0);
    return;
  case 0x13:
    FUN_004ecee8(param_1,puVar25);
    return;
  case 0x14:
    FUN_004dce1c(param_1,puVar25);
    return;
  case 0x16:
    *(unsigned int *)(temp_v20 + 0xc) = 0;
    return;
  case 0x18:
    temp_v3 = 0xc;
    FUN_00178b04(0xc,"c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlAction.cpp",0x258f);
    temp_v4 = 0;
    if (temp_v3 != 0) {
      temp_v4 = words3Clear();
    }
    *(unsigned int *)(*param_1 + 0x4e54) = temp_v4;
    return;
  case 0x1a:
    temp_v3 = isEntryUsable(g_btlEvent);
    if (temp_v3 == 0) {
      temp_v3 = (int)*(short *)(*(int *)(temp_v20 + 0x24) + 0x6e);
      if (*(short *)(*(int *)(temp_v20 + 0x2c) + 0x1be) != 0xb) {
        temp_v20 = g_btlEvent;
        FUN_004d7a70(g_btlEvent,3,temp_v3,0);
        if (temp_v20 == 0) {
          return;
        }
      }
      else {
        temp_v20 = g_btlEvent;
        FUN_004d7a70(g_btlEvent,7,temp_v3,0);
        if (temp_v20 == 0) {
          return;
        }
      }
      FUN_004d7fe4(g_btlEvent);
      return;
    }
    break;
  case 0x1e:
    FUN_004e626c(param_1,*(int *)(temp_v3 + 0xa4));
    temp_v3 = 0;
    do {
      puVar25[temp_v3 * 4 + 0x279] = 0;
      temp_v20 = *param_1;
      FUN_003f0e20(temp_v20,temp_v3);
      if (temp_v20 != 0) {
        puVar25[temp_v3 * 4 + 0x279] = *(unsigned int *)(temp_v20 + 600);
        puVar25[temp_v3 * 4 + 0x27a] = *(unsigned int *)(temp_v20 + 0x25c);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v3 = isEntryUsable(g_btlEvent);
    if (temp_v3 == 0) {
      FUN_004d7fe4(g_btlEvent);
      return;
    }
    break;
  case 0x22:
    FUN_004f84ec(DAT_00573808);
    return;
  case 0x23:
    FUN_004dcc5c(param_1,puVar25);
    return;
  case 0x24:
    temp_v3 = FUN_004ea0c0(param_1,puVar25);
    if (temp_v3 != 0) {
      FUN_004d7fe4(g_btlEvent);
      return;
    }
    break;
  case 0x26:
    if ((**(unsigned int **)(temp_v20 + 0x24) & DAT_00571168) == 0 &&
        ((*(unsigned int **)(temp_v20 + 0x24))[1] & DAT_0057116c) == 0) {
      FUN_004ac0bc(g_btlUiBlock);
    }
    objRef1F50Release(DAT_00573808);
    FUN_004f612c(DAT_00573808);
    *(unsigned int *)(DAT_00573808 + 0x339c) = *(unsigned int *)(DAT_00573808 + 0x339c) & 0xffff7fff;
    FUN_004f8f08();
    FUN_004f8fa0(DAT_00573808);
    obj4FSlots28Reset(DAT_00573808);
    *(unsigned int *)(g_btlCamera + 0x64c) = *(unsigned int *)(g_btlCamera + 0x64c) & 0xffffbfff;
    FUN_003d9164();
    return;
  }
  return;
}

} /* extern "C" */
