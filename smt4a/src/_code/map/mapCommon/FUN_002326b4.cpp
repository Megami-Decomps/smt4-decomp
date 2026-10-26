/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002326b4` (_code @ 0x2326b4, 0x644 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "event/bustupEvent/BustupTex.h"

extern "C" {

int textFormatBuffer(...);
int asdTMTexTableLoadSprites(int);
int FUN_00178b04(...);
int asdLoadFileSyncDefault(void);
int mapFilterLoad(void);
int FUN_00244220(void);
int mapIfLoadWidgets(void);
int FUN_00363c58(int);
int FUN_0037b150(void);
int FUN_0040aa6c(...);
int FUN_0040aad4(...);

extern unsigned char *DAT_005f1b08; /* 0x5f1b08 */
extern unsigned char *DAT_005f1b0c; /* 0x5f1b0c */
extern unsigned int DAT_005f1b10; /* 0x5f1b10 */
extern unsigned int DAT_005f1b14; /* 0x5f1b14 */
extern unsigned int DAT_005f1b18; /* 0x5f1b18 */
extern unsigned int DAT_005f1b1c; /* 0x5f1b1c */
extern unsigned int DAT_005f1b20; /* 0x5f1b20 */
extern unsigned int DAT_005f1b24; /* 0x5f1b24 */
extern unsigned int DAT_005f1b28; /* 0x5f1b28 */
extern unsigned int DAT_005f1b2c; /* 0x5f1b2c */
extern unsigned int DAT_005f1b30; /* 0x5f1b30 */
extern unsigned int DAT_005f1b34; /* 0x5f1b34 */
extern unsigned int DAT_005f1b38; /* 0x5f1b38 */
extern unsigned int DAT_005f1b4c; /* 0x5f1b4c */
extern unsigned int DAT_005f1b60; /* 0x5f1b60 */
extern unsigned int DAT_005f1b64; /* 0x5f1b64 */
extern unsigned int DAT_005f1b6c; /* 0x5f1b6c */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
/* Supplied declaration required: mapFilterLoad. */
/* Supplied declaration required: FUN_00244220. */
/* Supplied declaration required: mapIfLoadWidgets. */
/* Supplied declaration required: FUN_00363c58. */
/* Supplied declaration required: FUN_0037b150. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int modelListInit(void);


void FUN_002326b4(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [128];
  
  FUN_00363c58(0);
  mapFilterLoad();
  mapIfLoadWidgets();
  FUN_0037b150();
  asdTMTexTableLoadSprites(0x13);
  FUN_0014afd0(0x13,3);
  FUN_0014afd0(0x13,4);
  asdLoadFileSyncDefault();
  DAT_005f1b08 = puVar1;
  asdLoadFileSyncDefault();
  temp_v0 = 0x20;
  DAT_005f1b0c = puVar2;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x279);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b10 = temp_v1;
  textFormatBuffer(temp_v2,"map/all/damage.bam");
  FUN_0040aa6c(DAT_005f1b10,temp_v2);
  FUN_0040aad4(DAT_005f1b10,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x27f);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b14 = temp_v1;
  textFormatBuffer(temp_v2,"player_arms/arm00.bam");
  FUN_0040aa6c(DAT_005f1b14,temp_v2);
  FUN_0040aad4(DAT_005f1b14,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x284);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b18 = temp_v1;
  textFormatBuffer(temp_v2,"player_arms/arm01.bam");
  FUN_0040aa6c(DAT_005f1b18,temp_v2);
  FUN_0040aad4(DAT_005f1b18,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x289);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b1c = temp_v1;
  textFormatBuffer(temp_v2,"player_arms/arm02.bam");
  FUN_0040aa6c(DAT_005f1b1c,temp_v2);
  FUN_0040aad4(DAT_005f1b1c,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x28e);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b20 = temp_v1;
  textFormatBuffer(temp_v2,"player_arms/arm03.bam");
  FUN_0040aa6c(DAT_005f1b20,temp_v2);
  FUN_0040aad4(DAT_005f1b20,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x293);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b2c = temp_v1;
  textFormatBuffer(temp_v2,"player_arms/arm00.bam");
  FUN_0040aa6c(DAT_005f1b2c,temp_v2);
  FUN_0040aad4(DAT_005f1b2c,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x299);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b24 = temp_v1;
  textFormatBuffer(temp_v2,"map/all/pl_ring_in.bam");
  FUN_0040aa6c(DAT_005f1b24,temp_v2);
  FUN_0040aad4(DAT_005f1b24,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x29e);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b28 = temp_v1;
  textFormatBuffer(temp_v2,"map/all/pl_ring_out.bam");
  FUN_0040aa6c(DAT_005f1b28,temp_v2);
  FUN_0040aad4(DAT_005f1b28,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x2a4);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b30 = temp_v1;
  textFormatBuffer(temp_v2,"map/all/area_next.bam");
  FUN_0040aa6c(DAT_005f1b30,temp_v2);
  FUN_0040aad4(DAT_005f1b30,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x2a9);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b34 = temp_v1;
  textFormatBuffer(temp_v2,"map/all/ar_hit.bam");
  FUN_0040aa6c(DAT_005f1b34,temp_v2);
  FUN_0040aad4(DAT_005f1b34,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x2af);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b38 = temp_v1;
  textFormatBuffer(temp_v2,"map/all/area_next_s.bam");
  FUN_0040aa6c(DAT_005f1b38,temp_v2);
  FUN_0040aad4(DAT_005f1b38,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x2d2);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b4c = temp_v1;
  textFormatBuffer(temp_v2,"map/all/navarre.bam");
  FUN_0040aa6c(DAT_005f1b4c,temp_v2);
  FUN_0040aad4(DAT_005f1b4c,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x2eb);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b60 = temp_v1;
  textFormatBuffer(temp_v2,"map/all/estm.bam");
  FUN_0040aa6c(DAT_005f1b60,temp_v2);
  FUN_0040aad4(DAT_005f1b60,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x2f1);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b64 = temp_v1;
  textFormatBuffer(temp_v2,"map/all/lestm.bam");
  FUN_0040aa6c(DAT_005f1b64,temp_v2);
  FUN_0040aad4(DAT_005f1b64,0);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp",0x2fe);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  DAT_005f1b6c = temp_v1;
  textFormatBuffer(temp_v2,"map/all/jade_knife.bam");
  FUN_0040aa6c(DAT_005f1b6c,temp_v2);
  FUN_0040aad4(DAT_005f1b6c,0);
  FUN_00244220();
  return;
}

} /* extern "C" */
