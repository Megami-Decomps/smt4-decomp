/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a6738` (_code @ 0x1a6738, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a6f60(unsigned int, int);
int FUN_001b31ac(void);
int FUN_001b31e0(void);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_001a6f60. */
extern int FUN_001b315c(unsigned int);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */


int FUN_001a6738(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  
  temp_v8 = 0;
  if (temp_v8 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v7 = *(int *)(param_1 + 0x318) + temp_v8 * 0x50;
      temp_v0 = FUN_001b315c(temp_v7);
      if (temp_v0 != 0) {
        temp_v1 = temp_v7;
        FUN_001b31ac();
        temp_v2 = temp_v7;
        FUN_001b31e0();
        temp_v6 = 0;
        if (temp_v6 < temp_v2) {
          do {
            if (*(char *)(temp_v1 + temp_v6 * 0x40) == '\v') {
              temp_v9 = *(unsigned int *)(*(int *)(temp_v7 + 0x4c) + temp_v6 * 0x10);
              temp_v3 = FUN_001a6f60(temp_v9,0);
              temp_v0 = dataTableGetEntries();
              temp_v4 = dataTableGetCount(temp_v3);
              temp_v5 = 0;
              if (0 < temp_v4) {
                do {
                  if (temp_v0 + temp_v5 * 0x28 == param_2) {
                    FUN_001a6f60(temp_v9,*(unsigned char *)(param_2 + 0x26));
                    temp_v8 = dataTableGetEntries();
                    return temp_v8 + param_3 * 4;
                  }
                  temp_v5 = temp_v5 + 1;
                } while (temp_v5 < temp_v4);
              }
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < temp_v2);
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < *(int *)(param_1 + 0x310));
  }
  return 0;
}

} /* extern "C" */
