/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049d3f0` (_code @ 0x49d3f0, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(int, int);
int FUN_0014e188(...);
int paramsInit(int, unsigned char *, int, unsigned char *, int, int, int, int, int, unsigned char *, int);
int FUN_001527d8(unsigned int, unsigned int);
int uiSpriteSelectAnim(...);
int FUN_001acf98(int, int);
int FUN_002804b0(...);
int sysMemClear(int, int);
int FUN_0049dd74(int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(int);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char DAT_0052cd2c; /* 0x52cd2c */
extern unsigned char DAT_0052cd50; /* 0x52cd50 */
extern unsigned char DAT_0052cd98; /* 0x52cd98 */

/* Supplied declaration required: asdTMTexTableLoadTmx. */
extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0049dd74. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_0049d3f0(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  sysMemClear(param_1 + 0x18,0xd0);
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x80) = 0;
  do {
    temp_v0 = spriteHandleCreate(0);
    *(unsigned int *)(param_1 + temp_v1 * 4 + 0x88) = temp_v0;
    FUN_001527d8(temp_v0,0xffffffff);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  FUN_0049dd74(param_1);
  FUN_002804b0("event/HowTo/HowTo.mbm",param_1 + 8,0);
  FUN_002804b0("event/HowTo/HowToHelp.mbm",param_1 + 0xc,0);
  asdTMTexTableLoadTmx(0x33,0);
  FUN_001acf98(0x33,0);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1 + 0x21c);
  paramsInit(param_1 + 0x21c,&DAT_0052cd2c,0x24,&DAT_0052cd50,0x48,0,0,0,0,&DAT_0052cd98,0x150);
  FUN_0014e188(param_1 + 0x23c,0x33,0,param_1 + 0x21c,0xc9);
  uiSpriteSelectAnim(param_1 + 0x23c,0);
  FUN_0014e188(param_1 + 0x2c8,0x33,0,param_1 + 0x21c,0xc9);
  uiSpriteSelectAnim(param_1 + 0x2c8,0);
  FUN_0014e188(param_1 + 0x354,0x33,0,param_1 + 0x21c,0xc9);
  uiSpriteSelectAnim(param_1 + 0x354,2);
  FUN_0014e188(param_1 + 0x3e0,0x33,0,param_1 + 0x21c,0xc9);
  uiSpriteSelectAnim(param_1 + 0x3e0,3);
  return;
}

} /* extern "C" */
