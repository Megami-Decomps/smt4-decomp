/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044cd4c` (_code @ 0x44cd4c, 0xa04 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0044cd4c_arg1 fn_0044cd4c_arg1;
struct fn_0044cd4c_arg1 {
    unsigned char pad_0x0[0x4c];
    void *field_0x4c; /* +0x4c */
    void *field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x8];
    void *field_0x5c; /* +0x5c */
    void *field_0x60; /* +0x60 */
    unsigned char pad_0x64[0x18];
    void *field_0x7c; /* +0x7c */
    void *field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x8];
    void *field_0x8c; /* +0x8c */
    void *field_0x90; /* +0x90 */
    unsigned char pad_0x94[0x8];
    void *field_0x9c; /* +0x9c */
    void *field_0xa0; /* +0xa0 */
    unsigned char pad_0xa4[0x8];
    void *field_0xac; /* +0xac */
    void *field_0xb0; /* +0xb0 */
};

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: while (INT_NOTEQUAL). */
/* Supplied declaration required: FUN_0030ea58. */


void FUN_0044cd4c(int param_1,fn_0044cd4c_arg1 *param_2)

{
/* irregular: 3 goto(s); 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar7;
  int *piVar8;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar12;
  unsigned int temp_v6;
  unsigned int *puVar14;
  unsigned int *puVar15;
  unsigned int temp_v7;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  
  temp_v9 = *(int *)(param_1 + 8);
  temp_v0 = temp_v9 + 0x1c;
  temp_v3 = *(int *)(temp_v9 + 0x1c);
  if (temp_v3 != 0) {
    temp_v0 = temp_v0 + temp_v3;
  }
  temp_v4 = *(int *)(temp_v9 + 0x18);
  if (temp_v3 == 0) {
    temp_v0 = 0;
  }
  if (*(int *)(temp_v9 + 0x1c) != 0) {
    piVar21 = (int *)(*(int *)(temp_v9 + 0x1c) + temp_v9 + 0x1c);
  }
  else {
    piVar21 = (int *)0x0;
  }
  for (; piVar21 != (int *)(temp_v0 + temp_v4 * 4); piVar21 = piVar21 + 1) {
    if (*piVar21 != 0) {
      temp_v3 = *piVar21 + (int)piVar21;
    }
    else {
      temp_v3 = 0;
    }
    if (temp_v3 != 0) {
      piVar17 = param_2->field_0x4c;
      piVar19 = param_2->field_0x50;
      if (*piVar21 != 0) {
        temp_v3 = *piVar21 + (int)piVar21;
      }
      else {
        temp_v3 = 0;
      }
      for (; piVar17 != piVar19; piVar17 = piVar17 + 1) {
        piVar3 = (int *)(*(int *)(*piVar17 + 8) + 0xc);
        temp_v10 = *piVar3 == 0;
        if (!temp_v10) {
          piVar3 = (int *)((int)piVar3 + *piVar3);
          temp_v10 = piVar3 == (int *)0x0;
        }
        if (((!temp_v10) && (*(int *)(temp_v3 + 4) != 0 && temp_v3 + 4 + *(int *)(temp_v3 + 4) != 0)) &&
           (FUN_0030ea58(), piVar3 == (int *)0x0)) break;
      }
      if (piVar17 != param_2->field_0x50) {
        puVar15 = (unsigned int *)0x0;
        temp_v3 = *piVar17;
        if (*piVar21 != 0) {
          puVar15 = (unsigned int *)(*piVar21 + (int)piVar21);
        }
        temp_v12 = *puVar15;
        piVar17 = (int *)(param_1 + 0x1c);
        temp_v5 = *(unsigned int *)(param_1 + 0x28) & 0x3fffffff;
        if ((int)temp_v5 <= (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) >> 3) {
          if (temp_v5 == 0) {
            temp_v5 = 1;
          }
          else {
            temp_v5 = temp_v5 << 1;
          }
          if ((*(unsigned int *)(param_1 + 0x28) & 0x3fffffff) < temp_v5) {
            if (((*piVar17 == 0) || ((*(unsigned int *)(param_1 + 0x28) & 0xc0000000) != 0x40000000)) ||
               (puVar15 = (unsigned int *)
                          (**(code **)(*(int *)*piVar17 + 8))((int *)*piVar17,temp_v5 << 3),
               puVar15 == (unsigned int *)0x0)) goto LAB_0044cfa4;
            puVar4 = *(unsigned int **)(param_1 + 0x20);
            puVar12 = *(unsigned int **)(param_1 + 0x24);
            temp_v8 = 0;
            puVar14 = puVar15;
            if (puVar4 != puVar12) {
              do {
                if (puVar14 != (unsigned int *)0x0) {
                  temp_v11 = puVar4[1];
                  *puVar14 = *puVar4;
                  puVar14[1] = temp_v11;
                }
                puVar4 = puVar4 + 2;
                puVar14 = puVar14 + 2;
              } while (puVar4 != puVar12);
              puVar4 = (unsigned int *)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20));
              temp_v8 = (int)puVar4 >> 3;
            }
            temp_v7 = *(unsigned int *)(param_1 + 0x20);
            if (temp_v7 != 0) {
              temp_v6 = *(unsigned int *)(param_1 + 0x24);
              if (temp_v7 < temp_v6) {
                puVar4 = (unsigned int *)(temp_v6 - temp_v7);
              }
              if (temp_v7 < temp_v6) {
                puVar4 = (unsigned int *)((int)puVar4 << 0x1c);
              }
              if (temp_v7 < temp_v6) {
                temp_v1 = (unsigned int)puVar4 >> 0x1f;
              }
              else {
                temp_v1 = 0;
              }
              for (temp_v2 = temp_v1 + 1; temp_v2 < ((int)(temp_v6 - temp_v7) >> 3) + 1; temp_v2 = temp_v2 + 2)
              {
              }
              *(unsigned int *)(param_1 + 0x24) = temp_v7;
              (**(code **)(*(int *)*piVar17 + 0xc))((int *)*piVar17,temp_v7);
            }
            *(unsigned int **)(param_1 + 0x24) = puVar15 + temp_v8 * 2;
            *(unsigned int **)(param_1 + 0x20) = puVar15;
            *(unsigned int *)(param_1 + 0x28) = (*(unsigned int *)(param_1 + 0x28) & 0xc0000000) | temp_v5;
          }
        }
        puVar15 = *(unsigned int **)(param_1 + 0x24);
        if (puVar15 != (unsigned int *)0x0) {
          *puVar15 = temp_v12;
          puVar15[1] = temp_v3;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 8;
      }
    }
LAB_0044cfa4:
  }
  temp_v3 = *(int *)(temp_v9 + 0x2c);
  temp_v0 = temp_v9 + 0x2c;
  if (temp_v3 != 0) {
    temp_v0 = temp_v0 + temp_v3;
  }
  if (temp_v3 == 0) {
    temp_v0 = 0;
  }
  piVar21 = (int *)(temp_v0 + *(int *)(temp_v9 + 0x28) * 4);
  if (*(int *)(temp_v9 + 0x2c) != 0) {
    piVar17 = (int *)(*(int *)(temp_v9 + 0x2c) + temp_v9 + 0x2c);
  }
  else {
    piVar17 = (int *)0x0;
  }
  do {
    if (piVar17 == piVar21) {
      temp_v13 = 0;
      temp_v3 = *(int *)(temp_v9 + 0x24);
      temp_v0 = temp_v9 + 0x24;
      if (temp_v3 != 0) {
        temp_v0 = temp_v0 + temp_v3;
      }
      if (temp_v3 == 0) {
        temp_v0 = 0;
      }
      piVar17 = (int *)(temp_v0 + *(int *)(temp_v9 + 0x20) * 4);
      temp_v0 = *(int *)(temp_v9 + 0x24);
      if (temp_v0 != 0) {
        piVar19 = (int *)(temp_v0 + temp_v9 + 0x24);
      }
      else {
        piVar19 = (int *)0x0;
      }
      temp_v10 = piVar19 != piVar17;
      if (temp_v10) {
        piVar21 = (int *)0x0;
      }
      do {
        if (!temp_v10) {
          return;
        }
        temp_v0 = *(int *)(*(int *)(param_1 + 0x10) + temp_v13 * 0xc + 4);
        *(int **)(temp_v0 + 0xc) = piVar21;
        *(int **)(temp_v0 + 0x10) = piVar21;
        *(unsigned int *)(temp_v0 + 0x1c) = *(unsigned int *)(temp_v0 + 0x18);
        *(unsigned int *)(temp_v0 + 0x48) = *(unsigned int *)(temp_v0 + 0x44);
        piVar3 = piVar21;
        if (*piVar19 != 0) {
          piVar3 = (int *)(*piVar19 + (int)piVar19);
        }
        temp_v9 = piVar3[2];
        temp_v3 = piVar3[1];
        piVar7 = piVar21;
        if (temp_v9 != 0) {
          piVar7 = (int *)((int)(piVar3 + 2) + temp_v9);
        }
        piVar3 = piVar21;
        if (*piVar19 != 0) {
          piVar3 = (int *)((int)piVar19 + *piVar19);
        }
        temp_v9 = piVar3[2];
        piVar1 = piVar21;
        if (temp_v9 != 0) {
          piVar1 = (int *)(temp_v9 + (int)(piVar3 + 2));
        }
        for (; piVar1 != piVar7 + temp_v3; piVar1 = piVar1 + 1) {
          piVar3 = piVar21;
          if (*piVar1 != 0) {
            piVar3 = (int *)(*piVar1 + (int)piVar1);
          }
          if (piVar3 != (int *)0x0) {
            piVar18 = param_2->field_0xac;
            piVar20 = param_2->field_0xb0;
            piVar3 = piVar21;
            if (*piVar1 != 0) {
              piVar3 = (int *)(*piVar1 + (int)piVar1);
            }
            for (; piVar18 != piVar20; piVar18 = piVar18 + 1) {
              piVar8 = (int *)(*(int *)(*piVar18 + 8) + 0xc);
              temp_v10 = *piVar8 == 0;
              if (!temp_v10) {
                piVar8 = (int *)((int)piVar8 + *piVar8);
                temp_v10 = piVar8 == (int *)0x0;
              }
              if (((!temp_v10) && (piVar3[1] != 0 && (int)piVar3 + piVar3[1] + 4 != 0)) &&
                 (FUN_0030ea58(), piVar8 == (int *)0x0)) break;
            }
            if (piVar18 != param_2->field_0xb0) {
              *(int *)(temp_v0 + 0xc) = *piVar18;
            }
            piVar18 = param_2->field_0x9c;
            piVar20 = param_2->field_0xa0;
            piVar3 = piVar21;
            if (*piVar1 != 0) {
              piVar3 = (int *)(*piVar1 + (int)piVar1);
            }
            for (; piVar18 != piVar20; piVar18 = piVar18 + 1) {
              piVar8 = (int *)(*(int *)(*piVar18 + 8) + 0xc);
              temp_v9 = *piVar8;
              temp_v10 = temp_v9 == 0;
              if (!temp_v10) {
                temp_v9 = temp_v9 + (int)piVar8;
                temp_v10 = temp_v9 == 0;
              }
              if (((!temp_v10) && (piVar3[1] != 0 && (int)piVar3 + piVar3[1] + 4 != 0)) &&
                 (FUN_0030ea58(), temp_v9 == 0)) break;
            }
            if (piVar18 != param_2->field_0xa0) {
              *(int *)(temp_v0 + 0x10) = *piVar18;
            }
            piVar18 = param_2->field_0x8c;
            piVar20 = param_2->field_0x90;
            piVar3 = piVar21;
            if (*piVar1 != 0) {
              piVar3 = (int *)(*piVar1 + (int)piVar1);
            }
            for (; piVar18 != piVar20; piVar18 = piVar18 + 1) {
              piVar8 = (int *)(*(int *)(*piVar18 + 8) + 0xc);
              temp_v10 = *piVar8 == 0;
              if (!temp_v10) {
                piVar8 = (int *)((int)piVar8 + *piVar8);
                temp_v10 = piVar8 == (int *)0x0;
              }
              if (((!temp_v10) && (piVar3[1] != 0 && (int)piVar3 + piVar3[1] + 4 != 0)) &&
                 (FUN_0030ea58(), piVar8 == (int *)0x0)) break;
            }
            if (piVar18 != param_2->field_0x90) {
              temp_v9 = *piVar18;
              temp_v5 = *(unsigned int *)(temp_v0 + 0x20) & 0x3fffffff;
              piVar3 = (int *)(temp_v0 + 0x14);
              if ((int)temp_v5 <= (*(int *)(temp_v0 + 0x1c) - *(int *)(temp_v0 + 0x18)) >> 2) {
                if (temp_v5 == 0) {
                  temp_v5 = 1;
                }
                else {
                  temp_v5 = temp_v5 << 1;
                }
                if ((*(unsigned int *)(temp_v0 + 0x20) & 0x3fffffff) < temp_v5) {
                  if (((*piVar3 == 0) || ((*(unsigned int *)(temp_v0 + 0x20) & 0xc0000000) != 0x40000000)) ||
                     (puVar15 = (unsigned int *)
                                (**(code **)(*(int *)*piVar3 + 8))((int *)*piVar3,temp_v5 << 2),
                     puVar15 == (unsigned int *)0x0)) goto LAB_0044d55c;
                  puVar4 = *(unsigned int **)(temp_v0 + 0x18);
                  puVar12 = *(unsigned int **)(temp_v0 + 0x1c);
                  temp_v4 = 0;
                  puVar14 = puVar15;
                  if (puVar4 != puVar12) {
                    do {
                      if (puVar14 != (unsigned int *)0x0) {
                        *puVar14 = *puVar4;
                      }
                      puVar4 = puVar4 + 1;
                      puVar14 = puVar14 + 1;
                    } while (puVar4 != puVar12);
                    temp_v4 = (*(int *)(temp_v0 + 0x1c) - *(int *)(temp_v0 + 0x18)) >> 2;
                  }
                  if (*(int *)(temp_v0 + 0x18) != 0) {
                    *(int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x18);
                    (**(code **)(*(int *)*piVar3 + 0xc))();
                  }
                  *(unsigned int **)(temp_v0 + 0x18) = puVar15;
                  *(unsigned int **)(temp_v0 + 0x1c) = puVar15 + temp_v4;
                  *(unsigned int *)(temp_v0 + 0x20) = (*(unsigned int *)(temp_v0 + 0x20) & 0xc0000000) | temp_v5;
                }
              }
              if (*(int **)(temp_v0 + 0x1c) != (int *)0x0) {
                **(int **)(temp_v0 + 0x1c) = temp_v9;
              }
              *(int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x1c) + 4;
            }
LAB_0044d55c:
            piVar18 = param_2->field_0x7c;
            piVar20 = param_2->field_0x80;
            piVar3 = piVar21;
            if (*piVar1 != 0) {
              piVar3 = (int *)(*piVar1 + (int)piVar1);
            }
            for (; piVar18 != piVar20; piVar18 = piVar18 + 1) {
              piVar8 = (int *)(*(int *)(*piVar18 + 8) + 0xc);
              temp_v10 = *piVar8 == 0;
              if (!temp_v10) {
                piVar8 = (int *)((int)piVar8 + *piVar8);
                temp_v10 = piVar8 == (int *)0x0;
              }
              if (((!temp_v10) && (piVar3[1] != 0 && (int)piVar3 + piVar3[1] + 4 != 0)) &&
                 (FUN_0030ea58(), piVar8 == (int *)0x0)) break;
            }
            if (piVar18 != param_2->field_0x80) {
              temp_v9 = *piVar18;
              temp_v5 = *(unsigned int *)(temp_v0 + 0x4c) & 0x3fffffff;
              piVar3 = (int *)(temp_v0 + 0x40);
              if ((int)temp_v5 <= (*(int *)(temp_v0 + 0x48) - *(int *)(temp_v0 + 0x44)) >> 2) {
                if (temp_v5 == 0) {
                  temp_v5 = 1;
                }
                else {
                  temp_v5 = temp_v5 << 1;
                }
                if ((*(unsigned int *)(temp_v0 + 0x4c) & 0x3fffffff) < temp_v5) {
                  if (((*piVar3 == 0) || ((*(unsigned int *)(temp_v0 + 0x4c) & 0xc0000000) != 0x40000000)) ||
                     (puVar15 = (unsigned int *)
                                (**(code **)(*(int *)*piVar3 + 8))((int *)*piVar3,temp_v5 << 2),
                     puVar15 == (unsigned int *)0x0)) goto LAB_0044d6e4;
                  puVar4 = *(unsigned int **)(temp_v0 + 0x44);
                  puVar12 = *(unsigned int **)(temp_v0 + 0x48);
                  temp_v4 = 0;
                  puVar14 = puVar15;
                  if (puVar4 != puVar12) {
                    do {
                      if (puVar14 != (unsigned int *)0x0) {
                        *puVar14 = *puVar4;
                      }
                      puVar4 = puVar4 + 1;
                      puVar14 = puVar14 + 1;
                    } while (puVar4 != puVar12);
                    temp_v4 = (*(int *)(temp_v0 + 0x48) - *(int *)(temp_v0 + 0x44)) >> 2;
                  }
                  if (*(int *)(temp_v0 + 0x44) != 0) {
                    *(int *)(temp_v0 + 0x48) = *(int *)(temp_v0 + 0x44);
                    (**(code **)(*(int *)*piVar3 + 0xc))();
                  }
                  *(unsigned int **)(temp_v0 + 0x44) = puVar15;
                  *(unsigned int **)(temp_v0 + 0x48) = puVar15 + temp_v4;
                  *(unsigned int *)(temp_v0 + 0x4c) = (*(unsigned int *)(temp_v0 + 0x4c) & 0xc0000000) | temp_v5;
                }
              }
              if (*(int **)(temp_v0 + 0x48) != (int *)0x0) {
                **(int **)(temp_v0 + 0x48) = temp_v9;
              }
              *(int *)(temp_v0 + 0x48) = *(int *)(temp_v0 + 0x48) + 4;
            }
          }
LAB_0044d6e4:
        }
        piVar3 = piVar21;
        if (*piVar19 != 0) {
          piVar3 = (int *)((int)piVar19 + *piVar19);
        }
        temp_v0 = temp_v13 * 0xc;
        temp_v13 = temp_v13 + 1;
        *(int *)(*(int *)(param_1 + 0x10) + temp_v0) = *piVar3;
        piVar19 = piVar19 + 1;
        temp_v10 = piVar19 != piVar17;
      } while( 1 );
    }
    if (*piVar17 != 0) {
      temp_v0 = *piVar17 + (int)piVar17;
    }
    else {
      temp_v0 = 0;
    }
    if (temp_v0 != 0) {
      piVar19 = param_2->field_0x5c;
      piVar3 = param_2->field_0x60;
      if (*piVar17 != 0) {
        temp_v0 = *piVar17 + (int)piVar17;
      }
      else {
        temp_v0 = 0;
      }
      for (; piVar19 != piVar3; piVar19 = piVar19 + 1) {
        piVar7 = (int *)(*(int *)(*piVar19 + 8) + 0xc);
        temp_v10 = *piVar7 == 0;
        if (!temp_v10) {
          piVar7 = (int *)((int)piVar7 + *piVar7);
          temp_v10 = piVar7 == (int *)0x0;
        }
        if (((!temp_v10) && (*(int *)(temp_v0 + 4) != 0 && temp_v0 + 4 + *(int *)(temp_v0 + 4) != 0)) &&
           (FUN_0030ea58(), piVar7 == (int *)0x0)) break;
      }
      if (piVar19 != param_2->field_0x60) {
        puVar15 = (unsigned int *)0x0;
        temp_v0 = *piVar19;
        if (*piVar17 != 0) {
          puVar15 = (unsigned int *)(*piVar17 + (int)piVar17);
        }
        temp_v12 = *puVar15;
        piVar19 = (int *)(param_1 + 0x2c);
        temp_v5 = *(unsigned int *)(param_1 + 0x38) & 0x3fffffff;
        if ((int)temp_v5 <= (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) >> 3) {
          if (temp_v5 == 0) {
            temp_v5 = 1;
          }
          else {
            temp_v5 = temp_v5 << 1;
          }
          if ((*(unsigned int *)(param_1 + 0x38) & 0x3fffffff) < temp_v5) {
            if (((*piVar19 == 0) || ((*(unsigned int *)(param_1 + 0x38) & 0xc0000000) != 0x40000000)) ||
               (puVar15 = (unsigned int *)
                          (**(code **)(*(int *)*piVar19 + 8))((int *)*piVar19,temp_v5 << 3),
               puVar15 == (unsigned int *)0x0)) {
              piVar17 = piVar17 + 1;
              continue;
            }
            puVar4 = *(unsigned int **)(param_1 + 0x30);
            puVar12 = *(unsigned int **)(param_1 + 0x34);
            temp_v3 = 0;
            puVar14 = puVar15;
            if (puVar4 != puVar12) {
              do {
                if (puVar14 != (unsigned int *)0x0) {
                  temp_v11 = puVar4[1];
                  *puVar14 = *puVar4;
                  puVar14[1] = temp_v11;
                }
                puVar4 = puVar4 + 2;
                puVar14 = puVar14 + 2;
              } while (puVar4 != puVar12);
              puVar4 = (unsigned int *)(*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30));
              temp_v3 = (int)puVar4 >> 3;
            }
            temp_v7 = *(unsigned int *)(param_1 + 0x30);
            if (temp_v7 != 0) {
              temp_v6 = *(unsigned int *)(param_1 + 0x34);
              if (temp_v7 < temp_v6) {
                puVar4 = (unsigned int *)(temp_v6 - temp_v7);
              }
              if (temp_v7 < temp_v6) {
                puVar4 = (unsigned int *)((int)puVar4 << 0x1c);
              }
              if (temp_v7 < temp_v6) {
                temp_v1 = (unsigned int)puVar4 >> 0x1f;
              }
              else {
                temp_v1 = 0;
              }
              for (temp_v4 = temp_v1 + 1; temp_v4 < ((int)(temp_v6 - temp_v7) >> 3) + 1;
                  temp_v4 = temp_v4 + 2) {
              }
              *(unsigned int *)(param_1 + 0x34) = temp_v7;
              (**(code **)(*(int *)*piVar19 + 0xc))((int *)*piVar19,temp_v7);
            }
            *(unsigned int **)(param_1 + 0x34) = puVar15 + temp_v3 * 2;
            *(unsigned int **)(param_1 + 0x30) = puVar15;
            *(unsigned int *)(param_1 + 0x38) = (*(unsigned int *)(param_1 + 0x38) & 0xc0000000) | temp_v5;
          }
        }
        puVar15 = *(unsigned int **)(param_1 + 0x34);
        if (puVar15 != (unsigned int *)0x0) {
          *puVar15 = temp_v12;
          puVar15[1] = temp_v0;
        }
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 8;
      }
    }
    piVar17 = piVar17 + 1;
  } while( 1 );
}
