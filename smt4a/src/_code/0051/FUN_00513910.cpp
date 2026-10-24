/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00513910` (_code @ 0x513918, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023c168(int, unsigned int, unsigned int, int, int, int);

typedef int romwright_code(...);
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern romwright_code *g_mobiclipAllocator; /* 0x589528 */
extern romwright_code *DAT_0058952c; /* 0x58952c */

/* Supplied declaration required: FUN_0023c168. */


unsigned int FUN_00513910(romwright_code *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  romwright_code *pcVar1;
  int temp_v0;
  int temp_v1;
  
  pcVar1 = param_1;
  if (g_mobiclipAllocator != (romwright_code *)0x0) {
    pcVar1 = DAT_0058952c;
  }
  if (((g_mobiclipAllocator != (romwright_code *)0x0 && pcVar1 != (romwright_code *)0x0) && (param_4 >= 6)) &&
     (temp_v0 = (*g_mobiclipAllocator)(0x3c), temp_v0 != 0)) {
    temp_v1 = (*g_mobiclipAllocator)(param_4 << 2);
    *(int *)(temp_v0 + 0x28) = temp_v1;
    if (temp_v1 != 0) {
      temp_v1 = (*g_mobiclipAllocator)(param_4 << 2);
      *(int *)(temp_v0 + 0x2c) = temp_v1;
      if (temp_v1 != 0) {
        temp_v1 = temp_v0;
        FUN_0023c168(temp_v0,param_2,param_3,param_4,0,1);
        if (temp_v1 != 0) {
          *(unsigned int *)(temp_v0 + 0x30) = 0;
          *(unsigned int *)(temp_v0 + 0x34) = 0;
          *(unsigned int *)(temp_v0 + 0x38) = 0;
          *(unsigned int *)(temp_v0 + 0x20) = param_2;
          *(unsigned int *)(temp_v0 + 0x24) = param_3;
          *(int *)param_1 = temp_v0;
          return 1;
        }
        (*DAT_0058952c)(*(unsigned int *)(temp_v0 + 0x2c));
      }
      (*DAT_0058952c)(*(unsigned int *)(temp_v0 + 0x28));
    }
    (*DAT_0058952c)(temp_v0);
    return 0;
  }
  return 0;
}

} /* extern "C" */
