/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb5c8` (_code @ 0x2fb5c8, 0x1c4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_002fb794; /* 0x2fb794 */
extern signed char DAT_00464af1; /* 0x464af1 */
extern int DAT_00464b70; /* 0x464b70 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_002a34a4. */
extern int FUN_002c31e8(int *, unsigned char *, unsigned int);
extern unsigned int FUN_002c3290(unsigned char *);


unsigned int FUN_002fb5c8(int *param_1)

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
  if ((DAT_00464af1 != '\0') && (temp_v0 = 0, DAT_00464b70 != 0)) {
    if (param_1 != (int *)0x0) {
      piVar1 = (int *)(**(romwright_code **)(*param_1 + 8))(param_1);
      do {
        piVar7 = param_1;
        if (piVar1 == (int *)0x472180) goto LAB_002fb62c;
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)0x0);
    }
    piVar7 = (int *)0x0;
LAB_002fb62c:
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
          temp_v0 = FUN_002c3290(&LAB_002fb794);
          temp_v1 = FUN_002c31e8(temp_v6,&LAB_002fb794,temp_v0);
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
            if ((puVar4[4] == 2) && (DAT_00464af1 != '\0')) {
              FUN_002a34a4(temp_v4,1);
            }
            if (param_1 != (int *)0x0) {
              piVar1 = (int *)(**(romwright_code **)(*param_1 + 8))(param_1);
              do {
                piVar9 = param_1;
                if (piVar1 == (int *)0x472288) goto LAB_002fb734;
                piVar1 = (int *)*piVar1;
              } while (piVar1 != (int *)0x0);
            }
            piVar9 = (int *)0x0;
LAB_002fb734:
            temp_v5 = romwright_piece_3_1(temp_v5._1_3_,1);
            piVar9[0x87] = temp_v5;
          }
          else if (DAT_00464af1 != '\0') {
            FUN_002a34a4(temp_v4,1);
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (piVar7[0x5a] - piVar7[0x59]) >> 2);
    }
    temp_v0 = 1;
  }
  return temp_v0;
}
