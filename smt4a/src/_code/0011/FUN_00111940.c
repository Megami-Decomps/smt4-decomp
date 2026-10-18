/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111940` (_code @ 0x111940, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_001036b7; /* 0x1036b7 */
extern unsigned char LAB_00111a00; /* 0x111a00 */

extern int FUN_00111594(unsigned int, int);
/* Supplied declaration required: FUN_0011164c. */
/* Supplied declaration required: FUN_002e75fa. */
/* Supplied declaration required: FUN_002e9afe. */
extern unsigned int FUN_002ea3c0(unsigned char **, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002ea6fc(int, unsigned char *);
/* Supplied declaration required: FUN_002f674e. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002fd412. */


void FUN_00111940(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned char *temp_v2;
  int *temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [8];
  int temp_v6;
  unsigned char temp_v7 [16];
  
  piVar3 = (int *)(param_1 + 0x1ac);
  temp_v0 = FUN_00111594(*(unsigned int *)(param_1 + 0x88),*piVar3 + 8);
  if (temp_v0 != 0) {
    *(int *)(param_1 + 0x78) = temp_v0;
    if (*(char *)(param_1 + 0x1a8) != '\0') {
      FUN_0011164c(*(unsigned int *)(param_1 + 0x88),temp_v0);
    }
    temp_v4 = *(unsigned int *)(param_1 + 0x98);
    temp_v3 = &temp_v6;
    temp_v2 = &LAB_001036b7;
    temp_v6 = param_1;
    (**(romwright_code **)(**(int **)(param_1 + 0x78) + 0x70))
              (temp_v7,*(int **)(param_1 + 0x78),*(unsigned int *)(param_1 + 0x17c),
               *(unsigned int *)(param_1 + 0x180));
    temp_v0 = param_1 + 0x7c;
    FUN_002e9afe(temp_v0,temp_v7);
    temp_v5[0] = 0;
    temp_v0 = FUN_002ea6fc(temp_v0,temp_v5);
    if (temp_v0 == 0) {
      FUN_002e75fa(param_1);
      FUN_002f7cb0(param_1);
      temp_v1 = 0x111f49;
      temp_v1 = FUN_002ea3c0(&temp_v2,temp_v1,0,&LAB_00111a00);
      FUN_002ea3d0(param_1,temp_v1);
      return;
    }
    FUN_002f674e(*(unsigned int *)(param_1 + 0x78));
    *(unsigned int *)(param_1 + 0x78) = 0;
  }
  FUN_002fd412(param_1);
  *piVar3 = *(int *)*piVar3;
  temp_v1 = 0x111a09;
  temp_v1 = FUN_002ea3c0(&temp_v2,temp_v1,0,&LAB_00111a00);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}
