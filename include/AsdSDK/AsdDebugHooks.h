/* Debug hooks other than asdDebugTrace(file, line) that the release build left undefined.
 *
 * Like asdDebugTrace they are __weak with no definition: armlink turned every call into MOV r0, r0
 * (retail still evaluates the arguments into r0..r3 first). One hook per call shape. */
#ifndef ASDSDK_ASDDEBUGHOOKS_H
#define ASDSDK_ASDDEBUGHOOKS_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

__weak void asdDebugHookVoid(void);
__weak void asdDebugHookPtr(const void *object);
__weak void asdDebugHookPtrInt(const void *object, int value);
__weak void asdDebugHookWords3(u32 first, u32 second, u32 third);
/* Hooks whose result is the object they were given (a constructor returning `this`). */
__weak void *asdDebugHookPass(void *object);
/* Formatted debug output: a level, a wide format string and its arguments (doubles go on the stack). */
__weak void asdDebugPrint(s32 level, const wchar_t *format, ...);

#ifdef __cplusplus
}
#endif

#endif
