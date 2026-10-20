/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd8fc` (_code @ 0x2cd8fc, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(...);
int FUN_001505ac(...);
int FUN_0015155c(...);
int FUN_00163060(...);
int FUN_002e6354(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_002cd414(...); /* 0x2cd414 */
extern unsigned char LAB_002cda90; /* 0x2cda90 */
extern unsigned char LAB_002cdaa0; /* 0x2cdaa0 */
extern unsigned char LAB_002cdab4; /* 0x2cdab4 */
extern int FUN_00321544(...); /* 0x321544 */
extern unsigned char DAT_0052738c; /* 0x52738c */
extern unsigned char DAT_005273ec; /* 0x5273ec */
extern unsigned char DAT_00527530; /* 0x527530 */
extern unsigned char DAT_005275c0; /* 0x5275c0 */
extern int DAT_005710dc; /* 0x5710dc */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_002cd8fc(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  if (DAT_005710dc == 0) {
    temp_v0 = 0x100;
    FUN_00163060(0x100,0x100,0,0x30c,1);
    DAT_005710dc = temp_v0;
    FUN_002e6354();
    *(unsigned int *)(temp_v0 + 0x2f8) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x308) = 0;
    *(unsigned int *)(temp_v0 + 0x2fc) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x300) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x304) = 0;
    *(unsigned int *)(temp_v0 + 0x2e8) = 0;
    *(unsigned int *)(temp_v0 + 0x2ec) = 0;
    puVar2 = &LAB_002cda90;
    FUN_0014e38c(&LAB_002cda90,4,0,0,FUN_002cd414,0,0);
    *(unsigned char **)(temp_v0 + 0x2e4) = puVar2;
    FUN_0015155c(&LAB_002cdaa0,0x81,0,0,FUN_00321544,0,0,puVar2);
    FUN_0015155c(&LAB_002cdab4,0xdd,0,0,FUN_00321544,0,0,*(unsigned int *)(temp_v0 + 0x2e4));
    Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(temp_v0);
    FUN_001505ac(temp_v0,&DAT_0052738c,0x60,&DAT_005273ec,0x144,&DAT_00527530,0x90,0,0,&DAT_005275c0,
                 0x9bc);
  }
  return;
}

} /* extern "C" */
