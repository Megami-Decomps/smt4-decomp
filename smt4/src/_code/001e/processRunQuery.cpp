#include "sys/ProcessResult.h"
#include "common.h"
extern "C" {
void FUN_002c3414(void);
u32 FUN_00354c04(void);
/* Query the value between the begin and end hooks. */
u32 processRunQuery(void) { FUN_002c3414(); u32 value=FUN_00354c04(); FUN_002c3510(value); return value; }
}
