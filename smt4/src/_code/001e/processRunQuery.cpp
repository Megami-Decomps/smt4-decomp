#include "sys/ProcessResult.h"
#include "common.h"
extern "C" {
void globalBlockGetFirst(void);
u32 FUN_00354c04(void);
/* Query the value between the begin and end hooks. */
u32 processRunQuery(void) { globalBlockGetFirst(); u32 value=FUN_00354c04(); FUN_002c3510(value); return value; }
}
