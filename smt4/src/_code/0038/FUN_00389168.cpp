/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389168` (_code @ 0x389168, 0x138 bytes) from smt4_v1.2.0.cxi.
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
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);


int FUN_00389168(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int *piVar8;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  
  temp_v9 = 0;
  if (temp_v9 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v8 = *(int *)(param_1 + 0x318) + temp_v9 * 0x50;
      temp_v0 = FUN_002ac12c(temp_v8);
      if (temp_v0 != 0) {
        temp_v1 = temp_v8;
        FUN_002ac0f8();
        temp_v2 = temp_v8;
        FUN_002ac0c4();
        temp_v7 = 0;
        if (temp_v7 < temp_v2) {
          do {
            if (*(char *)(temp_v1 + temp_v7 * 0x40) == '\x1b') {
              temp_v3 = FUN_002ac068(*(unsigned int *)(*(int *)(temp_v8 + 0x4c) + temp_v7 * 0x10),0);
              temp_v0 = dataTableGetEntries();
              temp_v4 = dataTableGetCount(temp_v3);
              if ((int)temp_v4 < 1) {
                temp_v5 = 0;
              }
              else {
                temp_v5 = temp_v4 & 1;
                temp_v6 = 0;
                if (temp_v5 != 0) {
                  do {
                    if (*(int *)(temp_v0 + temp_v6 * 0x40) == param_2) {
                      return temp_v0 + temp_v6 * 0x40 + 4;
                    }
                    temp_v6 = temp_v6 + 1;
                  } while ((int)temp_v6 < (int)temp_v5);
                }
              }
              while (temp_v6 = temp_v5, (int)temp_v6 < (int)temp_v4) {
                piVar8 = (int *)(temp_v0 + temp_v6 * 0x40);
                if (*piVar8 == param_2) {
                  return temp_v0 + temp_v6 * 0x40 + 4;
                }
                if (piVar8[0x10] == param_2) {
                  return temp_v0 + temp_v6 * 0x40 + 0x44;
                }
                temp_v5 = temp_v6 + 2;
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
