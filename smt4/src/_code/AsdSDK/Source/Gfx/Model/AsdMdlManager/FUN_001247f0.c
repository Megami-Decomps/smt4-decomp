/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001247f0` (_code @ 0x1247f0, 0x3bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int DAT_004dad60; /* 0x4dad60 */
extern int DAT_004dad6c; /* 0x4dad6c */
extern int DAT_004dae28; /* 0x4dae28 */

extern unsigned int FUN_0013840c(unsigned int, int *);
extern int FUN_00138594(void);
/* Supplied declaration required: FUN_00138c14. */
/* Supplied declaration required: FUN_00138d0c. */
/* Supplied declaration required: FUN_0014ed58. */
/* Supplied declaration required: FUN_002a91f4. */
/* Supplied declaration required: FUN_002b265c. */
/* Supplied declaration required: FUN_002b26d4. */
/* Supplied declaration required: FUN_002b2770. */
/* Supplied declaration required: FUN_002b2988. */
/* Supplied declaration required: FUN_002b2ae8. */
/* Supplied declaration required: FUN_002b2b08. */
extern unsigned int FUN_002b2b64(unsigned int *);


void FUN_001247f0(void)

{
/* irregular: irregular input(s): in_s0; 10 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar7;
  int temp_v4;
  unsigned int *puVar9;
  int temp_v5;
  unsigned int *puVar11;
  int temp_v6;
  unsigned int *puVar13;
  int temp_v7;
  unsigned char temp_v8;
  float in_s0;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  int temp_v13;
  int iStack_3c;
  int iStack_38;
  
  temp_v4 = DAT_004dad60;
  if (DAT_004dad60 != 0) {
    temp_v12 = 1.0f;
    temp_v11 = 0.0f;
    temp_v7 = DAT_004dad60;
    do {
      puVar13 = *(unsigned int **)(temp_v7 + 8);
      temp_v7 = *(int *)(temp_v7 + 0x18);
      if ((puVar13 != (unsigned int *)0x0) && (((*puVar13 & 0x200002) == 0 || ((*puVar13 & 8) != 0)))) {
        puVar9 = (unsigned int *)puVar13[2];
        if ((*puVar9 & 1) != 0) {
          in_s0 = (float)puVar9[0x10] + temp_v12;
          puVar9[0x10] = (unsigned int)in_s0;
          if (((float)puVar9[0x11] == temp_v11) ||
             (temp_v9 = in_s0 / (float)puVar9[0x11], (int)temp_v9 >= 0x3f800001)) {
            temp_v9 = temp_v12;
          }
          temp_v0 = puVar9[0xb];
          temp_v10 = temp_v12 - temp_v9;
          if (*(int *)(temp_v0 + 0x228) == 0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = *(int **)(*(int *)(*(int *)(temp_v0 + 0x28) + 0x1c) +
                              *(int *)(temp_v0 + 0x22c) * *(int *)(*(int *)(temp_v0 + 0x28) + 0x28) * 4)
            ;
          }
          if (piVar7 != (int *)0x0) {
            piVar2 = (int *)(**(romwright_code **)(*piVar7 + 8))(piVar7);
            do {
              if (piVar2 == (int *)0x4722a0) {
                if (piVar7 != (int *)0x0) {
                  if ((int)temp_v9 >= 0x3f800000) {
                    *(float *)piVar7[9] = temp_v9;
                    *(float *)piVar7[0xd] = temp_v9;
                    *(float *)(piVar7[9] + 4) = temp_v11;
                    *(float *)(piVar7[0xd] + 4) = temp_v11;
                    *(unsigned char *)((int)piVar7 + 0x41) = 1;
                    temp_v0 = puVar9[0x14];
                    puVar11 = (unsigned int *)puVar9[0x13];
                    puVar9[0x14] = 0;
                    puVar9[0x13] = temp_v0;
                    *(unsigned int *)piVar7[5] = temp_v0;
                    *(unsigned int *)(piVar7[5] + 4) = 0;
                    in_s0 = temp_v11;
                    if (puVar11 != (unsigned int *)0x0) {
                      temp_v9 = temp_v11;
                      (**(romwright_code **)*puVar11)(puVar11);
                      (**(romwright_code **)(*(int *)puVar11[1] + 0xc))((int *)puVar11[1],puVar11);
                      in_s0 = temp_v11;
                      temp_v11 = temp_v9;
                    }
                    *puVar9 = *puVar9 & 0xfffffffe;
                    FUN_0014ed58(puVar9,puVar9[0xe]);
                  }
                  else {
                    *(float *)piVar7[9] = temp_v10;
                    *(float *)piVar7[0xd] = temp_v10;
                    *(float *)(piVar7[9] + 4) = temp_v9;
                    *(float *)(piVar7[0xd] + 4) = temp_v9;
                    *(unsigned char *)((int)piVar7 + 0x41) = 1;
                  }
                }
                break;
              }
              piVar2 = (int *)*piVar2;
            } while (piVar2 != (int *)0x0);
          }
        }
        temp_v0 = FUN_002b2b64(puVar9);
        if (in_s0 == temp_v11) {
          temp_v0 = puVar9[0x28];
          temp_v4 = 0;
          if (temp_v4 < (int)temp_v0) {
            do {
              puVar3 = (unsigned int *)(puVar9[0x29] + temp_v4 * 0xc);
              if ((*puVar3 & 2) != 0) {
                FUN_002b2b08(puVar3[2]);
              }
              temp_v0 = puVar9[0x28];
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < (int)temp_v0);
          }
        }
        if (puVar13 != (unsigned int *)0x0) {
          temp_v0 = puVar13[2];
        }
        if (puVar13 != (unsigned int *)0x0 && temp_v0 != 0) {
          temp_v8 = *(int *)(temp_v0 + 4) != 0;
          temp_v3 = 0;
          if (temp_v8) {
            temp_v3 = puVar13[6];
          }
          if (temp_v8 && temp_v3 != 0) {
            temp_v4 = *(int *)(temp_v0 + 0x28);
            temp_v6 = 0;
            if (temp_v6 < temp_v4) {
              do {
                temp_v0 = 0;
                piVar7 = (int *)(puVar13[6] + temp_v6 * 0x1c);
                if (piVar7[1] != 0) {
                  do {
                    FUN_00138d0c(*piVar7 + temp_v0 * 0x84,puVar13,temp_v6,temp_v0);
                    temp_v0 = temp_v0 + 1;
                  } while (temp_v0 < (unsigned int)piVar7[1]);
                }
                FUN_002b2ae8(puVar13[2],temp_v6,&temp_v13);
                temp_v6 = temp_v6 + 1;
                piVar7[2] = temp_v13;
                piVar7[3] = iStack_3c;
                piVar7[4] = iStack_38;
              } while (temp_v6 < temp_v4);
            }
          }
        }
      }
      temp_v4 = DAT_004dad60;
    } while (temp_v7 != 0);
  }
  while (temp_v4 != 0) {
    piVar7 = (int *)(temp_v4 + 8);
    temp_v4 = *(int *)(temp_v4 + 0x18);
    if (((unsigned int *)*piVar7 != (unsigned int *)0x0) &&
       ((temp_v0 = *(unsigned int *)*piVar7, (temp_v0 & 0x200002) == 0 || ((temp_v0 & 8) != 0)))) {
      FUN_00138c14();
    }
  }
  temp_v4 = 0;
  temp_v7 = DAT_004dad6c;
  do {
    do {
      temp_v6 = temp_v7;
      if (temp_v6 == 0) {
        return;
      }
      temp_v5 = *(int *)(temp_v6 + 8);
      temp_v7 = *(int *)(temp_v6 + 0x18);
    } while ((*(int *)(temp_v5 + 4) == 0) || (temp_v1 = FUN_00138594(), temp_v1 == 0));
    temp_v2 = FUN_0013840c(*(unsigned int *)(temp_v5 + 4),&temp_v13);
    FUN_002b2988(temp_v2,temp_v13);
    *(unsigned int *)(*(int *)(temp_v5 + 8) + 4) = temp_v2;
    FUN_002a91f4(*(int *)(temp_v5 + 8),*(unsigned int *)(*(int *)(temp_v5 + 8) + 8) & 0xffff);
    FUN_002b2770(temp_v5);
    FUN_002b26d4(&DAT_004dad6c,temp_v6);
    FUN_002b265c(&DAT_004dad60,temp_v5,0);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < DAT_004dae28);
  return;
}
