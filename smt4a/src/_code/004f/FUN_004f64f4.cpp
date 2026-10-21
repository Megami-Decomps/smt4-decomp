/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f64f4` (_code @ 0x4f64f4, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_003478dc(unsigned int, char *);
int FUN_003afd30(void);
int FUN_004f7cd0(int);
int FUN_004f8790(int);
int FUN_004f9278(int);
int FUN_004f9e0c(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: btlGetMainState. */
extern unsigned int FUN_002e4c2c(int);
/* Supplied declaration required: FUN_003478dc. */
/* Supplied declaration required: FUN_003afd30. */
extern int btlScriptUnitHasFlags(void);
/* Supplied declaration required: FUN_004f7cd0. */
/* Supplied declaration required: FUN_004f8790. */
/* Supplied declaration required: FUN_004f9278. */
/* Supplied declaration required: FUN_004f9e0c. */


void FUN_004f64f4(int param_1)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  btlGetMainState();
  temp_v1 = btlScriptUnitHasFlags();
  if (temp_v1 != 0) {
    return;
  }
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c;
    pcVar5 = *(char **)(temp_v2 + 0x2820);
    temp_v0 = *pcVar5;
    temp_v4 = temp_v0 == 'V';
    if (temp_v4) {
      temp_v0 = pcVar5[1];
    }
    temp_v5 = temp_v4 && temp_v0 == 'E';
    if (temp_v4 && temp_v0 == 'E') {
      temp_v5 = pcVar5[2] == 'R';
    }
    if (temp_v5) {
      temp_v3 = FUN_002e4c2c(temp_v2 + 0x2824);
      *(char *)(temp_v2 + 0x281c) = (char)temp_v3;
      FUN_003478dc(temp_v3,pcVar5);
      *(char *)(temp_v2 + 0x281c) = (char)temp_v3;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0xb);
  FUN_004f8790(param_1);
  FUN_004f7cd0(param_1);
  FUN_004f9278(param_1);
  FUN_004f9e0c(param_1);
  FUN_003afd30();
  return;
}

} /* extern "C" */
