#include "romwright_types.h"

extern "C" {

int asdMemFree(...);

typedef int romwright_code(...);
extern unsigned char g_handlerTable[]; /* 0x5b3274 */
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: asdMemFree. */


void FUN_001836b0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 0x8c);
  while (temp_v0 != 0) {
    temp_v2 = *(int *)(temp_v0 + 0xac);
    if ((*(unsigned int *)(temp_v0 + 0x98) & 1) == 0) {
      temp_v1 = *(int *)(temp_v0 + 0x90);
      if (*(int *)(temp_v1 + 8) != 0) {
        (**(romwright_code **)(g_handlerTable + (unsigned int)*(unsigned short *)(temp_v1 + 4) * 0x44 + 0x10))(*(int *)(temp_v1 + 8));
      }
      if (*(int *)(temp_v1 + 0x18) != 0) {
        asdMemFree(*(int *)(temp_v1 + 0x18));
        *(unsigned int *)(temp_v1 + 0x10) = 0;
        *(unsigned int *)(temp_v1 + 0x14) = 0;
        *(unsigned int *)(temp_v1 + 0x18) = 0;
      }
      if (*(int *)(temp_v1 + 0x28) != 0) {
        asdMemFree(*(int *)(temp_v1 + 0x28));
        *(unsigned int *)(temp_v1 + 0x20) = 0;
        *(unsigned int *)(temp_v1 + 0x24) = 0;
        *(unsigned int *)(temp_v1 + 0x28) = 0;
      }
      asdMemFree(temp_v1);
    }
    asdMemFree(temp_v0);
    temp_v0 = temp_v2;
  }
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
