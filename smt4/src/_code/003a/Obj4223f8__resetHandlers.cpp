/* NON_MATCHING: native callback clearing is recovered; legacy handler installs use scalar stores instead of retail's aggregate callback copies. */
#include "classes/Obj4223f8.h"

extern "C" {

typedef int romwright_code(...);

extern int FUN_0022c988(...); /* 0x22c988 */
extern int FUN_003a8dac(...); /* 0x3a8dac */
extern int FUN_003a8ecc(...); /* 0x3a8ecc */
extern int FUN_003a9394(...); /* 0x3a9394 */
extern int FUN_003aa510(...); /* 0x3aa510 */
extern int FUN_003a9424(...);

} /* extern "C" */

void Obj4223f8::resetHandlers()
{
  int param_1 = (int)this;
  for (s32 i = 0; i < 9; ++i) {
    handlers[0][i] = NULL;
    handlers[1][i] = NULL;
    handlers[2][i] = NULL;
  }
  *(romwright_code **)(param_1 + 0xa6c0) = FUN_003a8dac;
  *(unsigned int *)(param_1 + 0xa6c4) = 0;
  *(romwright_code **)(param_1 + 0xa6c8) = FUN_003a8ecc;
  *(unsigned int *)(param_1 + 0xa6cc) = 0;
  *(romwright_code **)(param_1 + 0xa6d0) = FUN_003aa510;
  *(unsigned int *)(param_1 + 0xa6d4) = 0;
  *(romwright_code **)(param_1 + 0xa6d8) = FUN_0022c988;
  *(unsigned int *)(param_1 + 0xa6dc) = 0;
  *(romwright_code **)(param_1 + 0xa6e0) = FUN_003aa510;
  *(unsigned int *)(param_1 + 0xa6e4) = 0;
  handlers[0][5] = &Obj4223f8::confirmSelection;
  *(romwright_code **)(param_1 + 0xa6f0) = FUN_003a9394;
  *(unsigned int *)(param_1 + 0xa6f4) = 0;
  *(romwright_code **)(param_1 + 0xa6f8) = FUN_003a9424;
  *(unsigned int *)(param_1 + 0xa6fc) = 0;
  return;
}

