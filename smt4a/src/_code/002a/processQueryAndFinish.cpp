#include "sys/ProcessResult.h"
#include "common.h"
extern "C" {
u32 FUN_00429ec0(void);
/* Query the value and finish the associated operation. */
u32 processQueryAndFinish(void) { u32 value=FUN_00429ec0(); FUN_0013ebd8(value); return value; }
}
