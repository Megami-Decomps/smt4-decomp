/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c8a7c` (_code @ 0x1c8a7c, 0x3a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7bca(int, int, int, unsigned char *);

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

extern unsigned char LAB_002c6e64; /* 0x2c6e64 */

extern int FUN_0026b738(unsigned short);
extern int FUN_0026b780(unsigned int, unsigned short);
/* Supplied declaration required: FUN_002b7bca. */


/* WARNING: Removing unreachable block (ram,0x001c8d6c) */

void FUN_001c8a7c(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  do {
    temp_v1 = 0;
    while( 1 ) {
      temp_v5 = param_1 + temp_v1 * 2;
      if (((*(short *)(temp_v5 + 0xd114) != 0 && param_4 != -1) && temp_v1 != param_4) &&
         (*(short *)(temp_v5 + 0xd114) == *(short *)(param_3 + param_4 * 2 + 0x34))) break;
      temp_v1 = temp_v1 + 1;
      if (temp_v1 >= 8) {
        return;
      }
    }
    temp_v9 = param_3 + temp_v1 * 2;
    temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 2 + 0xd114);
    *(unsigned short *)(temp_v5 + 0xd114) = *(unsigned short *)(temp_v9 + 0x34);
    *(unsigned char *)(param_1 + temp_v1 + 0xd2d0) = 1;
    temp_v2 = param_1 + 0xd134;
    temp_v7 = 0;
    temp_v8 = 7;
    do {
      temp_v3 = param_1 + temp_v7 * 2;
      if (*(short *)(temp_v3 + 0xd136) == *(short *)(param_1 + 0xd134)) {
        *(unsigned short *)(temp_v3 + 0xd136) = 0;
        FUN_002b7bca(temp_v2,8,2,&LAB_002c6e64);
      }
      temp_v8 = temp_v8 - 1;
      temp_v7 = temp_v7 + 1;
    } while (temp_v8 != 0);
    temp_v6 = *(unsigned int *)(param_1 + 0xd2c4);
    if (0 < (int)temp_v6) {
      temp_v4 = temp_v6 & 1;
      if (temp_v4 == 1) {
        temp_v7 = param_1 + temp_v6 * 2;
        *(unsigned short *)(temp_v7 + 0xd134) = *(unsigned short *)(temp_v7 + 0xd132);
      }
      temp_v6 = (unsigned int)(temp_v4 == 1);
      if ((int)temp_v4 < *(int *)(param_1 + 0xd2c4)) {
        do {
          temp_v4 = temp_v4 + 2;
          temp_v8 = temp_v6 + 1;
          temp_v7 = param_1 + (*(int *)(param_1 + 0xd2c4) - temp_v6) * 2;
          *(unsigned short *)(temp_v7 + 0xd134) = *(unsigned short *)(temp_v7 + 0xd132);
          temp_v6 = temp_v6 + 2;
          temp_v7 = param_1 + (*(int *)(param_1 + 0xd2c4) - temp_v8) * 2;
          *(unsigned short *)(temp_v7 + 0xd134) = *(unsigned short *)(temp_v7 + 0xd132);
        } while ((int)temp_v4 < *(int *)(param_1 + 0xd2c4));
      }
    }
    temp_v7 = *(int *)(param_1 + 0xd2c4);
    temp_v6 = 8 - temp_v7;
    if (0 < (int)temp_v6) {
      temp_v8 = 0;
      if (temp_v7 >= 8) {
        temp_v4 = 0;
      }
      else {
        temp_v4 = temp_v6 & 1;
        if (temp_v4 == 1) {
          temp_v8 = 1;
          *(unsigned short *)(param_1 + temp_v7 * 2 + 0xd134) = 0;
        }
      }
      for (; (int)temp_v4 < (int)temp_v6; temp_v4 = temp_v4 + 2) {
        temp_v3 = temp_v8 + 1;
        *(unsigned short *)(param_1 + (temp_v7 + temp_v8) * 2 + 0xd134) = 0;
        temp_v8 = temp_v8 + 2;
        *(unsigned short *)(param_1 + (temp_v7 + temp_v3) * 2 + 0xd134) = 0;
      }
    }
    temp_v7 = FUN_0026b780(param_2,*(unsigned short *)(temp_v9 + 0x34));
    if (temp_v7 != 0) {
      if (*(short *)(param_1 + 0xd136) == *(short *)(temp_v9 + 0x34)) {
        *(unsigned short *)(param_1 + 0xd134) = 0;
      }
      else {
        temp_v7 = 0;
        temp_v8 = 7;
        *(short *)(param_1 + 0xd134) = *(short *)(temp_v9 + 0x34);
        do {
          temp_v3 = param_1 + temp_v7 * 2;
          if (*(short *)(temp_v3 + 0xd136) == *(short *)(param_1 + 0xd134)) {
            *(unsigned short *)(temp_v3 + 0xd136) = 0;
            FUN_002b7bca(temp_v2,8,2,&LAB_002c6e64);
          }
          temp_v8 = temp_v8 - 1;
          temp_v7 = temp_v7 + 1;
        } while (temp_v8 != 0);
      }
    }
    else {
      *(unsigned short *)(param_1 + 0xd134) = 0;
      FUN_002b7bca(temp_v2,8,2,&LAB_002c6e64);
    }
    temp_v2 = FUN_0026b738(temp_v0);
    param_4 = temp_v1;
    if ((temp_v2 == 0) || (temp_v2 = FUN_0026b780(param_2,*(unsigned short *)(temp_v9 + 0x34)), temp_v2 != 0))
    {
      temp_v2 = FUN_0026b738(temp_v0);
      if ((temp_v2 == 0) && (temp_v2 = FUN_0026b780(param_2,*(unsigned short *)(temp_v9 + 0x34)), temp_v2 != 0)
         ) {
        *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) + 1;
        *(unsigned short *)(temp_v5 + 0xd124) = 1;
      }
      else {
        temp_v5 = FUN_0026b738(temp_v0);
        if (((temp_v5 == 0) &&
            (temp_v5 = FUN_0026b780(param_2,*(unsigned short *)(temp_v9 + 0x34)), temp_v5 == 0)) ||
           (*(short *)(param_3 + temp_v1 * 2 + 0x34) == 0)) {
          *(int *)(param_1 + 0xd2c4) = *(int *)(param_1 + 0xd2c4) - 1;
        }
      }
    }
    else {
      if (*(short *)(param_3 + temp_v1 * 2 + 0x34) != 0) {
        *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) - 1;
      }
      *(int *)(param_1 + 0xd2c4) = *(int *)(param_1 + 0xd2c4) - 1;
      *(unsigned short *)(temp_v5 + 0xd124) = 0;
    }
  } while( 1 );
}

} /* extern "C" */
