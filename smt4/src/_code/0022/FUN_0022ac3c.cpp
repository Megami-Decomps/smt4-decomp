/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022ac3c` (_code @ 0x22ac3c, 0x148 bytes) from smt4_v1.2.0.cxi.
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
extern unsigned int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);


int FUN_0022ac3c(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  
  temp_v10 = 0;
  if (temp_v10 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v9 = *(int *)(param_1 + 0x318) + temp_v10 * 0x50;
      temp_v0 = FUN_002ac12c(temp_v9);
      if (temp_v0 != 0) {
        temp_v1 = temp_v9;
        FUN_002ac0f8();
        temp_v2 = temp_v9;
        FUN_002ac0c4();
        temp_v8 = 0;
        if (temp_v8 < temp_v2) {
          do {
            if (*(char *)(temp_v1 + temp_v8 * 0x40) == '\x1b') {
              temp_v3 = FUN_002ac068(*(unsigned int *)(*(int *)(temp_v9 + 0x4c) + temp_v8 * 0x10),0);
              temp_v0 = FUN_002c0cc4();
              temp_v4 = FUN_002c0c74(temp_v3);
              if ((int)temp_v4 < 1) {
                temp_v5 = 0;
              }
              else {
                temp_v5 = temp_v4 & 1;
                temp_v6 = 0;
                if (temp_v5 != 0) {
                  do {
                    if (*(unsigned short *)(temp_v0 + temp_v6 * 0x1c + 6) == param_2) {
                      return temp_v0 + temp_v6 * 0x1c;
                    }
                    temp_v6 = temp_v6 + 1;
                  } while ((int)temp_v6 < (int)temp_v5);
                }
              }
              while (temp_v6 = temp_v5, (int)temp_v6 < (int)temp_v4) {
                temp_v7 = temp_v0 + temp_v6 * 0x1c;
                if (*(unsigned short *)(temp_v7 + 6) == param_2) {
                  return temp_v0 + temp_v6 * 0x1c;
                }
                if (*(unsigned short *)(temp_v7 + 0x22) == param_2) {
                  return temp_v0 + temp_v6 * 0x1c + 0x1c;
                }
                temp_v5 = temp_v6 + 2;
              }
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < temp_v2);
        }
      }
      temp_v10 = temp_v10 + 1;
    } while (temp_v10 < *(int *)(param_1 + 0x310));
  }
  return 0;
}

} /* extern "C" */
