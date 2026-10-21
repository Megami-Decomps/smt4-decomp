/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003447a0` (_code @ 0x3447a0, 0x324 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int sysPlaySe(...);
int FUN_00182054(...);
int asdLoadFileAsyncSimple(...);
int sysMemClear(...);
int rt_aeabi_memclr(...);
int FUN_00319aec(...);
int gameDataGetMarkEntry(...);
int FUN_0036d4b0(...);
int FUN_0037b5e0(...);
int campCecDrawSetCreate(...);
int FUN_0039a3b4(...);
int FUN_003a4980(...);
int campCecDrawPageCreate(...);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_0025d62c; /* 0x25d62c */
extern int FUN_0025d6a0(...); /* 0x25d6a0 */
extern unsigned char LAB_002a2c78; /* 0x2a2c78 */
extern int campCecViewDrawEntries(...); /* 0x2e241c */
extern unsigned char LAB_00344b08; /* 0x344b08 */
extern unsigned char LAB_00344b20; /* 0x344b20 */
extern unsigned char LAB_00344b3c; /* 0x344b3c */
extern unsigned char LAB_00344b5c; /* 0x344b5c */
extern unsigned char LAB_00344b74; /* 0x344b74 */
extern unsigned char LAB_00344b90; /* 0x344b90 */
extern unsigned char LAB_00344ba8; /* 0x344ba8 */
extern unsigned int *g_campCecView; /* 0x57f130 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00182054. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_aeabi_memclr. */
extern unsigned int overlayGetStatusScene(void);
/* Supplied declaration required: FUN_00319aec. */
/* Supplied declaration required: gameDataGetMarkEntry. */
extern int playerSummaryIsIncomplete(void);
/* Supplied declaration required: FUN_0036d4b0. */
/* Supplied declaration required: FUN_0037b5e0. */
/* Supplied declaration required: campCecDrawSetCreate. */
/* Supplied declaration required: FUN_0039a3b4. */
/* Supplied declaration required: FUN_003a4980. */
/* Supplied declaration required: campCecDrawPageCreate. */


void FUN_003447a0(void)

{
/* irregular: 18 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  if (g_campCecView == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x14c,1);
    g_campCecView = puVar3;
  }
  puVar3 = g_campCecView;
  sysMemClear();
  puVar4 = &LAB_00344b08;
  asdProcessCreateSimple(&LAB_00344b08,3,0,0,FUN_0025d6a0,0,0);
  *puVar3 = (unsigned int)puVar4;
  taskCreateDraw(&LAB_00344b20,0x65,0,0,&LAB_002a2c78,0,0,puVar4);
  taskCreateDraw(&LAB_00344b3c,0xcc,0,0,&LAB_002a2c78,0,0,*puVar3);
  taskCreateDraw(&LAB_00344b5c,0x86,0,0,&LAB_0025d62c,0,0,*puVar3);
  taskCreateDraw(&LAB_00344b74,0xe2,0,0,&LAB_0025d62c,0,0,*puVar3);
  taskCreateDraw(&LAB_00344b90,0xea,0,0,campCecViewDrawEntries,0,0,*puVar3);
  puVar3[0x45] = 0;
  puVar3[0x46] = 0;
  puVar3[0x47] = 0;
  puVar3[0x48] = 0;
  puVar3[0x4a] = 0;
  *(unsigned char *)(puVar3 + 0x4f) = 0;
  *(unsigned char *)((int)puVar3 + 0x13d) = 0;
  puVar3[0x50] = 0;
  puVar3[0x52] = 0;
  temp_v4 = 0x1f;
  do {
    gameDataGetMarkEntry(temp_v4);
    temp_v1 = playerSummaryIsIncomplete();
    if (temp_v1 != 0) {
      FUN_0036d4b0(temp_v4);
    }
    temp_v4 = temp_v4 - 1;
  } while (-1 < temp_v4);
  temp_v4 = 0;
  do {
    temp_v1 = gameDataGetMarkEntry(temp_v4);
    if (*(short *)(temp_v1 + 0x60) != 0) {
      puVar3[0x48] = puVar3[0x48] + 1;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x20);
  asdLoadFileAsyncSimple(&LAB_00344ba8,puVar3 + 0x4e,0);
  temp_v2 = overlayGetStatusScene();
  puVar3[2] = temp_v2;
  temp_v1 = gameDataGetMarkEntry(puVar3[0x45]);
  puVar3[3] = temp_v1;
  *(unsigned short *)(temp_v1 + 0x34) = *(unsigned short *)(temp_v1 + 0x60);
  temp_v4 = 0;
  do {
    campCecDrawSetCreate();
    temp_v5 = temp_v4 + 1;
    puVar3[temp_v4 + 0x41] = temp_v1;
    temp_v4 = temp_v5;
  } while (temp_v5 < 3);
  campCecDrawPageCreate();
  puVar3[0x44] = temp_v1;
  puVar2 = g_campCecView;
  temp_v4 = 0;
  do {
    temp_v1 = gameDataGetMarkEntry(puVar2[0x46] + temp_v4);
    if (*(short *)(temp_v1 + 0x60) != 0) {
      FUN_0037b5e0(puVar2[temp_v4 + 0x41],temp_v1);
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 3);
  temp_v4 = gameDataGetMarkEntry(puVar2[0x45]);
  puVar2[3] = temp_v4;
  *(unsigned short *)(temp_v4 + 0x34) = *(unsigned short *)(temp_v4 + 0x60);
  puVar3[0x51] = 1;
  FUN_003a4980(puVar3[0x44],puVar3[3],0);
  temp_v4 = gameDataGetMarkEntry(0);
  temp_v0 = *(unsigned char *)(temp_v4 + 0x22);
  temp_v3 = (unsigned int)temp_v0;
  FUN_00182054();
  if (temp_v3 == 0) {
    FUN_0039a3b4(puVar3[0x44],(unsigned int)temp_v0);
  }
  temp_v4 = 0;
  do {
    rt_aeabi_memclr(puVar3 + temp_v4 * 5 + 0x1e,0x14);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 2);
  temp_v4 = 0;
  do {
    rt_aeabi_memclr(puVar3 + temp_v4 * 5 + 0x28,0x14);
    temp_v1 = temp_v4 + 1;
    puVar3[temp_v4 * 5 + 0x29] = 0x14a;
    temp_v4 = temp_v1;
  } while (temp_v1 < 5);
  sysPlaySe(0xb4);
  FUN_00319aec(0);
  return;
}

} /* extern "C" */
