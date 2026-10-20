/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003508b4` (_code @ 0x3508b4, 0x204 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023a34c(unsigned int, int *);
int FUN_0023a374(unsigned int, unsigned int);
int FUN_0023a488(unsigned int, unsigned int, int *);
int rt_memcpy(int, unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

/* Supplied declaration required: FUN_0023a34c. */
/* Supplied declaration required: FUN_0023a374. */
extern char FUN_0023a3b4(unsigned int, unsigned int, unsigned int **, unsigned int *, unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_0023a488. */
/* Supplied declaration required: rt_memcpy. */


void FUN_003508b4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int *temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11 [8];
  unsigned char temp_v12 [4];
  
  FUN_0023a34c(**(unsigned int **)(param_1 + 0x18),&temp_v9);
  if (temp_v9 == 0) {
    return;
  }
  if (0 < *(int *)(param_1 + 0x1c4)) {
    temp_v0 = 1;
    temp_v4 = 0;
    do {
      temp_v5 = param_1 + temp_v4 * 0x18;
      if (*(int *)(temp_v5 + 0x1d8) == 0) {
        temp_v6 = param_1 + temp_v4 * 4;
        FUN_0023a488(**(unsigned int **)(param_1 + 0x18),*(unsigned int *)(temp_v6 + 0x2c8),&temp_v10);
        if (temp_v10 == 0) {
          temp_v0 = 0;
        }
        else {
          temp_v1 = FUN_0023a3b4(**(unsigned int **)(param_1 + 0x18),*(unsigned int *)(temp_v6 + 0x2c8),
                               &temp_v8,&temp_v7,temp_v12,temp_v11);
          if (temp_v1 != '\0') {
            *(unsigned int *)(param_1 + 0xc) = 7;
            temp_v2 = *(unsigned int *)(param_1 + 0x550) | 0x80;
            *(unsigned int *)(param_1 + 0x550) = temp_v2;
            return;
          }
          if (temp_v7 < 0x10) {
            *(unsigned int *)(param_1 + 0xc) = 7;
            temp_v2 = *(unsigned int *)(param_1 + 0x550) | 0x100;
            *(unsigned int *)(param_1 + 0x550) = temp_v2;
            return;
          }
          *(unsigned int *)(temp_v5 + 0x1c8) = *temp_v8;
          *(unsigned int *)(temp_v5 + 0x1cc) = temp_v8[1];
          *(unsigned int *)(temp_v5 + 0x1d0) = temp_v8[2];
          puVar1 = temp_v8 + 3;
          temp_v8 = temp_v8 + 4;
          *(unsigned int *)(temp_v5 + 0x1d4) = *puVar1;
          temp_v7 = temp_v7 - 0x10;
          temp_v3 = (**(romwright_code **)**(unsigned int **)(param_1 + 0x14))
                            (*(unsigned int **)(param_1 + 0x14),temp_v7,4);
          *(int *)(temp_v5 + 0x1d8) = temp_v3;
          if (temp_v3 == 0) {
            *(unsigned int *)(param_1 + 0xc) = 7;
            temp_v2 = *(unsigned int *)(param_1 + 0x550) | 0x200;
            *(unsigned int *)(param_1 + 0x550) = temp_v2;
            return;
          }
          rt_memcpy(temp_v3,temp_v8);
          FUN_0023a374(**(unsigned int **)(param_1 + 0x18),*(unsigned int *)(temp_v6 + 0x2c8));
          temp_v6 = 0;
          if (temp_v6 < *(int *)(param_1 + 0x2e8)) {
            do {
              if ((((*(int *)(param_1 + temp_v4 * 8 + 0x28c) == *(int *)(param_1 + temp_v6 * 4 + 0x44c))
                   && (temp_v3 = param_1 + temp_v6 * 0x28, temp_v3 != -0x30c)) &&
                  (*(unsigned int *)(temp_v3 + 0x314) < 2)) && ((*(unsigned int *)(temp_v5 + 0x1cc) & 1) != 0)) {
                *(unsigned int *)(param_1 + 0xc) = 7;
                temp_v2 = *(unsigned int *)(param_1 + 0x550) | 0x400;
                *(unsigned int *)(param_1 + 0x550) = temp_v2;
                return;
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < *(int *)(param_1 + 0x2e8));
          }
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(param_1 + 0x1c4));
    if (!temp_v0) {
      return;
    }
  }
  *(unsigned int *)(param_1 + 0xc) = 1;
  return;
}

} /* extern "C" */
