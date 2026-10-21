/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae3c4` (_code @ 0x3ae3c4, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sceneRegisterBoxEffect(int, int, unsigned char *, int, int, unsigned int, int, int, int, int, int, int, int, int, int, int, int, int, int);

/* stack frame of void: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern unsigned char LAB_003ae494; /* 0x3ae494 */

extern int gameFlagsGetBlock(void);
/* Supplied declaration required: sceneRegisterBoxEffect. */
extern int lmapGetSpawnIndex(void);


void FUN_003ae3c4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = gameFlagsGetBlock();
  temp_v1 = lmapGetSpawnIndex();
  if ((*(char *)(temp_v0 + 0x1664) != '\0') && (temp_v1 >= 100)) {
    sceneRegisterBoxEffect(0,0,&LAB_003ae494,0x58,0,0xffffffff,0,0,0,0,0,0,0,0,0,0,0,0,0);
  }
  return;
}

} /* extern "C" */
