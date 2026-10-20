/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046e800` (_code @ 0x46e800, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b31ac(void);
int FUN_001b31e0(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern unsigned int FUN_001a6f60(unsigned int, unsigned int);
extern int FUN_001b315c(unsigned int);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */


int FUN_0046e800(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  short *psVar8;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  
  temp_v9 = 0;
  if (temp_v9 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v8 = *(int *)(param_1 + 0x318) + temp_v9 * 0x50;
      temp_v0 = FUN_001b315c(temp_v8);
      if (temp_v0 != 0) {
        temp_v1 = temp_v8;
        FUN_001b31ac();
        temp_v2 = temp_v8;
        FUN_001b31e0();
        temp_v7 = 0;
        if (temp_v7 < temp_v2) {
          do {
            if ((*(char *)(temp_v1 + temp_v7 * 0x40) == '!') &&
               (*(char *)(*(int *)(temp_v8 + 0x4c) + temp_v7 * 0x10 + 0xc) != '\0')) {
              temp_v3 = FUN_001a6f60(*(unsigned int *)(*(int *)(temp_v8 + 0x4c) + temp_v7 * 0x10),1);
              temp_v0 = FUN_00192798();
              temp_v4 = FUN_00192748(temp_v3);
              if ((int)temp_v4 < 1) {
                temp_v5 = 0;
              }
              else {
                temp_v5 = temp_v4 & 1;
                temp_v6 = 0;
                if (temp_v5 != 0) {
                  do {
                    if (*(short *)(temp_v0 + temp_v6 * 0x34) == param_2) {
                      return temp_v0 + temp_v6 * 0x34 + 4;
                    }
                    temp_v6 = temp_v6 + 1;
                  } while (temp_v6 < (int)temp_v5);
                }
              }
              for (; (int)temp_v5 < (int)temp_v4; temp_v5 = temp_v5 + 2) {
                psVar8 = (short *)(temp_v0 + temp_v5 * 0x34);
                if (*psVar8 == param_2) {
                  return temp_v0 + temp_v5 * 0x34 + 4;
                }
                if (psVar8[0x1a] == param_2) {
                  return temp_v0 + temp_v5 * 0x34 + 0x38;
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

} /* extern "C" */
