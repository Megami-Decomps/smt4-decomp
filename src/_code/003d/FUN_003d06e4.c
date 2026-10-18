/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d06e4` (_code @ 0x3d06e4, 0x3d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp1F0; /* 0x1f0: local_1f0 */
    unsigned int sp1F4; /* 0x1f4: local_1f4 */
    unsigned int sp1F8; /* 0x1f8: local_1f8 */
} param_2_stack;

extern unsigned char LAB_001b1a04; /* 0x1b1a04 */
extern int FUN_001e1808(); /* 0x1e1808 */
extern int FUN_002197a0(); /* 0x2197a0 */

/* Supplied declaration required: FUN_002277d4. */
/* Supplied declaration required: FUN_00229998. */
/* Supplied declaration required: FUN_0022abe0. */
extern int FUN_0029a924(unsigned short);
extern int FUN_0029a9d4(unsigned short, unsigned int);
extern int FUN_0029e9cc(unsigned short);
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: FUN_003d10a0. */


void FUN_003d06e4(int *param_1,int param_2)

{
/* irregular: 3 goto(s); 8 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int aiStack_1ec [109];
  unsigned short temp_v5 [10];
  
  temp_v4 = 0;
  temp_v2 = 0;
  temp_v3 = 0x6d;
  puVar2 = *(unsigned int **)(*param_1 + 0x1fc0);
  do {
    if ((*puVar2 & 0x400) != 0) {
      aiStack_1ec[temp_v4] = *(int *)(*param_1 + 0x1fc0) + temp_v2 * 0x288;
      temp_v4 = temp_v4 + 1;
    }
    temp_v3 = temp_v3 - 1;
    puVar2 = puVar2 + 0xa2;
    temp_v2 = temp_v2 + 1;
  } while (temp_v3 != 0);
  FUN_002b7bca(aiStack_1ec,temp_v4,4,&LAB_001b1a04);
  piVar3 = param_1;
  FUN_003d10a0(param_1,param_2,aiStack_1ec,temp_v4,1);
  if (piVar3 == (int *)0x0) {
    temp_v5[0] = 0;
    temp_v5[1] = 0;
    temp_v5[2] = 0;
    temp_v5[3] = 0;
    temp_v5[4] = 0;
    temp_v5[5] = 0;
    temp_v5[6] = 0;
    temp_v5[7] = 0;
    temp_v5[8] = 0;
    temp_v5[9] = 0;
    FUN_0022abe0(*(unsigned int *)(param_2 + 0x20),temp_v5);
    if ((**(unsigned int **)(param_2 + 0x20) & 2) != 0) {
      FUN_002b7bca(temp_v5,9,2,FUN_002197a0);
    }
    else {
      FUN_002b7bca(temp_v5,9,2,FUN_001e1808);
    }
    temp_v2 = 0;
    do {
      temp_v1 = (unsigned int)temp_v5[temp_v2];
      if ((temp_v1 != 0) && (FUN_002ae164(), temp_v1 != 0)) {
        temp_v0 = temp_v5[temp_v2];
        if ((**(unsigned int **)(param_2 + 0x20) & 2) != 0) {
          temp_v3 = FUN_0029a9d4(temp_v0,1);
          if (temp_v3 <= *(short *)(*(int *)(param_2 + 0x28) + 0xec)) {
LAB_003d0860:
            piVar3 = param_1;
            FUN_002277d4(param_1,param_2,temp_v1,aiStack_1ec,temp_v4,1,0);
            if (piVar3 != (int *)0x0) {
              return;
            }
          }
        }
        else {
          temp_v3 = FUN_0029a924(temp_v0);
          if (temp_v3 <= *(short *)(*(int *)(param_2 + 0x28) + 0xec)) goto LAB_003d0860;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 9);
    piVar3 = param_1;
    FUN_003d10a0(param_1,param_2,aiStack_1ec,temp_v4,0);
    if (piVar3 == (int *)0x0) {
      temp_v2 = 0;
      do {
        temp_v1 = (unsigned int)temp_v5[temp_v2];
        if ((temp_v1 != 0) && (FUN_002ae164(), temp_v1 != 0)) {
          temp_v0 = temp_v5[temp_v2];
          if ((**(unsigned int **)(param_2 + 0x20) & 2) != 0) {
            temp_v3 = FUN_0029a9d4(temp_v0,1);
            if (temp_v3 <= *(short *)(*(int *)(param_2 + 0x28) + 0xec)) {
LAB_003d0930:
              piVar3 = param_1;
              FUN_002277d4(param_1,param_2,temp_v1,aiStack_1ec,temp_v4,0,1);
              if (piVar3 != (int *)0x0) {
                return;
              }
            }
          }
          else {
            temp_v3 = FUN_0029a924(temp_v0);
            if (temp_v3 <= *(short *)(*(int *)(param_2 + 0x28) + 0xec)) goto LAB_003d0930;
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 9);
      temp_v2 = 0;
      do {
        temp_v1 = (unsigned int)temp_v5[temp_v2];
        if ((temp_v1 != 0) && (FUN_002ae164(), temp_v1 != 0)) {
          temp_v0 = temp_v5[temp_v2];
          if ((**(unsigned int **)(param_2 + 0x20) & 2) != 0) {
            temp_v3 = FUN_0029a9d4(temp_v0,1);
            if (temp_v3 <= *(short *)(*(int *)(param_2 + 0x28) + 0xec)) {
LAB_003d09dc:
              piVar3 = param_1;
              FUN_002277d4(param_1,param_2,temp_v1,aiStack_1ec,temp_v4,0,2);
              if (piVar3 != (int *)0x0) {
                return;
              }
            }
          }
          else {
            temp_v3 = FUN_0029a924(temp_v0);
            if (temp_v3 <= *(short *)(*(int *)(param_2 + 0x28) + 0xec)) goto LAB_003d09dc;
          }
        }
        temp_v2 = temp_v2 + 1;
        if (temp_v2 >= 9) {
          temp_v1 = 0;
          if (temp_v1 < temp_v4) {
            do {
              puVar2 = (unsigned int *)aiStack_1ec[temp_v1];
              if (((*puVar2 & 0x400) != 0) &&
                 (temp_v2 = FUN_0029e9cc(*(unsigned short *)((int)puVar2 + 0xce)), temp_v2 != 0)) {
                *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14c) = 6;
                *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14e) = 0;
                return;
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < temp_v4);
          }
          *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14c) = 1;
          *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14e) =
               (unsigned short)((**(unsigned int **)(param_2 + 0x20) & 6) != 0);
          FUN_00229998(param_1);
          return;
        }
      } while( 1 );
    }
  }
  return;
}
