/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035edd4` (_code @ 0x35edd4, 0x1e4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_6_stack;

extern unsigned char LAB_0035efb8; /* 0x35efb8 */

/* Supplied declaration required: FUN_00238c44. */
extern int FUN_0035b0c4(unsigned int *, int, unsigned int);
/* Supplied declaration required: FUN_0035b364. */
extern int FUN_0035c23c(void);
/* Supplied declaration required: FUN_0035c32c. */
extern int FUN_0035c64c(void);
/* Supplied declaration required: FUN_0035d914. */
extern int FUN_0035d9d0(void);
/* Supplied declaration required: FUN_0035e548. */
extern int FUN_0035e794(void);
/* Supplied declaration required: FUN_0035ec98. */
/* Supplied declaration required: FUN_0035ecb8. */


unsigned int *
FUN_0035edd4(int param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5,unsigned int param_6)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6 [5];
  int temp_v7;
  int iStack_34;
  int iStack_30;
  unsigned int uStack_2c;
  unsigned int temp_v8;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  temp_v8 = param_4;
  FUN_0035ecb8(temp_v6);
  FUN_0035ec98(temp_v6,*(unsigned int *)(param_1 + 0x20));
  puVar1 = temp_v6;
  FUN_00238c44(puVar1,2);
  temp_v0 = 0;
  if (puVar1 != (unsigned int *)0x0) {
    temp_v0 = FUN_0035c23c();
  }
  puVar1 = temp_v6;
  FUN_00238c44(puVar1,1);
  temp_v1 = 0;
  if (puVar1 != (unsigned int *)0x0) {
    temp_v1 = FUN_0035c64c();
  }
  puVar1 = temp_v6;
  FUN_00238c44(puVar1,2);
  temp_v2 = 0;
  if (puVar1 != (unsigned int *)0x0) {
    temp_v2 = FUN_0035d9d0();
  }
  puVar1 = temp_v6;
  FUN_00238c44(puVar1,2);
  temp_v3 = 0;
  if (puVar1 != (unsigned int *)0x0) {
    temp_v3 = FUN_0035e794();
  }
  puVar1 = temp_v6;
  FUN_00238c44(puVar1,1);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = 0;
  }
  temp_v4 = temp_v0;
  FUN_0035b364(temp_v0,temp_v6,param_3,temp_v8);
  if (temp_v4 == 0) {
    temp_v4 = temp_v1;
    FUN_0035c32c(temp_v1,temp_v0,&LAB_0035efb8);
    if (temp_v4 != 0) {
      temp_v5 = 0;
      if (temp_v5 < param_6) {
        do {
          if (((*(unsigned int *)(param_2 + temp_v5 * 4) & (1 << *(sbyte *)(param_1 + 0x1b))) == 0) &&
             (temp_v2 = temp_v1, FUN_0035c32c(temp_v1,temp_v0,*(unsigned int *)(param_5 + temp_v5 * 4)),
             temp_v2 == 1)) {
            *(unsigned int *)(param_2 + temp_v5 * 4) =
                 *(unsigned int *)(param_2 + temp_v5 * 4) | (1 << *(sbyte *)(param_1 + 0x1b));
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < param_6);
      }
    }
    else {
      temp_v1 = temp_v2;
      FUN_0035d914(temp_v2,temp_v6,temp_v0);
      if (temp_v1 == 0) {
        temp_v7 = *(unsigned int *)(temp_v2 + 0x10);
        temp_v0 = temp_v3;
        FUN_0035e548(temp_v3,temp_v6,temp_v2 + 4,&temp_v7);
        if ((temp_v0 != 0) && (temp_v5 = 0, param_6 != 0)) {
          do {
            if (((*(unsigned int *)(param_2 + temp_v5 * 4) & (1 << *(sbyte *)(param_1 + 0x1b))) == 0) &&
               (temp_v0 = FUN_0035b0c4(puVar1,temp_v3 + 4,*(unsigned int *)(param_5 + temp_v5 * 4)),
               temp_v0 != 0)) {
              *(unsigned int *)(param_2 + temp_v5 * 4) =
                   *(unsigned int *)(param_2 + temp_v5 * 4) | (1 << *(sbyte *)(param_1 + 0x1b));
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < param_6);
        }
      }
    }
  }
  return temp_v6;
}
