/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00131530` (_code @ 0x131530, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ac0c4(void);
int FUN_002ac0f8(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int FUN_002ac068(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ac0c4. */
/* Supplied declaration required: FUN_002ac0f8. */
extern int FUN_002ac12c(unsigned int);
extern int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);


int FUN_00131530(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  temp_v8 = 0;
  if (temp_v8 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v7 = *(int *)(param_1 + 0x318) + temp_v8 * 0x50;
      temp_v0 = FUN_002ac12c(temp_v7);
      if (temp_v0 != 0) {
        temp_v1 = temp_v7;
        FUN_002ac0f8();
        temp_v2 = temp_v7;
        FUN_002ac0c4();
        temp_v6 = 0;
        if (temp_v6 < temp_v2) {
          do {
            if (*(char *)(temp_v1 + temp_v6 * 0x40) == '\v') {
              temp_v3 = FUN_002ac068(*(unsigned int *)(*(int *)(temp_v7 + 0x4c) + temp_v6 * 0x10),0);
              temp_v0 = FUN_002c0cc4();
              temp_v4 = FUN_002c0c74(temp_v3);
              temp_v5 = 0;
              if (0 < temp_v4) {
                do {
                  if (*(short *)(temp_v0 + temp_v5 * 0x2c + 0x20) == param_2) {
                    return temp_v0 + temp_v5 * 0x2c;
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
