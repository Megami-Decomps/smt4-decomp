/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ccf78` (_code @ 0x4ccf78, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGetEntries(unsigned int);
int FUN_003da99c(int, int *);
int FUN_003daaf8(int, int *);
int FUN_003df7c4(int);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
} void_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_2_DEFINED
#define ROMWRIGHT_PIECE_1_2_DEFINED
#define romwright_piece_1_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_3_DEFINED
#define ROMWRIGHT_PIECE_1_3_DEFINED
#define romwright_piece_1_3(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 24) | ((unsigned int)(lower) & 0xffffffULL)))
#endif
extern int FUN_001801a4(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: FUN_003da99c. */
/* Supplied declaration required: FUN_003daaf8. */
/* Supplied declaration required: FUN_003df7c4. */


void FUN_004ccf78(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v2 = FUN_001801a4();
  *(unsigned short *)(temp_v2 + 0x62) = 1;
  *(unsigned int *)(temp_v2 + 0x30) = 0;
  *(unsigned short *)(temp_v2 + 0x5e) = 0;
  temp_v3 = dataTableGet(9,0);
  dataTableGetCount();
  pcVar5 = (char *)dataTableGetEntries(temp_v3);
  *(short *)(temp_v2 + 0x12) = (short)*pcVar5;
  *(short *)(temp_v2 + 0x14) = (short)pcVar5[1];
  *(short *)(temp_v2 + 0x16) = (short)pcVar5[2];
  *(short *)(temp_v2 + 0x18) = (short)pcVar5[3];
  *(short *)(temp_v2 + 0x1a) = (short)pcVar5[4];
  temp_v4 = dataTableGet(9,0);
  dataTableGetCount();
  temp_v5 = dataTableGetEntries(temp_v4);
  temp_v11 = 0;
  temp_v6 = *(unsigned int *)(temp_v5 + 5);
  uStack_40 = romwright_piece_3_1((unsigned int)*(unsigned char *)(temp_v5 + 10) << 8,*(unsigned char *)(temp_v5 + 9));
  temp_v12 = 1;
  temp_v10 = romwright_piece_1_3(*(unsigned char *)(temp_v5 + 0xd),
                      romwright_piece_1_2(*(unsigned char *)(temp_v5 + 0xc),(unsigned short)*(unsigned char *)(temp_v5 + 0xb)));
  temp_v7 = (temp_v3 & 0xffff0000) | 1;
  uStack_3c = temp_v10;
  uStack_38 = 0;
  temp_v1 = *(unsigned short *)(temp_v2 + 0x62);
  temp_v8 = temp_v6;
  temp_v9 = uStack_40;
  temp_v0 = temp_v1;
  FUN_003da99c(temp_v1,&temp_v6);
  *(unsigned short *)(temp_v2 + 0xe) = temp_v0;
  FUN_003daaf8(temp_v1,&temp_v6);
  *(unsigned short *)(temp_v2 + 0x10) = temp_v1;
  FUN_003df7c4(0);
  *(unsigned short *)(temp_v2 + 0x2a) = *(unsigned short *)(temp_v2 + 0x1c);
  *(unsigned short *)(temp_v2 + 0x2c) = *(unsigned short *)(temp_v2 + 0x1e);
  return;
}

} /* extern "C" */
