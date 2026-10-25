#include "sys/ProcessResult.h"
#include "common.h"
extern "C" {
u32 FUN_00354c60(void);
/* Query the value and finish the associated operation. */
u32 processQueryAndFinish(void) { u32 value=FUN_00354c60(); FUN_002c3510(value); return value; }
}
