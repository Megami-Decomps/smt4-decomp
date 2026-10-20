/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141710` (_code @ 0x141710, 0x308 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ac068(int, int);
int FUN_002c0894(unsigned int);
int FUN_002c415c(...);

typedef struct fn_00141710_arg0 fn_00141710_arg0;
struct fn_00141710_arg0 {
    unsigned char pad_0x0[0x45];
    byte field_0x45; /* +0x45 */
    unsigned char pad_0x46[0x2];
    int field_0x48; /* +0x48 */
    int field_0x4c; /* +0x4c */
};

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_002ac068. */
/* Supplied declaration required: FUN_002c0894. */
extern unsigned int FUN_002c0c74(void);
extern int FUN_002c0cc4(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_00141710(fn_00141710_arg0 *param_1,int param_2)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  char *pcVar7;
  int temp_v5;
  int *piVar9;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  
  temp_v2 = param_1->field_0x48;
  temp_v4 = param_2;
  if (temp_v2 != 0) {
    temp_v4 = param_1->field_0x4c;
  }
  if ((temp_v2 != 0 && temp_v4 != 0) && (param_1->field_0x45 != 0)) {
    FUN_002ac068(temp_v2,0);
    temp_v4 = FUN_002c0cc4();
    temp_v0 = 0;
    if (temp_v4 != 0) {
      temp_v0 = param_1->field_0x45;
    }
    if ((temp_v4 != 0 && temp_v0 != 0) && (param_1->field_0x48 != 0)) {
      FUN_002ac068(param_1->field_0x48,0);
      temp_v3 = FUN_002c0c74();
      temp_v7 = 0;
      if (temp_v7 < temp_v3) {
        do {
          if (param_2 == 0) {
            switch(*(unsigned char *)(temp_v4 + temp_v7 * 0x40)) {
            case 3:
            case 5:
            case 6:
            case 0xb:
            case 0x13:
            case 0x15:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2d:
            case 0x2e:
            case 0x2f:
              break;
            default:
              goto LAB_00141864;
            }
          }
          else {
LAB_00141864:
            temp_v2 = param_1->field_0x4c;
            temp_v8 = temp_v7 * 0x10 + 0xc;
            if ((*(char *)(temp_v2 + temp_v8) != '\0') &&
               (temp_v9 = temp_v7 * 0x10 + 0xd, *(char *)(temp_v2 + temp_v9) != '\0')) {
              pcVar7 = (char *)(temp_v4 + temp_v7 * 0x40);
              temp_v1 = *pcVar7;
              if (!((temp_v1 == '\x15' || temp_v1 == '\x17') || temp_v1 == '\x1a')) {
                temp_v5 = temp_v7 * 0x10 + 4;
                if (*(int *)(temp_v2 + temp_v5) != 0) {
                  FUN_002c415c();
                  *(unsigned int *)(param_1->field_0x4c + temp_v5) = 0;
                }
              }
              else {
                temp_v5 = temp_v7 * 0x10 + 4;
                puVar5 = *(unsigned int **)(temp_v2 + temp_v5);
                if (puVar5 != (unsigned int *)0x0) {
                  if (puVar5[1] != 0) {
                    temp_v2 = *(int *)(puVar5[1] + 4);
                    while (temp_v2 != 0) {
                      temp_v6 = *(int *)(temp_v2 + 0x10);
                      FUN_002c415c(*(unsigned int *)(temp_v2 + 0xc));
                      FUN_002c415c(temp_v2);
                      temp_v2 = temp_v6;
                    }
                    FUN_002c415c(*(unsigned int *)puVar5[1]);
                    FUN_002c415c(puVar5[1]);
                    puVar5[1] = 0;
                  }
                  if ((*pcVar7 == '\x1a') && (*(int *)*puVar5 != 0)) {
                    FUN_002c0894(*(unsigned int *)(*(int *)*puVar5 + 8));
                  }
                  piVar9 = (int *)*puVar5;
                  if (*piVar9 != 0) {
                    FUN_002c415c();
                    *piVar9 = 0;
                  }
                  FUN_002c415c(*puVar5);
                  if (*(int *)(param_1->field_0x4c + temp_v5) != 0) {
                    FUN_002c415c();
                    *(unsigned int *)(param_1->field_0x4c + temp_v5) = 0;
                  }
                }
              }
              if (*(int *)(param_1->field_0x4c + temp_v7 * 0x10) != 0) {
                FUN_002c415c();
                *(unsigned int *)(param_1->field_0x4c + temp_v7 * 0x10) = 0;
              }
              *(unsigned char *)(param_1->field_0x4c + temp_v8) = 0;
              *(unsigned char *)(param_1->field_0x4c + temp_v9) = 0;
            }
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < temp_v3);
      }
    }
  }
  return;
}

} /* extern "C" */
