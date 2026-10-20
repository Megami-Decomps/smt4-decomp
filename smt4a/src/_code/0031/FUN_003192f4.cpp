#include "romwright_types.h"

extern "C" {

int FUN_001aeafc(unsigned int);
int statusCameraDestroy(void);
int FUN_003857b4(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aeafc. */
/* Supplied declaration required: statusCameraDestroy. */
extern int lmapSceneGetScript(void);
/* Supplied declaration required: FUN_003857b4. */


void FUN_003192f4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  statusCameraDestroy();
  temp_v0 = lmapSceneGetScript();
  if (temp_v0 != 0) {
    FUN_003857b4(1);
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    FUN_001aeafc(DAT_0056fcc0);
  }
  if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00319340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(**(int **)(param_1 + 0x1c) + 4))(*(int **)(param_1 + 0x1c));
  return;
}

} /* extern "C" */
