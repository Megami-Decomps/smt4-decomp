/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014caa4` (_code @ 0x14caa4, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ac068(unsigned int, int);
int FUN_002ac0c4(void);
int FUN_002ac0f8(void);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_002ac068. */
/* Supplied declaration required: FUN_002ac0c4. */
/* Supplied declaration required: FUN_002ac0f8. */
extern int FUN_002ac12c(unsigned int);
extern int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);


int FUN_0014caa4(int param_1,int param_2,int param_3)

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
              temp_v9 = *(unsigned int *)(*(int *)(temp_v7 + 0x4c) + temp_v6 * 0x10);
              temp_v3 = FUN_002ac068(temp_v9,0);
              temp_v0 = FUN_002c0cc4();
              temp_v4 = FUN_002c0c74(temp_v3);
              temp_v5 = 0;
              if (0 < temp_v4) {
                do {
                  if (temp_v0 + temp_v5 * 0x2c == param_2) {
                    FUN_002ac068(temp_v9,*(unsigned char *)(param_2 + 0x2a));
                    temp_v8 = FUN_002c0cc4();
                    return (temp_v8 + param_3 * 0x14) - 0x10;
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
