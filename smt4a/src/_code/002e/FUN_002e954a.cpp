/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e954a` (_code @ 0x2e954a, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012ee8c(int [2], unsigned int, int);
int _ZN9Obj55aff4D1Ev(unsigned char [8]);
int _ZN9Obj55aff4C1ERKS_(...);
int FUN_0030af1c(unsigned char [16]);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_0012ee8c. */
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: _ZN9Obj55aff4C1ERKS_. */
extern unsigned int _ZN9Obj55aff4C1Ev(unsigned char *);
/* Supplied declaration required: FUN_0030af1c. */


int FUN_002e954a(unsigned int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1 [2];
  unsigned int temp_v2;
  unsigned char temp_v3 [16];
  unsigned char temp_v4 [8];
  
  temp_v2 = _ZN9Obj55aff4C1Ev(temp_v4);
  temp_v0 = _ZN9Obj55aff4C1ERKS_(temp_v3,param_2);
  temp_v0 = _ZN9Obj55aff4C1ERKS_(temp_v0 + 8,temp_v2);
  FUN_0012ee8c(temp_v1,param_1,temp_v0 - 8);
  FUN_0030af1c(temp_v3);
  _ZN9Obj55aff4D1Ev(temp_v4);
  return temp_v1[0] + 0x18;
}

} /* extern "C" */
