/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147c34` (_code @ 0x147c34, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

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
/* Supplied declaration required: FUN_002a4a10. */
extern int FUN_002ad244(void);


void FUN_00147c34(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 int param_6,unsigned int param_7)

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
  unsigned int uStack_24;
  
  temp_v4 = param_2 | (param_3 << 0x10);
  uStack_30 = param_5 | (param_6 << 0x10);
  temp_v5 = DAT_00472a8c[6];
  uStack_24 = DAT_00472a8c[7];
  (*(unsigned int *)&temp_v1) = romwright_piece_3_1(SUB43((unsigned int)*DAT_00472a8c >> 8,0),3);
  (*(unsigned int *)&temp_v1) = romwright_piece_1_3(DAT_00472a88,_local_40);
  uStack_2c = param_7;
  temp_v3 = param_1;
  uStack_38 = param_4;
  temp_v0 = FUN_002ad244();
  FUN_002a4a10(temp_v0 + 0x58,&temp_v1);
  return;
}
