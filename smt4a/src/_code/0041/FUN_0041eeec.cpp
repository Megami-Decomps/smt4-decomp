/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041eeec` (_code @ 0x41eeec, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);
int FUN_0019de98(int, unsigned int);
int FUN_001aea28(unsigned int, unsigned int);
int FUN_0022e774(void);
int FUN_002f0384(int);
int FUN_0041de6c(int);
int FUN_0041f020(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern unsigned char DAT_00588e14; /* 0x588e14 */

/* Supplied declaration required: FUN_00187180. */
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_002f0384. */
extern int FUN_00334158(void);
/* Supplied declaration required: FUN_0041de6c. */
/* Supplied declaration required: FUN_0041f020. */


void FUN_0041eeec(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  
  temp_v2 = FUN_00334158();
  if ((temp_v2 != 0) && (*(char *)(*(int *)(param_1 + 0x2f8) + param_1 + 0x2ec) != '\0')) {
    FUN_002f0384(1);
    *(unsigned char *)(param_1 + 0x68) = 1;
  }
  FUN_0041de6c(param_1);
  if ((*(signed char *)((unsigned char *)&DAT_00588e14 + 0x1)) != '\0') {
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(param_1 + 0x58) + 4));
      if (*(int **)(param_1 + 0x58) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x58) + 4))();
        *(unsigned int *)(param_1 + 0x58) = 0;
      }
    }
    FUN_0022e774();
    temp_v0 = *(unsigned char *)(param_1 + 7);
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned char *)(param_1 + 7) = 0x10;
    *(unsigned char *)(param_1 + 0xd) = temp_v0;
    *(unsigned char *)(param_1 + 0xc) = 0xc;
  }
  else if (*(char *)(param_1 + 0x12) == '\0') {
    temp_v1 = *(char *)(param_1 + 5);
    FUN_00187180(0x3d,0);
    temp_v2 = FUN_00192798();
    FUN_0019de98(temp_v2 + temp_v1 * 0x54 + 0x14,0xf4f4f4ff);
    temp_v0 = *(unsigned char *)(param_1 + 7);
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned char *)(param_1 + 7) = 4;
    *(unsigned char *)(param_1 + 0xd) = temp_v0;
    *(unsigned char *)(param_1 + 0xc) = 0;
    *(unsigned char *)(param_1 + 0x44c) = 0;
    *(unsigned char *)(param_1 + 0x44d) = 0;
    *(unsigned char *)(param_1 + 0x44e) = 0;
    FUN_0041f020(param_1,1);
    return;
  }
  return;
}

} /* extern "C" */
