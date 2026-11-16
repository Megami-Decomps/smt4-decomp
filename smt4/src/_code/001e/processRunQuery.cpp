#include "sys/ProcessResult.h"
#include "common.h"
extern "C" {
void globalBlockGetFirst(void);
u32 fsControlCurrentArchive(void);
/* Query the value between the begin and end hooks. */
u32 processRunQuery(void) { globalBlockGetFirst(); u32 value=fsControlCurrentArchive(); processResultSetValue(value); return value; }
}
