/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b7e4` (_code @ 0x37b7e4, 0x518 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "gamedata/GameFlags.h"
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_0014e188(...);
int asdProcessCreateSimple(...);

int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int FUN_001654f8(...);
int FUN_00180118(...);
int asdTMTexLoadMainHeap(...);
int asdTextFormatStream(...);
int asdLoadFileAsyncSimple(...);
int sysMemClear(...);
int rt_aeabi_memclr(...);
int FUN_00319aec(...);

int paramsClearPacket(...);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern int FUN_002bfd94(...); /* 0x2bfd94 */
extern unsigned char FUN_002c0240; /* 0x2c0240 */
extern int FUN_00343e5c(...); /* 0x343e5c */
extern unsigned char DAT_0052c050; /* 0x52c050 */
extern unsigned char DAT_0052c104; /* 0x52c104 */
extern unsigned char DAT_0052c254; /* 0x52c254 */
extern unsigned char DAT_0052c284; /* 0x52c284 */
extern unsigned int *g_campCecRanking; /* 0x57f11c */

/* Supplied declaration required: textFormatBuffer. */
extern int gameDataBlocksGetSaveData(void);
extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_001654f8. */
/* Supplied declaration required: FUN_00180118. */
extern int FUN_0019e52c(unsigned short);
/* Supplied declaration required: asdTMTexLoadMainHeap. */
/* Supplied declaration required: asdTextFormatStream. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_aeabi_memclr. */
/* Supplied declaration required: FUN_00319aec. */
extern unsigned short FUN_0036fcd0(unsigned int, unsigned int);
/* Supplied declaration required: paramsClearPacket. */


void FUN_0037b7e4(void)

{
/* irregular: 18 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned int temp_v1;
  unsigned short *puVar5;
  unsigned int temp_v2;
  unsigned int *puVar7;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char *temp_v8;
  unsigned int temp_v9;
  unsigned char *temp_v10;
  unsigned int temp_v11;
  
  if (g_campCecRanking == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x274,1);
    g_campCecRanking = puVar2;
  }
  puVar2 = g_campCecRanking;
  sysMemClear();
  temp_v7 = 0;
  asdProcessCreateSimple("CampCecRanking Calc",3,0,0,&FUN_002c0240,0);
  *puVar2 = (unsigned int)puVar3;
  temp_v7 = 0;
  temp_v8 = puVar3;
  taskCreateDraw("CampCecRanking DrawUpLeft",0x7e,0,0,FUN_002bfd94,0);
  temp_v8 = (unsigned char *)*puVar2;
  temp_v7 = 0;
  taskCreateDraw("CampCecRanking DrawUpRight",0xda,0,0,FUN_002bfd94,0);
  temp_v8 = (unsigned char *)*puVar2;
  temp_v7 = 0;
  taskCreateDraw("CampCecRanking DrawDown",0xea,0,0,FUN_00343e5c,0);
  puVar2[1] = 0;
  asdTMTexLoadMainHeap(0x2e,1);
  paramsClearPacket(puVar2 + 0x26);
  paramsInit(reinterpret_cast<UiResourceParameters *>(puVar2 + 0x26),
      &DAT_0052c050, 0xb4, &DAT_0052c104, 0x150, &DAT_0052c254, 0x30,
      NULL, 0, &DAT_0052c284, 0x4d0);
  FUN_0014e188(puVar2 + 3,0x2e,1000,puVar2 + 0x26,0x65);
  temp_v5 = 0;
  do {
    temp_v1 = spriteHandleCreate(0);
    temp_v4 = temp_v5 + 1;
    puVar2[temp_v5 + 0x82] = temp_v1;
    temp_v5 = temp_v4;
  } while (temp_v4 < 0x14);
  temp_v5 = 0;
  do {
    temp_v1 = spriteHandleCreate(0);
    temp_v4 = temp_v5 + 1;
    puVar2[temp_v5 + 0x96] = temp_v1;
    temp_v5 = temp_v4;
  } while (temp_v4 < 7);
  asdLoadFileAsyncSimple("camp/CecMain_scr.bf",puVar2 + 0x2e,0);
  asdLoadFileAsyncSimple("camp/CecMain_msg.mbm",puVar2 + 0x2f,0);
  puVar2 = g_campCecRanking;
  if (g_campCecRanking != (unsigned int *)0x0) {
    temp_v4 = gameDataBlocksGetSaveData();
    rt_aeabi_memclr(puVar2 + 0x31,0xf0);
    rt_aeabi_memclr(puVar2 + 0x6d,0x54);
    temp_v3 = 0x14;
    puVar5 = (unsigned short *)(temp_v4 + 0x28310);
    temp_v5 = 0;
    do {
      temp_v6 = temp_v4 + temp_v5 * 4;
      *(unsigned short *)(puVar2 + temp_v5 * 3 + 0x31) = *puVar5;
      temp_v3 = temp_v3 - 1;
      puVar2[temp_v5 * 3 + 0x32] = *(unsigned short *)(temp_v6 + 0x28312) & 0xffff03ff;
      puVar2[temp_v5 * 3 + 0x33] = (unsigned int)(*(unsigned short *)(temp_v6 + 0x28312) >> 10);
      puVar5 = puVar5 + 2;
      temp_v5 = temp_v5 + 1;
    } while (temp_v3 != 0);
    temp_v3 = 7;
    temp_v5 = 0;
    puVar5 = (unsigned short *)(temp_v4 + 0x28360);
    do {
      temp_v6 = temp_v4 + temp_v5 * 4;
      *(unsigned short *)(puVar2 + temp_v5 * 3 + 0x6d) = *puVar5;
      temp_v3 = temp_v3 - 1;
      puVar2[temp_v5 * 3 + 0x6e] = *(unsigned short *)(temp_v6 + 0x28362) & 0xffff03ff;
      puVar2[temp_v5 * 3 + 0x6f] = (unsigned int)(*(unsigned short *)(temp_v6 + 0x28362) >> 10);
      temp_v5 = temp_v5 + 1;
      puVar5 = puVar5 + 2;
    } while (temp_v3 != 0);
  }
  puVar2 = g_campCecRanking;
  if (g_campCecRanking != (unsigned int *)0x0) {
    rt_aeabi_memclr(&temp_v7,0x80);
    temp_v5 = 0;
    do {
      temp_v2 = (unsigned int)*(unsigned short *)(puVar2 + temp_v5 * 3 + 0x31);
      if (temp_v2 != 0) {
        FUN_00180118();
        textFormatBuffer(&temp_v7,"%s",temp_v2);
      }
      else {
        rt_aeabi_memclr(&temp_v7,0x80);
      }
      temp_v1 = 2;
      if (temp_v5 == 0) {
        temp_v1 = 4;
      }
      else if (temp_v5 == 1) {
        temp_v1 = 3;
      }
      puVar7 = (unsigned int *)&temp_v7;
      FUN_001654f8(puVar7,0);
      asdTextFormatStream(puVar2[temp_v5 + 0x82],temp_v1,0xffffffff,0,0,puVar7);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x14);
    temp_v5 = 0;
    do {
      if (*(unsigned short *)(puVar2 + temp_v5 * 3 + 0x6d) - 1 < 8) {
        temp_v0 = FUN_0036fcd0((unsigned int)*(unsigned short *)(puVar2 + temp_v5 * 3 + 0x6d),0);
        temp_v4 = FUN_0019e52c(temp_v0);
        if (temp_v4 != 0) {
          FUN_00180118();
          textFormatBuffer(&temp_v7,"%s",temp_v4);
        }
        else {
          rt_aeabi_memclr(&temp_v7,0x80);
        }
      }
      else {
        rt_aeabi_memclr(&temp_v7,0x80);
      }
      temp_v1 = 2;
      if (temp_v5 == 0) {
        temp_v1 = 4;
      }
      else if (temp_v5 == 1) {
        temp_v1 = 3;
      }
      puVar7 = (unsigned int *)&temp_v7;
      FUN_001654f8(puVar7,0);
      asdTextFormatStream(puVar2[temp_v5 + 0x96],temp_v1,0xffffffff,0,0,puVar7);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 7);
  }
  FUN_00319aec(0);
  gameFlagSetValue(0x4c7,0,1);
  return;
}

} /* extern "C" */
