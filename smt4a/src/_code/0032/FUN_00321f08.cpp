/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321f08` (_code @ 0x321f08, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00145e24(int, unsigned int);
int FUN_00157558(void);
int FUN_00409718(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00145e24. */
/* Supplied declaration required: FUN_00157558. */
extern int FUN_001acf08(void);
/* Supplied declaration required: FUN_00409718. */


void FUN_00321f08(int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  (**(romwright_code **)(*(int *)(param_1 + 0x18) * 0x18 + 0x5c1080))(param_1);
  temp_v1 = FUN_001acf08();
  *(int *)(param_1 + 0x1c) = temp_v1 + *(int *)(param_1 + 0x1c);
  temp_v0 = *(char *)(DAT_0059dbb4 + 0x5f8);
  if (temp_v0 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00321fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*(int *)(param_1 + 0x18) * 0x18 + 0x5c1084))(param_1);
    return;
  }
  temp_v2 = *(unsigned int *)(DAT_0059dbb4 + 0x6fc);
  FUN_00157558();
  (**(romwright_code **)(*(int *)(param_1 + 0x18) * 0x18 + 0x5c1084))(param_1);
  if (temp_v0 != '\x03' && temp_v0 != '\x04') {
    if (temp_v0 == '\x05') {
      FUN_00145e24(DAT_0059dbb4,temp_v2);
      return;
    }
    return;
  }
  FUN_00409718(DAT_0059dbb4);
  return;
}

} /* extern "C" */
