/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Message_ShowConfirmAndApply` (_code @ 0x2ed380, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001695a0(void);
int FUN_00237898(int, int, unsigned int, int, int);
int FUN_00275bb0(int);
int FUN_00275fe4(...);
int FUN_003dea6c(int, int, int);
int FUN_00417c24(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_001695a0. */
extern int dataTableValueOrZero(unsigned int);
extern unsigned short scrGetArg(unsigned int);
/* Supplied declaration required: FUN_00237898. */
/* Supplied declaration required: FUN_00275bb0. */
/* Supplied declaration required: FUN_00275fe4. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003dea6c. */
/* Supplied declaration required: FUN_00417c24. */


unsigned char scrComm_Message_ShowConfirmAndApply(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    FUN_00275fe4(0);
    FUN_003dea6c(temp_v0,0,1);
    FUN_001695a0();
  }
  temp_v1 = dataTableValueOrZero(0x1e);
  temp_v2 = FUN_00275bb0(0);
  FUN_00237898(temp_v1,0x10,temp_v2,6,0);
  temp_v3 = FUN_00275bb0(0);
  FUN_00275fe4(0,temp_v3 + 1);
  if (temp_v1 == 1) {
    FUN_00417c24(temp_v0);
  }
  return temp_v1 == 1;
}

} /* extern "C" */
