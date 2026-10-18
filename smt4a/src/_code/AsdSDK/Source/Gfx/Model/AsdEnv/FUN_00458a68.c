/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00458a68` (_code @ 0x458a68, 0xd44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern unsigned char DAT_0055b944; /* 0x55b944 */
extern unsigned char DAT_0055ba3c; /* 0x55ba3c */
extern unsigned char DAT_0055bafc; /* 0x55bafc */
extern unsigned char DAT_0055bb20; /* 0x55bb20 */
extern unsigned char DAT_0055bb74; /* 0x55bb74 */
extern unsigned char DAT_0055c418; /* 0x55c418 */
extern unsigned char DAT_0055c43c; /* 0x55c43c */
extern unsigned char DAT_0055c460; /* 0x55c460 */
extern unsigned char DAT_0055c484; /* 0x55c484 */
extern unsigned char DAT_0055c4a8; /* 0x55c4a8 */
extern unsigned char DAT_0055c4cc; /* 0x55c4cc */
extern unsigned char DAT_0055c500; /* 0x55c500 */
extern unsigned int DAT_005c0e08; /* 0x5c0e08 */
extern unsigned int DAT_005c0e0c; /* 0x5c0e0c */
extern unsigned int DAT_005c0e10; /* 0x5c0e10 */
extern unsigned int DAT_005c0e14; /* 0x5c0e14 */
extern unsigned int DAT_005c0e18; /* 0x5c0e18 */
extern unsigned int DAT_005c0e1c; /* 0x5c0e1c */
extern unsigned int DAT_005c0e20; /* 0x5c0e20 */
extern unsigned int DAT_005c0e24; /* 0x5c0e24 */
extern unsigned int DAT_005c0e28; /* 0x5c0e28 */
extern unsigned int DAT_005c0e2c; /* 0x5c0e2c */
extern unsigned int DAT_005c0e30; /* 0x5c0e30 */
extern unsigned int DAT_005c0e34; /* 0x5c0e34 */
extern unsigned char *DAT_005c0e38; /* 0x5c0e38 */
extern unsigned char DAT_005c0e3c; /* 0x5c0e3c */
extern unsigned char DAT_005c0e3d; /* 0x5c0e3d */
extern unsigned char *DAT_005c0e40; /* 0x5c0e40 */
extern unsigned char DAT_005c0e44; /* 0x5c0e44 */
extern unsigned char DAT_005c0e45; /* 0x5c0e45 */
extern unsigned char *DAT_005c0e48; /* 0x5c0e48 */
extern unsigned char DAT_005c0e4c; /* 0x5c0e4c */
extern unsigned char DAT_005c0e4d; /* 0x5c0e4d */
extern unsigned char *DAT_005c0e50; /* 0x5c0e50 */
extern unsigned char DAT_005c0e54; /* 0x5c0e54 */
extern unsigned char DAT_005c0e55; /* 0x5c0e55 */
extern unsigned char *DAT_005c0e58; /* 0x5c0e58 */
extern unsigned char DAT_005c0e5c; /* 0x5c0e5c */
extern unsigned char DAT_005c0e5d; /* 0x5c0e5d */
extern unsigned char *DAT_005c0e60; /* 0x5c0e60 */
extern unsigned char DAT_005c0e64; /* 0x5c0e64 */
extern unsigned char DAT_005c0e65; /* 0x5c0e65 */
extern unsigned char *DAT_005c0e68; /* 0x5c0e68 */
extern unsigned char DAT_005c0e6c; /* 0x5c0e6c */
extern unsigned char DAT_005c0e6d; /* 0x5c0e6d */
extern unsigned char *DAT_005c0e70; /* 0x5c0e70 */
extern unsigned char DAT_005c0e74; /* 0x5c0e74 */
extern unsigned char DAT_005c0e75; /* 0x5c0e75 */
extern unsigned char *DAT_005c0e78; /* 0x5c0e78 */
extern unsigned char DAT_005c0e7c; /* 0x5c0e7c */
extern unsigned char DAT_005c0e7d; /* 0x5c0e7d */
extern unsigned char *DAT_005c0e80; /* 0x5c0e80 */
extern unsigned char DAT_005c0e84; /* 0x5c0e84 */
extern unsigned char DAT_005c0e85; /* 0x5c0e85 */
extern unsigned char *DAT_005c0e88; /* 0x5c0e88 */
extern unsigned char DAT_005c0e8c; /* 0x5c0e8c */
extern unsigned char DAT_005c0e8d; /* 0x5c0e8d */
extern unsigned char *DAT_00646588; /* 0x646588 */
extern unsigned char DAT_0064658c; /* 0x64658c */
extern unsigned char DAT_0064658d; /* 0x64658d */
extern unsigned char *DAT_00646590; /* 0x646590 */
extern unsigned char DAT_00646594; /* 0x646594 */
extern unsigned char DAT_00646595; /* 0x646595 */

extern unsigned long long FUN_002eba64(unsigned int *, int *);


int FUN_00458a68(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int *puVar5;
  int *temp_v2;
  int *piVar6;
  int temp_v3;
  unsigned int *puVar8;
  int *piVar9;
  unsigned int *puVar10;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  int *temp_v8;
  int temp_v9;
  int temp_v10;
  int *temp_v11;
  unsigned char *temp_v12;
  unsigned char *temp_v13;
  unsigned char *temp_v14;
  unsigned char *temp_v15;
  unsigned char *temp_v16;
  unsigned char *temp_v17;
  unsigned char *temp_v18;
  unsigned char *temp_v19;
  unsigned char *temp_v20;
  unsigned char *temp_v21;
  unsigned char *temp_v22;
  int iStack_2c;
  int temp_v23;
  
  temp_v4 = 0;
  temp_v6 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x18);
  iStack_2c = param_1;
  temp_v23 = param_2;
  temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),temp_v6 << 2,4);
  if (temp_v0 == 0) {
    temp_v4 = -0x80000000;
  }
  if (-1 < temp_v4) {
    piVar9 = *(int **)(param_1 + 4);
    puVar2 = (unsigned int *)(param_1 + 0xc);
    piVar6 = (int *)(temp_v6 & 0x3fffffff);
    temp_v8 = piVar9;
    temp_v9 = temp_v0;
    temp_v11 = piVar6;
    if ((int **)puVar2 != &temp_v8) {
      temp_v9 = *(int *)(param_1 + 0x10);
      temp_v11 = *(int **)(param_1 + 0x18);
      temp_v8 = (int *)*puVar2;
      *puVar2 = (unsigned int)piVar9;
      *(int *)(param_1 + 0x10) = temp_v0;
      *(int *)(param_1 + 0x14) = temp_v0;
      *(int **)(param_1 + 0x18) = piVar6;
      piVar6 = piVar9;
    }
    temp_v10 = temp_v9;
    temp_v0 = 0;
    if (temp_v8 != (int *)0x0) {
      temp_v0 = temp_v9;
    }
    if (temp_v8 != (int *)0x0 && temp_v0 != 0) {
      (**(romwright_code **)(*temp_v8 + 0xc))(temp_v8,temp_v9);
      piVar6 = temp_v2;
    }
    temp_v0 = 0;
    if (0 < (int)temp_v6) {
      temp_v12 = &DAT_0055c43c;
      temp_v13 = &DAT_0055c418;
      temp_v14 = &DAT_0055c460;
      temp_v15 = &DAT_0055c4a8;
      temp_v16 = &DAT_0055c4cc;
      temp_v17 = &DAT_0055c500;
      temp_v18 = &DAT_0055c484;
      temp_v19 = &DAT_0055bafc;
      temp_v20 = &DAT_0055ba3c;
      temp_v21 = &DAT_0055bb74;
      temp_v22 = &DAT_0055b944;
      do {
        piVar9 = (int *)(*(int *)(param_1 + 8) + 0x1c);
        temp_v3 = *piVar9;
        if (temp_v3 != 0) {
          temp_v3 = (int)piVar9 + temp_v3;
        }
        else {
          temp_v3 = 0;
        }
        temp_v5 = *(unsigned int *)(temp_v3 + temp_v0 * 4);
        if ((DAT_005c0e34 & 1) == 0) {
          temp_v7 = FUN_002eba64(&DAT_005c0e34,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_005c0e3c = 1;
            DAT_005c0e3d = 0;
            piVar6 = (int *)0x46714c;
            DAT_005c0e38 = temp_v12;
          }
        }
        if ((DAT_005c0e30 & 1) == 0) {
          temp_v7 = FUN_002eba64(&DAT_005c0e30,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_005c0e44 = 0;
            DAT_005c0e45 = 0;
            DAT_005c0e40 = temp_v13;
            piVar6 = (int *)0x467148;
          }
        }
        if ((DAT_005c0e2c & 1) == 0) {
          temp_v7 = FUN_002eba64(&DAT_005c0e2c,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_005c0e4c = 1;
            DAT_005c0e4d = 0;
            piVar6 = (int *)0x467150;
            DAT_005c0e48 = temp_v14;
          }
        }
        if ((DAT_005c0e28 & 1) == 0) {
          temp_v7 = FUN_002eba64(&DAT_005c0e28,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_005c0e54 = 1;
            DAT_005c0e55 = 0;
            piVar6 = (int *)0x467158;
            DAT_005c0e50 = temp_v15;
          }
        }
        if ((DAT_005c0e24 & 1) == 0) {
          temp_v7 = FUN_002eba64(&DAT_005c0e24,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_005c0e5c = 1;
            DAT_005c0e5d = 0;
            DAT_005c0e58 = temp_v16;
            piVar6 = (int *)0x46715c;
          }
        }
        if ((DAT_005c0e20 & 1) == 0) {
          temp_v7 = FUN_002eba64(&DAT_005c0e20,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_005c0e64 = 1;
            DAT_005c0e65 = 0;
            DAT_005c0e60 = temp_v17;
            piVar6 = (int *)0x467160;
          }
        }
        if ((DAT_005c0e1c & 1) == 0) {
          temp_v7 = FUN_002eba64(&DAT_005c0e1c,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_005c0e6c = 0;
            DAT_005c0e6d = 0;
            DAT_005c0e68 = temp_v18;
            piVar6 = (int *)0x467154;
          }
        }
        if ((DAT_005c0e18 & 1) == 0) {
          temp_v7 = FUN_002eba64(&DAT_005c0e18,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_005c0e74 = 1;
            DAT_005c0e75 = 1;
            piVar6 = (int *)0x44fce0;
            DAT_005c0e70 = &DAT_0055bb20;
          }
        }
        if ((DAT_005c0e14 & 1) == 0) {
          temp_v7 = FUN_002eba64(&DAT_005c0e14,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_005c0e7c = 1;
            DAT_005c0e7d = 1;
            DAT_005c0e78 = temp_v19;
            piVar6 = (int *)0x44fcdc;
          }
        }
        if ((DAT_005c0e10 & 1) == 0) {
          temp_v7 = FUN_002eba64(&DAT_005c0e10,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_005c0e84 = 1;
            DAT_005c0e85 = 1;
            DAT_005c0e80 = temp_v20;
            piVar6 = (int *)0x44e9d0;
          }
        }
        if ((DAT_005c0e0c & 1) == 0) {
          temp_v7 = FUN_002eba64(&DAT_005c0e0c,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_005c0e8c = 1;
            DAT_005c0e8d = 1;
            DAT_005c0e88 = temp_v21;
            piVar6 = (int *)0x44fcec;
          }
        }
        if ((DAT_005c0e08 & 1) == 0) {
          temp_v7 = FUN_002eba64(&DAT_005c0e08,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_0064658c = 1;
            DAT_0064658d = 1;
            DAT_00646588 = temp_v22;
            DAT_00646594 = 1;
            DAT_00646595 = 1;
            piVar6 = (int *)0x44c458;
            DAT_00646590 = &DAT_0055bb20;
          }
        }
        switch(temp_v5) {
        case 0:
          puVar10 = (unsigned int *)&DAT_005c0e38;
          break;
        case 1:
          puVar10 = (unsigned int *)&DAT_005c0e40;
          break;
        case 2:
          puVar10 = (unsigned int *)&DAT_005c0e48;
          break;
        case 3:
          puVar10 = (unsigned int *)&DAT_005c0e60;
          break;
        case 4:
          puVar10 = (unsigned int *)&DAT_00646588;
          break;
        case 5:
          puVar10 = (unsigned int *)&DAT_005c0e50;
          break;
        case 6:
          puVar10 = (unsigned int *)&DAT_005c0e58;
          break;
        case 7:
          puVar10 = (unsigned int *)&DAT_005c0e68;
          break;
        case 8:
          puVar10 = (unsigned int *)&DAT_005c0e70;
          break;
        case 9:
          puVar10 = (unsigned int *)&DAT_005c0e80;
          break;
        case 10:
          puVar10 = (unsigned int *)&DAT_005c0e78;
          break;
        case 0xb:
          puVar10 = (unsigned int *)&DAT_005c0e88;
          break;
        default:
          puVar10 = (unsigned int *)0x0;
        }
        puVar3 = *(unsigned int **)(param_1 + 0x14);
        temp_v0 = temp_v0 + 1;
        *(unsigned int **)(param_1 + 0x14) = puVar3 + 1;
        if (puVar3 != (unsigned int *)0x0) {
          *puVar3 = (unsigned int)puVar10;
        }
      } while (temp_v0 < (int)temp_v6);
    }
    temp_v6 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x10);
    temp_v0 = temp_v6 << 2;
    temp_v3 = (**(romwright_code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),temp_v0,4);
    if (temp_v3 == 0) {
      temp_v4 = -0x80000000;
    }
    if (-1 < temp_v4) {
      puVar10 = (unsigned int *)(param_1 + 0x20);
      temp_v8 = *(int **)(param_1 + 4);
      temp_v9 = temp_v3;
      temp_v11 = (int *)(temp_v6 & 0x3fffffff);
      if ((int **)puVar10 != &temp_v8) {
        temp_v9 = *(int *)(param_1 + 0x24);
        temp_v11 = *(int **)(param_1 + 0x2c);
        temp_v8 = (int *)*puVar10;
        *puVar10 = (unsigned int)*(int **)(param_1 + 4);
        *(int *)(param_1 + 0x24) = temp_v3;
        *(int *)(param_1 + 0x28) = temp_v3;
        *(unsigned int *)(param_1 + 0x2c) = temp_v6 & 0x3fffffff;
      }
      temp_v10 = temp_v9;
      temp_v3 = 0;
      if (temp_v8 != (int *)0x0) {
        temp_v3 = temp_v9;
      }
      if (temp_v8 != (int *)0x0 && temp_v3 != 0) {
        (**(romwright_code **)(*temp_v8 + 0xc))(temp_v8,temp_v9);
      }
      if ((int)temp_v6 < (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24)) >> 2) {
        temp_v1 = temp_v6;
        if ((int)temp_v6 < 0) {
          temp_v1 = 0;
        }
        temp_v3 = *(int *)(param_1 + 0x24) + temp_v1 * 4;
      }
      else {
        temp_v1 = temp_v6;
        if ((int)(*(unsigned int *)(param_1 + 0x2c) & 0x3fffffff) < (int)temp_v6) {
          if (((*(int *)(param_1 + 0x20) != 0) &&
              ((*(unsigned int *)(param_1 + 0x2c) & 0xc0000000) == 0x40000000)) &&
             (puVar10 = (unsigned int *)
                        (**(romwright_code **)(**(int **)(param_1 + 0x20) + 8))
                                  (*(int **)(param_1 + 0x20),temp_v0,0x20),
             puVar10 != (unsigned int *)0x0)) {
            temp_v3 = 0;
            puVar3 = *(unsigned int **)(param_1 + 0x24);
            puVar8 = *(unsigned int **)(param_1 + 0x28);
            puVar5 = puVar10;
            if (puVar3 != puVar8) {
              do {
                if (puVar5 != (unsigned int *)0x0) {
                  *puVar5 = *puVar3;
                }
                puVar3 = puVar3 + 1;
                puVar5 = puVar5 + 1;
              } while (puVar3 != puVar8);
              temp_v3 = (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24)) >> 2;
            }
            if (*(int *)(param_1 + 0x24) != 0) {
              *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24);
              (**(romwright_code **)(**(int **)(param_1 + 0x20) + 0xc))();
            }
            *(unsigned int **)(param_1 + 0x28) = puVar10 + temp_v3;
            *(unsigned int **)(param_1 + 0x24) = puVar10;
            *(unsigned int *)(param_1 + 0x2c) = (*(unsigned int *)(param_1 + 0x2c) & 0xc0000000) | temp_v6;
          }
          else {
            temp_v1 = *(unsigned int *)(param_1 + 0x2c) & 0x3fffffff;
          }
        }
        temp_v3 = *(int *)(param_1 + 0x24) + temp_v1 * 4;
      }
      *(int *)(param_1 + 0x28) = temp_v3;
      temp_v3 = (**(romwright_code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),temp_v0,4);
      if (temp_v3 == 0) {
        temp_v4 = -0x80000000;
      }
      if (-1 < temp_v4) {
        puVar10 = (unsigned int *)(param_1 + 0x30);
        temp_v8 = *(int **)(param_1 + 4);
        temp_v9 = temp_v3;
        temp_v11 = (int *)(temp_v6 & 0x3fffffff);
        if ((int **)puVar10 != &temp_v8) {
          temp_v9 = *(int *)(param_1 + 0x34);
          temp_v11 = *(int **)(param_1 + 0x3c);
          temp_v8 = (int *)*puVar10;
          *(unsigned int *)(param_1 + 0x3c) = temp_v6 & 0x3fffffff;
          *puVar10 = (unsigned int)*(int **)(param_1 + 4);
          *(int *)(param_1 + 0x34) = temp_v3;
          *(int *)(param_1 + 0x38) = temp_v3;
        }
        temp_v10 = temp_v9;
        temp_v3 = 0;
        if (temp_v8 != (int *)0x0) {
          temp_v3 = temp_v9;
        }
        if (temp_v8 != (int *)0x0 && temp_v3 != 0) {
          (**(romwright_code **)(*temp_v8 + 0xc))(temp_v8,temp_v9);
        }
        if ((int)temp_v6 < (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) >> 2) {
          temp_v1 = temp_v6;
          if ((int)temp_v6 < 0) {
            temp_v1 = 0;
          }
          temp_v3 = *(int *)(param_1 + 0x34) + temp_v1 * 4;
        }
        else {
          temp_v1 = temp_v6;
          if ((int)(*(unsigned int *)(param_1 + 0x3c) & 0x3fffffff) < (int)temp_v6) {
            if (((*(int *)(param_1 + 0x30) != 0) &&
                ((*(unsigned int *)(param_1 + 0x3c) & 0xc0000000) == 0x40000000)) &&
               (puVar10 = (unsigned int *)
                          (**(romwright_code **)(**(int **)(param_1 + 0x30) + 8))
                                    (*(int **)(param_1 + 0x30),temp_v0,0x20),
               puVar10 != (unsigned int *)0x0)) {
              temp_v3 = 0;
              puVar3 = *(unsigned int **)(param_1 + 0x34);
              puVar8 = *(unsigned int **)(param_1 + 0x38);
              puVar5 = puVar10;
              if (puVar3 != puVar8) {
                do {
                  if (puVar5 != (unsigned int *)0x0) {
                    *puVar5 = *puVar3;
                  }
                  puVar3 = puVar3 + 1;
                  puVar5 = puVar5 + 1;
                } while (puVar3 != puVar8);
                temp_v3 = (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) >> 2;
              }
              if (*(int *)(param_1 + 0x34) != 0) {
                *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x34);
                (**(romwright_code **)(**(int **)(param_1 + 0x30) + 0xc))();
              }
              *(unsigned int **)(param_1 + 0x38) = puVar10 + temp_v3;
              *(unsigned int **)(param_1 + 0x34) = puVar10;
              *(unsigned int *)(param_1 + 0x3c) = (*(unsigned int *)(param_1 + 0x3c) & 0xc0000000) | temp_v6;
            }
            else {
              temp_v1 = *(unsigned int *)(param_1 + 0x3c) & 0x3fffffff;
            }
          }
          temp_v3 = *(int *)(param_1 + 0x34) + temp_v1 * 4;
        }
        *(int *)(param_1 + 0x38) = temp_v3;
        temp_v3 = (**(romwright_code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),temp_v0,4);
        if (temp_v3 == 0) {
          temp_v4 = -0x80000000;
        }
        if (-1 < temp_v4) {
          puVar10 = (unsigned int *)(param_1 + 0x40);
          temp_v8 = *(int **)(param_1 + 4);
          temp_v9 = temp_v3;
          temp_v11 = (int *)(temp_v6 & 0x3fffffff);
          if ((int **)puVar10 != &temp_v8) {
            temp_v9 = *(int *)(param_1 + 0x44);
            temp_v11 = *(int **)(param_1 + 0x4c);
            temp_v8 = (int *)*puVar10;
            *puVar10 = (unsigned int)*(int **)(param_1 + 4);
            *(int *)(param_1 + 0x44) = temp_v3;
            *(int *)(param_1 + 0x48) = temp_v3;
            *(unsigned int *)(param_1 + 0x4c) = temp_v6 & 0x3fffffff;
          }
          temp_v10 = temp_v9;
          temp_v3 = 0;
          if (temp_v8 != (int *)0x0) {
            temp_v3 = temp_v9;
          }
          if (temp_v8 != (int *)0x0 && temp_v3 != 0) {
            (**(romwright_code **)(*temp_v8 + 0xc))(temp_v8,temp_v9);
          }
          if ((int)temp_v6 < (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44)) >> 2) {
            temp_v1 = temp_v6;
            if ((int)temp_v6 < 0) {
              temp_v1 = 0;
            }
            temp_v3 = *(int *)(param_1 + 0x44) + temp_v1 * 4;
          }
          else {
            temp_v1 = temp_v6;
            if ((int)(*(unsigned int *)(param_1 + 0x4c) & 0x3fffffff) < (int)temp_v6) {
              if (((*(int *)(param_1 + 0x40) != 0) &&
                  ((*(unsigned int *)(param_1 + 0x4c) & 0xc0000000) == 0x40000000)) &&
                 (puVar10 = (unsigned int *)
                            (**(romwright_code **)(**(int **)(param_1 + 0x40) + 8))
                                      (*(int **)(param_1 + 0x40),temp_v0,0x20),
                 puVar10 != (unsigned int *)0x0)) {
                temp_v3 = 0;
                puVar3 = *(unsigned int **)(param_1 + 0x44);
                puVar8 = *(unsigned int **)(param_1 + 0x48);
                puVar5 = puVar10;
                if (puVar3 != puVar8) {
                  do {
                    if (puVar5 != (unsigned int *)0x0) {
                      *puVar5 = *puVar3;
                    }
                    puVar3 = puVar3 + 1;
                    puVar5 = puVar5 + 1;
                  } while (puVar3 != puVar8);
                  puVar3 = *(unsigned int **)(param_1 + 0x44);
                  temp_v3 = (*(int *)(param_1 + 0x48) - (int)puVar3) >> 2;
                }
                if (puVar3 != (unsigned int *)0x0) {
                  *(unsigned int **)(param_1 + 0x48) = puVar3;
                  (**(romwright_code **)(**(int **)(param_1 + 0x40) + 0xc))();
                }
                *(unsigned int **)(param_1 + 0x48) = puVar10 + temp_v3;
                *(unsigned int **)(param_1 + 0x44) = puVar10;
                *(unsigned int *)(param_1 + 0x4c) = (*(unsigned int *)(param_1 + 0x4c) & 0xc0000000) | temp_v6;
              }
              else {
                temp_v1 = *(unsigned int *)(param_1 + 0x4c) & 0x3fffffff;
              }
            }
            temp_v3 = *(int *)(param_1 + 0x44) + temp_v1 * 4;
          }
          *(int *)(param_1 + 0x48) = temp_v3;
          if (temp_v23 != 0) {
            temp_v3 = (**(romwright_code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),temp_v0,4);
            if (temp_v3 == 0) {
              temp_v4 = -0x80000000;
            }
            if (-1 < temp_v4) {
              puVar10 = (unsigned int *)(param_1 + 0x50);
              temp_v8 = *(int **)(param_1 + 4);
              temp_v9 = temp_v3;
              temp_v11 = (int *)(temp_v6 & 0x3fffffff);
              if ((int **)puVar10 != &temp_v8) {
                temp_v9 = *(int *)(param_1 + 0x54);
                temp_v11 = *(int **)(param_1 + 0x5c);
                temp_v8 = (int *)*puVar10;
                *(unsigned int *)(param_1 + 0x5c) = temp_v6 & 0x3fffffff;
                *puVar10 = (unsigned int)*(int **)(param_1 + 4);
                *(int *)(param_1 + 0x54) = temp_v3;
                *(int *)(param_1 + 0x58) = temp_v3;
              }
              temp_v10 = temp_v9;
              temp_v3 = 0;
              if (temp_v8 != (int *)0x0) {
                temp_v3 = temp_v9;
              }
              if (temp_v8 != (int *)0x0 && temp_v3 != 0) {
                (**(romwright_code **)(*temp_v8 + 0xc))(temp_v8,temp_v9);
              }
              if ((int)temp_v6 < (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54)) >> 2) {
                if ((int)temp_v6 < 0) {
                  temp_v6 = 0;
                }
                *(unsigned int *)(param_1 + 0x58) = *(int *)(param_1 + 0x54) + temp_v6 * 4;
              }
              else {
                if ((int)(*(unsigned int *)(param_1 + 0x5c) & 0x3fffffff) < (int)temp_v6) {
                  if (((*(int *)(param_1 + 0x50) != 0) &&
                      ((*(unsigned int *)(param_1 + 0x5c) & 0xc0000000) == 0x40000000)) &&
                     (puVar10 = (unsigned int *)
                                (**(romwright_code **)(**(int **)(param_1 + 0x50) + 8))
                                          (*(int **)(param_1 + 0x50),temp_v0,0x20),
                     puVar10 != (unsigned int *)0x0)) {
                    temp_v0 = 0;
                    puVar3 = *(unsigned int **)(param_1 + 0x54);
                    puVar8 = *(unsigned int **)(param_1 + 0x58);
                    puVar5 = puVar10;
                    if (puVar3 != puVar8) {
                      do {
                        if (puVar5 != (unsigned int *)0x0) {
                          *puVar5 = *puVar3;
                        }
                        puVar3 = puVar3 + 1;
                        puVar5 = puVar5 + 1;
                      } while (puVar3 != puVar8);
                      puVar3 = *(unsigned int **)(param_1 + 0x54);
                      temp_v0 = (*(int *)(param_1 + 0x58) - (int)puVar3) >> 2;
                    }
                    if (puVar3 != (unsigned int *)0x0) {
                      *(unsigned int **)(param_1 + 0x58) = puVar3;
                      (**(romwright_code **)(**(int **)(param_1 + 0x50) + 0xc))();
                    }
                    *(unsigned int **)(param_1 + 0x58) = puVar10 + temp_v0;
                    *(unsigned int **)(param_1 + 0x54) = puVar10;
                    *(unsigned int *)(param_1 + 0x5c) = (*(unsigned int *)(param_1 + 0x5c) & 0xc0000000) | temp_v6;
                  }
                  else {
                    temp_v6 = *(unsigned int *)(param_1 + 0x5c) & 0x3fffffff;
                  }
                }
                *(unsigned int *)(param_1 + 0x58) = *(int *)(param_1 + 0x54) + temp_v6 * 4;
              }
            }
          }
        }
      }
    }
  }
  return temp_v4;
}
