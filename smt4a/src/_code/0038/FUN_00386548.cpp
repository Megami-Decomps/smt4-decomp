/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00386548` (_code @ 0x386548, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b5314(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_00386714; /* 0x386714 */
extern signed char DAT_005b3bf5; /* 0x5b3bf5 */
extern int DAT_005b3c74; /* 0x5b3c74 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_001b5314. */
extern unsigned int wstrlen(unsigned char *);
extern int nw_ut_ResDicPatricia_Get(int *, unsigned char *, unsigned int);


unsigned int FUN_00386548(int *param_1)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  int temp_v3;
  int *piVar7;
  int temp_v4;
  int *piVar9;
  int temp_v5;
  int temp_v6 [8];
  
  temp_v0 = 0;
  if ((DAT_005b3bf5 != '\0') && (temp_v0 = 0, DAT_005b3c74 != 0)) {
    if (param_1 != (int *)0x0) {
      piVar1 = (int *)(**(romwright_code **)(*param_1 + 8))(param_1);
      do {
        piVar7 = param_1;
        if (piVar1 == (int *)0x5c0f18) goto LAB_003865ac;
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)0x0);
    }
    piVar7 = (int *)0x0;
LAB_003865ac:
    temp_v3 = 0;
    if (0 < (piVar7[0x5a] - piVar7[0x59]) >> 2) {
      do {
        temp_v4 = *(int *)(piVar7[0x59] + temp_v3 * 4);
        piVar1 = (int *)(*(int *)(temp_v4 + 8) + 0x14);
        temp_v6[0] = *piVar1;
        if (temp_v6[0] != 0) {
          temp_v6[0] = (int)piVar1 + temp_v6[0];
        }
        else {
          temp_v6[0] = 0;
        }
        if (temp_v6[0] != 0) {
          temp_v0 = wstrlen(&LAB_00386714);
          temp_v1 = nw_ut_ResDicPatricia_Get(temp_v6,&LAB_00386714,temp_v0);
          if (temp_v1 != 0) {
            temp_v2 = *(int *)(temp_v1 + 0xc);
            if (temp_v2 == 0) {
              puVar4 = (unsigned int *)0x0;
            }
            else {
              puVar4 = (unsigned int *)(temp_v1 + 0xc + temp_v2);
            }
          }
          else {
            puVar4 = (unsigned int *)0x0;
          }
        }
        else {
          puVar4 = (unsigned int *)0x0;
        }
        if (puVar4 != (unsigned int *)0x0) {
          if ((*puVar4 & 0x20000000) == 0) {
            puVar4 = (unsigned int *)0x0;
          }
          if ((int)puVar4[4] >= 1) {
            if ((puVar4[4] == 2) && (DAT_005b3bf5 != '\0')) {
              FUN_001b5314(temp_v4,1);
            }
            if (param_1 != (int *)0x0) {
              piVar1 = (int *)(**(romwright_code **)(*param_1 + 8))(param_1);
              do {
                piVar9 = param_1;
                if (piVar1 == (int *)0x5c0f34) goto LAB_003866b4;
                piVar1 = (int *)*piVar1;
              } while (piVar1 != (int *)0x0);
            }
            piVar9 = (int *)0x0;
LAB_003866b4:
            temp_v5 = romwright_piece_3_1((((unsigned int)(temp_v5) >> 8) & 0xffffffU),1);
            piVar9[0x87] = temp_v5;
          }
          else if (DAT_005b3bf5 != '\0') {
            FUN_001b5314(temp_v4,1);
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (piVar7[0x5a] - piVar7[0x59]) >> 2);
    }
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
