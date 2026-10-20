/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004788dc` (_code @ 0x4788dc, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, int, int, int);
int paramsInit(int, int, int, unsigned char *, int, int, int, int, int, int, int);
int FUN_00151408(...);
int FUN_001527d8(...);
int FUN_0015f258(int);
int uiSpriteSetImageKeyframe(int, int);
int FUN_00387240(int, int, int);
int FUN_004cf7cc(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(int);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern unsigned char DAT_00526308; /* 0x526308 */
extern int g_aocMain; /* 0x570260 */

extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: FUN_00151408. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_0015f258. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: FUN_004cf7cc. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_004788dc(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  char temp_v3 [36];
  
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1 + 0x35c);
  paramsInit(param_1 + 0x35c,0,0,&DAT_00526308,0xc,0,0,0,0,0,0);
  FUN_0014e188(param_1 + 0x109c,0x14,2000,param_1 + 0x35c,0xb);
  uiSpriteSetImageKeyframe(param_1 + 0x109c,0);
  temp_v3[0x14] = '\0';
  temp_v3[0x15] = '\x01';
  temp_v3[0x16] = '\x01';
  temp_v3[0x17] = '\0';
  temp_v3[0] = '\0';
  temp_v3[1] = '\x01';
  temp_v3[2] = '\x01';
  temp_v3[3] = '\0';
  temp_v3[4] = '\0';
  temp_v3[5] = '\0';
  temp_v3[6] = '\x01';
  temp_v3[7] = '\x01';
  temp_v3[8] = '\x01';
  temp_v3[9] = '\x01';
  temp_v3[10] = '\0';
  temp_v3[0xb] = '\0';
  temp_v3[0xc] = '\0';
  temp_v3[0xd] = '\0';
  temp_v3[0xe] = '\x01';
  temp_v3[0xf] = '\x01';
  temp_v3[0x10] = '\x01';
  temp_v3[0x11] = '\x01';
  temp_v3[0x12] = '\0';
  temp_v3[0x13] = '\0';
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c;
    FUN_0014e188(temp_v2 + 0x37c,0x14,temp_v3[temp_v1] + 0x7d1,param_1 + 0x35c,0xb);
    uiSpriteSetImageKeyframe(temp_v2 + 0x37c,0);
    FUN_00387240(temp_v2 + 0x37c,0x14,temp_v1 + 0x7d5);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  FUN_0015f258(param_1 + 0x11b0);
  *(unsigned char *)(param_1 + 0x15c5) = 0;
  *(unsigned char *)(g_aocMain + 0xb81) = 0;
  temp_v0 = spriteHandleCreate(0);
  *(unsigned int *)(param_1 + 0x1eec) = temp_v0;
  FUN_001527d8(temp_v0,0xffffffff);
  FUN_00151408(*(unsigned int *)(param_1 + 0x1eec),0,0x646464ff);
  FUN_004cf7cc(param_1 + 0x17b0);
  return;
}

} /* extern "C" */
