/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a6928` (_code @ 0x1a6928, 0x318 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001800b8(unsigned int);
int asdMemFree(...);
int FUN_001a6f60(int, int);

typedef struct fn_001a6928_arg0 fn_001a6928_arg0;
struct fn_001a6928_arg0 {
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

/* Supplied declaration required: FUN_001800b8. */
extern unsigned int dataTableGetCount(void);
extern int dataTableGetEntries(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001a6f60. */


void FUN_001a6928(fn_001a6928_arg0 *param_1,int param_2)

{
/* irregular: 6 goto(s); 3 native warning(s); review required */
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
    FUN_001a6f60(temp_v2,0);
    temp_v4 = dataTableGetEntries();
    temp_v0 = 0;
    if (temp_v4 != 0) {
      temp_v0 = param_1->field_0x45;
    }
    if ((temp_v4 != 0 && temp_v0 != 0) && (param_1->field_0x48 != 0)) {
      FUN_001a6f60(param_1->field_0x48,0);
      temp_v3 = dataTableGetCount();
      temp_v7 = 0;
      if (temp_v7 < temp_v3) {
        do {
          if (param_2 != 0) goto LAB_001a6a80;
          temp_v2 = (int)*(char *)(temp_v4 + temp_v7 * 0x40);
          if (temp_v2 != 0x22) {
            if (temp_v2 < 0x22) {
              if (temp_v2 != 0x17) {
                if (temp_v2 < 0x17) {
                  if (temp_v2 != 0xb) {
                    if (temp_v2 < 0xb) {
                      if ((temp_v2 != 3 && temp_v2 != 5) && temp_v2 != 6) {
LAB_001a6a80:
                        temp_v2 = param_1->field_0x4c;
                        temp_v8 = temp_v7 * 0x10 + 0xc;
                        if ((*(char *)(temp_v2 + temp_v8) != '\0') &&
                           (temp_v9 = temp_v7 * 0x10 + 0xd, *(char *)(temp_v2 + temp_v9) != '\0')) {
                          pcVar7 = (char *)(temp_v4 + temp_v7 * 0x40);
                          temp_v1 = *pcVar7;
                          if ((!(temp_v1 == '\x15' || temp_v1 == '\x17')) &&
                             (!(temp_v1 == '\x1a' || temp_v1 == ';'))) {
                            temp_v5 = temp_v7 * 0x10 + 4;
                            if (*(int *)(temp_v2 + temp_v5) != 0) {
                              asdMemFree();
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
                                  asdMemFree(*(unsigned int *)(temp_v2 + 0xc));
                                  asdMemFree(temp_v2);
                                  temp_v2 = temp_v6;
                                }
                                asdMemFree(*(unsigned int *)puVar5[1]);
                                asdMemFree(puVar5[1]);
                                puVar5[1] = 0;
                              }
                              if ((*pcVar7 == '\x1a') && (*(int *)*puVar5 != 0)) {
                                FUN_001800b8(*(unsigned int *)(*(int *)*puVar5 + 8));
                              }
                              piVar9 = (int *)*puVar5;
                              if (*piVar9 != 0) {
                                asdMemFree();
                                *piVar9 = 0;
                              }
                              asdMemFree(*puVar5);
                              if (*(int *)(param_1->field_0x4c + temp_v5) != 0) {
                                asdMemFree();
                                *(unsigned int *)(param_1->field_0x4c + temp_v5) = 0;
                              }
                            }
                          }
                          if (*(int *)(param_1->field_0x4c + temp_v7 * 0x10) != 0) {
                            asdMemFree();
                            *(unsigned int *)(param_1->field_0x4c + temp_v7 * 0x10) = 0;
                          }
                          *(unsigned char *)(param_1->field_0x4c + temp_v8) = 0;
                          *(unsigned char *)(param_1->field_0x4c + temp_v9) = 0;
                        }
                      }
                    }
                    else if (temp_v2 != 0x13 && temp_v2 != 0x15) goto LAB_001a6a80;
                  }
                }
                else {
                  switch(temp_v2) {
                  case 0x18:
                  case 0x19:
                  case 0x1a:
                  case 0x1b:
                  case 0x1c:
                  case 0x21:
                    break;
                  default:
                    goto LAB_001a6a80;
                  }
                }
              }
            }
            else if (temp_v2 != 0x29) {
              if (temp_v2 < 0x29) {
                if (temp_v2 - 0x23U >= 6) goto LAB_001a6a80;
              }
              else if (temp_v2 != 0x2e) {
                if (temp_v2 < 0x2e) {
                  if (temp_v2 != 0x2a && temp_v2 != 0x2d) goto LAB_001a6a80;
                }
                else if (temp_v2 != 0x2f && temp_v2 != 0x3b) goto LAB_001a6a80;
              }
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
