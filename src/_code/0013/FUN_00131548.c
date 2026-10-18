/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00131548` (_code @ 0x131548, 0x15c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned int FUN_002ac2f4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ac350. */
/* Supplied declaration required: FUN_002ac384. */
extern int FUN_002ac3b8(void);
extern int FUN_002c0ba8(void);
extern int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);


int FUN_00131548(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char *pbVar10;
  unsigned int temp_v9;
  unsigned char temp_v10;
  int temp_v11;
  
  temp_v11 = 0;
  if (temp_v11 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v0 = *(int *)(param_1 + 0x318) + temp_v11 * 0x50;
      temp_v1 = FUN_002ac3b8();
      if (temp_v1 != 0) {
        temp_v2 = temp_v0;
        FUN_002ac384();
        temp_v3 = temp_v0;
        FUN_002ac350();
        temp_v9 = 0;
        if (temp_v9 < temp_v3) {
          do {
            if (*(char *)(temp_v2 + temp_v9 * 0x40) == '\x1b') {
              temp_v4 = FUN_002ac2f4(*(unsigned int *)(*(int *)(temp_v0 + 0x4c) + temp_v9 * 0x10),0);
              temp_v1 = FUN_002c0e9c();
              temp_v5 = FUN_002c0e4c(temp_v4);
              temp_v8 = 0;
              if (0 < temp_v5) {
                do {
                  pbVar10 = (unsigned char *)(temp_v1 + temp_v8 * 0xa0);
                  temp_v6 = (unsigned int)*pbVar10;
                  temp_v10 = temp_v6 == param_2;
                  if (temp_v10) {
                    temp_v6 = (unsigned int)pbVar10[1];
                  }
                  if (((temp_v10 && temp_v6 == param_3) &&
                      ((*(short *)(pbVar10 + 10) == 0 || (temp_v7 = FUN_002c0ba8(), temp_v7 != 0)))) &&
                     ((*(short *)(pbVar10 + 0xc) == 0 || (temp_v7 = FUN_002c0ba8(), temp_v7 == 0)))) {
                    return temp_v1 + temp_v8 * 0xa0;
                  }
                  temp_v8 = temp_v8 + 1;
                } while (temp_v8 < temp_v5);
              }
            }
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < temp_v3);
        }
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < *(int *)(param_1 + 0x310));
  }
  return 0;
}
