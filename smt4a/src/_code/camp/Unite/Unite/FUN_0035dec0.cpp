/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035dec0` (_code @ 0x35dec0, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(...);
int FUN_003fe86c(...);
int FUN_0040a908(...);
int FUN_0040a918(...);
int FUN_0040aa6c(...);
int FUN_0040aad4(...);
int FUN_0040ace8(...);
int FUN_004ff920(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: FUN_00178b04. */
extern unsigned int asdVramBGetFreeBytes(void);
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_004ff920. */


void FUN_0035dec0(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_004ff920(*(unsigned int *)(*(int *)(param_1 + 0x9208) + 4));
  if (*(int *)(param_1 + 0x920c) == 0) {
    temp_v3 = 0x20000;
    temp_v0 = asdVramBGetFreeBytes();
    if (temp_v0 >= 0x20001) {
      temp_v3 = 0x30000;
    }
    temp_v1 = 0x20;
    FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\Unite\\Unite.cpp",0x23e8);
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = FUN_0040ac08();
    }
    *(unsigned int *)(param_1 + 0x920c) = temp_v2;
    FUN_0040aa6c();
    FUN_0040a908(*(unsigned int *)(param_1 + 0x920c),temp_v3);
    FUN_0040a918(*(unsigned int *)(param_1 + 0x920c),temp_v3);
    FUN_0040aad4(*(unsigned int *)(param_1 + 0x920c),0);
    temp_v1 = *(int *)(*(int *)(param_1 + 0x920c) + 4);
    FUN_0040ace8(g_handleRegistry,temp_v1);
    FUN_003fe86c(temp_v1,0,2);
    *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) & 0xfffffffc;
    FUN_003fe86c(temp_v1,0,2);
    return;
  }
  return;
}

} /* extern "C" */
