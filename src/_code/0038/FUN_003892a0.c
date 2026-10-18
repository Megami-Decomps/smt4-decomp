/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003892a0` (_code @ 0x3892a0, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int FUN_002ac068(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ac0c4. */
/* Supplied declaration required: FUN_002ac0f8. */
extern int FUN_002ac12c(unsigned int);
extern int FUN_002c0c74(void);
extern int FUN_002c0cc4(unsigned int);


int FUN_003892a0(int param_1,int param_2)

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
      temp_v0 = FUN_002ac12c(temp_v6);
      if (temp_v0 != 0) {
        temp_v1 = temp_v6;
        FUN_002ac0f8();
        temp_v2 = temp_v6;
        FUN_002ac0c4();
        temp_v4 = 0;
        if (temp_v4 < temp_v2) {
          do {
            if (*(char *)(temp_v1 + temp_v4 * 0x40) == '$') {
              temp_v3 = FUN_002ac068(*(unsigned int *)(*(int *)(temp_v6 + 0x4c) + temp_v4 * 0x10),1);
              temp_v0 = FUN_002c0c74();
              if (param_2 <= temp_v0 + temp_v5) {
                temp_v7 = FUN_002c0cc4(temp_v3);
                return temp_v7 + (param_2 - temp_v5) * 0xc;
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
