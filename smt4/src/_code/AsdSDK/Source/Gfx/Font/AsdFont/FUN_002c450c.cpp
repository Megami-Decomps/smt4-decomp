/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c450c` (_code @ 0x2c450c, 0x384 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00121c60(void);
int FUN_002bd540(void);
int asdTextureCreate(void);
int FUN_002c0894(unsigned int);
int asdOperatorNew(void);
int asdMemFree(...);
int asdMemoryAlloc(int, int, int, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_00464a70; /* 0x464a70 */
extern unsigned int *DAT_00464a74; /* 0x464a74 */

/* Supplied declaration required: FUN_00121c60. */
extern int FUN_00121e38(void);
/* Supplied declaration required: FUN_002bd540. */
/* Supplied declaration required: asdTextureCreate. */
/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdMemoryAlloc. */


unsigned int FUN_002c450c(unsigned int *param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  int *piVar7;
  int temp_v5;
  int *piVar9;
  int temp_v6;
  int *piVar11;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  
  puVar4 = (unsigned int *)&DAT_00464a70;
  if (DAT_00464a70 != 0) {
    puVar4 = DAT_00464a74;
  }
  if ((DAT_00464a70 != 0 && param_1 < puVar4) &&
     (piVar11 = (int *)(DAT_00464a70 + (int)param_1 * 0x2c), piVar11 != (int *)0x0)) {
    if (*piVar11 != 0) {
      if (piVar11[3] != 0) {
        if (piVar11[4] != 0) {
          temp_v7 = 0;
          do {
            *(unsigned int *)(*(int *)(piVar11[3] + temp_v7 * 4) + 0x24) = 0;
            FUN_002c0894(*(unsigned int *)(piVar11[3] + temp_v7 * 4));
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < (unsigned int)piVar11[4]);
        }
        asdMemFree(piVar11[3]);
        piVar11[3] = 0;
      }
      if ((int *)piVar11[2] != (int *)0x0) {
        (**(romwright_code **)(*(int *)piVar11[2] + 4))();
        piVar11[2] = 0;
      }
      if (*piVar11 != 0) {
        asdMemFree();
        *piVar11 = 0;
      }
      piVar11[1] = 0;
    }
    temp_v3 = 0x18;
    *piVar11 = param_2;
    asdOperatorNew();
    temp_v4 = 0;
    if (temp_v3 != 0) {
      temp_v4 = FUN_00121e38();
    }
    piVar11[2] = temp_v4;
    FUN_00121c60();
    if (temp_v4 != 0) {
      temp_v4 = *piVar11;
      piVar9 = (int *)0x0;
      temp_v3 = 0;
      piVar7 = (int *)(temp_v4 + (unsigned int)*(unsigned short *)(temp_v4 + 6));
      if (*(unsigned short *)(temp_v4 + 0x10) != 0) {
        do {
          temp_v3 = temp_v3 + 1;
          if (*piVar7 == 0x464e4946) {
            piVar9 = piVar7 + 2;
          }
          piVar7 = (int *)((int)piVar7 + piVar7[1]);
        } while (temp_v3 < (int)(unsigned int)*(unsigned short *)(temp_v4 + 0x10));
      }
      piVar11[1] = (int)piVar9;
      temp_v3 = piVar9[2];
      temp_v4 = 0x100;
      asdMemoryAlloc(0x100,0x100,0,(unsigned int)*(unsigned short *)(temp_v3 + 8) << 2,1);
      piVar11[3] = temp_v4;
      piVar11[4] = (unsigned int)*(unsigned short *)(temp_v3 + 8);
      piVar11[10] = 0;
      temp_v0 = *(unsigned short *)(temp_v3 + 10);
      *(unsigned short *)(piVar11 + 5) = temp_v0;
      switch(temp_v0) {
      case 0:
        temp_v4 = 0x6752;
        piVar11[8] = 0x20;
        piVar11[7] = 0x1401;
        piVar11[6] = 0x6752;
        break;
      case 1:
        temp_v4 = 0x6754;
        piVar11[8] = 0x18;
        piVar11[7] = 0x1401;
        piVar11[6] = 0x6754;
        break;
      case 2:
        temp_v4 = 0x6752;
        piVar11[8] = 0x10;
        piVar11[7] = 0x8034;
        piVar11[6] = 0x6752;
        break;
      case 3:
        temp_v4 = 0x6754;
        piVar11[8] = 0x10;
        piVar11[7] = 0x8363;
        piVar11[6] = 0x6754;
        break;
      case 4:
        temp_v4 = 0x6752;
        piVar11[8] = 0x10;
        piVar11[7] = 0x8033;
        piVar11[6] = 0x6752;
        break;
      case 5:
        temp_v4 = 0x6758;
        piVar11[8] = 0x10;
        piVar11[7] = 0x1401;
        piVar11[6] = 0x6758;
        break;
      default:
        piVar11[6] = 0x6756;
        piVar11[7] = 0x1401;
        piVar11[8] = 0;
        return 1;
      case 8:
        temp_v4 = 0x6756;
        piVar11[8] = 8;
        piVar11[7] = 0x1401;
        piVar11[6] = 0x6756;
        break;
      case 9:
        temp_v4 = 0x6758;
        piVar11[8] = 8;
        piVar11[7] = 0x6760;
        piVar11[6] = 0x6758;
        break;
      case 0xb:
        temp_v4 = 0x6756;
        piVar11[8] = 4;
        piVar11[7] = 0x6761;
        piVar11[6] = 0x6756;
      }
      if (temp_v4 != 0x6756) {
        *(unsigned char *)(piVar11 + 9) = 1;
      }
      else {
        *(unsigned char *)(piVar11 + 9) = 2;
      }
      temp_v4 = 0;
      temp_v7 = 0;
      if (temp_v7 < (unsigned int)piVar11[4]) {
        do {
          temp_v5 = 0;
          asdTextureCreate();
          *(int *)(piVar11[3] + temp_v7 * 4) = temp_v5;
          temp_v6 = *(int *)(temp_v3 + 0x14);
          temp_v1 = *(unsigned short *)(temp_v3 + 0x10);
          temp_v2 = *(unsigned short *)(temp_v3 + 0x12);
          temp_v8 = piVar11[6];
          temp_v9 = piVar11[7];
          temp_v10 = *(unsigned int *)(temp_v3 + 4);
          *(unsigned int *)(temp_v5 + 0x10) = 0;
          *(unsigned int *)(temp_v5 + 0x14) = (unsigned int)temp_v1;
          *(unsigned int *)(temp_v5 + 0x18) = (unsigned int)temp_v2;
          *(int *)(temp_v5 + 0x1c) = temp_v8;
          *(unsigned int *)(temp_v5 + 4) = 0xde1;
          *(unsigned int *)(temp_v5 + 8) = 0x10000;
          *(unsigned int *)(temp_v5 + 0xc) = 0x2000000;
          *(int *)(temp_v5 + 0x20) = temp_v9;
          *(int *)(temp_v5 + 0x24) = temp_v6 + temp_v4;
          *(unsigned int *)(temp_v5 + 0x28) = temp_v10;
          FUN_002bd540();
          temp_v7 = temp_v7 + 1;
          temp_v4 = temp_v4 + *(int *)(temp_v3 + 4);
        } while (temp_v7 < (unsigned int)piVar11[4]);
      }
    }
    return 1;
  }
  return 0;
}

} /* extern "C" */
