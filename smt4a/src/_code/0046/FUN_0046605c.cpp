/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046605c` (_code @ 0x46605c, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a08d0(int);
int FUN_001af214(void);
int FUN_001b6660(unsigned int, int);
int FUN_001cc644(int);
int FUN_0045b96c(void);
int FUN_00460a5c(unsigned int);
int FUN_004617e0(unsigned int);
int nw_ut_internal_LinkListImpl_insert(int, int, int);

/* Supplied declaration required: FUN_001a08d0. */
/* Supplied declaration required: FUN_001af214. */
/* Supplied declaration required: FUN_001b6660. */
extern unsigned int FUN_001c35d8(void);
/* Supplied declaration required: FUN_001cc644. */
/* Supplied declaration required: FUN_0045b96c. */
/* Supplied declaration required: FUN_00460a5c. */
/* Supplied declaration required: FUN_004617e0. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_0046605c(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  *(unsigned char *)(param_1 + 0xf) = 1;
  FUN_001cc644(param_1);
  if (*(char *)(param_1 + 0xc) != '\0') {
    temp_v0 = FUN_001c35d8();
    FUN_001b6660(temp_v0,param_1 + 0x44);
    *(unsigned char *)(param_1 + 0xc) = 0;
  }
  temp_v2 = 0;
  do {
    FUN_00460a5c(param_1 + temp_v2 * 0xc + 0x134);
    FUN_004617e0(param_1 + temp_v2 * 0x10 + 0xf4);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  if (*(char *)(param_1 + 0x165) != '\0') {
    FUN_001a08d0(param_1);
    *(unsigned char *)(param_1 + 0x165) = 0;
  }
  temp_v3 = *(int *)(param_1 + 0x178);
  if (temp_v3 != 0) {
    temp_v4 = *(int *)(param_1 + 0x174);
    temp_v1 = temp_v3 + 0xc;
    FUN_001af214();
    if (temp_v1 != 0) {
      if (*(int *)(temp_v3 + 0x78) != 0) {
        FUN_0045b96c();
      }
      nw_ut_internal_LinkListImpl_insert(temp_v4 + 0x14,temp_v4 + 0x18,temp_v3 + 0x80);
    }
    else {
      nw_ut_internal_LinkListImpl_insert(temp_v4 + 0x20,temp_v4 + 0x24,temp_v3 + 0x80);
    }
    *(unsigned int *)(param_1 + 0x178) = 0;
  }
  return;
}

} /* extern "C" */
