/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003da010` (_code @ 0x3da010, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024679c(void);
int FUN_00249e54(unsigned int, char *);
int btlGetMainState(void);
int FUN_003db3a4(int);
int FUN_003dbc1c(int);
int FUN_003dc2d8(int);
int FUN_003dcd10(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0024679c. */
/* Supplied declaration required: FUN_00249e54. */
extern unsigned int FUN_0024a6b0(int);
extern int FUN_00293230(void);
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_003db3a4. */
/* Supplied declaration required: FUN_003dbc1c. */
/* Supplied declaration required: FUN_003dc2d8. */
/* Supplied declaration required: FUN_003dcd10. */


void FUN_003da010(int param_1)

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
  temp_v1 = FUN_00293230();
  if (temp_v1 != 0) {
    return;
  }
  temp_v1 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 0x8c;
    pcVar5 = *(char **)(temp_v2 + 0x25c4);
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
      temp_v3 = FUN_0024a6b0(temp_v2 + 0x25c8);
      *(char *)(temp_v2 + 0x25c0) = (char)temp_v3;
      FUN_00249e54(temp_v3,pcVar5);
      *(char *)(temp_v2 + 0x25c0) = (char)temp_v3;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0xb);
  FUN_003dbc1c(param_1);
  FUN_003db3a4(param_1);
  FUN_003dc2d8(param_1);
  FUN_003dcd10(param_1);
  FUN_0024679c();
  return;
}

} /* extern "C" */
