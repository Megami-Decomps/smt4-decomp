/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bd9e8` (_code @ 0x3bd9e8, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022abe0(void);
int btlMainFindEntryByListedId(unsigned int, unsigned int);
int passiveSkillLookupRecord(void);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Supplied declaration required: FUN_0022abe0. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: passiveSkillLookupRecord. */
extern unsigned int btlGetMainState(void);


void FUN_003bd9e8(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned short temp_v2 [20];
  
  temp_v0 = btlGetMainState();
  btlMainFindEntryByListedId(temp_v0,param_1);
  temp_v2[0] = 0;
  temp_v2[1] = 0;
  temp_v2[2] = 0;
  temp_v2[3] = 0;
  temp_v2[4] = 0;
  temp_v2[5] = 0;
  temp_v2[6] = 0;
  temp_v2[7] = 0;
  temp_v2[8] = 0;
  temp_v2[9] = 0;
  FUN_0022abe0();
  temp_v1 = 0;
  do {
    if (temp_v2[temp_v1] != 0) {
      passiveSkillLookupRecord();
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 9);
  return;
}

} /* extern "C" */
