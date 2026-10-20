#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char g_handlerTable;

void FUN_0019c8c0(int param_1)

{
  romwright_code *pcVar1;
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0x8c); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0xac)) {
    pcVar1 = *(romwright_code **)((unsigned char *)&g_handlerTable + (unsigned int)*(unsigned short *)(*(int *)(temp_v0 + 0x90) + 4) * 0x44 + 0x1c);
    if (pcVar1 != (romwright_code *)0x0) {
      (*pcVar1)(*(unsigned int *)(*(int *)(temp_v0 + 0x90) + 8));
    }
  }
  *(unsigned int *)(param_1 + 0x84) = 0;
  return;
}

} /* extern "C" */
