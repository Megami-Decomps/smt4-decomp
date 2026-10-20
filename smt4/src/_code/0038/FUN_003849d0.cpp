/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003849d0` (_code @ 0x3849d0, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00235554(int, unsigned char *);
int FUN_002636d0(int);
int FUN_0026a704(void);
int FUN_0028971c(void);
int FUN_0029c3c0(int, int, int);
int FUN_002b8838(int);
int FUN_002c1658(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_00384ad0; /* 0x384ad0 */

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_00235554. */
/* Supplied declaration required: FUN_002636d0. */
/* Supplied declaration required: FUN_0026a704. */
extern int FUN_0026b564(void);
extern int FUN_00282b28(void);
/* Supplied declaration required: FUN_0028971c. */
/* Supplied declaration required: FUN_0029c3c0. */
extern int FUN_0029ee2c(void);
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002c1658. */


void FUN_003849d0(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 == 0) {
    FUN_00235554(param_1,&LAB_00384ad0);
    FUN_002b8838(0x9e);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return;
  }
  if (temp_v0 != 1) {
    if (((temp_v0 == 2) && (temp_v0 = FUN_00282b28(), temp_v0 == 0)) &&
       (temp_v0 = FUN_0026b564(), temp_v0 != 0)) {
      *(unsigned int *)(param_1 + 4) = 0x10;
      *(unsigned int *)(param_1 + 8) = 0;
    }
  }
  else {
    FUN_002636d0(0);
    temp_v0 = FUN_0019e0c0(**(unsigned int **)(param_1 + 0x5c4));
    if (temp_v0 == 2) {
      FUN_0029c3c0(0,10,0xff);
      FUN_0029c3c0(1,10,0xff);
      FUN_0026a704();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return;
    }
    temp_v0 = 1;
    FUN_002c1658();
    if ((temp_v0 != 0) && (temp_v0 = FUN_0029ee2c(), temp_v0 != 0)) {
      FUN_0028971c();
      return;
    }
  }
  return;
}

} /* extern "C" */
