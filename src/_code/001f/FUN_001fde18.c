/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fde18` (_code @ 0x1fde18, 0x128 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern signed char DAT_0049f942; /* 0x49f942 */
extern signed char DAT_0049fb44; /* 0x49fb44 */

/* Supplied declaration required: FUN_002a0c54. */
/* Supplied declaration required: FUN_002be7fc. */


void FUN_001fde18(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [128];
  
  if (DAT_0049fb44 != '\0') {
    FUN_002be7fc(temp_v1,"map/m%03d/e%03d_%02d_dz.bcenv",*(unsigned int *)(param_1 + 0x2c),
                 *(unsigned int *)(param_1 + 0x2c),*(unsigned int *)(param_1 + 0x30));
  }
  if (DAT_0049f942 != '\0') {
    FUN_002be7fc(temp_v1,"map/m%03d/e%03d_%02d.bcenv",0x18,0x18,1);
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x2c);
    if (temp_v0 != 0x29) {
      if (temp_v0 != 0x2a) {
        if (temp_v0 != 0x2b) {
          FUN_002be7fc(temp_v1,"map/m%03d/e%03d_%02d.bcenv",temp_v0,temp_v0,
                       *(unsigned int *)(param_1 + 0x30));
        }
        else {
          FUN_002be7fc(temp_v1,"map/m%03d/e%03d_%02d.bcenv",0x24,0x24,1);
        }
      }
      else {
        FUN_002be7fc(temp_v1,"map/m%03d/e%03d_%02d.bcenv",0xe,0xe,1);
      }
    }
    else {
      FUN_002be7fc(temp_v1,"map/m%03d/e%03d_%02d.bcenv",2,2,6);
    }
  }
  FUN_002a0c54(temp_v1,0);
  return;
}
