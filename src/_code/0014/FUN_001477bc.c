/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001477bc` (_code @ 0x1477bc, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_8_stack;

extern unsigned char DAT_00472a88; /* 0x472a88 */
extern unsigned int *DAT_00472a8c; /* 0x472a8c */

/* Unsupported intrinsic, declaration required: SUB43 (SUBPIECE). */
#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_3_DEFINED
#define ROMWRIGHT_PIECE_1_3_DEFINED
#define romwright_piece_1_3(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 24) | ((unsigned int)(lower) & 0xffffffULL)))
#endif
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_002a4cb4. */
extern int FUN_002ad4d0(void);


void FUN_001477bc(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned short param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned short param_8)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2 [3];
  unsigned int temp_v3;
  unsigned int uStack_38;
  unsigned int temp_v4;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int temp_v5;
  unsigned short temp_v6;
  unsigned short uStack_22;
  
  (*(unsigned int *)&temp_v1) = romwright_piece_3_1(SUB43((unsigned int)*DAT_00472a8c >> 8,0),2);
  temp_v5 = param_6;
  (*(unsigned int *)&temp_v1) = romwright_piece_1_3(DAT_00472a88,_local_40);
  uStack_30 = param_5;
  uStack_2c = param_7;
  (*(unsigned int *)&temp_v6) = romwright_piece_2_2(param_8,param_4);
  temp_v3 = param_1;
  uStack_38 = param_3;
  temp_v4 = param_2;
  temp_v0 = FUN_002ad4d0();
  FUN_002a4cb4(temp_v0 + 0x58,&temp_v1);
  return;
}
