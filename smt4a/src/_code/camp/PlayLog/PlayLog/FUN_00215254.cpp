/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215254` (_code @ 0x215254, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadSprites(int);
int FUN_0014e188(int, int, int, int, int);
int FUN_001505ac(int, unsigned char *, int, unsigned char *, int, int, int, int, int, unsigned char *, int);
int asdMemoryAllocTracked(int, int, int, int, int);
int uiSpriteSetKeyframe(int, int, int);
int uiSpriteSetImageKeyframe(...);
int FUN_001acf98(int, int);
int FUN_00203b40(...);
int FUN_0022feb0(...);
int sysMemClear(void);
int loadSlotEnsureLoaded(int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(int);
int rt_memcpy_w(...);

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char DAT_0052dd98; /* 0x52dd98 */
extern unsigned char DAT_0052dde0; /* 0x52dde0 */
extern unsigned char DAT_0052ddf8; /* 0x52ddf8 */
extern int g_playLog; /* 0x57f278 */

/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_0022feb0. */
extern int gameDataBlocksGetTable(void);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: loadSlotEnsureLoaded. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00215254(void)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (g_playLog == 0) {
    temp_v0 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x6f4,1);
    g_playLog = temp_v0;
  }
  temp_v0 = g_playLog;
  sysMemClear();
  *(unsigned int *)(temp_v0 + 0x344) = 0;
  *(unsigned int *)(temp_v0 + 0x6ec) = 0;
  asdTMTexTableLoadSprites(0x25);
  FUN_001acf98(0x25,0);
  loadSlotEnsureLoaded(0x37);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(temp_v0);
  FUN_001505ac(temp_v0,&DAT_0052dd98,0x48,&DAT_0052dde0,0x18,0,0,0,0,&DAT_0052ddf8,0xe0);
  temp_v1 = 0;
  do {
    temp_v2 = temp_v0 + temp_v1 * 0x8c;
    FUN_0014e188(temp_v2 + 0x20,0x25,0,temp_v0,1);
    uiSpriteSetKeyframe(temp_v2 + 0x20,2,0);
    uiSpriteSetImageKeyframe(temp_v2 + 0x20,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  FUN_0022feb0(temp_v0);
  *(unsigned char *)(temp_v0 + 0x489) = 0;
  rt_memcpy_w(temp_v0 + 0x35c,temp_v0 + 0x490,200);
  rt_memcpy_w(temp_v0 + 0x424,temp_v0 + (unsigned int)*(unsigned char *)(temp_v0 + 0x489) * 0x130 + 0x558,100);
  FUN_00203b40(temp_v0 + 0x2dc,*(unsigned int *)(temp_v0 + (unsigned int)*(unsigned char *)(temp_v0 + 0x489) * 0x130 + 0x48c)
               ,5,1,0,1);
  *(unsigned char *)(temp_v0 + 0x488) = 0;
  temp_v1 = gameDataBlocksGetTable();
  if (*(short *)(temp_v1 + 0x66) != 0) {
    *(unsigned char *)(temp_v0 + 0x488) = 1;
  }
  return;
}

} /* extern "C" */
