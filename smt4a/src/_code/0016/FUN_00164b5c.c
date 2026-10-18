/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00164b5c` (_code @ 0x164b5c, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 11 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned short sp4A; /* 0x4a: local_4a */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
} param_6_stack;

extern int FUN_001695c8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00184efc. */
extern int FUN_001861ac(unsigned int, int);


unsigned int
FUN_00164b5c(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  short *psVar5;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int iStack_74;
  int temp_v9;
  int iStack_6c;
  unsigned int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int uStack_34;
  unsigned int temp_v17;
  unsigned int uStack_2c;
  int temp_v18;
  
  temp_v15 = 1;
  uStack_34 = param_1;
  temp_v17 = param_2;
  uStack_2c = param_3;
  temp_v18 = param_4;
  temp_v0 = FUN_001695c8(param_2,param_3);
  temp_v3 = 0;
  if ((temp_v0 != 0) && (temp_v5 = 0, temp_v3 = temp_v15, 0 < *(int *)(temp_v0 + 4))) {
    temp_v16 = param_1 | 0x8000;
    do {
      piVar2 = (int *)(*(int *)(temp_v0 + 0xc) + temp_v5 * 0x14);
      temp_v4 = piVar2[3];
      temp_v1 = piVar2[4];
      temp_v7 = piVar2[2] + temp_v18;
      temp_v6 = piVar2[1] + *piVar2 * 1000;
      temp_v2 = FUN_001861ac(temp_v17,temp_v6);
      temp_v6 = **(int **)(temp_v2 + 4) + (temp_v6 % 1000) * 0x14;
      psVar5 = *(short **)(temp_v6 + 0xc);
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 1;
      temp_v14 = 1;
      temp_v8 = param_1;
      if (psVar5 != (short *)0x0) {
        if (psVar5[2] == 0) {
          if ((psVar5[6] & 1U) != 0) {
            temp_v8 = temp_v16;
            temp_v11 = (int)*psVar5;
            temp_v12 = (int)psVar5[1];
            if (psVar5[2] == 1) {
              temp_v11 = (int)*psVar5;
              temp_v12 = (int)psVar5[1];
            }
          }
        }
        else if (psVar5[2] == 1) {
          temp_v11 = (int)*psVar5;
          temp_v12 = (int)psVar5[1];
        }
      }
      iStack_74 = temp_v7;
      temp_v9 = temp_v4 + param_5;
      iStack_6c = temp_v1 + param_6;
      FUN_00184efc(temp_v2,temp_v6,&temp_v8,0);
      temp_v5 = temp_v5 + 1;
      temp_v3 = temp_v15;
    } while (temp_v5 < *(int *)(temp_v0 + 4));
  }
  return temp_v3;
}
