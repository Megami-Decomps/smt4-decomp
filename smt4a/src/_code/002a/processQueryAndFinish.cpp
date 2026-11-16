#include "sys/ProcessResult.h"
#include "common.h"
extern "C" {
u32 fsFormatSaveData(void);
/* Query the value and finish the associated operation. */
u32 processQueryAndFinish(void) { u32 value=fsFormatSaveData(); processResultSetValue(value); return value; }
}
