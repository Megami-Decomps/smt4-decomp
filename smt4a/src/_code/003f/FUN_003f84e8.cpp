/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f84e8` (_code @ 0x3f84e8, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int paramsInit(int, unsigned char *, int, unsigned char *, int, int, int, int, int, unsigned char *, int);
int uiSpriteSelectAnim(...);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(...);
int paramsClearPacket(int);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char DAT_0052d140; /* 0x52d140 */
extern unsigned char DAT_0052d194; /* 0x52d194 */
extern unsigned char DAT_0052d200; /* 0x52d200 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: paramsClearPacket. */


void FUN_003f84e8(int param_1)

{
/* irregular: 6 native warning(s); review required */
  paramsClearPacket(param_1 + 0x14c);
  paramsInit(param_1 + 0x14c,&DAT_0052d140,0x54,&DAT_0052d194,0x6c,0,0,0,0,&DAT_0052d200,0x16c);
  FUN_0014e188(param_1 + 0x16c,0x31,0,param_1 + 0x14c,0xc9);
  uiSpriteSetKeyframe(param_1 + 0x16c,1,0);
  uiSpriteSetImageKeyframe(param_1 + 0x16c,0);
  FUN_0014e188(param_1 + 0x1f8,0x31,0,param_1 + 0x14c,0xc9);
  uiSpriteSetKeyframe(param_1 + 0x1f8,1,0);
  uiSpriteSetImageKeyframe(param_1 + 0x1f8,0);
  FUN_0014e188(param_1 + 0x284,0x31,0,param_1 + 0x14c,0xc9);
  FUN_0014e188(param_1 + 0x310,0x31,0,param_1 + 0x14c,0xc9);
  uiSpriteSelectAnim(param_1 + 0x310,0);
  FUN_0014e188(param_1 + 0x39c,0x31,0,param_1 + 0x14c,0xc9);
  uiSpriteSetKeyframe(param_1 + 0x39c,4,0);
  FUN_0014e188(param_1 + 0x428,0x31,0,param_1 + 0x14c,0xc9);
  uiSpriteSelectAnim(param_1 + 0x428,1);
  FUN_0014e188(param_1 + 0x4b4,0x31,0,param_1 + 0x14c,0xc9);
  uiSpriteSelectAnim(param_1 + 0x4b4,2);
  FUN_0014e188(param_1 + 0x540,0x31,0,param_1 + 0x14c,0xc9);
  return;
}

} /* extern "C" */
