/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_QuestCenter_RegisterKind2` (_code @ 0x3c10bc, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(int);
int FUN_00235dc4(int *, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: FUN_00235dc4. */
extern unsigned int scrGetArg(unsigned int);


unsigned int scrComm_QuestCenter_RegisterKind2(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_14;
  unsigned int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  jyoucyuGetTableEntry(0);
  temp_v3 = 2;
  temp_v2 = temp_v0;
  uStack_14 = temp_v1;
  FUN_00235dc4(&temp_v2,0xc);
  return 1;
}

} /* extern "C" */
