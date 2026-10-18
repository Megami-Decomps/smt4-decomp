/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00176124` (_code @ 0x176124, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern int FUN_0018719c(void);
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern unsigned int FUN_001a6f60(unsigned int, unsigned int);
extern int FUN_001b315c(void);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */


int FUN_00176124(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  
  temp_v10 = 0;
  if (temp_v10 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v0 = *(int *)(param_1 + 0x318) + temp_v10 * 0x50;
      temp_v1 = FUN_001b315c();
      if (temp_v1 != 0) {
        temp_v2 = temp_v0;
        FUN_001b31ac();
        temp_v3 = temp_v0;
        FUN_001b31e0();
        temp_v9 = 0;
        if (temp_v9 < temp_v3) {
          do {
            if (*(char *)(temp_v2 + temp_v9 * 0x40) == '\x1b') {
              temp_v4 = FUN_001a6f60(*(unsigned int *)(*(int *)(temp_v0 + 0x4c) + temp_v9 * 0x10),0);
              temp_v1 = FUN_00192798();
              temp_v5 = FUN_00192748(temp_v4);
              temp_v7 = 0;
              if (0 < temp_v5) {
                do {
                  if ((((*(unsigned char *)(temp_v1 + temp_v7 * 0xa4) == param_2) &&
                       (temp_v8 = temp_v1 + temp_v7 * 0xa4, *(unsigned char *)(temp_v8 + 1) == param_3)) &&
                      ((*(short *)(temp_v8 + 0xe) == 0 || (temp_v6 = FUN_0018719c(), temp_v6 != 0)))) &&
                     ((*(short *)(temp_v8 + 0x10) == 0 || (temp_v8 = FUN_0018719c(), temp_v8 == 0)))) {
                    return temp_v1 + temp_v7 * 0xa4;
                  }
                  temp_v7 = temp_v7 + 1;
                } while (temp_v7 < temp_v5);
              }
            }
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < temp_v3);
        }
      }
      temp_v10 = temp_v10 + 1;
    } while (temp_v10 < *(int *)(param_1 + 0x310));
  }
  return 0;
}
