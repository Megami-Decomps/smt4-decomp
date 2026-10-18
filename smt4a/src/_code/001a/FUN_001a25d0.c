/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a25d0` (_code @ 0x1a25d0, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_8_stack;

extern unsigned char DAT_005c14a8; /* 0x5c14a8 */
extern unsigned int *DAT_005c14ac; /* 0x5c14ac */

/* Unsupported intrinsic, declaration required: SUB43 (SUBPIECE). */
#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_3_DEFINED
#define ROMWRIGHT_PIECE_1_3_DEFINED
#define romwright_piece_1_3(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 24) | ((unsigned int)(lower) & 0xffffffULL)))
#endif
extern int FUN_001a2a4c(void);
/* Supplied declaration required: FUN_001b013c. */


void FUN_001a25d0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,
                 unsigned int param_6,int param_7,unsigned int param_8)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2 [3];
  unsigned int temp_v3;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int temp_v4;
  
  uStack_30 = param_4 | (param_5 << 0x10);
  uStack_2c = param_6 | (param_7 << 0x10);
  temp_v4 = DAT_005c14ac[7];
  (*(unsigned int *)&temp_v1) = romwright_piece_3_1(SUB43((unsigned int)*DAT_005c14ac >> 8,0),4);
  (*(unsigned int *)&temp_v1) = romwright_piece_1_3(DAT_005c14a8,_local_40);
  uStack_28 = param_8;
  temp_v3 = param_1;
  uStack_38 = param_2;
  uStack_34 = param_3;
  temp_v0 = FUN_001a2a4c();
  FUN_001b013c(temp_v0 + 0x58,&temp_v1);
  return;
}
