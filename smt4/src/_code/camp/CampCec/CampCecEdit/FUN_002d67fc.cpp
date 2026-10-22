/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d67fc` (_code @ 0x2d67fc, 0x548 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024aaa0(void);
int FUN_0026eda8(void);
int campCecDisplaySetRecord(...);
int characterInfoPanelPopulate(void);
int asdLoadFileAsyncSimple(...);
int gameGetUnitRecord(...);
int buttonHelpSetPreset(...);
int positionStateSet(...);
int FUN_002bd82c(...);
int rt_aeabi_memclr(...);
int memClear(void);
int asdMemAlloc(int, int, int, int, int);
int taskCreateDraw(...);
int asdProcessCreateSimple(unsigned char *, int, int, int, unsigned char *, int, int);
int campCecDrawSetCreate(void);
int campCecDrawPageCreate(void);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_001c0e9c; /* 0x1c0e9c */
extern unsigned char LAB_001c0efc; /* 0x1c0efc */
extern unsigned char LAB_001ebdb8; /* 0x1ebdb8 */
extern int FUN_00210e38(...); /* 0x210e38 */
extern unsigned char LAB_00220d38; /* 0x220d38 */
extern int FUN_00220d58(...); /* 0x220d58 */
extern unsigned char LAB_002d6c0c; /* 0x2d6c0c */
extern unsigned char LAB_002d6c24; /* 0x2d6c24 */
extern unsigned char LAB_002d6c40; /* 0x2d6c40 */
extern unsigned char LAB_002d6c60; /* 0x2d6c60 */
extern unsigned char LAB_002d6c78; /* 0x2d6c78 */
extern unsigned char LAB_002d6c94; /* 0x2d6c94 */
extern unsigned char LAB_002d6cd0; /* 0x2d6cd0 */
extern unsigned char LAB_002d6ce4; /* 0x2d6ce4 */
extern unsigned char LAB_002d6cfc; /* 0x2d6cfc */
extern int FUN_002d6d44(...); /* 0x2d6d44 */
extern int FUN_002e1744(...); /* 0x2e1744 */
extern int FUN_002ec514(...); /* 0x2ec514 */
extern int FUN_002fc7a0(...); /* 0x2fc7a0 */
extern int campCecClassifyRequestedUnit(void*); /* 0x2fc8dc */
extern int FUN_003172e0(...); /* 0x3172e0 */
extern int FUN_00321af0(...); /* 0x321af0 */
extern unsigned int *g_campCecEdit; /* 0x43dad0 */

/* Supplied declaration required: FUN_0024aaa0. */
extern unsigned int FUN_0025463c(void);
/* Supplied declaration required: FUN_0026eda8. */
/* Supplied declaration required: campCecDisplaySetRecord. */
extern unsigned int uiDrawRecordNameLabels(void);
/* Supplied declaration required: characterInfoPanelPopulate. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
extern int flagWordTestBit(unsigned int, unsigned int);
/* Supplied declaration required: gameGetUnitRecord. */
extern int gameGetSlotTable(void);
extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: positionStateSet. */
/* Supplied declaration required: FUN_002bd82c. */
extern unsigned int asdTextCreate(unsigned int);
/* Supplied declaration required: rt_aeabi_memclr. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: campCecDrawSetCreate. */
/* Supplied declaration required: campCecDrawPageCreate. */


void FUN_002d67fc(unsigned char param_1)

{
/* irregular: 25 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if (g_campCecEdit == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemAlloc(0x100,0x100,0,0x160,1);
    g_campCecEdit = puVar1;
  }
  puVar1 = g_campCecEdit;
  memClear();
  puVar2 = &LAB_002d6c0c;
  asdProcessCreateSimple(&LAB_002d6c0c,1,0,0,&LAB_001c0efc,0,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_002d6c24,0x65,0,0,&LAB_001ebdb8,0,0,puVar2);
  taskCreateDraw(&LAB_002d6c40,0xcc,0,0,&LAB_001ebdb8,0,0,*puVar1);
  taskCreateDraw(&LAB_002d6c60,0x7d,0,0,&LAB_001c0e9c,0,0,*puVar1);
  taskCreateDraw(&LAB_002d6c78,0xdb,0,0,&LAB_001c0e9c,0,0,*puVar1);
  taskCreateDraw(&LAB_002d6c94,0xe6,0,0,FUN_00210e38,0,0,*puVar1);
  puVar1[0x44] = 0xffffffff;
  puVar1[0x42] = 0xffffffff;
  puVar1[0x43] = 0;
  puVar1[0x45] = 0xffffffff;
  puVar1[0x40] = 0xffffffff;
  puVar1[0x41] = 0;
  *(unsigned char *)(puVar1 + 0x4a) = 1;
  puVar1[0x46] = 0;
  *(unsigned char *)((int)puVar1 + 0x129) = param_1;
  *(unsigned char *)((int)puVar1 + 0x12a) = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = 0x10;
  puVar1[0x4f] = 0;
  *(unsigned char *)((int)puVar1 + 0x141) = 0;
  puVar1[0x51] = 0xffffffc8;
  puVar1[0x52] = 0;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0;
  puVar1[0x57] = 0xffffffff;
  puVar1[0x2d] = (unsigned int)FUN_002e1744;
  puVar1[0x2f] = (unsigned int)FUN_002d6d44;
  puVar1[0x2e] = (unsigned int)FUN_00220d58;
  puVar1[0x30] = (unsigned int)campCecClassifyRequestedUnit;
  puVar1[0x31] = (unsigned int)FUN_002fc7a0;
  puVar1[0x32] = (unsigned int)FUN_002ec514;
  puVar1[0x35] = (unsigned int)&LAB_00220d38;
  puVar1[0x33] = (unsigned int)FUN_003172e0;
  puVar1[0x34] = (unsigned int)FUN_00321af0;
  puVar1[0x56] = 0;
  puVar1[0x37] = 1;
  puVar1[0x38] = 2;
  puVar1[0x3f] = 3;
  puVar1[0x36] = 0;
  puVar1[0x3c] = 6;
  puVar1[0x3d] = 7;
  puVar1[0x3e] = 8;
  puVar1[0x39] = 9;
  puVar1[0x3a] = 4;
  puVar1[0x3b] = 5;
  temp_v0 = FUN_0024aaa0();
  puVar1[1] = temp_v0;
  temp_v0 = FUN_0025463c();
  puVar1[2] = temp_v0;
  campCecDrawSetCreate();
  puVar1[3] = temp_v0;
  temp_v0 = uiDrawRecordNameLabels();
  campCecDrawPageCreate();
  puVar1[4] = temp_v0;
  characterInfoPanelPopulate();
  asdLoadFileAsyncSimple(&LAB_002d6cd0,puVar1 + 0x29,0);
  asdLoadFileAsyncSimple(&LAB_002d6ce4,puVar1 + 0x2a,0);
  asdLoadFileAsyncSimple(&LAB_002d6cfc,puVar1 + 0x2b,0);
  temp_v0 = asdTextCreate(0);
  puVar1[0x2c] = temp_v0;
  FUN_002bd82c(temp_v0,0xff);
  positionStateSet(puVar1[0x2c],0,0x646464ff);
  buttonHelpSetPreset(0xb1);
  temp_v4 = 0;
  do {
    rt_aeabi_memclr(puVar1 + temp_v4 * 5 + 0xf,0x14);
    temp_v3 = temp_v4 + 1;
    puVar1[temp_v4 * 5 + 0x10] = 0x14a;
    temp_v4 = temp_v3;
  } while (temp_v3 < 3);
  temp_v4 = 0;
  do {
    rt_aeabi_memclr(puVar1 + temp_v4 * 5 + 5,0x14);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 2);
  rt_aeabi_memclr(puVar1 + 0x23,0x14);
  puVar1[0x24] = 0x14a;
  temp_v0 = gameGetPlayerData();
  temp_v1 = FUN_0024aaa0();
  campCecDisplaySetRecord(temp_v1,temp_v0);
  FUN_0024aaa0();
  FUN_0026eda8();
  temp_v4 = gameGetSlotTable();
  temp_v3 = 0;
  puVar1[0x47] = 0;
  do {
    if (-1 < *(char *)(temp_v4 + temp_v3 + 0x90f0)) {
      temp_v0 = gameGetUnitRecord();
      temp_v2 = flagWordTestBit(temp_v0,10);
      if (temp_v2 == 0) {
        temp_v0 = gameGetUnitRecord((int)*(char *)(temp_v4 + temp_v3 + 0x90f0));
        temp_v2 = flagWordTestBit(temp_v0,1);
        if (temp_v2 == 0) {
          puVar1[0x47] = puVar1[0x47] + 1;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x18);
  return;
}

} /* extern "C" */
