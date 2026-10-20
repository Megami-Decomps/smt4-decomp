/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMain_InitInstance` (_code @ 0x399378, 0x28c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023266c(unsigned char *, int, int, int);
int FUN_0023346c(unsigned char *);
int FUN_0027eb88(unsigned char *, int);
int timerStart(...);
int FUN_002bd954(unsigned char *, int, int, unsigned char *, int);
int FUN_002beed0(...);
int FUN_002c312c(unsigned char *, unsigned char *, int, unsigned char *, int, int, int, int, int, unsigned char *, int);
int FUN_002c3944(unsigned char *, int);
int asdTMTexTableLoadTmx(int, int);
int FUN_003eb068(unsigned char *);
int NaviMain_InitCallbacks(unsigned char *);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(void);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char DAT_00404a24; /* 0x404a24 */
extern unsigned char DAT_00404a78; /* 0x404a78 */
extern unsigned char DAT_00404a9c; /* 0x404a9c */

/* Supplied declaration required: FUN_0023266c. */
/* Supplied declaration required: FUN_0023346c. */
/* Supplied declaration required: FUN_0027eb88. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002beed0. */
extern int FUN_002c2950(void);
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: FUN_003eb068. */
/* Supplied declaration required: NaviMain_InitCallbacks. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void NaviMain_InitInstance(unsigned char *param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  
  temp_v0 = FUN_002c2950();
  NaviMain_InitCallbacks(param_1);
  asdTMTexTableLoadTmx(0x33,0);
  param_1[0xc] = 0xff;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[0x55] = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  FUN_002c3944(param_1 + 0x62,0x100);
  param_1[0x60] = 0;
  FUN_0023266c(param_1 + 0x164,0,0,0x1c);
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  FUN_003eb068(param_1 + 0x56);
  puVar2 = param_1 + 0x5f8;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object();
  FUN_002c312c(puVar2,&DAT_00404a24,0x54,&DAT_00404a78,0x24,0,0,0,0,&DAT_00404a9c,0x8c);
  temp_v1 = 0;
  do {
    FUN_002bd954(param_1 + temp_v1 * 0x8c + 0x618,0x1c,0xfa1,puVar2,0x15);
    timerStart(param_1 + temp_v1 * 0x8c + 0x618,4,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  FUN_0023346c(param_1 + 0x178);
  *(unsigned int *)(param_1 + 0xb84) = 0x78;
  *(unsigned int *)(param_1 + 0xb80) = 0xa0;
  *(unsigned int *)(param_1 + 0xb7c) = 0;
  if (*(char *)(temp_v0 + 0xd5a) == '\0') {
    *(unsigned char *)(temp_v0 + 0xd5a) = 0xc;
  }
  *(unsigned int *)(param_1 + 0x5a88) = 0;
  *(unsigned int *)(param_1 + 0x61b0) = 0;
  param_1[0x5a8c] = 0;
  param_1[0x5a8d] = 0;
  param_1[0x5a8e] = 0;
  param_1[0x5a8f] = 0;
  temp_v1 = 0x20;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v1 - 1;
    *(unsigned int *)(param_1 + temp_v0 * 8 + 0xb88) = 0;
    *(unsigned int *)(param_1 + temp_v0 * 8 + 0xb8c) = 0;
    *(unsigned int *)(param_1 + temp_v0 * 8 + 0xc88) = 0;
    *(unsigned int *)(param_1 + temp_v0 * 8 + 0xc8c) = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  *(unsigned int *)(param_1 + 0x121cc) = 0;
  param_1[0x12268] = 0;
  param_1[0x121bc] = 0;
  *(unsigned short *)(param_1 + 0x121be) = 0;
  *(unsigned short *)(param_1 + 0x121c0) = 0xffff;
  FUN_0027eb88(param_1 + 0x122e8,1);
  temp_v1 = 0x20;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v1 - 1;
    *(unsigned short *)(param_1 + temp_v0 * 4 + 0x121e4) = 0;
    *(unsigned short *)(param_1 + temp_v0 * 4 + 0x121e6) = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  *(unsigned int *)(param_1 + 0x12264) = 0;
  param_1[0x9ec] = 0;
  param_1[0x9ed] = 0;
  param_1[0x9ee] = 0;
  *(unsigned int *)(param_1 + 0x9f0) = 0;
  FUN_002beed0(param_1 + 0x9f8,0x1c,0x1121,0x1d,puVar2,0x15);
  timerStart(param_1 + 0x9f8,0);
  param_1[0xa84] = 0;
  param_1[0xa85] = 0;
  param_1[0xa86] = 0;
  FUN_002beed0(param_1 + 0xa88,0x1c,0x111a,0x1c,puVar2,0x15);
  timerStart(param_1 + 0xa88,5,0);
  return;
}

} /* extern "C" */
