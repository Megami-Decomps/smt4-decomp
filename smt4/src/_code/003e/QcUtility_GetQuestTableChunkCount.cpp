#include "romwright_types.h"

extern "C" {

int FUN_002c0c74(void);
int FUN_002c0cec(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_002c0c74. */
/* Supplied declaration required: FUN_002c0cec. */


void QcUtility_GetQuestTableChunkCount(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c0cec(0x26,param_2 * 2 + 1);
  FUN_002c0c74();
  return;
}

} /* extern "C" */
