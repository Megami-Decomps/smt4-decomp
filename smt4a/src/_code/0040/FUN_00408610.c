/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00408610` (_code @ 0x408610, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp98; /* 0x98: local_98 */
} param_1_stack;

/* Supplied declaration required: FUN_00137ee0. */
extern int FUN_00229c9c(void);
extern unsigned int FUN_00239288(void);
extern int FUN_00240a6c(void);
/* Supplied declaration required: FUN_00268250. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_00320c64. */
/* Supplied declaration required: FUN_003332d8. */
/* Supplied declaration required: FUN_003416a0. */
/* Supplied declaration required: FUN_0034dd9c. */
extern unsigned int FUN_00371b10(unsigned int);
extern int FUN_0038b310(void);
/* Supplied declaration required: FUN_003c113c. */


void FUN_00408610(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [132];
  
  switch(*(unsigned int *)(param_1 + 8)) {
  case 0:
    FUN_003c113c();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  case 1:
    temp_v2 = FUN_0038b310();
    if (temp_v2 == 0) {
      return;
    }
    FUN_00320c64();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  case 2:
    temp_v2 = FUN_00240a6c();
    if (temp_v2 == 0) {
      return;
    }
    FUN_0034dd9c();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  case 3:
    temp_v0 = FUN_00239288();
    FUN_002e6dd0(temp_v0,0x80);
    FUN_002e6dd0(temp_v3,0x80);
    temp_v1 = FUN_00371b10(0);
    FUN_002e342c(temp_v3,temp_v1);
    temp_v2 = 0;
    FUN_003416a0(0,temp_v3);
    if (temp_v2 != 0) {
      FUN_00268250(5,0,0,temp_v0,0x80);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      temp_v2 = FUN_00229c9c();
      if (temp_v2 == 0) {
        return;
      }
      FUN_003332d8();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      FUN_00137ee0(1,0);
      *(unsigned char *)(param_1 + 4) = 1;
      temp_v2 = *(int *)(param_1 + 8) + 1;
      break;
    }
    temp_v2 = *(int *)(param_1 + 8) + 2;
    break;
  case 4:
    temp_v2 = FUN_00229c9c();
    if (temp_v2 == 0) {
      return;
    }
    FUN_003332d8();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  case 5:
    FUN_00137ee0(1,0);
    *(unsigned char *)(param_1 + 4) = 1;
    temp_v2 = *(int *)(param_1 + 8) + 1;
    break;
  default:
    return;
  }
  *(int *)(param_1 + 8) = temp_v2;
  return;
}
