/* NON_MATCHING: The release loop retains a different owner register and emits the pointer-clearing tail inline instead of the retail split boundary. */
#include "romwright_types.h"
#include "classes/Obj420a2c.h"

extern "C" {

int innerReleaseTexture(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: innerReleaseTexture. */


} /* extern "C" */

void Obj420a2c::releaseSources()

{
    int param_1 = (int)this;
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned long long temp_v2;
  
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    if (*(int *)(temp_v1 + 0x10) != 0) {
      innerReleaseTexture(param_1 + temp_v0 * 0x20 + 0x40);
      temp_v2 = (**(romwright_code **)(**(int **)(param_1 + 4) + 4))
                        (*(int **)(param_1 + 4),*(unsigned int *)(temp_v1 + 0x10));
      if (temp_v0 == 0) {
        temp_v2 = *(unsigned long long *)(param_1 + 0x10);
      }
      if (temp_v0 == 0 && (int)temp_v2 == (int)((unsigned long long)temp_v2 >> 0x20)) {
        *(unsigned int *)(param_1 + 0x14) = 0;
      }
      *(unsigned int *)(temp_v1 + 0x10) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}

