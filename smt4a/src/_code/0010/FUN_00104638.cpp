/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104638` (_code @ 0x104638, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea198(void);
int FUN_002ea3d0(int, unsigned int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
} param_1_stack;

extern unsigned char LAB_0010428d; /* 0x10428d */
extern unsigned char LAB_00104690; /* 0x104690 */

/* Supplied declaration required: FUN_002ea198. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */


void FUN_00104638(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [16];
  
  piVar1 = &temp_v1;
  temp_v3 = 0;
  temp_v4 = 0;
  FUN_002ea198();
  if ((((int)piVar1 < 0) || (temp_v2 != 200)) || (temp_v1 != 1)) {
    puVar3 = &LAB_0010428d;
  }
  else if (*(int *)(param_1 + 0xf0) == 0) {
    puVar3 = (unsigned char *)0x10406d;
  }
  else {
    puVar3 = (unsigned char *)0x104351;
  }
  temp_v0 = FUN_002ea3c0(temp_v5,puVar3,0,&LAB_00104690);
  FUN_002ea3d0(param_1,temp_v0);
  return;
}

} /* extern "C" */
