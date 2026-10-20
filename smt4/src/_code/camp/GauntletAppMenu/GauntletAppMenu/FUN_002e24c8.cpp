/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e24c8` (_code @ 0x2e24c8, 0x278 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00248738(...);
int FUN_00297060(...);
int fileSlotLoad(...);
int timerStart(...);
int FUN_002bd954(...);
int FUN_002bee58(...);
int paramsInit(...);
int memClear(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_002e2754; /* 0x2e2754 */
extern unsigned char LAB_002e276c; /* 0x2e276c */
extern unsigned char LAB_002e2798; /* 0x2e2798 */
extern unsigned char LAB_002e27b0; /* 0x2e27b0 */
extern unsigned char LAB_003291dc; /* 0x3291dc */
extern int gauntletAppMenuExit(...); /* 0x32ae3c */
extern int gauntletAppMenuDestroy(...); /* 0x32fdf0 */
extern unsigned char DAT_004028f0; /* 0x4028f0 */
extern unsigned char DAT_00402914; /* 0x402914 */
extern unsigned char DAT_00402944; /* 0x402944 */
extern unsigned int *g_gauntletAppMenu; /* 0x43dc88 */

/* Supplied declaration required: FUN_00248738. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: fileSlotLoad. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
extern int gameFlagIsSet(unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
extern unsigned int FUN_002c5c04(unsigned char *);
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


unsigned int FUN_002e24c8(void)

{
/* irregular: 14 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (g_gauntletAppMenu == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemAlloc(0x100,0x100,0,0x534,1);
    g_gauntletAppMenu = puVar1;
  }
  puVar1 = g_gauntletAppMenu;
  memClear();
  puVar2 = &LAB_002e2754;
  asdProcessCreateSimple(&LAB_002e2754,1,0,0,&LAB_003291dc,gauntletAppMenuDestroy,0);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_002e276c;
  taskCreateDraw(&LAB_002e276c,0xe6,0,0,gauntletAppMenuExit,0,0,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  temp_v0 = gameFlagIsSet(0x520);
  if (temp_v0 != 0) {
    *(unsigned char *)(puVar1 + 0xad) = 1;
  }
  temp_v0 = gameFlagIsSet(0x521);
  if (temp_v0 != 0) {
    *(unsigned char *)((int)puVar1 + 0x2b5) = 1;
  }
  temp_v0 = gameFlagIsSet(0x526);
  if (temp_v0 != 0) {
    *(unsigned char *)((int)puVar1 + 0x2b6) = 1;
  }
  temp_v0 = gameFlagIsSet(0x527);
  if (temp_v0 != 0) {
    *(unsigned char *)((int)puVar1 + 0x2b7) = 1;
  }
  FUN_00248738(puVar1,0);
  fileSlotLoad(0xd);
  temp_v1 = dataTableGet(0xd,0);
  temp_v2 = dataTableGetEntries();
  puVar1[0xab] = temp_v2;
  temp_v1 = dataTableGetCount(temp_v1);
  puVar1[0xac] = temp_v1;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar1 + 0xae);
  paramsInit(puVar1 + 0xae,&DAT_004028f0,0x24,&DAT_00402914,0x30,0,0,0,0,&DAT_00402944,0xc4);
  FUN_002bd954(puVar1 + 0xb6,0x1d,0,puVar1 + 0xae,0xc9);
  timerStart(puVar1 + 0xb6,0);
  FUN_002bd954(puVar1 + 0xd9,0x1d,0,puVar1 + 0xae,0xc9);
  FUN_002bee58(puVar1 + 0xd9,0);
  FUN_002bd954(puVar1 + 0xfc,0x1d,0,puVar1 + 0xae,0xc9);
  timerStart(puVar1 + 0xfc,2,0);
  FUN_002bd954(puVar1 + 0x11f,0x1d,0x59f,puVar1 + 0xae,0xb5);
  *(unsigned short *)((int)puVar1 + 0x4b6) = 2;
  FUN_002bee58(puVar1 + 0x11f,1);
  temp_v1 = FUN_002c5c04(&LAB_002e2798);
  puVar1[0x14a] = temp_v1;
  temp_v1 = FUN_002c5c04(&LAB_002e27b0);
  puVar1[0x14b] = temp_v1;
  FUN_00297060(temp_v1,puVar1[0x14a]);
  puVar1[0x14c] = temp_v1;
  return *puVar1;
}

} /* extern "C" */
