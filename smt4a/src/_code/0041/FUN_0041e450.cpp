/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041e450` (_code @ 0x41e450, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003450d4(int, unsigned int, int, int, int, int, int, int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int FUN_001834a4(unsigned int, unsigned int);
extern int FUN_00284140(int);
extern unsigned int FUN_002a4860(int);
extern int flaggedEntryGetValueA(int);
/* Supplied declaration required: FUN_003450d4. */


void FUN_0041e450(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_001834a4(0x2b,0xd);
  temp_v1 = param_1 + 0x3d8;
  FUN_003450d4(temp_v1,temp_v0,param_1 + 0x43c,(int)*(short *)(param_1 + 0x444),
               (int)*(short *)(param_1 + 0x440),(int)*(short *)(param_1 + 0x442),param_1 + 0x44c,0,1
              );
  if (temp_v1 != 0) {
    temp_v0 = FUN_002a4860(param_1 + 0x3d8);
    *(unsigned int *)(param_1 + 0x304) = temp_v0;
    temp_v1 = flaggedEntryGetValueA(param_1 + 0x3d8);
    *(int *)(param_1 + 0x308) = temp_v1;
    *(unsigned int *)(param_1 + 0x2fc) = *(unsigned int *)(param_1 + 0x2f8);
    *(int *)(param_1 + 0x2f8) = temp_v1 + *(int *)(param_1 + 0x304) + *(int *)(param_1 + 0x300);
    temp_v1 = 0;
    if (temp_v1 < *(int *)(param_1 + 0x18)) {
      do {
        temp_v3 = *(int *)(param_1 + 0x304) + *(int *)(param_1 + 0x300) + temp_v1;
        temp_v2 = param_1 + temp_v1 * 0x44;
        temp_v1 = temp_v1 + 1;
        if (temp_v3 >= 1) {
          *(unsigned int *)(temp_v2 + 0x6a0) = 0x86;
          *(unsigned int *)(temp_v2 + 0x6a4) = 0x98;
        }
        else {
          *(unsigned int *)(temp_v2 + 0x6a0) = 0x85;
          *(unsigned int *)(temp_v2 + 0x6a4) = 0x97;
        }
      } while (temp_v1 < *(int *)(param_1 + 0x18));
    }
  }
  temp_v1 = FUN_00284140((int)*(short *)(param_1 + 0x446));
  *(unsigned char *)(param_1 + 0x44e) = 0;
  *(unsigned char *)(param_1 + 0x44d) = 0;
  if (temp_v1 == 1 || temp_v1 == 2) {
    *(unsigned char *)(param_1 + 0x44e) = 1;
  }
  else if (temp_v1 == 6) {
    *(unsigned char *)(param_1 + 0x44e) = 1;
    *(unsigned char *)(param_1 + 0x44d) = 1;
  }
  return;
}

} /* extern "C" */
