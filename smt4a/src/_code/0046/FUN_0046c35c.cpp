/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046c35c` (_code @ 0x46c35c, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a6f60(unsigned int, unsigned int);
int FUN_001b31ac(void);
int FUN_001b31e0(void);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int dataTableGetCount(void);
/* Supplied declaration required: FUN_001a6f60. */
extern int FUN_001b315c(unsigned int);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */


int FUN_0046c35c(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v6 = 0;
  temp_v5 = 0;
  if (temp_v5 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v4 = *(int *)(param_1 + 0x318) + temp_v5 * 0x50;
      temp_v0 = FUN_001b315c(temp_v4);
      if (temp_v0 != 0) {
        temp_v1 = temp_v4;
        FUN_001b31ac();
        temp_v2 = temp_v4;
        FUN_001b31e0();
        temp_v3 = 0;
        if (temp_v3 < temp_v2) {
          do {
            if ((*(char *)(temp_v1 + temp_v3 * 0x40) == param_2) &&
               (*(char *)(*(int *)(temp_v4 + 0x4c) + temp_v3 * 0x10 + 0xc) != '\0')) {
              FUN_001a6f60(*(unsigned int *)(*(int *)(temp_v4 + 0x4c) + temp_v3 * 0x10),param_3);
              temp_v0 = dataTableGetCount();
              temp_v6 = temp_v6 + temp_v0;
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v2);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(param_1 + 0x310));
  }
  return temp_v6;
}

} /* extern "C" */
