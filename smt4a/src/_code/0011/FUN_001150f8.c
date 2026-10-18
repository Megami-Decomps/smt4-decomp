/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001150f8` (_code @ 0x1150f8, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_5_stack;

extern unsigned char LAB_001151c0; /* 0x1151c0 */
extern romwright_code *DAT_00594acc; /* 0x594acc */
extern int DAT_0062d87c; /* 0x62d87c */
extern int DAT_0062d880; /* 0x62d880 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_00103640. */
extern int FUN_00115390(unsigned int *);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_00300c10. */
extern int FUN_00300c20(void);
extern unsigned int FUN_00300d90(int, unsigned char *, int);
/* Supplied declaration required: FUN_00300df0. */
/* Supplied declaration required: FUN_0043edf0. */


unsigned int
FUN_001150f8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,int *param_5)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [12];
  int temp_v7 [2];
  int iStack_24;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int *temp_v10;
  
  iStack_24 = param_1;
  temp_v8 = param_2;
  temp_v9 = param_3;
  temp_v10 = param_4;
  temp_v0 = FUN_00115390(param_4);
  if (temp_v0 != 0) {
    DAT_0062d880 = DAT_0062d880 + 1;
    FUN_002e6e34(temp_v6,*(int *)(param_1 + 8) + 4);
    FUN_00103640(*(unsigned int *)(param_1 + 8));
    temp_v3 = *(int *)(param_1 + 8) + 0xb0;
    temp_v5 = *(int *)(*(int *)(param_1 + 8) + 0x34) << 3;
    temp_v4 = 8;
    piVar2 = temp_v7;
    FUN_0043edf0(piVar2,*(unsigned int *)(param_1 + 4),temp_v8,temp_v9,0);
    temp_v0 = temp_v7[0];
    if ((int)piVar2 < 0) {
      temp_v0 = FUN_00300c20();
    }
    FUN_002e6e5c(temp_v6);
  }
  else {
    DAT_0062d87c = DAT_0062d87c + 1;
    FUN_00300c10(&temp_v3);
    temp_v1 = *temp_v10;
    temp_v4 = (temp_v1 << 0x18) | (((temp_v1 >> 8) & 0xff) << 0x10) | (((temp_v1 >> 0x10) & 0xff) << 8) |
               (temp_v1 >> 0x18);
    temp_v3 = romwright_piece_2_2(((unsigned short)temp_v10[1] << 8) | ((unsigned short)temp_v10[1] >> 8),(unsigned short)temp_v3
                       );
    temp_v0 = *(int *)(param_1 + 4);
    FUN_00300df0(temp_v0,temp_v8,temp_v9,0,&temp_v3);
  }
  temp_v2 = 0;
  if (temp_v0 < 0) {
    temp_v2 = FUN_00300d90(param_1,&LAB_001151c0,temp_v0);
  }
  else if (param_5 != (int *)0x0) {
    *param_5 = temp_v0;
  }
  (*DAT_00594acc)(temp_v2,temp_v8,temp_v9,temp_v10,param_5);
  return temp_v2;
}
