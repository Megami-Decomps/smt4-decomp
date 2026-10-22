/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00404050` (_code @ 0x404050, 0x290 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00162790(...);
int efctSetSpeed(...);
int gameGetPlayerData(...);
int FUN_001835b4(...);
int FUN_00183bb0(...);
int drawSetColorFromRGBA8(...);
int sysMemClear(...);
int libc_strcmp(...);
int FUN_0039b984(...);
int efctPlayVariantSet(...);
int VectorSignedToFloat(...);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_6_stack;

extern unsigned char LAB_004042ec; /* 0x4042ec */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern int gameGetPlayerName(void);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: gameGetPlayerData. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: libc_strcmp. */
/* Supplied declaration required: FUN_0039b984. */
extern unsigned int FUN_004038e0(unsigned int, unsigned short);
/* Supplied declaration required: efctPlayVariantSet. */


void FUN_00404050(unsigned int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,
                 unsigned int param_6)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned char temp_v4 [128];
  unsigned int temp_v5;
  
  param_2 = param_2 & 0xffff;
  FUN_0039b984();
  if (param_2 != 0) {
    sysMemClear(temp_v4,0x80);
    efctSetSpeed();
    temp_v2 = FUN_001834a4(0x32,99);
    temp_v3 = *(short *)(temp_v2 + 8) + param_3;
    temp_v2 = *(short *)(temp_v2 + 10) + param_4;
    temp_v5 = FUN_004038e0(param_1,*(unsigned short *)(param_2 + 4));
    switch(*(unsigned short *)(param_2 + 4)) {
    default:
      FUN_001835b4(2,0x32,temp_v5,temp_v3,temp_v2,0x6b);
      break;
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
    case 0xc:
    case 0xe:
    case 0x10:
    case 0x12:
      drawSetColorFromRGBA8(0x57d8ffff);
      FUN_001835b4(2,0x32,temp_v5,temp_v3,temp_v2,0x6b);
      FUN_001835b4(2,0x32,0x3f1,temp_v3,temp_v2,0x6b);
      FUN_00183bb0();
    }
    temp_v2 = FUN_001834a4(0x32,100);
    temp_v0 = *(short *)(temp_v2 + 8);
    temp_v1 = *(short *)(temp_v2 + 10);
    temp_v3 = param_2 + 0x10;
    temp_v2 = temp_v3;
    libc_strcmp(temp_v3,"<pc 0>");
    if (temp_v2 == 0) {
      gameGetPlayerData();
      temp_v3 = gameGetPlayerName();
    }
    textFormatBuffer(temp_v4,&LAB_004042ec,temp_v3);
    VectorSignedToFloat(temp_v1 + param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v0 + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0xffffffff,temp_v4);
    temp_v2 = FUN_001834a4(0x32,0x65);
    efctPlayVariantSet(param_1,*(short *)(temp_v2 + 8) + param_3,*(short *)(temp_v2 + 10) + param_4,0x79,
                 param_5,param_6);
    if (*(short *)(param_2 + 6) != 0) {
      efctSetSpeed();
      temp_v2 = FUN_001834a4(0x32,0x9b);
      param_3 = param_3 + *(short *)(temp_v2 + 8);
      param_4 = *(short *)(temp_v2 + 10) + param_4;
      FUN_001835b4(2,0x32,0x9c,param_3,param_4,0x79);
      FUN_001835b4(2,0x32,0x9d,param_3,param_4,0x7a);
    }
    efctSetSpeed();
  }
  return;
}

} /* extern "C" */
