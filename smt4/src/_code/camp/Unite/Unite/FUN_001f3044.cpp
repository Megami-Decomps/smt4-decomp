/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f3044` (_code @ 0x1f3044, 0x614 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00294834(...);
int FUN_00294e18(...);
int FUN_00297060(...);
int FUN_00297410(...);
int FUN_002a019c(...);
int FUN_002bcc60(...);
int FUN_002bcd44(...);
int timerStart(...);
int FUN_002bd954(...);
int FUN_002bee58(...);
int asdOperatorNew(...);
int FUN_002c312c(...);
int memAlloc(...);
int FUN_002c424c(...);
int memClear(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int FUN_002c526c(...);
int asdProcessCreateSimple(...);
int mapMainCallIfFlag(...);
int FUN_003c9c94(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

extern unsigned char LAB_0017ff9c; /* 0x17ff9c */
extern int FUN_001add9c(...); /* 0x1add9c */
extern int FUN_001de340(...); /* 0x1de340 */
extern unsigned char LAB_001f3454; /* 0x1f3454 */
extern unsigned char LAB_001f3464; /* 0x1f3464 */
extern unsigned char LAB_001f3658; /* 0x1f3658 */
extern unsigned char LAB_001f3668; /* 0x1f3668 */
extern unsigned char LAB_001f3694; /* 0x1f3694 */
extern unsigned char LAB_001f36b0; /* 0x1f36b0 */
extern unsigned char LAB_001f36c8; /* 0x1f36c8 */
extern unsigned char LAB_003f6ea4; /* 0x3f6ea4 */
extern unsigned char LAB_003f6f68; /* 0x3f6f68 */
extern unsigned char LAB_003f6fec; /* 0x3f6fec */
extern unsigned char DAT_004030ec; /* 0x4030ec */
extern unsigned char DAT_00403140; /* 0x403140 */
extern unsigned char DAT_0040317c; /* 0x40317c */
extern int *DAT_0043dd68; /* 0x43dd68 */

extern int FUN_00263c1c(unsigned char *);
extern int FUN_002907a8(void);
/* Supplied declaration required: FUN_00294834. */
/* Supplied declaration required: FUN_00294e18. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_00297410. */
extern int asdMdlManagerCreateSecondList(unsigned char *, unsigned int);
extern int FUN_0029aef0(void);
extern int flagWordTestBit(int, unsigned int);
/* Supplied declaration required: FUN_002a019c. */
extern int lmapSceneGetScript(void);
extern int FUN_002a0d0c(void);
extern int FUN_002a8740(void);
extern int lmapMainIsRunning(void);
/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002bcd44. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_002c424c. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: asdProcessCreateSimple. */
extern int FUN_002c5c04(unsigned char *);
/* Supplied declaration required: mapMainCallIfFlag. */
/* Supplied declaration required: FUN_003c9c94. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_001f3044(void)

{
/* irregular: 24 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  int temp_v0;
  unsigned int *puVar4;
  int *piVar5;
  int temp_v1;
  int temp_v2;
  int *temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char *temp_v6;
  unsigned char *temp_v7;
  unsigned char *temp_v8;
  
  if (DAT_0043dd68 == (int *)0x0) {
    piVar1 = (int *)0x100;
    asdMemAlloc(0x100,0x100,0,0x95f8,1);
    DAT_0043dd68 = piVar1;
  }
  piVar1 = DAT_0043dd68;
  memClear();
  piVar1[0x2518] = -1;
  mapMainCallIfFlag(0);
  puVar2 = &LAB_001f3454;
  asdProcessCreateSimple(&LAB_001f3454,2,0,0,&LAB_0017ff9c,0,0);
  piVar1[0xfe] = (int)puVar2;
  taskCreateDraw(&LAB_001f3464,0xe6,0,0,FUN_001add9c,0,0,puVar2);
  temp_v0 = 0x180;
  asdOperatorNew();
  if (temp_v0 != 0) {
    FUN_003c9c94();
  }
  *piVar1 = temp_v0;
  temp_v0 = FUN_0029aef0();
  piVar1[0x2519] = temp_v0;
  *(unsigned char *)(piVar1 + 0x2578) = 0;
  temp_v0 = 0x100;
  memAlloc(0x100,0x100,0,0x1000,0x1000,1);
  piVar1[0x257c] = temp_v0;
  puVar4 = (unsigned int *)0x18;
  asdOperatorNew();
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(unsigned char *)(puVar4 + 4) = 0;
  }
  piVar1[0x2579] = (int)puVar4;
  FUN_002bcd44();
  temp_v0 = piVar1[0x2579];
  temp_v5 = 4;
  temp_v6 = &LAB_003f6ea4;
  piVar5 = piVar1 + 0x257a;
  temp_v7 = &LAB_003f6fec;
  temp_v8 = &LAB_003f6f68;
  temp_v3 = piVar1;
  FUN_002bcc60(piVar5,&temp_v5,FUN_001de340,&temp_v3,*(int *)(temp_v0 + 0xc) + *(int *)(temp_v0 + 8),
               0x11,0xfffffffe,0);
  if (((unsigned int)piVar5 & 0x7e00000) != 0x600000 && (int)piVar5 < 0) {
    FUN_002c526c();
  }
  temp_v0 = FUN_002c09d0(0x418);
  if (temp_v0 == 0) {
    temp_v0 = FUN_002a0d0c();
    *(unsigned short *)(temp_v0 + 0x1c) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x1e) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x20) = 0;
    *(unsigned short *)(temp_v0 + 0x22) = 0;
    *(unsigned short *)(temp_v0 + 0x24) = 0;
    *(unsigned short *)(temp_v0 + 0x26) = 0;
    *(unsigned short *)(temp_v0 + 0x28) = 0;
    *(unsigned short *)(temp_v0 + 0x2a) = 0xffff;
    *(unsigned char *)(temp_v0 + 0x2f) = 0;
    *(unsigned char *)(temp_v0 + 0x30) = 0;
    *(unsigned char *)(temp_v0 + 0x31) = 0xff;
    *(unsigned char *)(temp_v0 + 0x32) = 0;
    *(unsigned char *)(temp_v0 + 0x33) = 0;
    FUN_002a019c();
  }
  temp_v0 = FUN_002a0d0c();
  if (-1 < *(short *)(temp_v0 + 0x1c)) {
    if (*(short *)(temp_v0 + 0x20) == 0) {
      *(unsigned short *)(temp_v0 + 0x1c) = 0xffff;
    }
    else {
      temp_v1 = FUN_002a8740();
      if (((*(short *)(temp_v1 + 0x46) != *(short *)(temp_v0 + 0x20)) ||
          (temp_v2 = flagWordTestBit(temp_v1,10), temp_v2 != 0)) ||
         (temp_v1 = flagWordTestBit(temp_v1,2), temp_v1 != 0)) {
        *(unsigned short *)(temp_v0 + 0x1c) = 0xffff;
        *(unsigned short *)(temp_v0 + 0x20) = 0;
      }
    }
  }
  if (-1 < *(short *)(temp_v0 + 0x1e)) {
    if (*(short *)(temp_v0 + 0x22) == 0) {
      *(unsigned short *)(temp_v0 + 0x1e) = 0xffff;
    }
    else {
      temp_v1 = FUN_002a8740();
      if (*(short *)(temp_v1 + 0x46) != *(short *)(temp_v0 + 0x22)) {
        *(unsigned short *)(temp_v0 + 0x1e) = 0xffff;
        *(unsigned short *)(temp_v0 + 0x22) = 0;
      }
    }
  }
  FUN_002c424c(piVar1 + 0x10e,0x80,0xffffffff);
  FUN_002a019c();
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(piVar1 + 1);
  temp_v3 = (int *)0x16c;
  FUN_002c312c(piVar1 + 1,&DAT_004030ec,0x54,&DAT_00403140,0x3c,0,0,0,0,&DAT_0040317c);
  FUN_002bd954(piVar1 + 9,0x24,0,piVar1 + 1,1);
  FUN_002bee58(piVar1 + 9,0);
  FUN_002bd954(piVar1 + 0x2c,0x24,0,piVar1 + 1,1);
  timerStart(piVar1 + 0x2c,0);
  FUN_002bd954(piVar1 + 0x4f,0x24,0,piVar1 + 1,1);
  FUN_002bee58(piVar1 + 0x4f,1);
  FUN_002bd954(piVar1 + 0x72,0x24,0,piVar1 + 1,1);
  timerStart(piVar1 + 0x72,1,0);
  FUN_002bd954(piVar1 + 0x95,0x24,0,piVar1 + 1,1);
  timerStart(piVar1 + 0x95,5,0);
  FUN_002bd954(piVar1 + 0xb8,0x24,0,piVar1 + 1,1);
  FUN_002bee58(piVar1 + 0xb8,2);
  FUN_002bd954(piVar1 + 0xdb,0x24,0,piVar1 + 1,1);
  FUN_002bee58(piVar1 + 0xdb,3);
  FUN_00297410(0x24);
  FUN_00297410(0x22);
  piVar1[0x10d] = -1;
  piVar1[0x11e] = -1;
  temp_v0 = FUN_002c5c04(&LAB_001f3658);
  piVar1[0x109] = temp_v0;
  temp_v0 = FUN_002c5c04(&LAB_001f3668);
  piVar1[0x10a] = temp_v0;
  FUN_00297060(temp_v0,piVar1[0x109]);
  piVar1[0x10b] = temp_v0;
  temp_v0 = lmapSceneGetScript();
  if ((temp_v0 != 0) || (temp_v0 = lmapMainIsRunning(), temp_v0 != 0)) {
    temp_v3 = (int *)0x0;
    temp_v4 = 0;
    FUN_00294834(0,0,0,0,0,0,0xff,0,0,0xff);
  }
  temp_v0 = FUN_00263c1c(&LAB_001f3694);
  piVar1[0x2574] = temp_v0;
  FUN_00294e18(1);
  temp_v0 = asdMdlManagerCreateSecondList(&LAB_001f36b0,7);
  piVar1[0x2572] = temp_v0;
  temp_v0 = asdMdlManagerCreateSecondList(&LAB_001f36c8,7);
  piVar1[0x2573] = temp_v0;
  piVar1[0x2576] = 0;
  piVar1[0x2577] = 0;
  temp_v0 = FUN_002907a8();
  piVar1[0x107] = temp_v0;
  return;
}

} /* extern "C" */
