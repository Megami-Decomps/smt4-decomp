/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111f48` (_code @ 0x111f48, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_001036ed; /* 0x1036ed */
extern unsigned char LAB_00111fc0; /* 0x111fc0 */
extern unsigned int DAT_00594a18; /* 0x594a18 */

/* Supplied declaration required: FUN_002e75fa. */
extern unsigned int FUN_002ea3c0(int *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002ea6fc(int, unsigned char *);
/* Supplied declaration required: FUN_002f6740. */
/* Supplied declaration required: FUN_002f7cb0. */


void FUN_00111f48(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned char temp_v2 [4];
  int temp_v3;
  int temp_v4 [3];
  int aiStack_20 [5];
  
  temp_v2[0] = 1;
  temp_v0 = FUN_002ea6fc(param_1 + 0x7c,temp_v2);
  if (temp_v0 != 0) {
    temp_v1 = 0x111cb1;
    piVar2 = &temp_v3;
  }
  else {
    temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x78) + 0x2c))();
    if (temp_v0 != 0) {
      temp_v3 = param_1;
      FUN_002f6740(temp_v4,*(unsigned int *)(param_1 + 0x78),&LAB_001036ed,&temp_v3,DAT_00594a18);
      if (-1 < temp_v4[0]) {
        FUN_002e75fa(param_1);
        FUN_002f7cb0(param_1);
      }
    }
    temp_v1 = 0x111fcd;
    piVar2 = aiStack_20;
  }
  temp_v1 = FUN_002ea3c0(piVar2,temp_v1,0,&LAB_00111fc0);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}
