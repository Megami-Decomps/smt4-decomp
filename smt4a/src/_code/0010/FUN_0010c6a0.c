/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c6a0` (_code @ 0x10c6a0, 0xf6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_0010c144. */
/* Supplied declaration required: FUN_002e74bc. */
/* Supplied declaration required: FUN_002e74c4. */
/* Supplied declaration required: FUN_002e7908. */
extern int FUN_002eac34(unsigned int);
/* Supplied declaration required: FUN_002ed280. */
extern int FUN_002ed420(int, int, unsigned int);
extern int FUN_002f5c4c(int, unsigned int);
/* Supplied declaration required: FUN_002f5c90. */


/* WARNING: Type propagation algorithm not settling */

void FUN_0010c6a0(int param_1,int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int *temp_v2 [3];
  int temp_v3 [4];
  unsigned int temp_v4;
  int temp_v5;
  int iStack_20;
  int iStack_1c;
  unsigned int *temp_v6;
  
  if (*(int *)(*(int *)(param_2 + 8) + 0x10) != 0) {
    temp_v3[2] = 0;
    temp_v2[0] = temp_v3;
    temp_v3[0] = 0;
    temp_v5 = param_1;
    iStack_20 = param_2;
    iStack_1c = param_3;
    temp_v6 = param_4;
    FUN_002f5c90(param_1,param_2,param_3,temp_v3 + 2);
    if ((param_1 != 0) && (temp_v0 = FUN_002ed420(param_2,param_3 + 0x28,0x10), temp_v0 != 0)) {
      *(unsigned int *)(param_3 + 0x38) = 0x10;
      temp_v0 = *(int *)(param_2 + 8);
      if ((temp_v3[2] == 0) ||
         (temp_v1 = temp_v5, FUN_0010c144(temp_v5,param_2,param_3), temp_v1 != 0)) {
        temp_v2[0] = (int *)romwright_piece_3_1(temp_v2[0]._1_3_,*(unsigned char *)(param_3 + 0x25));
        temp_v4 = (unsigned int)(*(unsigned char *)(param_3 + 0x25) >> 4);
        if (temp_v4 < 0xc) {
          FUN_002e74bc(*(unsigned int *)(param_3 + 0xd8));
          if (temp_v3[0] != 0) {
            if (*(unsigned int *)(temp_v0 + 0x10) < (unsigned int)(*(int *)(param_2 + 0xc) + temp_v3[0])) {
              return;
            }
            temp_v1 = *(int *)(param_3 + 0xd8);
            FUN_002e74c4(temp_v1,*(int *)(temp_v0 + 0xc) + *(int *)(temp_v0 + 0x18) +
                               *(int *)(param_2 + 0xc),temp_v3[0],0xffffffff);
            if ((temp_v1 != 0) &&
               (FUN_002ed280(param_2,temp_v3[0]), *(int *)(*(int *)(param_3 + 0xd8) + 0x10) != 0))
            {
              temp_v0 = FUN_002eac34(temp_v4);
              piVar3 = *(int **)(temp_v0 + 0x14);
              if (piVar3 != (int *)0x0) {
                (**(romwright_code **)(*piVar3 + 0x14))(piVar3,*(unsigned int *)(param_3 + 0xd8));
              }
              temp_v0 = FUN_002eac34(temp_v4);
              if ((*(int *)(temp_v0 + 0x10) != 0) &&
                 (temp_v0 = FUN_002f5c4c(*(int *)(temp_v0 + 0x10),*(unsigned int *)(param_3 + 0xd8)),
                 temp_v0 != 0)) {
                temp_v3[1] = 0x8005000c;
                FUN_002e7908(temp_v2,temp_v3 + 1);
                return;
              }
            }
          }
          if (temp_v6 != (unsigned int *)0x0) {
            *temp_v6 = *(unsigned int *)(param_2 + 0xc);
          }
        }
      }
    }
  }
  return;
}
