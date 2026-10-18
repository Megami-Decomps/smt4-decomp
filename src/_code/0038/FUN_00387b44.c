/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387b44` (_code @ 0x387b44, 0xd4 bytes) from smt4.cxi.
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
extern int FUN_002c0e4c(void);
extern int FUN_002c0e9c(unsigned int);


int FUN_00387b44(int param_1,int param_2)

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
            if (*(char *)(temp_v1 + temp_v4 * 0x40) == '&') {
              temp_v3 = FUN_002ac2f4(*(unsigned int *)(*(int *)(temp_v6 + 0x4c) + temp_v4 * 0x10),0);
              temp_v0 = FUN_002c0e4c();
              if (param_2 <= temp_v0 + temp_v5) {
                temp_v7 = FUN_002c0e9c(temp_v3);
                return temp_v7 + (param_2 - temp_v5) * 0x28;
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
