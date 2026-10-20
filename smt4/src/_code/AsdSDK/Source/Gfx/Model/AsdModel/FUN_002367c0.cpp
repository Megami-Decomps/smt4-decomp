/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002367c0` (_code @ 0x2367c0, 0xd1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
} param_2_stack;

extern unsigned char DAT_00421528; /* 0x421528 */
extern unsigned char DAT_00421620; /* 0x421620 */
extern unsigned char DAT_004216e0; /* 0x4216e0 */
extern unsigned char DAT_00421704; /* 0x421704 */
extern unsigned char DAT_00421758; /* 0x421758 */
extern unsigned char DAT_00421f80; /* 0x421f80 */
extern unsigned char DAT_00421fa4; /* 0x421fa4 */
extern unsigned char DAT_00421fc8; /* 0x421fc8 */
extern unsigned char DAT_00421fec; /* 0x421fec */
extern unsigned char DAT_00422010; /* 0x422010 */
extern unsigned char DAT_00422034; /* 0x422034 */
extern unsigned char DAT_00422068; /* 0x422068 */
extern unsigned int DAT_00471f48; /* 0x471f48 */
extern unsigned int DAT_00471f4c; /* 0x471f4c */
extern unsigned int DAT_00471f50; /* 0x471f50 */
extern unsigned int DAT_00471f54; /* 0x471f54 */
extern unsigned int DAT_00471f58; /* 0x471f58 */
extern unsigned int DAT_00471f5c; /* 0x471f5c */
extern unsigned int DAT_00471f60; /* 0x471f60 */
extern unsigned int DAT_00471f64; /* 0x471f64 */
extern unsigned int DAT_00471f68; /* 0x471f68 */
extern unsigned int DAT_00471f6c; /* 0x471f6c */
extern unsigned int DAT_00471f70; /* 0x471f70 */
extern unsigned int DAT_00471f74; /* 0x471f74 */
extern unsigned char *DAT_00471f78; /* 0x471f78 */
extern unsigned char DAT_00471f7c; /* 0x471f7c */
extern unsigned char DAT_00471f7d; /* 0x471f7d */
extern unsigned char *DAT_00471f80; /* 0x471f80 */
extern unsigned char DAT_00471f84; /* 0x471f84 */
extern unsigned char DAT_00471f85; /* 0x471f85 */
extern unsigned char *DAT_00471f88; /* 0x471f88 */
extern unsigned char DAT_00471f8c; /* 0x471f8c */
extern unsigned char DAT_00471f8d; /* 0x471f8d */
extern unsigned char *DAT_00471f90; /* 0x471f90 */
extern unsigned char DAT_00471f94; /* 0x471f94 */
extern unsigned char DAT_00471f95; /* 0x471f95 */
extern unsigned char *DAT_00471f98; /* 0x471f98 */
extern unsigned char DAT_00471f9c; /* 0x471f9c */
extern unsigned char DAT_00471f9d; /* 0x471f9d */
extern unsigned char *DAT_00471fa0; /* 0x471fa0 */
extern unsigned char DAT_00471fa4; /* 0x471fa4 */
extern unsigned char DAT_00471fa5; /* 0x471fa5 */
extern unsigned char *DAT_00471fa8; /* 0x471fa8 */
extern unsigned char DAT_00471fac; /* 0x471fac */
extern unsigned char DAT_00471fad; /* 0x471fad */
extern unsigned char *DAT_00471fb0; /* 0x471fb0 */
extern unsigned char DAT_00471fb4; /* 0x471fb4 */
extern unsigned char DAT_00471fb5; /* 0x471fb5 */
extern unsigned char *DAT_00471fb8; /* 0x471fb8 */
extern unsigned char DAT_00471fbc; /* 0x471fbc */
extern unsigned char DAT_00471fbd; /* 0x471fbd */
extern unsigned char *DAT_00471fc0; /* 0x471fc0 */
extern unsigned char DAT_00471fc4; /* 0x471fc4 */
extern unsigned char DAT_00471fc5; /* 0x471fc5 */
extern unsigned char *DAT_00471fc8; /* 0x471fc8 */
extern unsigned char DAT_00471fcc; /* 0x471fcc */
extern unsigned char DAT_00471fcd; /* 0x471fcd */
extern unsigned char *DAT_004e9db8; /* 0x4e9db8 */
extern unsigned char DAT_004e9dbc; /* 0x4e9dbc */
extern unsigned char DAT_004e9dbd; /* 0x4e9dbd */
extern unsigned char *DAT_004e9dc0; /* 0x4e9dc0 */
extern unsigned char DAT_004e9dc4; /* 0x4e9dc4 */
extern unsigned char DAT_004e9dc5; /* 0x4e9dc5 */

extern unsigned long long __cxa_guard_acquire(unsigned int *, int *);


int FUN_002367c0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int **ppiVar2;
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
  int *temp_v9;
  int *temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int *temp_v13;
  int *temp_v14;
  int temp_v15;
  unsigned char *temp_v16;
  unsigned char *temp_v17;
  unsigned char *temp_v18;
  unsigned char *temp_v19;
  unsigned char *temp_v20;
  unsigned char *temp_v21;
  unsigned char *temp_v22;
  unsigned char *temp_v23;
  unsigned char *temp_v24;
  int iStack_2c;
  int temp_v25;
  
  temp_v4 = 0;
  temp_v6 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x18);
  iStack_2c = param_1;
  temp_v25 = param_2;
  temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),temp_v6 << 2,4);
  if (temp_v0 == 0) {
    temp_v4 = -0x80000000;
  }
  if (-1 < temp_v4) {
    piVar9 = *(int **)(param_1 + 4);
    ppiVar2 = (int **)(param_1 + 0xc);
    piVar6 = (int *)(temp_v6 & 0x3fffffff);
    temp_v10 = piVar9;
    temp_v11 = temp_v0;
    temp_v13 = piVar6;
    if (ppiVar2 != &temp_v10) {
      temp_v11 = *(int *)(param_1 + 0x10);
      temp_v13 = *(int **)(param_1 + 0x18);
      temp_v10 = *ppiVar2;
      *ppiVar2 = piVar9;
      *(int *)(param_1 + 0x10) = temp_v0;
      *(int *)(param_1 + 0x14) = temp_v0;
      *(int **)(param_1 + 0x18) = piVar6;
      piVar6 = piVar9;
    }
    temp_v12 = temp_v11;
    temp_v1 = 0;
    if (temp_v10 != (int *)0x0) {
      temp_v1 = temp_v11;
    }
    if (temp_v10 != (int *)0x0 && temp_v1 != 0) {
      (**(romwright_code **)(*temp_v10 + 0xc))(temp_v10,temp_v11);
      piVar6 = temp_v2;
    }
    temp_v0 = 0;
    if (0 < (int)temp_v6) {
      temp_v18 = &DAT_00421fa4;
      temp_v22 = &DAT_00421f80;
      temp_v9 = (int *)&DAT_00421fc8;
      temp_v19 = &DAT_00422010;
      temp_v17 = &DAT_00422068;
      temp_v16 = &DAT_00421fec;
      temp_v20 = &DAT_004216e0;
      temp_v23 = &DAT_00421620;
      temp_v21 = &DAT_00421758;
      temp_v24 = &DAT_00421528;
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
        if ((DAT_00471f74 & 1) == 0) {
          temp_v7 = __cxa_guard_acquire(&DAT_00471f74,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_00471f7c = 1;
            DAT_00471f7d = 0;
            piVar6 = (int *)0x380a48;
            DAT_00471f78 = temp_v18;
          }
        }
        if ((DAT_00471f70 & 1) == 0) {
          temp_v7 = __cxa_guard_acquire(&DAT_00471f70,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_00471f84 = 0;
            DAT_00471f85 = 0;
            DAT_00471f80 = temp_v22;
            piVar6 = (int *)0x380a44;
          }
        }
        if ((DAT_00471f6c & 1) == 0) {
          temp_v7 = __cxa_guard_acquire(&DAT_00471f6c,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_00471f8c = 1;
            DAT_00471f8d = 0;
            piVar6 = (int *)0x380a4c;
            DAT_00471f88 = (unsigned char *)temp_v9;
          }
        }
        if ((DAT_00471f68 & 1) == 0) {
          temp_v7 = __cxa_guard_acquire(&DAT_00471f68,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_00471f94 = 1;
            DAT_00471f95 = 0;
            piVar6 = (int *)0x380a54;
            DAT_00471f90 = temp_v19;
          }
        }
        if ((DAT_00471f64 & 1) == 0) {
          temp_v7 = __cxa_guard_acquire(&DAT_00471f64,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_00471f9c = 1;
            DAT_00471f9d = 0;
            DAT_00471f98 = &DAT_00422034;
            piVar6 = (int *)0x380a58;
          }
        }
        if ((DAT_00471f60 & 1) == 0) {
          temp_v7 = __cxa_guard_acquire(&DAT_00471f60,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_00471fa4 = 1;
            DAT_00471fa5 = 0;
            DAT_00471fa0 = temp_v17;
            piVar6 = (int *)0x380a5c;
          }
        }
        if ((DAT_00471f5c & 1) == 0) {
          temp_v7 = __cxa_guard_acquire(&DAT_00471f5c,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_00471fac = 0;
            DAT_00471fad = 0;
            DAT_00471fa8 = temp_v16;
            piVar6 = (int *)0x380a50;
          }
        }
        if ((DAT_00471f58 & 1) == 0) {
          temp_v7 = __cxa_guard_acquire(&DAT_00471f58,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_00471fb4 = 1;
            DAT_00471fb5 = 1;
            piVar6 = (int *)0x36e0ec;
            DAT_00471fb0 = &DAT_00421704;
          }
        }
        if ((DAT_00471f54 & 1) == 0) {
          temp_v7 = __cxa_guard_acquire(&DAT_00471f54,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_00471fbc = 1;
            DAT_00471fbd = 1;
            DAT_00471fb8 = temp_v20;
            piVar6 = (int *)0x36e0e8;
          }
        }
        if ((DAT_00471f50 & 1) == 0) {
          temp_v7 = __cxa_guard_acquire(&DAT_00471f50,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_00471fc4 = 1;
            DAT_00471fc5 = 1;
            DAT_00471fc0 = temp_v23;
            piVar6 = (int *)0x36ce6c;
          }
        }
        if ((DAT_00471f4c & 1) == 0) {
          temp_v7 = __cxa_guard_acquire(&DAT_00471f4c,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_00471fcc = 1;
            DAT_00471fcd = 1;
            DAT_00471fc8 = temp_v21;
            piVar6 = (int *)0x36e0f8;
          }
        }
        if ((DAT_00471f48 & 1) == 0) {
          temp_v7 = __cxa_guard_acquire(&DAT_00471f48,piVar6);
          piVar6 = (int *)((unsigned long long)temp_v7 >> 0x20);
          if ((int)temp_v7 != 0) {
            DAT_004e9dbc = 1;
            DAT_004e9dbd = 1;
            DAT_004e9db8 = temp_v24;
            DAT_004e9dc4 = 1;
            DAT_004e9dc5 = 1;
            piVar6 = (int *)0x36aab0;
            DAT_004e9dc0 = &DAT_00421704;
          }
        }
        switch(temp_v5) {
        case 0:
          puVar10 = (unsigned int *)&DAT_00471f78;
          break;
        case 1:
          puVar10 = (unsigned int *)&DAT_00471f80;
          break;
        case 2:
          puVar10 = (unsigned int *)&DAT_00471f88;
          break;
        case 3:
          puVar10 = (unsigned int *)&DAT_00471fa0;
          break;
        case 4:
          puVar10 = (unsigned int *)&DAT_004e9db8;
          break;
        case 5:
          puVar10 = (unsigned int *)&DAT_00471f90;
          break;
        case 6:
          puVar10 = (unsigned int *)&DAT_00471f98;
          break;
        case 7:
          puVar10 = (unsigned int *)&DAT_00471fa8;
          break;
        case 8:
          puVar10 = (unsigned int *)&DAT_00471fb0;
          break;
        case 9:
          puVar10 = (unsigned int *)&DAT_00471fc0;
          break;
        case 10:
          puVar10 = (unsigned int *)&DAT_00471fb8;
          break;
        case 0xb:
          puVar10 = (unsigned int *)&DAT_00471fc8;
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
    piVar6 = (int *)(**(romwright_code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),temp_v0,4);
    if (piVar6 == (int *)0x0) {
      temp_v4 = -0x80000000;
    }
    if (-1 < temp_v4) {
      ppiVar2 = (int **)(param_1 + 0x20);
      temp_v8 = *(int **)(param_1 + 4);
      temp_v9 = piVar6;
      temp_v11 = temp_v6 & 0x3fffffff;
      if (ppiVar2 != &temp_v8) {
        temp_v9 = *(int **)(param_1 + 0x24);
        temp_v11 = *(unsigned int *)(param_1 + 0x2c);
        temp_v8 = *ppiVar2;
        *ppiVar2 = *(int **)(param_1 + 4);
        *(int **)(param_1 + 0x24) = piVar6;
        *(int **)(param_1 + 0x28) = piVar6;
        *(unsigned int *)(param_1 + 0x2c) = temp_v6 & 0x3fffffff;
      }
      temp_v10 = temp_v9;
      piVar6 = (int *)0x0;
      if (temp_v8 != (int *)0x0) {
        piVar6 = temp_v9;
      }
      if (temp_v8 != (int *)0x0 && piVar6 != (int *)0x0) {
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
          if ((*(int *)(param_1 + 0x20) == 0) ||
             ((*(unsigned int *)(param_1 + 0x2c) & 0xc0000000) != 0x40000000)) {
            temp_v1 = *(unsigned int *)(param_1 + 0x2c) & 0x3fffffff;
          }
          else {
            puVar5 = (unsigned int *)
                     (**(romwright_code **)(**(int **)(param_1 + 0x20) + 8))
                               (*(int **)(param_1 + 0x20),temp_v0,0x20);
            puVar10 = *(unsigned int **)(param_1 + 0x24);
            puVar8 = *(unsigned int **)(param_1 + 0x28);
            temp_v3 = 0;
            puVar3 = puVar5;
            if (puVar10 != puVar8) {
              do {
                if (puVar3 != (unsigned int *)0x0) {
                  *puVar3 = *puVar10;
                }
                puVar10 = puVar10 + 1;
                puVar3 = puVar3 + 1;
              } while (puVar10 != puVar8);
              puVar10 = *(unsigned int **)(param_1 + 0x24);
              temp_v3 = (*(int *)(param_1 + 0x28) - (int)puVar10) >> 2;
            }
            if (puVar10 != (unsigned int *)0x0) {
              (**(romwright_code **)(**(int **)(param_1 + 0x20) + 0xc))();
            }
            *(unsigned int **)(param_1 + 0x28) = puVar5 + temp_v3;
            *(unsigned int **)(param_1 + 0x24) = puVar5;
            *(unsigned int *)(param_1 + 0x2c) = (*(unsigned int *)(param_1 + 0x2c) & 0xc0000000) | temp_v6;
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
        ppiVar2 = (int **)(param_1 + 0x30);
        temp_v14 = *(int **)(param_1 + 4);
        temp_v15 = temp_v3;
        temp_v17 = (unsigned char *)(temp_v6 & 0x3fffffff);
        if (ppiVar2 != &temp_v14) {
          temp_v15 = *(int *)(param_1 + 0x34);
          temp_v17 = *(unsigned char **)(param_1 + 0x3c);
          temp_v14 = *ppiVar2;
          *(unsigned int *)(param_1 + 0x3c) = temp_v6 & 0x3fffffff;
          *ppiVar2 = *(int **)(param_1 + 4);
          *(int *)(param_1 + 0x34) = temp_v3;
          *(int *)(param_1 + 0x38) = temp_v3;
        }
        temp_v16 = (unsigned char *)temp_v15;
        temp_v3 = 0;
        if (temp_v14 != (int *)0x0) {
          temp_v3 = temp_v15;
        }
        if (temp_v14 != (int *)0x0 && temp_v3 != 0) {
          (**(romwright_code **)(*temp_v14 + 0xc))(temp_v14,temp_v15);
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
            if ((*(int *)(param_1 + 0x30) == 0) ||
               ((*(unsigned int *)(param_1 + 0x3c) & 0xc0000000) != 0x40000000)) {
              temp_v1 = *(unsigned int *)(param_1 + 0x3c) & 0x3fffffff;
            }
            else {
              puVar5 = (unsigned int *)
                       (**(romwright_code **)(**(int **)(param_1 + 0x30) + 8))
                                 (*(int **)(param_1 + 0x30),temp_v0,0x20);
              temp_v3 = 0;
              puVar10 = *(unsigned int **)(param_1 + 0x34);
              puVar8 = *(unsigned int **)(param_1 + 0x38);
              puVar3 = puVar5;
              if (puVar10 != puVar8) {
                do {
                  if (puVar3 != (unsigned int *)0x0) {
                    *puVar3 = *puVar10;
                  }
                  puVar10 = puVar10 + 1;
                  puVar3 = puVar3 + 1;
                } while (puVar10 != puVar8);
                temp_v3 = (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) >> 2;
              }
              if (*(int *)(param_1 + 0x34) != 0) {
                (**(romwright_code **)(**(int **)(param_1 + 0x30) + 0xc))();
              }
              *(unsigned int **)(param_1 + 0x38) = puVar5 + temp_v3;
              *(unsigned int **)(param_1 + 0x34) = puVar5;
              *(unsigned int *)(param_1 + 0x3c) = (*(unsigned int *)(param_1 + 0x3c) & 0xc0000000) | temp_v6;
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
          ppiVar2 = (int **)(param_1 + 0x40);
          temp_v14 = *(int **)(param_1 + 4);
          temp_v15 = temp_v3;
          temp_v17 = (unsigned char *)(temp_v6 & 0x3fffffff);
          if (ppiVar2 != &temp_v14) {
            temp_v15 = *(int *)(param_1 + 0x44);
            temp_v17 = *(unsigned char **)(param_1 + 0x4c);
            temp_v14 = *ppiVar2;
            *(unsigned int *)(param_1 + 0x4c) = temp_v6 & 0x3fffffff;
            *ppiVar2 = *(int **)(param_1 + 4);
            *(int *)(param_1 + 0x44) = temp_v3;
            *(int *)(param_1 + 0x48) = temp_v3;
          }
          temp_v16 = (unsigned char *)temp_v15;
          temp_v3 = 0;
          if (temp_v14 != (int *)0x0) {
            temp_v3 = temp_v15;
          }
          if (temp_v14 != (int *)0x0 && temp_v3 != 0) {
            (**(romwright_code **)(*temp_v14 + 0xc))(temp_v14,temp_v15);
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
              if ((*(int *)(param_1 + 0x40) == 0) ||
                 ((*(unsigned int *)(param_1 + 0x4c) & 0xc0000000) != 0x40000000)) {
                temp_v1 = *(unsigned int *)(param_1 + 0x4c) & 0x3fffffff;
              }
              else {
                puVar5 = (unsigned int *)
                         (**(romwright_code **)(**(int **)(param_1 + 0x40) + 8))
                                   (*(int **)(param_1 + 0x40),temp_v0,0x20);
                puVar10 = *(unsigned int **)(param_1 + 0x44);
                puVar8 = *(unsigned int **)(param_1 + 0x48);
                temp_v3 = 0;
                puVar3 = puVar5;
                if (puVar10 != puVar8) {
                  do {
                    if (puVar3 != (unsigned int *)0x0) {
                      *puVar3 = *puVar10;
                    }
                    puVar10 = puVar10 + 1;
                    puVar3 = puVar3 + 1;
                  } while (puVar10 != puVar8);
                  puVar10 = *(unsigned int **)(param_1 + 0x44);
                  temp_v3 = (*(int *)(param_1 + 0x48) - (int)puVar10) >> 2;
                }
                if (puVar10 != (unsigned int *)0x0) {
                  (**(romwright_code **)(**(int **)(param_1 + 0x40) + 0xc))();
                }
                *(unsigned int **)(param_1 + 0x48) = puVar5 + temp_v3;
                *(unsigned int **)(param_1 + 0x44) = puVar5;
                *(unsigned int *)(param_1 + 0x4c) = (*(unsigned int *)(param_1 + 0x4c) & 0xc0000000) | temp_v6;
              }
            }
            temp_v3 = *(int *)(param_1 + 0x44) + temp_v1 * 4;
          }
          *(int *)(param_1 + 0x48) = temp_v3;
          if (temp_v25 != 0) {
            temp_v3 = (**(romwright_code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),temp_v0,4);
            if (temp_v3 == 0) {
              temp_v4 = -0x80000000;
            }
            if (-1 < temp_v4) {
              ppiVar2 = (int **)(param_1 + 0x50);
              temp_v14 = *(int **)(param_1 + 4);
              temp_v15 = temp_v3;
              temp_v17 = (unsigned char *)(temp_v6 & 0x3fffffff);
              if (ppiVar2 != &temp_v14) {
                temp_v15 = *(int *)(param_1 + 0x54);
                temp_v17 = *(unsigned char **)(param_1 + 0x5c);
                temp_v14 = *ppiVar2;
                *(unsigned int *)(param_1 + 0x5c) = temp_v6 & 0x3fffffff;
                *ppiVar2 = *(int **)(param_1 + 4);
                *(int *)(param_1 + 0x54) = temp_v3;
                *(int *)(param_1 + 0x58) = temp_v3;
              }
              temp_v16 = (unsigned char *)temp_v15;
              temp_v3 = 0;
              if (temp_v14 != (int *)0x0) {
                temp_v3 = temp_v15;
              }
              if (temp_v14 != (int *)0x0 && temp_v3 != 0) {
                (**(romwright_code **)(*temp_v14 + 0xc))(temp_v14,temp_v15);
              }
              if ((int)temp_v6 < (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54)) >> 2) {
                if ((int)temp_v6 < 0) {
                  temp_v6 = 0;
                }
                *(unsigned int *)(param_1 + 0x58) = *(int *)(param_1 + 0x54) + temp_v6 * 4;
              }
              else {
                if ((int)(*(unsigned int *)(param_1 + 0x5c) & 0x3fffffff) < (int)temp_v6) {
                  if ((*(int *)(param_1 + 0x50) == 0) ||
                     ((*(unsigned int *)(param_1 + 0x5c) & 0xc0000000) != 0x40000000)) {
                    temp_v6 = *(unsigned int *)(param_1 + 0x5c) & 0x3fffffff;
                  }
                  else {
                    puVar5 = (unsigned int *)
                             (**(romwright_code **)(**(int **)(param_1 + 0x50) + 8))
                                       (*(int **)(param_1 + 0x50),temp_v0,0x20);
                    temp_v0 = 0;
                    puVar10 = *(unsigned int **)(param_1 + 0x54);
                    puVar8 = *(unsigned int **)(param_1 + 0x58);
                    puVar3 = puVar5;
                    if (puVar10 != puVar8) {
                      do {
                        if (puVar3 != (unsigned int *)0x0) {
                          *puVar3 = *puVar10;
                        }
                        puVar10 = puVar10 + 1;
                        puVar3 = puVar3 + 1;
                      } while (puVar10 != puVar8);
                      temp_v0 = (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54)) >> 2;
                    }
                    if (*(int *)(param_1 + 0x54) != 0) {
                      (**(romwright_code **)(**(int **)(param_1 + 0x50) + 0xc))();
                    }
                    *(unsigned int **)(param_1 + 0x58) = puVar5 + temp_v0;
                    *(unsigned int **)(param_1 + 0x54) = puVar5;
                    *(unsigned int *)(param_1 + 0x5c) = (*(unsigned int *)(param_1 + 0x5c) & 0xc0000000) | temp_v6;
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

} /* extern "C" */
