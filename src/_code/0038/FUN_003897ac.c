/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003897ac` (_code @ 0x3897ac, 0x164 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int FUN_002ac2f4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ac350. */
/* Supplied declaration required: FUN_002ac384. */
extern int FUN_002ac3b8(unsigned int);
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);


int FUN_003897ac(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  
  temp_v9 = 0;
  if (temp_v9 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v8 = *(int *)(param_1 + 0x318) + temp_v9 * 0x50;
      temp_v0 = FUN_002ac3b8(temp_v8);
      if (temp_v0 != 0) {
        temp_v1 = temp_v8;
        FUN_002ac384();
        temp_v2 = temp_v8;
        FUN_002ac350();
        temp_v7 = 0;
        if (temp_v7 < temp_v2) {
          do {
            if (*(char *)(temp_v1 + temp_v7 * 0x40) == '\x1c') {
              temp_v3 = FUN_002ac2f4(*(unsigned int *)(*(int *)(temp_v8 + 0x4c) + temp_v7 * 0x10),0);
              temp_v0 = FUN_002c0e9c();
              temp_v4 = FUN_002c0e4c(temp_v3);
              if ((int)temp_v4 < 1) {
                temp_v5 = 0;
              }
              else {
                temp_v5 = temp_v4 & 1;
                temp_v6 = 0;
                if (temp_v5 != 0) {
                  do {
                    if (*(int *)(temp_v0 + temp_v6 * 100) == param_2) {
                      return temp_v0 + temp_v6 * 100 + 4;
                    }
                    temp_v6 = temp_v6 + 1;
                  } while (temp_v6 < (int)temp_v5);
                }
              }
              for (; (int)temp_v5 < (int)temp_v4; temp_v5 = temp_v5 + 2) {
                if (*(int *)(temp_v0 + temp_v5 * 100) == param_2) {
                  return temp_v0 + temp_v5 * 100 + 4;
                }
                if (*(int *)(temp_v0 + temp_v5 * 100 + 100) == param_2) {
                  return temp_v0 + temp_v5 * 100 + 0x68;
                }
              }
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < temp_v2);
        }
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < *(int *)(param_1 + 0x310));
  }
  return 0;
}
