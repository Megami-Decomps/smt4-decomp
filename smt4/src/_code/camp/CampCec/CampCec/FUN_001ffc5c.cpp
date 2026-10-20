/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ffc5c` (_code @ 0x1ffc5c, 0x330 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bgmRestart(...);
int runWinOpen(void);
int FUN_002579bc(...);
int FUN_00259294(...);
int gameDataBlocksAddFlags(...);
int FUN_00297468(...);
int soundChannelRequestIfEnabled(...);
int buttonHelpSetPreset(...);
int FUN_002bcc60(...);
int FUN_002bcd44(void);
int asdOperatorNew(...);
int memAlloc(...);
int memClear(void);
int asdMemAlloc(int, int, int, int, int);
int taskCreateDraw(...);
int FUN_002c526c(void);
int asdProcessCreateSimple(unsigned char *, int, int, int, unsigned char *, int, int);
int FUN_002d7330(...);
int runWinOpenState(void);
int FUN_00359f90(void);
int nn_cfg_CTR_IsRestrictP2pCec(void);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int FUN_0018b06c(...); /* 0x18b06c */
extern unsigned char LAB_0018b20c; /* 0x18b20c */
extern int FUN_001dbeb8(...); /* 0x1dbeb8 */
extern int FUN_001dbf34(...); /* 0x1dbf34 */
extern int FUN_001dc608(...); /* 0x1dc608 */
extern int FUN_001ebe10(...); /* 0x1ebe10 */
extern int FUN_001ebedc(...); /* 0x1ebedc */
extern int FUN_001ec6e0(...); /* 0x1ec6e0 */
extern unsigned char LAB_001fffcc; /* 0x1fffcc */
extern unsigned char LAB_001ffff4; /* 0x1ffff4 */
extern unsigned char LAB_00200040; /* 0x200040 */
extern unsigned char LAB_00200054; /* 0x200054 */
extern int FUN_002110ac(...); /* 0x2110ac */
extern int FUN_002113c0(...); /* 0x2113c0 */
extern int FUN_002114fc(...); /* 0x2114fc */
extern unsigned char LAB_00220fa8; /* 0x220fa8 */
extern int FUN_002ccb7c(...); /* 0x2ccb7c */
extern int FUN_002e1898(...); /* 0x2e1898 */
extern int FUN_002ec588(...); /* 0x2ec588 */
extern int FUN_002ece60(...); /* 0x2ece60 */
extern int FUN_003105f4(...); /* 0x3105f4 */
extern unsigned char LAB_003f6eb4; /* 0x3f6eb4 */
extern unsigned char LAB_003f6f74; /* 0x3f6f74 */
extern unsigned char LAB_003f6ff0; /* 0x3f6ff0 */
extern unsigned int *g_campCec; /* 0x43daa8 */

/* Supplied declaration required: bgmRestart. */
/* Supplied declaration required: runWinOpen. */
/* Supplied declaration required: FUN_002579bc. */
/* Supplied declaration required: FUN_00259294. */
/* Supplied declaration required: gameDataBlocksAddFlags. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002bcd44. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_002d7330. */
/* Supplied declaration required: runWinOpenState. */
/* Supplied declaration required: FUN_00359f90. */
/* Supplied declaration required: nn_cfg_CTR_IsRestrictP2pCec. */


void FUN_001ffc5c(void)

{
/* irregular: 36 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  unsigned int *puVar4;
  int temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned int *temp_v5 [2];
  
  if (g_campCec == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemAlloc(0x100,0x100,0,0xd7c,1);
    g_campCec = puVar1;
  }
  puVar1 = g_campCec;
  memClear();
  puVar2 = &LAB_001fffcc;
  asdProcessCreateSimple(&LAB_001fffcc,1,0,0,&LAB_0018b20c,0,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(0x1fffe0,0x7d,0,0,FUN_0018b06c,0,0,puVar2);
  taskCreateDraw(&LAB_001ffff4,0xdb,0,0,FUN_0018b06c,0,0,*puVar1);
  puVar1[0x349] = 0xffffffff;
  puVar1[0x34a] = 0;
  puVar1[0x34b] = 0xffffffff;
  puVar1[0x34c] = 0xffffffff;
  puVar1[0x34d] = 0;
  puVar1[2] = (unsigned int)FUN_002113c0;
  puVar1[3] = (unsigned int)FUN_002ec588;
  puVar1[4] = (unsigned int)FUN_002ccb7c;
  puVar1[5] = (unsigned int)FUN_001ebedc;
  puVar1[6] = (unsigned int)FUN_001dbf34;
  puVar1[7] = (unsigned int)FUN_002110ac;
  puVar1[8] = (unsigned int)FUN_002e1898;
  puVar1[0xb] = (unsigned int)FUN_002114fc;
  puVar1[9] = (unsigned int)FUN_001dbeb8;
  puVar1[0xc] = (unsigned int)FUN_001ebe10;
  puVar1[10] = (unsigned int)FUN_001dc608;
  puVar1[0xd] = (unsigned int)FUN_001ebe10;
  puVar1[0xe] = (unsigned int)FUN_003105f4;
  puVar1[0xf] = (unsigned int)FUN_002ece60;
  puVar2 = &LAB_00220fa8;
  puVar1[0x11] = (unsigned int)&LAB_00220fa8;
  puVar1[0x357] = 0;
  nn_cfg_CTR_IsRestrictP2pCec();
  if (puVar2 != (unsigned char *)0x0) {
    puVar1[0x357] = 1;
  }
  else {
    FUN_00359f90();
    if (puVar2 == (unsigned char *)0x0) {
      puVar1[0x357] = 2;
    }
  }
  *(unsigned char *)(puVar1 + 0x359) = 0;
  if (puVar1[0x357] != 0) {
    FUN_00297468(&LAB_00200040,puVar1 + 0x33d,0);
    FUN_00297468(&LAB_00200054,puVar1 + 0x33e,0);
    puVar1[0x34a] = 0xd;
  }
  else {
    buttonHelpSetPreset(3);
    *(unsigned char *)((int)puVar1 + 0xd61) = 0;
    *(unsigned char *)((int)puVar1 + 0xd62) = 1;
    *(unsigned char *)((int)puVar1 + 0xd63) = 0;
    buttonHelpSetPreset(0xb9);
    FUN_002579bc(0);
    FUN_002d7330(g_campCec + 0x28);
    bgmRestart(0);
    soundChannelRequestIfEnabled(0x1000062,0,0x3c);
    runWinOpen();
    runWinOpenState();
    gameDataBlocksAddFlags(2);
    FUN_00259294(2);
    *(unsigned char *)((int)puVar1 + 0xd65) = 0;
    puVar1[0x35a] = 0;
    temp_v0 = 0x100;
    memAlloc(0x100,0x100,0,0x1000,0x1000,1);
    puVar1[0x35e] = temp_v0;
    puVar4 = (unsigned int *)0x18;
    asdOperatorNew(0x18,FUN_0018b06c);
    if (puVar4 != (unsigned int *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(unsigned char *)(puVar4 + 4) = 0;
    }
    puVar1[0x35b] = (unsigned int)puVar4;
    FUN_002bcd44();
    puVar4 = puVar1 + 0x35c;
    temp_v1 = 4;
    temp_v2 = &LAB_003f6eb4;
    temp_v3 = &LAB_003f6ff0;
    temp_v4 = &LAB_003f6f74;
    temp_v5[0] = puVar1;
    FUN_002bcc60(puVar4,&temp_v1,FUN_001ec6e0,temp_v5,
                 *(int *)(puVar1[0x35b] + 0xc) + *(int *)(puVar1[0x35b] + 8),0x11,0xfffffffe,0);
    if (((unsigned int)puVar4 & 0x7e00000) != 0x600000 && (int)puVar4 < 0) {
      FUN_002c526c();
      return;
    }
  }
  return;
}

} /* extern "C" */
