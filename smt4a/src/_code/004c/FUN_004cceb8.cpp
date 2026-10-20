/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cceb8` (_code @ 0x4cceb8, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(void);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

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
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(unsigned int);


void FUN_004cceb8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = dataTableGet(9,0);
  dataTableGetCount();
  temp_v3 = dataTableGetEntries(temp_v2);
  temp_v0 = *(unsigned char *)(temp_v3 + 10);
  temp_v1 = *(unsigned char *)(temp_v3 + 9);
  temp_v4 = romwright_piece_1_3(*(unsigned char *)(temp_v3 + 0xd),
                      romwright_piece_1_2(*(unsigned char *)(temp_v3 + 0xc),(unsigned short)*(unsigned char *)(temp_v3 + 0xb)));
  *param_1 = *(unsigned int *)(temp_v3 + 5);
  param_1[1] = romwright_piece_3_1((unsigned int)temp_v0 << 8,temp_v1);
  param_1[2] = temp_v4;
  param_1[3] = 0;
  *(unsigned short *)(param_1 + 4) = 1;
  return;
}

} /* extern "C" */
