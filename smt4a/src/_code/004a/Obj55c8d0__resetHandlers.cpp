/* NON_MATCHING: The handler-table clears and callback constants use different block stores and loop scheduling from retail. */
#include "romwright_types.h"
#include "classes/Obj55c8d0.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern int FUN_004a4658(...); /* 0x4a4658 */
extern int FUN_004a4c74(...); /* 0x4a4c74 */
extern int FUN_004a4d70(...); /* 0x4a4d70 */
extern int FUN_004a527c(...); /* 0x4a527c */
extern int itemListMenuWaitUseCounter(...); /* 0x4a66c4 */
extern int FUN_004a677c(...); /* 0x4a677c */


} /* extern "C" */

void Obj55c8d0::resetHandlers()

{
    int param_1 = (int)this;
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = 9;
  do {
    temp_v2 = param_1 + temp_v0 * 8;
    *(unsigned int *)(temp_v2 + 0xa980) = 0;
    *(unsigned int *)(temp_v2 + 0xa984) = 0;
    *(unsigned int *)(temp_v2 + 0xa9c8) = 0;
    *(unsigned int *)(temp_v2 + 0xa9cc) = 0;
    temp_v1 = temp_v1 - 1;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v2 + 0xaa10) = 0;
    *(unsigned int *)(temp_v2 + 0xaa14) = 0;
  } while (temp_v1 != 0);
  *(romwright_code **)(param_1 + 0xa980) = FUN_004a4c74;
  *(unsigned int *)(param_1 + 0xa984) = 0;
  *(romwright_code **)(param_1 + 0xa988) = FUN_004a4d70;
  *(unsigned int *)(param_1 + 0xa98c) = 0;
  *(romwright_code **)(param_1 + 0xa990) = FUN_004a677c;
  *(unsigned int *)(param_1 + 0xa994) = 0;
  *(romwright_code **)(param_1 + 0xa998) = itemListMenuWaitUseCounter;
  *(unsigned int *)(param_1 + 0xa99c) = 0;
  *(romwright_code **)(param_1 + 0xa9a0) = FUN_004a677c;
  *(unsigned int *)(param_1 + 0xa9a4) = 0;
  *(romwright_code **)(param_1 + 0xa9a8) = FUN_004a4658;
  *(unsigned int *)(param_1 + 0xa9ac) = 0;
  *(romwright_code **)(param_1 + 0xa9b0) = FUN_004a527c;
  *(unsigned int *)(param_1 + 0xa9b4) = 0;
  *(unsigned int *)(param_1 + 0xa9b8) = 0x4a5328;
  *(unsigned int *)(param_1 + 0xa9bc) = 0;
  return;
}

