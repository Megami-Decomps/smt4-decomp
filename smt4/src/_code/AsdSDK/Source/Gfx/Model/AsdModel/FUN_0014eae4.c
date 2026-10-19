/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014eae4` (_code @ 0x14eae4, 0x254 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern unsigned char LAB_0014ed40; /* 0x14ed40 */
extern signed char DAT_00464af1; /* 0x464af1 */
extern int DAT_00464b70; /* 0x464b70 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_002a3204. */
extern unsigned int FUN_002c30c4(unsigned char *);
extern int nw_ut_ResDicPatricia_Get(int *, unsigned char *, unsigned int);


unsigned int FUN_0014eae4(int *param_1)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  int *piVar5;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *temp_v9;
  unsigned int temp_v10;
  int *temp_v11;
  
  temp_v10 = 0;
  if ((DAT_00464af1 != '\0') && (temp_v10 = 0, DAT_00464b70 != 0)) {
    temp_v10 = 0;
    temp_v11 = param_1;
    if (param_1 != (int *)0x0) {
      piVar1 = (int *)(**(romwright_code **)(*param_1 + 8))(param_1);
      do {
        if (piVar1 == (int *)0x472180) goto LAB_0014eb50;
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)0x0);
    }
    param_1 = (int *)0x0;
LAB_0014eb50:
    temp_v4 = 0;
    if (0 < (param_1[0x5a] - param_1[0x59]) >> 2) {
      do {
        temp_v6 = 0;
        temp_v2 = 0;
        temp_v5 = *(int *)(param_1[0x59] + temp_v4 * 4);
        temp_v0 = *(int *)(temp_v5 + 8);
        do {
          piVar1 = (int *)(temp_v2 * 4 + 0x274 + temp_v0);
          temp_v3 = *piVar1;
          if (temp_v3 != 0) {
            temp_v3 = (int)piVar1 + temp_v3;
          }
          else {
            temp_v3 = 0;
          }
          if (temp_v3 != 0) {
            if (*(int *)(temp_v3 + 8) != 0) {
              temp_v3 = temp_v3 + 8 + *(int *)(temp_v3 + 8);
            }
            else {
              temp_v3 = 0;
            }
            if (temp_v3 != 0) {
              temp_v6 = temp_v6 + 1;
            }
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 3);
        if ((temp_v6 >= 2) && ((*(unsigned int *)(temp_v0 + 0x170) & 0xff) == 3)) {
          temp_v8 = *(int *)(temp_v0 + 0x14);
          if (temp_v8 != 0) {
            temp_v8 = temp_v0 + 0x14 + temp_v8;
          }
          else {
            temp_v8 = 0;
          }
          temp_v9 = &temp_v8;
          if (temp_v8 != 0) {
            temp_v1 = FUN_002c30c4(&LAB_0014ed40);
            temp_v0 = nw_ut_ResDicPatricia_Get(temp_v9,&LAB_0014ed40,temp_v1);
            if (temp_v0 != 0) {
              temp_v2 = *(int *)(temp_v0 + 0xc);
              if (temp_v2 == 0) {
                puVar4 = (unsigned int *)0x0;
              }
              else {
                puVar4 = (unsigned int *)(temp_v0 + 0xc + temp_v2);
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
              if (puVar4[4] == 2) {
                if (DAT_00464af1 != '\0') {
                  FUN_002a3204(temp_v5,0);
                }
                temp_v10 = 1;
              }
              piVar1 = temp_v11;
              if (temp_v11 != (int *)0x0) {
                piVar5 = (int *)(**(romwright_code **)(*temp_v11 + 8))(temp_v11);
                do {
                  if (piVar5 == (int *)0x472288) goto LAB_0014ecd8;
                  piVar5 = (int *)*piVar5;
                } while (piVar5 != (int *)0x0);
              }
              piVar1 = (int *)0x0;
LAB_0014ecd8:
              temp_v7 = romwright_piece_3_1((((unsigned int)(temp_v7) >> 8) & 0xffffffU),1);
              piVar1[0x87] = temp_v7;
            }
            else {
              if (DAT_00464af1 != '\0') {
                FUN_002a3204(temp_v5,0);
              }
              temp_v10 = 1;
            }
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < (param_1[0x5a] - param_1[0x59]) >> 2);
    }
  }
  return temp_v10;
}
