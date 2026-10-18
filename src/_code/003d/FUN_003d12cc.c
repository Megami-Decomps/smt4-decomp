/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d12cc` (_code @ 0x3d12cc, 0x2e8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 10 slot(s), 35 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned short sp60; /* 0x60: local_60 */
    unsigned char sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_5_stack;

/* Supplied declaration required: FUN_002283b4. */
/* Supplied declaration required: FUN_00228b30. */
/* Supplied declaration required: FUN_002475e4. */
extern int FUN_0029ec6c(unsigned short);
extern int FUN_002b47cc(unsigned short);
extern int FUN_002b66ec(void);


unsigned int FUN_003d12cc(unsigned int *param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6 [4];
  unsigned char temp_v7 [4];
  unsigned short temp_v8 [18];
  int temp_v9;
  unsigned int *temp_v10;
  int iStack_30;
  int iStack_2c;
  unsigned int uStack_28;
  
  uStack_28 = param_4;
  iStack_2c = param_3;
  iStack_30 = param_2;
  temp_v10 = param_1;
  if ((**(unsigned int **)(param_2 + 0x20) & 2) == 0) {
    temp_v5 = 1;
    temp_v6[0] = 0;
  }
  else {
    temp_v5 = 1;
    temp_v6[0] = 1;
    temp_v0 = FUN_002b66ec();
    temp_v0 = FUN_002b47cc(*(unsigned short *)(temp_v0 + 2));
    if (temp_v0 != 0) {
      temp_v5 = 2;
      temp_v6[1] = 2;
    }
  }
  temp_v0 = 0;
  temp_v9 = param_2 + 0x38;
  do {
    temp_v4 = 0;
    *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14c) = 1;
    *(short *)(*(int *)(param_2 + 0x28) + 0x14e) = (short)temp_v6[temp_v0];
    FUN_002475e4(temp_v8,*temp_v10,*(unsigned int *)(param_2 + 0x20));
    switch(temp_v8[0]) {
    case 1:
    case 6:
      temp_v4 = 1;
      break;
    case 2:
    case 3:
    case 4:
    case 7:
    case 8:
      return 0;
    }
    temp_v2 = 0;
    temp_v6[3] = 0;
    temp_v7[0] = 0;
    if (param_4 != 0) {
      do {
        puVar2 = *(unsigned int **)(param_3 + temp_v2 * 4);
        if (((*puVar2 & 0x400) != 0) &&
           (temp_v1 = FUN_0029ec6c(*(unsigned short *)((int)puVar2 + 0xce)), temp_v1 != 0)) {
          temp_v1 = 0;
          FUN_002283b4(0,0,1,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),
                       (int)*(short *)(*(int *)(param_3 + temp_v2 * 4) + 8),0,1,temp_v7);
          temp_v3 = (unsigned int)((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 3);
          if ((temp_v3 & temp_v4) != 0) {
            return 0;
          }
          if ((temp_v3 & ~temp_v4) == 0) {
            temp_v1 = 0;
            FUN_00228b30(0,0,0,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),
                         (int)*(short *)(*(int *)(param_3 + temp_v2 * 4) + 8),1);
            if (((param_5 == 0) || (temp_v1 == 2)) && (temp_v6[3] = 1, temp_v4 == 0)) {
              *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14c) = 1;
              *(short *)(*(int *)(param_2 + 0x28) + 0x14e) = (short)temp_v6[temp_v0];
              *(unsigned char *)(*(short *)(*(int *)(param_3 + temp_v2 * 4) + 0x6e) + temp_v9) = 1;
              return 1;
            }
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < param_4);
    }
    if ((temp_v6[3] & temp_v4) != 0) {
      *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14c) = 1;
      *(short *)(*(int *)(param_2 + 0x28) + 0x14e) = (short)temp_v6[temp_v0];
      if (param_4 == 0) {
        temp_v4 = 0;
      }
      else {
        temp_v4 = param_4 & 1;
        temp_v0 = 0;
        if (temp_v4 != 0) {
          do {
            puVar2 = *(unsigned int **)(param_3 + temp_v0 * 4);
            if ((*puVar2 & 0x400) != 0) {
              *(unsigned char *)(*(short *)((int)puVar2 + 0x6e) + temp_v9) = 1;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < (int)temp_v4);
        }
      }
      for (; temp_v4 < param_4; temp_v4 = temp_v4 + 2) {
        puVar2 = *(unsigned int **)(param_3 + temp_v4 * 4);
        if ((*puVar2 & 0x400) != 0) {
          *(unsigned char *)(*(short *)((int)puVar2 + 0x6e) + temp_v9) = 1;
        }
        puVar2 = *(unsigned int **)(param_3 + temp_v4 * 4 + 4);
        if ((*puVar2 & 0x400) != 0) {
          *(unsigned char *)(*(short *)((int)puVar2 + 0x6e) + temp_v9) = 1;
        }
      }
      return 1;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < temp_v5);
  return 0;
}
