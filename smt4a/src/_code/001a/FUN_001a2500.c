/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a2500` (_code @ 0x1a2500, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned char DAT_005c14a8; /* 0x5c14a8 */
extern unsigned int *DAT_005c14ac; /* 0x5c14ac */

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


void FUN_001a2500(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int uStack_38;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int temp_v5;
  
  temp_v0 = 0;
  if (param_3 != 0) {
    uStack_28 = DAT_005c14ac[6];
    temp_v3 = DAT_005c14ac[3];
    temp_v4 = DAT_005c14ac[4];
    uStack_2c = DAT_005c14ac[5];
    temp_v5 = DAT_005c14ac[7];
    temp_v1 = (((unsigned int)(temp_v1) & 0xffU) | (((unsigned int)(((unsigned int)((unsigned int)*DAT_005c14ac >> 8) & 0xffffffU)) & 0xffffffU) << 8));
    temp_v1 = romwright_piece_3_1((((unsigned int)(temp_v1) >> 8) & 0xffffffU),5);
    temp_v1 = temp_v1 & 0xffffff;
    temp_v2 = param_1;
    uStack_38 = param_2;
    temp_v0 = FUN_001a2a4c();
    temp_v0 = FUN_001b013c(temp_v0 + 0x58,&temp_v1);
  }
  if (-1 < temp_v0) {
    temp_v4 = DAT_005c14ac[4];
    uStack_2c = DAT_005c14ac[5];
    uStack_28 = DAT_005c14ac[6];
    temp_v1 = (((unsigned int)(temp_v1) & 0xffU) | (((unsigned int)(((unsigned int)((unsigned int)*DAT_005c14ac >> 8) & 0xffffffU)) & 0xffffffU) << 8));
    temp_v1 = romwright_piece_3_1((((unsigned int)(temp_v1) >> 8) & 0xffffffU),1);
    temp_v5 = 0;
    temp_v1 = romwright_piece_1_3(DAT_005c14a8,((unsigned int)temp_v1 & 0xffffffU));
    temp_v2 = param_1;
    uStack_38 = param_2;
    temp_v3 = param_4;
    temp_v0 = FUN_001a2a4c();
    FUN_001b013c(temp_v0 + 0x58,&temp_v1);
  }
  return;
}
