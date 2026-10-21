#include "common.h"
extern "C" {
void globalBlockGetFirst(void);
u32 FUN_00429e64(void);
void FUN_0013ebd8(void);
/* Query the value between the begin and end hooks. */
u32 processRunQuery(void) { globalBlockGetFirst(); u32 value=FUN_00429e64(); FUN_0013ebd8(); return value; }
}
