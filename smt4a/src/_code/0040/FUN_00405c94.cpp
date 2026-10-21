/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00405c94` (_code @ 0x405c94, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int paramsInit(int, unsigned char *, int, unsigned char *, int, int, int, int, int, unsigned char *, int);
int uiSpriteSelectAnim(...);
int uiSpriteSetKeyframe(int, int, int);
int uiSpriteSetImageKeyframe(...);
int paramsClearPacket(int);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char DAT_0052cf4c; /* 0x52cf4c */
extern unsigned char DAT_0052cfb8; /* 0x52cfb8 */
extern unsigned char DAT_0052d000; /* 0x52d000 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: paramsClearPacket. */


void FUN_00405c94(int param_1)

{
/* irregular: 6 native warning(s); review required */
  paramsClearPacket(param_1 + 300);
  paramsInit(param_1 + 300,&DAT_0052cf4c,0x6c,&DAT_0052cfb8,0x48,0,0,0,0,&DAT_0052d000,0xe0);
  FUN_0014e188(param_1 + 0x14c,0x32,0,param_1 + 300,0xc9);
  uiSpriteSetKeyframe(param_1 + 0x14c,1,0);
  uiSpriteSetImageKeyframe(param_1 + 0x14c,0);
  FUN_0014e188(param_1 + 0x1d8,0x32,0,param_1 + 300,0xc9);
  uiSpriteSetKeyframe(param_1 + 0x1d8,1,0);
  uiSpriteSetImageKeyframe(param_1 + 0x1d8,0);
  FUN_0014e188(param_1 + 0x264,0x32,0,param_1 + 300,0xc9);
  FUN_0014e188(param_1 + 0x2f0,0x32,0,param_1 + 300,0xc9);
  uiSpriteSelectAnim(param_1 + 0x2f0,0);
  FUN_0014e188(param_1 + 0x37c,0x32,0,param_1 + 300,0xc9);
  uiSpriteSelectAnim(param_1 + 0x37c,1);
  return;
}

} /* extern "C" */
