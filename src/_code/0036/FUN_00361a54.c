/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00361a54` (_code @ 0x361a54, 0x5e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00361a54_arg0 fn_00361a54_arg0;
struct fn_00361a54_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x8];
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x8];
    undefined4 field_0x28; /* +0x28 */
};

typedef int romwright_code();
/* stack frame of param_2: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_2_stack;

extern unsigned char DAT_00421f70; /* 0x421f70 */

/* Supplied declaration required: FUN_00363880. */
/* Supplied declaration required: FUN_003e4540. */
/* Supplied declaration required: FUN_003e94f0. */


void FUN_00361a54(fn_00361a54_arg0 *param_1,unsigned int param_2)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int *piVar6;
  int temp_v5;
  unsigned char *puVar8;
  int temp_v6;
  int temp_v7;
  int *piVar11;
  int temp_v8;
  unsigned char temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12 [3];
  int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned char *temp_v16;
  unsigned int uStack_84;
  unsigned char *temp_v17;
  unsigned char temp_v18 [4];
  fn_00361a54_arg0 *temp_v19;
  unsigned int temp_v20;
  
  temp_v10 = 0;
  if (0 < (param_1->field_0x10 - param_1->field_0xc) >> 2) {
    temp_v17 = &DAT_00421f70;
    temp_v19 = param_1;
    temp_v20 = param_2;
    do {
      temp_v15 = *(int *)(temp_v19->field_0xc + temp_v10 * 4);
      if (((temp_v15 != 0) && ((*(unsigned int *)(*(int *)(temp_v15 + 8) + 0x20) & 0xff) == temp_v20)) &&
         (temp_v11 = 0, 0 < (int)temp_v19->field_0x28)) {
        do {
          piVar11 = *(int **)(temp_v19->field_0x1c +
                             (temp_v10 * temp_v19->field_0x28 + temp_v11) * 4);
          if (piVar11 != (int *)0x0) {
            if (piVar11[3] != 0) {
              if (piVar11[3] != 1) {
                (**(romwright_code **)(*piVar11 + 0x20))(piVar11);
                temp_v7 = temp_v15;
                temp_v1 = *(int *)(temp_v15 + 8);
                if ((*(unsigned int *)(temp_v1 + 4) & 1) != 0) {
                  temp_v8 = *(int *)(temp_v1 + 0x10);
                  temp_v1 = 0;
                  if (temp_v1 < temp_v8) {
                    do {
                      if ((*(romwright_code **)(temp_v7 + 0x60) == (romwright_code *)0x0) ||
                         (temp_v2 = (**(romwright_code **)(temp_v7 + 0x60))
                                            (temp_v7,*(unsigned int *)
                                                     (*(int *)(temp_v7 + 0x24) + temp_v1 * 4)),
                         temp_v2 != 0)) {
                        (**(romwright_code **)(*piVar11 + 0x18))
                                  (piVar11,*(unsigned int *)(*(int *)(temp_v7 + 0x44) + temp_v1 * 4),
                                   temp_v1);
                      }
                      temp_v1 = temp_v1 + 1;
                    } while (temp_v1 < temp_v8);
                  }
                }
                else {
                  temp_v8 = *(int *)(temp_v1 + 0x10);
                  temp_v0 = 0;
                  temp_v1 = 0;
                  temp_v13 = -1;
                  if (0 < temp_v8) {
                    do {
                      if (*(romwright_code **)(temp_v7 + 0x60) != (romwright_code *)0x0) {
                        temp_v2 = *(int *)(*(int *)(temp_v7 + 0x24) + temp_v1 * 4);
                        if (temp_v13 != temp_v2) {
                          temp_v0 = (**(romwright_code **)(temp_v7 + 0x60))(temp_v7,temp_v2);
                          temp_v0 = temp_v0 ^ 1;
                          temp_v13 = temp_v2;
                        }
                        if (temp_v0 == 0) goto LAB_00361eb0;
                      }
                      else {
LAB_00361eb0:
                        piVar6 = (int *)(*(int *)(temp_v7 + 8) + 0x14);
                        temp_v2 = *piVar6;
                        if (temp_v2 != 0) {
                          temp_v5 = (int)piVar6 + temp_v2;
                        }
                        else {
                          temp_v5 = 0;
                        }
                        temp_v12[0] = 0;
                        if (temp_v5 != 0) {
                          piVar6 = (int *)(temp_v5 + temp_v1 * 0x10 + 0x28);
                          temp_v12[0] = *piVar6;
                          if (temp_v12[0] == 0) {
                            temp_v12[0] = 0;
                          }
                          else {
                            temp_v12[0] = (int)piVar6 + temp_v12[0];
                          }
                        }
                        temp_v9 = *(int *)(temp_v12[0] + 0x10) == 3;
                        temp_v5 = temp_v12[0];
                        if (temp_v9) {
                          temp_v5 = *(int *)(temp_v12[0] + 0x14);
                        }
                        if (!(temp_v9 && temp_v5 == 0)) {
                          puVar8 = *(unsigned char **)(*(int *)(temp_v7 + 0x44) + temp_v1 * 4);
                        }
                        else {
                          puVar8 = temp_v18;
                        }
                        if (temp_v2 != 0) {
                          temp_v2 = *(int *)(temp_v7 + 8) + 0x14 + temp_v2;
                        }
                        else {
                          temp_v2 = 0;
                        }
                        if (temp_v2 != 0) {
                          piVar6 = (int *)(temp_v2 + temp_v1 * 0x10 + 0x28);
                          temp_v2 = *piVar6;
                          if (temp_v2 != 0) {
                            temp_v2 = (int)piVar6 + temp_v2;
                          }
                          else {
                            temp_v2 = 0;
                          }
                        }
                        else {
                          temp_v2 = 0;
                        }
                        piVar6 = *(int **)(*(int *)(temp_v7 + 0x10) + *(int *)(temp_v2 + 0xc) * 4);
                        if (piVar6 != (int *)0x0) {
                          temp_v16 = temp_v17;
                          uStack_84 = 0;
                          temp_v2 = (**(romwright_code **)(*piVar11 + 0x18))(piVar11,&temp_v16,temp_v1);
                          if (temp_v2 != 0) {
                            (**(romwright_code **)(*piVar6 + 0x14))(piVar6,puVar8,temp_v2);
                          }
                        }
                        else {
                          temp_v2 = (**(romwright_code **)(*piVar11 + 0x18))(piVar11,puVar8,temp_v1);
                        }
                        temp_v9 = *(int *)(temp_v12[0] + 0x10) == 9;
                        temp_v5 = temp_v12[0];
                        if (temp_v9) {
                          temp_v5 = *(int *)(temp_v12[0] + 0x14);
                        }
                        if ((!temp_v9 || temp_v5 != 0) && temp_v2 != 0) {
                          FUN_003e94f0(temp_v12,*(unsigned int *)(*(int *)(temp_v7 + 0x34) + temp_v1 * 4)
                                       ,puVar8);
                        }
                      }
                      temp_v1 = temp_v1 + 1;
                    } while (temp_v1 < temp_v8);
                  }
                }
              }
              else {
                temp_v4 = piVar11[0x19];
                temp_v9 = temp_v4 != piVar11[0x1a];
                if (temp_v9) {
                  temp_v4 = (unsigned int)*(unsigned char *)(piVar11 + 0x16);
                }
                if (temp_v9 && temp_v4 != 0) {
                  if (piVar11[0x15] != 0) {
                    for (temp_v7 = 0; temp_v7 < *(int *)(*(int *)(piVar11[2] + 8) + 0x10);
                        temp_v7 = temp_v7 + 1) {
                      temp_v1 = *(int *)(piVar11[5] + temp_v7 * 4);
                      if (temp_v1 != -1) {
                        (**(romwright_code **)(*piVar11 + 0x18))(piVar11,piVar11[0x19] + temp_v1 * 0x40,temp_v7);
                      }
                    }
                  }
                  *(unsigned char *)(piVar11 + 0x16) = 0;
                }
                temp_v7 = temp_v15;
                temp_v1 = 0;
                temp_v8 = *(int *)(piVar11[0x15] + 0x18);
                if (0 < temp_v8) {
                  do {
                    temp_v2 = *(int *)(piVar11[9] + temp_v1 * 4);
                    if ((temp_v2 != -1) &&
                       ((*(romwright_code **)(temp_v7 + 0x60) == (romwright_code *)0x0 ||
                        (temp_v5 = (**(romwright_code **)(temp_v7 + 0x60))
                                           (temp_v7,*(unsigned int *)
                                                    (*(int *)(temp_v7 + 0x24) + temp_v2 * 4)),
                        temp_v5 != 0)))) {
                      FUN_003e4540(piVar11,*(unsigned int *)(*(int *)(temp_v7 + 0x44) + temp_v2 * 4),
                                   temp_v2);
                    }
                    temp_v1 = temp_v1 + 1;
                  } while (temp_v1 < temp_v8);
                }
              }
            }
            else {
              FUN_00363880(piVar11);
              temp_v7 = temp_v15;
              temp_v13 = -1;
              temp_v8 = *(int *)(piVar11[0x15] + 0x18);
              temp_v0 = 0;
              temp_v1 = 0;
              if (temp_v1 < temp_v8) {
                do {
                  temp_v2 = *(int *)(piVar11[9] + temp_v1 * 4);
                  if (temp_v2 != -1) {
                    if (*(romwright_code **)(temp_v7 + 0x60) != (romwright_code *)0x0) {
                      temp_v5 = *(int *)(*(int *)(temp_v7 + 0x24) + temp_v2 * 4);
                      if (temp_v13 != temp_v5) {
                        temp_v0 = (**(romwright_code **)(temp_v7 + 0x60))(temp_v7,temp_v5);
                        temp_v0 = temp_v0 ^ 1;
                        temp_v13 = temp_v5;
                      }
                      if (temp_v0 != 0) goto LAB_00361d48;
                    }
                    temp_v6 = *(int *)(temp_v7 + 8);
                    temp_v5 = *(int *)(temp_v6 + 0x14);
                    if (temp_v5 != 0) {
                      temp_v3 = temp_v5 + temp_v6 + 0x14;
                    }
                    else {
                      temp_v3 = 0;
                    }
                    temp_v14 = 0;
                    if (temp_v3 != 0) {
                      piVar6 = (int *)(temp_v3 + temp_v2 * 0x10 + 0x28);
                      temp_v14 = *piVar6;
                      if (temp_v14 == 0) {
                        temp_v14 = 0;
                      }
                      else {
                        temp_v14 = (int)piVar6 + temp_v14;
                      }
                    }
                    temp_v3 = *(int *)(temp_v14 + 0x10);
                    temp_v9 = temp_v3 == 3;
                    if (temp_v9) {
                      temp_v3 = *(int *)(temp_v14 + 0x14);
                    }
                    if (!(temp_v9 && temp_v3 == 0)) {
                      puVar8 = *(unsigned char **)(*(int *)(temp_v7 + 0x44) + temp_v2 * 4);
                    }
                    else {
                      puVar8 = temp_v18;
                    }
                    if (temp_v5 != 0) {
                      temp_v5 = temp_v5 + temp_v6 + 0x14;
                    }
                    else {
                      temp_v5 = 0;
                    }
                    temp_v6 = 0;
                    if (temp_v5 != 0) {
                      piVar6 = (int *)(temp_v5 + temp_v2 * 0x10 + 0x28);
                      temp_v6 = *piVar6;
                      if (temp_v6 == 0) {
                        temp_v6 = 0;
                      }
                      else {
                        temp_v6 = (int)piVar6 + temp_v6;
                      }
                    }
                    piVar6 = *(int **)(*(int *)(temp_v7 + 0x10) + *(int *)(temp_v6 + 0xc) * 4);
                    if (piVar6 != (int *)0x0) {
                      temp_v16 = temp_v17;
                      uStack_84 = 0;
                      temp_v5 = (**(romwright_code **)(*piVar11 + 0x18))(piVar11,&temp_v16,temp_v2);
                      if (temp_v5 != 0) {
                        (**(romwright_code **)(*piVar6 + 0x14))(piVar6,puVar8,temp_v5);
                      }
                    }
                    else {
                      temp_v5 = (**(romwright_code **)(*piVar11 + 0x18))(piVar11,puVar8,temp_v2);
                    }
                    temp_v9 = *(int *)(temp_v14 + 0x10) == 9;
                    temp_v6 = temp_v14;
                    if (temp_v9) {
                      temp_v6 = *(int *)(temp_v14 + 0x14);
                    }
                    if ((!temp_v9 || temp_v6 != 0) && temp_v5 != 0) {
                      FUN_003e94f0(&temp_v14,*(unsigned int *)(*(int *)(temp_v7 + 0x34) + temp_v2 * 4),
                                   puVar8);
                    }
                  }
LAB_00361d48:
                  temp_v1 = temp_v1 + 1;
                } while (temp_v1 < temp_v8);
              }
            }
          }
          temp_v11 = temp_v11 + 1;
        } while (temp_v11 < (int)temp_v19->field_0x28);
      }
      temp_v10 = temp_v10 + 1;
    } while (temp_v10 < (temp_v19->field_0x10 - temp_v19->field_0xc) >> 2);
  }
  return;
}
