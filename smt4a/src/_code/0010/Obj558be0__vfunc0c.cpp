/* NON_MATCHING: The draft separates allocation failure from construction and uses a different stack/register layout for child setup. */
#include "romwright_types.h"
#include "classes/Obj558be0.h"

extern "C" {

int FUN_002f2e3c(int, int, int, int, unsigned int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int operatorNew(unsigned int);
extern int FUN_002e7614(int, unsigned int);
/* Supplied declaration required: FUN_002f2e3c. */


} /* extern "C" */

void Obj558be0::vfunc0c(u32 param_2)

{
    int param_1 = (int)this;
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(char *)(param_1 + 0x51) == '\0') {
    temp_v0 = operatorNew(0x20);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_002e7614(temp_v0,param_2);
    }
    *(unsigned char *)(param_1 + 0x51) = 1;
    *(unsigned int *)(*(int *)(param_1 + 0x44) + 8) = 0;
    *(int *)(*(int *)(param_1 + 0x44) + 0x38) = temp_v1;
    FUN_002f2e3c(param_1,*(int *)(temp_v1 + 0xc) + *(int *)(temp_v1 + 0x18),
                 *(int *)(temp_v1 + 0x14) - *(int *)(temp_v1 + 0x18),param_1 + 0x54,
                 *(unsigned int *)(param_1 + 0x44),1);
  }
  return;
}

