/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049df84` (_code @ 0x49df84, 0x294 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int FUN_00163aa4(int);
int FUN_001641b4(...);
int uiSpriteSelectAnim(...);
int asdTMTexTableReleaseNode(...);
int FUN_001acf98(int, int);
int FUN_00203b40(int, unsigned int, int, int, int, int);
int FUN_00212724(void);
int FUN_00228b04(int, int);
int FUN_002e08b0(int, int);
int FUN_003450d4(int, unsigned int, int, int, int, int, unsigned char [16], int, int);
int FUN_003fd690(int, int);
int FUN_0049d140(...);
int FUN_0049de10(int);

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001641b4. */
extern int FUN_001643a0(void);
extern int asdTMTexTableNodeIsLoaded(unsigned int, short);
extern unsigned int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_00212724. */
/* Supplied declaration required: FUN_00228b04. */
extern unsigned int FUN_002a4860(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002e08b0. */
/* Supplied declaration required: FUN_003450d4. */
/* Supplied declaration required: FUN_003fd690. */
extern int flagsAtGetBit1(unsigned short);
/* Supplied declaration required: FUN_0049d140. */
/* Supplied declaration required: FUN_0049de10. */


void FUN_0049df84(int param_1)

{
/* irregular: 14 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [16];
  
  FUN_00163aa4(param_1 + 0x354);
  FUN_00163aa4(param_1 + 0x3e0);
  FUN_00228b04(param_1 + 0x18c,1);
  temp_v1 = FUN_002a4860(param_1 + 0x18c);
  *(unsigned int *)(param_1 + 0x1f0) = temp_v1;
  temp_v2 = FUN_002a4894(param_1 + 0x18c);
  *(int *)(param_1 + 500) = temp_v2;
  temp_v3 = (unsigned int)*(unsigned short *)(param_1 + (temp_v2 + *(int *)(param_1 + 0x1f0)) * 2 + 0x18);
  *(unsigned int *)(param_1 + 0x1f8) = temp_v3;
  *(unsigned int *)(param_1 + 0x84) = *(int *)(param_1 + 0x10) + temp_v3 * 0x44;
  temp_v5[0] = 0;
  temp_v2 = FUN_001643a0();
  temp_v1 = FUN_001834a4(0x33,0x57);
  temp_v4 = param_1 + 0x18c;
  FUN_003450d4(temp_v4,temp_v1,param_1 + 0x1fc,(int)*(short *)(param_1 + 0x216),
               (int)*(short *)(param_1 + 0x212),(int)*(short *)(param_1 + 0x214),temp_v5,0,1);
  if (temp_v4 == 0) {
    temp_v4 = 0;
    FUN_001517b4(0,1);
    if ((temp_v4 != 0) || (temp_v2 == 6)) {
      FUN_001641b4(0x100020e);
      temp_v0 = *(short *)(*(int *)(param_1 + 0x84) + 0x36);
      if ((temp_v0 != 0) && (temp_v2 = asdTMTexTableNodeIsLoaded(0x33,temp_v0), temp_v2 == 0)) {
        FUN_001acf98(0x33,temp_v0);
      }
      temp_v0 = *(short *)(*(int *)(param_1 + 0x84) + 0x40);
      if ((temp_v0 != 0) && (temp_v2 = asdTMTexTableNodeIsLoaded(0x33,temp_v0), temp_v2 == 0)) {
        FUN_001acf98(0x33,temp_v0);
      }
      FUN_0049de10(param_1);
      FUN_00203b40(param_1 + 0x124,*(unsigned int *)(param_1 + 0x94),9,1,1,1);
      FUN_002e08b0(param_1 + 0x124,0);
      *(unsigned int *)(param_1 + 0x188) = 0;
      temp_v2 = flagsAtGetBit1(**(unsigned short **)(param_1 + 0x84));
      if (temp_v2 != 0) {
        FUN_003fd690(**(unsigned short **)(param_1 + 0x84),0);
      }
      uiSpriteSelectAnim(param_1 + 0x2c8,0);
      FUN_0049d140(param_1,5,6);
      return;
    }
    temp_v2 = 1;
    FUN_001517b4();
    if (temp_v2 != 0) {
      FUN_001641b4(0x100020f);
      temp_v0 = *(short *)(*(int *)(param_1 + 0x84) + 0x36);
      if ((temp_v0 != 0) && (temp_v2 = asdTMTexTableNodeIsLoaded(0x33,temp_v0), temp_v2 != 0)) {
        asdTMTexTableReleaseNode(0x33,temp_v0);
      }
      temp_v0 = *(short *)(*(int *)(param_1 + 0x84) + 0x40);
      if ((temp_v0 != 0) && (temp_v2 = asdTMTexTableNodeIsLoaded(0x33,temp_v0), temp_v2 != 0)) {
        asdTMTexTableReleaseNode(0x33,temp_v0);
      }
      uiSpriteSelectAnim(param_1 + 0x23c,1);
      FUN_00212724();
      FUN_0049d140(param_1,1,10);
    }
  }
  return;
}

} /* extern "C" */
