/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3b88` (_code @ 0x3a3b8c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(...);
int FUN_003ca5a4(...);
int FUN_0040a908(...);
int FUN_0040a918(...);
int moriModelContentCreateBinding(...);
int FUN_0040a9a0(...);
int FUN_0040ab9c(...);
int FUN_00416168(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_003ca5a4. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: moriModelContentCreateBinding. */
/* Supplied declaration required: FUN_0040a9a0. */
/* Supplied declaration required: FUN_0040ab9c. */
extern int modelListInit(void);
/* Supplied declaration required: FUN_00416168. */


void FUN_003a3b88(int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = *param_1;
  if (temp_v2 != 0) {
    temp_v3 = *(unsigned int *)(temp_v2 + 0x4ef4);
    temp_v0 = 0x20;
    FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\lmapMain.cpp",0x265d);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = modelListInit();
    }
    piVar3 = (int *)(temp_v2 + 0x4ef8);
    *piVar3 = temp_v1;
    FUN_0040a908();
    FUN_0040a918(*piVar3,0x20000);
    FUN_0040a9a0(*piVar3,temp_v3);
    FUN_0040ab9c(*(int *)(temp_v2 + 0x4efc),*(unsigned int *)(*piVar3 + 0xc));
    FUN_00416168(*(unsigned int *)(*piVar3 + 0xc),*(unsigned int *)(*(int *)(temp_v2 + 0x4efc) + 0xc));
    moriModelContentCreateBinding(*piVar3);
    *(unsigned int *)(temp_v2 + 0x4ef4) = 0;
    FUN_003ca5a4();
    return;
  }
  return;
}

} /* extern "C" */
