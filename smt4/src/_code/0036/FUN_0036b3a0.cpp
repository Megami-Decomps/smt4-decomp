/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036b3a0` (_code @ 0x36b3a0, 0x958 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002aa568(void);

typedef struct fn_0036b3a0_arg1 fn_0036b3a0_arg1;
struct fn_0036b3a0_arg1 {
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

typedef int romwright_code(...);
/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
} param_2_stack;

/* Supplied declaration required: FUN_002aa568. */


void FUN_0036b3a0(int param_1,fn_0036b3a0_arg1 *param_2)

{
/* irregular: 3 goto(s); 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int *piVar6;
  int temp_v2;
  int temp_v3;
  int *piVar9;
  unsigned int temp_v4;
  unsigned int *puVar11;
  int *piVar12;
  unsigned int *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  
  temp_v5 = *(int *)(param_1 + 8);
  temp_v0 = temp_v5 + 0x1c;
  temp_v2 = *(int *)(temp_v5 + 0x1c);
  if (temp_v2 != 0) {
    temp_v0 = temp_v0 + temp_v2;
  }
  temp_v3 = *(int *)(temp_v5 + 0x18);
  if (temp_v2 == 0) {
    temp_v0 = 0;
  }
  if (*(int *)(temp_v5 + 0x1c) != 0) {
    piVar18 = (int *)(*(int *)(temp_v5 + 0x1c) + temp_v5 + 0x1c);
  }
  else {
    piVar18 = (int *)0x0;
  }
  for (; piVar18 != (int *)(temp_v0 + temp_v3 * 4); piVar18 = piVar18 + 1) {
    if (*piVar18 != 0) {
      temp_v2 = *piVar18 + (int)piVar18;
    }
    else {
      temp_v2 = 0;
    }
    if (temp_v2 != 0) {
      piVar14 = (int *)param_2->field_0x4c;
      piVar16 = (int *)param_2->field_0x50;
      if (*piVar18 != 0) {
        temp_v2 = *piVar18 + (int)piVar18;
      }
      else {
        temp_v2 = 0;
      }
      for (; piVar14 != piVar16; piVar14 = piVar14 + 1) {
        piVar9 = (int *)(*(int *)(*piVar14 + 8) + 0xc);
        temp_v1 = *piVar9;
        temp_v6 = temp_v1 == 0;
        if (!temp_v6) {
          temp_v1 = temp_v1 + (int)piVar9;
          temp_v6 = temp_v1 == 0;
        }
        if (((!temp_v6) && (*(int *)(temp_v2 + 4) != 0 && temp_v2 + 4 + *(int *)(temp_v2 + 4) != 0)) &&
           (FUN_002aa568(), temp_v1 == 0)) break;
      }
      if (piVar14 != param_2->field_0x50) {
        puVar13 = (unsigned int *)0x0;
        temp_v2 = *piVar14;
        if (*piVar18 != 0) {
          puVar13 = (unsigned int *)(*piVar18 + (int)piVar18);
        }
        temp_v8 = *puVar13;
        piVar14 = (int *)(param_1 + 0x1c);
        temp_v4 = *(unsigned int *)(param_1 + 0x28) & 0x3fffffff;
        if ((int)temp_v4 <= (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) >> 3) {
          if (temp_v4 == 0) {
            temp_v4 = 1;
          }
          else {
            temp_v4 = temp_v4 << 1;
          }
          if ((*(unsigned int *)(param_1 + 0x28) & 0x3fffffff) < temp_v4) {
            if ((*piVar14 == 0) || ((*(unsigned int *)(param_1 + 0x28) & 0xc0000000) != 0x40000000))
            goto LAB_0036b5b0;
            puVar4 = (unsigned int *)(**(romwright_code **)(*(int *)*piVar14 + 8))((int *)*piVar14,temp_v4 << 3);
            puVar5 = *(unsigned int **)(param_1 + 0x20);
            puVar11 = *(unsigned int **)(param_1 + 0x24);
            temp_v1 = 0;
            puVar13 = puVar4;
            if (puVar5 != puVar11) {
              do {
                if (puVar13 != (unsigned int *)0x0) {
                  temp_v7 = puVar5[1];
                  *puVar13 = *puVar5;
                  puVar13[1] = temp_v7;
                }
                puVar5 = puVar5 + 2;
                puVar13 = puVar13 + 2;
              } while (puVar5 != puVar11);
              temp_v1 = (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20)) >> 3;
            }
            if (*(int *)(param_1 + 0x20) != 0) {
              (**(romwright_code **)(*(int *)*piVar14 + 0xc))((int *)*piVar14);
            }
            *(unsigned int **)(param_1 + 0x24) = puVar4 + temp_v1 * 2;
            *(unsigned int **)(param_1 + 0x20) = puVar4;
            *(unsigned int *)(param_1 + 0x28) = (*(unsigned int *)(param_1 + 0x28) & 0xc0000000) | temp_v4;
          }
        }
        puVar13 = *(unsigned int **)(param_1 + 0x24);
        if (puVar13 != (unsigned int *)0x0) {
          *puVar13 = temp_v8;
          puVar13[1] = temp_v2;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 8;
      }
    }
LAB_0036b5b0:;
  }
  temp_v2 = *(int *)(temp_v5 + 0x2c);
  temp_v0 = temp_v5 + 0x2c;
  if (temp_v2 != 0) {
    temp_v0 = temp_v0 + temp_v2;
  }
  if (temp_v2 == 0) {
    temp_v0 = 0;
  }
  piVar18 = (int *)(temp_v0 + *(int *)(temp_v5 + 0x28) * 4);
  if (*(int *)(temp_v5 + 0x2c) != 0) {
    piVar14 = (int *)(*(int *)(temp_v5 + 0x2c) + temp_v5 + 0x2c);
  }
  else {
    piVar14 = (int *)0x0;
  }
  do {
    if (piVar14 == piVar18) {
      temp_v9 = 0;
      temp_v2 = *(int *)(temp_v5 + 0x24);
      temp_v0 = temp_v5 + 0x24;
      if (temp_v2 != 0) {
        temp_v0 = temp_v0 + temp_v2;
      }
      if (temp_v2 == 0) {
        temp_v0 = 0;
      }
      piVar14 = (int *)(temp_v0 + *(int *)(temp_v5 + 0x20) * 4);
      temp_v0 = *(int *)(temp_v5 + 0x24);
      if (temp_v0 != 0) {
        piVar16 = (int *)(temp_v0 + temp_v5 + 0x24);
      }
      else {
        piVar16 = (int *)0x0;
      }
      temp_v6 = piVar16 != piVar14;
      if (temp_v6) {
        piVar18 = (int *)0x0;
      }
      do {
        if (!temp_v6) {
          return;
        }
        temp_v0 = *(int *)(*(int *)(param_1 + 0x10) + temp_v9 * 0xc + 4);
        *(int **)(temp_v0 + 0xc) = piVar18;
        *(int **)(temp_v0 + 0x10) = piVar18;
        *(unsigned int *)(temp_v0 + 0x1c) = *(unsigned int *)(temp_v0 + 0x18);
        *(unsigned int *)(temp_v0 + 0x48) = *(unsigned int *)(temp_v0 + 0x44);
        piVar9 = piVar18;
        if (*piVar16 != 0) {
          piVar9 = (int *)(*piVar16 + (int)piVar16);
        }
        temp_v5 = piVar9[2];
        temp_v2 = piVar9[1];
        piVar12 = piVar18;
        if (temp_v5 != 0) {
          piVar12 = (int *)((int)(piVar9 + 2) + temp_v5);
        }
        piVar9 = piVar18;
        if (*piVar16 != 0) {
          piVar9 = (int *)((int)piVar16 + *piVar16);
        }
        temp_v5 = piVar9[2];
        piVar1 = piVar18;
        if (temp_v5 != 0) {
          piVar1 = (int *)(temp_v5 + (int)(piVar9 + 2));
        }
        for (; piVar1 != piVar12 + temp_v2; piVar1 = piVar1 + 1) {
          piVar9 = piVar18;
          if (*piVar1 != 0) {
            piVar9 = (int *)(*piVar1 + (int)piVar1);
          }
          if (piVar9 != (int *)0x0) {
            piVar15 = (int *)param_2->field_0xac;
            piVar17 = (int *)param_2->field_0xb0;
            piVar9 = piVar18;
            if (*piVar1 != 0) {
              piVar9 = (int *)(*piVar1 + (int)piVar1);
            }
            for (; piVar15 != piVar17; piVar15 = piVar15 + 1) {
              piVar6 = (int *)(*(int *)(*piVar15 + 8) + 0xc);
              temp_v6 = *piVar6 == 0;
              if (!temp_v6) {
                piVar6 = (int *)((int)piVar6 + *piVar6);
                temp_v6 = piVar6 == (int *)0x0;
              }
              if (((!temp_v6) && (piVar9[1] != 0 && (int)piVar9 + piVar9[1] + 4 != 0)) &&
                 (FUN_002aa568(), piVar6 == (int *)0x0)) break;
            }
            if (piVar15 != param_2->field_0xb0) {
              *(int *)(temp_v0 + 0xc) = *piVar15;
            }
            piVar15 = (int *)param_2->field_0x9c;
            piVar17 = (int *)param_2->field_0xa0;
            piVar9 = piVar18;
            if (*piVar1 != 0) {
              piVar9 = (int *)(*piVar1 + (int)piVar1);
            }
            for (; piVar15 != piVar17; piVar15 = piVar15 + 1) {
              piVar6 = (int *)(*(int *)(*piVar15 + 8) + 0xc);
              temp_v5 = *piVar6;
              temp_v6 = temp_v5 == 0;
              if (!temp_v6) {
                temp_v5 = temp_v5 + (int)piVar6;
                temp_v6 = temp_v5 == 0;
              }
              if (((!temp_v6) && (piVar9[1] != 0 && (int)piVar9 + piVar9[1] + 4 != 0)) &&
                 (FUN_002aa568(), temp_v5 == 0)) break;
            }
            if (piVar15 != param_2->field_0xa0) {
              *(int *)(temp_v0 + 0x10) = *piVar15;
            }
            piVar15 = (int *)param_2->field_0x8c;
            piVar17 = (int *)param_2->field_0x90;
            piVar9 = piVar18;
            if (*piVar1 != 0) {
              piVar9 = (int *)(*piVar1 + (int)piVar1);
            }
            for (; piVar15 != piVar17; piVar15 = piVar15 + 1) {
              piVar6 = (int *)(*(int *)(*piVar15 + 8) + 0xc);
              temp_v6 = *piVar6 == 0;
              if (!temp_v6) {
                piVar6 = (int *)((int)piVar6 + *piVar6);
                temp_v6 = piVar6 == (int *)0x0;
              }
              if (((!temp_v6) && (piVar9[1] != 0 && (int)piVar9 + piVar9[1] + 4 != 0)) &&
                 (FUN_002aa568(), piVar6 == (int *)0x0)) break;
            }
            if (piVar15 != param_2->field_0x90) {
              temp_v5 = *piVar15;
              temp_v4 = *(unsigned int *)(temp_v0 + 0x20) & 0x3fffffff;
              piVar9 = (int *)(temp_v0 + 0x14);
              if ((int)temp_v4 <= (*(int *)(temp_v0 + 0x1c) - *(int *)(temp_v0 + 0x18)) >> 2) {
                if (temp_v4 == 0) {
                  temp_v4 = 1;
                }
                else {
                  temp_v4 = temp_v4 << 1;
                }
                if ((*(unsigned int *)(temp_v0 + 0x20) & 0x3fffffff) < temp_v4) {
                  if ((*piVar9 == 0) || ((*(unsigned int *)(temp_v0 + 0x20) & 0xc0000000) != 0x40000000))
                  goto LAB_0036bb10;
                  puVar5 = (unsigned int *)
                           (**(romwright_code **)(*(int *)*piVar9 + 8))((int *)*piVar9,temp_v4 << 2);
                  puVar13 = *(unsigned int **)(temp_v0 + 0x18);
                  puVar11 = *(unsigned int **)(temp_v0 + 0x1c);
                  temp_v3 = 0;
                  puVar4 = puVar5;
                  if (puVar13 != puVar11) {
                    do {
                      if (puVar4 != (unsigned int *)0x0) {
                        *puVar4 = *puVar13;
                      }
                      puVar13 = puVar13 + 1;
                      puVar4 = puVar4 + 1;
                    } while (puVar13 != puVar11);
                    temp_v3 = (*(int *)(temp_v0 + 0x1c) - *(int *)(temp_v0 + 0x18)) >> 2;
                  }
                  if (*(int *)(temp_v0 + 0x18) != 0) {
                    (**(romwright_code **)(*(int *)*piVar9 + 0xc))();
                  }
                  *(unsigned int **)(temp_v0 + 0x18) = puVar5;
                  *(unsigned int **)(temp_v0 + 0x1c) = puVar5 + temp_v3;
                  *(unsigned int *)(temp_v0 + 0x20) = (*(unsigned int *)(temp_v0 + 0x20) & 0xc0000000) | temp_v4;
                }
              }
              if (*(int **)(temp_v0 + 0x1c) != (int *)0x0) {
                **(int **)(temp_v0 + 0x1c) = temp_v5;
              }
              *(int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x1c) + 4;
            }
LAB_0036bb10:
            piVar15 = (int *)param_2->field_0x7c;
            piVar17 = (int *)param_2->field_0x80;
            piVar9 = piVar18;
            if (*piVar1 != 0) {
              piVar9 = (int *)(*piVar1 + (int)piVar1);
            }
            for (; piVar15 != piVar17; piVar15 = piVar15 + 1) {
              piVar6 = (int *)(*(int *)(*piVar15 + 8) + 0xc);
              temp_v6 = *piVar6 == 0;
              if (!temp_v6) {
                piVar6 = (int *)((int)piVar6 + *piVar6);
                temp_v6 = piVar6 == (int *)0x0;
              }
              if (((!temp_v6) && (piVar9[1] != 0 && (int)piVar9 + piVar9[1] + 4 != 0)) &&
                 (FUN_002aa568(), piVar6 == (int *)0x0)) break;
            }
            if (piVar15 != param_2->field_0x80) {
              temp_v5 = *piVar15;
              temp_v4 = *(unsigned int *)(temp_v0 + 0x4c) & 0x3fffffff;
              piVar9 = (int *)(temp_v0 + 0x40);
              if ((int)temp_v4 <= (*(int *)(temp_v0 + 0x48) - *(int *)(temp_v0 + 0x44)) >> 2) {
                if (temp_v4 == 0) {
                  temp_v4 = 1;
                }
                else {
                  temp_v4 = temp_v4 << 1;
                }
                if ((*(unsigned int *)(temp_v0 + 0x4c) & 0x3fffffff) < temp_v4) {
                  if ((*piVar9 == 0) || ((*(unsigned int *)(temp_v0 + 0x4c) & 0xc0000000) != 0x40000000))
                  goto LAB_0036bc8c;
                  puVar5 = (unsigned int *)
                           (**(romwright_code **)(*(int *)*piVar9 + 8))((int *)*piVar9,temp_v4 << 2);
                  puVar13 = *(unsigned int **)(temp_v0 + 0x44);
                  puVar11 = *(unsigned int **)(temp_v0 + 0x48);
                  temp_v3 = 0;
                  puVar4 = puVar5;
                  if (puVar13 != puVar11) {
                    do {
                      if (puVar4 != (unsigned int *)0x0) {
                        *puVar4 = *puVar13;
                      }
                      puVar13 = puVar13 + 1;
                      puVar4 = puVar4 + 1;
                    } while (puVar13 != puVar11);
                    temp_v3 = (*(int *)(temp_v0 + 0x48) - *(int *)(temp_v0 + 0x44)) >> 2;
                  }
                  if (*(int *)(temp_v0 + 0x44) != 0) {
                    (**(romwright_code **)(*(int *)*piVar9 + 0xc))();
                  }
                  *(unsigned int **)(temp_v0 + 0x44) = puVar5;
                  *(unsigned int **)(temp_v0 + 0x48) = puVar5 + temp_v3;
                  *(unsigned int *)(temp_v0 + 0x4c) = (*(unsigned int *)(temp_v0 + 0x4c) & 0xc0000000) | temp_v4;
                }
              }
              if (*(int **)(temp_v0 + 0x48) != (int *)0x0) {
                **(int **)(temp_v0 + 0x48) = temp_v5;
              }
              *(int *)(temp_v0 + 0x48) = *(int *)(temp_v0 + 0x48) + 4;
            }
          }
LAB_0036bc8c:;
        }
        piVar9 = piVar18;
        if (*piVar16 != 0) {
          piVar9 = (int *)((int)piVar16 + *piVar16);
        }
        temp_v0 = temp_v9 * 0xc;
        temp_v9 = temp_v9 + 1;
        *(int *)(*(int *)(param_1 + 0x10) + temp_v0) = *piVar9;
        piVar16 = piVar16 + 1;
        temp_v6 = piVar16 != piVar14;
      } while( 1 );
    }
    if (*piVar14 != 0) {
      temp_v0 = *piVar14 + (int)piVar14;
    }
    else {
      temp_v0 = 0;
    }
    if (temp_v0 != 0) {
      piVar16 = (int *)param_2->field_0x5c;
      piVar9 = (int *)param_2->field_0x60;
      if (*piVar14 != 0) {
        temp_v0 = *piVar14 + (int)piVar14;
      }
      else {
        temp_v0 = 0;
      }
      for (; piVar16 != piVar9; piVar16 = piVar16 + 1) {
        piVar12 = (int *)(*(int *)(*piVar16 + 8) + 0xc);
        temp_v2 = *piVar12;
        temp_v6 = temp_v2 == 0;
        if (!temp_v6) {
          temp_v2 = temp_v2 + (int)piVar12;
          temp_v6 = temp_v2 == 0;
        }
        if (((!temp_v6) && (*(int *)(temp_v0 + 4) != 0 && *(int *)(temp_v0 + 4) + temp_v0 + 4 != 0)) &&
           (FUN_002aa568(), temp_v2 == 0)) break;
      }
      if (piVar16 != param_2->field_0x60) {
        puVar13 = (unsigned int *)0x0;
        temp_v0 = *piVar16;
        if (*piVar14 != 0) {
          puVar13 = (unsigned int *)(*piVar14 + (int)piVar14);
        }
        temp_v8 = *puVar13;
        piVar16 = (int *)(param_1 + 0x2c);
        temp_v4 = *(unsigned int *)(param_1 + 0x38) & 0x3fffffff;
        if ((int)temp_v4 <= (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) >> 3) {
          if (temp_v4 == 0) {
            temp_v4 = 1;
          }
          else {
            temp_v4 = temp_v4 << 1;
          }
          if ((*(unsigned int *)(param_1 + 0x38) & 0x3fffffff) < temp_v4) {
            if ((*piVar16 == 0) || ((*(unsigned int *)(param_1 + 0x38) & 0xc0000000) != 0x40000000)) {
              piVar14 = piVar14 + 1;
              continue;
            }
            puVar4 = (unsigned int *)(**(romwright_code **)(*(int *)*piVar16 + 8))((int *)*piVar16,temp_v4 << 3);
            puVar5 = *(unsigned int **)(param_1 + 0x30);
            puVar11 = *(unsigned int **)(param_1 + 0x34);
            temp_v2 = 0;
            puVar13 = puVar4;
            if (puVar5 != puVar11) {
              do {
                if (puVar13 != (unsigned int *)0x0) {
                  temp_v7 = puVar5[1];
                  *puVar13 = *puVar5;
                  puVar13[1] = temp_v7;
                }
                puVar5 = puVar5 + 2;
                puVar13 = puVar13 + 2;
              } while (puVar5 != puVar11);
              temp_v2 = (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) >> 3;
            }
            if (*(int *)(param_1 + 0x30) != 0) {
              (**(romwright_code **)(*(int *)*piVar16 + 0xc))((int *)*piVar16);
            }
            *(unsigned int **)(param_1 + 0x34) = puVar4 + temp_v2 * 2;
            *(unsigned int **)(param_1 + 0x30) = puVar4;
            *(unsigned int *)(param_1 + 0x38) = (*(unsigned int *)(param_1 + 0x38) & 0xc0000000) | temp_v4;
          }
        }
        puVar13 = *(unsigned int **)(param_1 + 0x34);
        if (puVar13 != (unsigned int *)0x0) {
          *puVar13 = temp_v8;
          puVar13[1] = temp_v0;
        }
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 8;
      }
    }
    piVar14 = piVar14 + 1;
  } while( 1 );
}

} /* extern "C" */
