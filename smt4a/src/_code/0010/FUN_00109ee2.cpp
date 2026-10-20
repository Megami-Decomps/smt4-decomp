/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109ee2` (_code @ 0x109ee2, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineSockAddrConstruct(unsigned char [32]);
int FUN_002f2ed4(int *, int *, unsigned char [32]);
int FUN_002f2f82(int *, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: onlineSockAddrConstruct. */
/* Supplied declaration required: FUN_002f2ed4. */
/* Supplied declaration required: FUN_002f2f82. */


unsigned int FUN_00109ee2(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  unsigned int temp_v0;
  unsigned char temp_v1 [32];
  int temp_v2;
  
  if ((char)param_1[0x14] == '\0') {
    onlineSockAddrConstruct(temp_v1);
    piVar1 = param_1 + 0x1e;
    piVar2 = piVar1;
    FUN_002f2ed4(piVar1,&temp_v2,temp_v1);
    if (piVar2 != (int *)0x0) {
      temp_v0 = (**(romwright_code **)(*param_1 + 0x14))(param_1,temp_v2,temp_v1);
      FUN_002f2f82(piVar1,temp_v2);
      return temp_v0;
    }
  }
  return 0;
}

} /* extern "C" */
