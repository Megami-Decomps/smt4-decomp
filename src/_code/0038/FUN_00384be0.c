/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00384be0` (_code @ 0x384be0, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_00384ce0; /* 0x384ce0 */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_002356ec. */
/* Supplied declaration required: FUN_002638fc. */
/* Supplied declaration required: FUN_0026a96c. */
extern int FUN_0026b7cc(void);
extern int FUN_00282d98(void);
/* Supplied declaration required: FUN_00289984. */
/* Supplied declaration required: FUN_0029c660. */
extern int FUN_0029f0cc(void);
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002c1830(unsigned int);


void FUN_00384be0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 == 0) {
    FUN_002356ec(param_1,&LAB_00384ce0);
    FUN_002b8b78(0x9e);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return;
  }
  if (temp_v0 != 1) {
    if (((temp_v0 == 2) && (temp_v0 = FUN_00282d98(), temp_v0 == 0)) &&
       (temp_v0 = FUN_0026b7cc(), temp_v0 != 0)) {
      *(unsigned int *)(param_1 + 4) = 0x10;
      *(unsigned int *)(param_1 + 8) = 0;
    }
  }
  else {
    FUN_002638fc(0);
    temp_v0 = FUN_0019dfbc(**(unsigned int **)(param_1 + 0x5c4));
    if (temp_v0 == 2) {
      FUN_0029c660(0,10,0xff);
      FUN_0029c660(1,10,0xff);
      FUN_0026a96c();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return;
    }
    temp_v0 = FUN_002c1830(1);
    if ((temp_v0 != 0) && (temp_v0 = FUN_0029f0cc(), temp_v0 != 0)) {
      FUN_00289984();
      return;
    }
  }
  return;
}
