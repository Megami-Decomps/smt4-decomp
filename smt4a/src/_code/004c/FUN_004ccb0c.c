/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ccb0c` (_code @ 0x4ccb0c, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004ccb0c_arg1 fn_004ccb0c_arg1;
struct fn_004ccb0c_arg1 {
    unsigned char pad_0x0[0x6];
    ushort field_0x6; /* +0x6 */
    unsigned char pad_0x8[0x10];
    ushort field_0x18; /* +0x18 */
    ushort field_0x1a; /* +0x1a */
    byte field_0x1c; /* +0x1c */
    byte field_0x1d; /* +0x1d */
    unsigned char pad_0x1e[0xa];
    byte field_0x28; /* +0x28 */
    byte field_0x29; /* +0x29 */
    byte field_0x2a; /* +0x2a */
    byte field_0x2b; /* +0x2b */
    byte field_0x2c; /* +0x2c */
};

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_003da99c. */
/* Supplied declaration required: FUN_003daaf8. */
extern int FUN_003e4de4(fn_004ccb0c_arg1 *);


void FUN_004ccb0c(unsigned int *param_1,fn_004ccb0c_arg1 *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  fn_004ccb0c_arg1 *pfVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  pfVar3 = param_2;
  FUN_00184310();
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v4 = (unsigned int)pfVar3->field_0x18 << 0x10;
  (*(unsigned char *)((unsigned char *)&temp_v3 + 0)) = pfVar3->field_0x28;
  (*(unsigned char *)((unsigned char *)&temp_v3 + 1)) = pfVar3->field_0x29;
  (*(unsigned char *)((unsigned char *)&temp_v3 + 2)) = pfVar3->field_0x2a;
  (*(unsigned char *)((unsigned char *)&temp_v3 + 3)) = pfVar3->field_0x2b;
  temp_v4 = romwright_piece_3_1((((unsigned int)(temp_v4) >> 8) & 0xffffffU),pfVar3->field_0x2c);
  (*(unsigned short *)((unsigned char *)&temp_v5 + 0)) = pfVar3->field_0x1a;
  (*(unsigned char *)((unsigned char *)&temp_v5 + 2)) = pfVar3->field_0x1c;
  (*(unsigned char *)((unsigned char *)&temp_v5 + 3)) = pfVar3->field_0x1d;
  temp_v1 = pfVar3->field_0x6;
  FUN_003da99c(temp_v1,&temp_v3);
  temp_v6 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v6 + 2)),temp_v1);
  temp_v1 = pfVar3->field_0x6;
  FUN_003daaf8(temp_v1,&temp_v3);
  temp_v6 = romwright_piece_2_2(temp_v1,(unsigned short)temp_v6);
  temp_v2 = FUN_003e4de4(param_2);
  if (temp_v2 == 0) {
    temp_v0 = 2;
  }
  else {
    temp_v0 = 3;
  }
  temp_v7 = romwright_piece_3_1((((unsigned int)(temp_v7) >> 8) & 0xffffffU),temp_v0);
  *param_1 = temp_v3;
  param_1[1] = temp_v4;
  param_1[2] = temp_v5;
  param_1[3] = temp_v6;
  *(unsigned short *)(param_1 + 4) = (unsigned short)temp_v7;
  return;
}
