/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Message_ConfirmAndApplySimple` (_code @ 0x31e4d8, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001695a0(void);
int FUN_00237898(int, int, unsigned int, int, int);
int FUN_00275bb0(int);
int FUN_00275fe4(...);
int FUN_003dea6c(unsigned int, int, int);
int FUN_00418070(unsigned int, int);
int FUN_00418714(unsigned int);
int optionsClearFlag1(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_001695a0. */
extern int dataTableValueOrZero(unsigned int);
/* Supplied declaration required: FUN_00237898. */
/* Supplied declaration required: FUN_00275bb0. */
/* Supplied declaration required: FUN_00275fe4. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003dea6c. */
/* Supplied declaration required: FUN_00418070. */
extern int FUN_004186a4(void);
extern unsigned int FUN_004186e0(void);
/* Supplied declaration required: FUN_00418714. */
/* Supplied declaration required: optionsClearFlag1. */


unsigned int scrComm_Message_ConfirmAndApplySimple(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    temp_v0 = FUN_004186a4();
    if (temp_v0 == 0) {
      return 1;
    }
    FUN_00275fe4(0,0);
    FUN_00275fe4(1,0);
  }
  temp_v1 = dataTableValueOrZero(0x1e);
  temp_v0 = FUN_00275bb0(0);
  if (temp_v0 == 0) {
    temp_v2 = FUN_004186e0();
    FUN_003dea6c(temp_v2,0,1);
    FUN_001695a0();
    temp_v3 = FUN_00275bb0(1);
    temp_v1 = FUN_00237898(temp_v1,2,temp_v3,6,0);
    temp_v0 = FUN_00275bb0(1);
    FUN_00275fe4(1,temp_v0 + 1);
    if (temp_v1 == 1) {
      FUN_00275fe4(1,0);
      FUN_00418070(temp_v2,0);
      FUN_00418714(temp_v2);
      optionsClearFlag1();
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
