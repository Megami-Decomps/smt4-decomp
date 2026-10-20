/* The debug hook the engine calls with __FILE__ and __LINE__ (before allocations, mostly).
 *
 * The release build linked no definition of it, so armlink turned every call into MOV r0, r0:
 * retail still loads the file name into r0 and the line into r1, then does nothing. Declaring it
 * __weak gives the same call; build.py's link_weak_calls() then does what armlink did.
 *
 * Our sources are not the original files, so __FILE__ and __LINE__ are written out: the file is the
 * retail string the original __FILE__ produced (a DAT_ global until named), the line its number. */
#ifndef ASDSDK_ASDDEBUG_H
#define ASDSDK_ASDDEBUG_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

__weak void asdDebugTrace(const char *file, int line);

#ifdef __cplusplus
}
#endif

#endif
