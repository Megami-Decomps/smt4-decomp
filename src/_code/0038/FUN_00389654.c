/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389654` (_code @ 0x389654, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned int FUN_002ac2f4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ac350. */
/* Supplied declaration required: FUN_002ac384. */
extern int FUN_002ac3b8(unsigned int);
extern int FUN_002c0e4c(void);
extern int FUN_002c0e9c(unsigned int);


int FUN_00389654(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  
  temp_v5 = 0;
  temp_v7 = 0;
  if (temp_v7 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v6 = *(int *)(param_1 + 0x318) + temp_v7 * 0x50;
      temp_v0 = FUN_002ac3b8(temp_v6);
      if (temp_v0 != 0) {
        temp_v1 = temp_v6;
        FUN_002ac384();
        temp_v2 = temp_v6;
        FUN_002ac350();
        temp_v4 = 0;
        if (temp_v4 < temp_v2) {
          do {
            if (*(char *)(temp_v1 + temp_v4 * 0x40) == '\x06') {
              temp_v3 = FUN_002ac2f4(*(unsigned int *)(*(int *)(temp_v6 + 0x4c) + temp_v4 * 0x10),param_2);
              temp_v0 = FUN_002c0e4c();
              if (param_3 <= temp_v0 + temp_v5) {
                temp_v7 = FUN_002c0e9c(temp_v3);
                return temp_v7 + (param_3 - temp_v5) * 0xd0;
              }
              temp_v5 = temp_v5 + temp_v0 + temp_v5;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < temp_v2);
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < *(int *)(param_1 + 0x310));
  }
  return 0;
}
