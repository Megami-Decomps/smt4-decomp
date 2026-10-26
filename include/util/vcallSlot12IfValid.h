/* vcallSlot12IfValid.h */
#ifndef INCLUDE_UTIL_VCALLSLOT12IFVALID_H
#define INCLUDE_UTIL_VCALLSLOT12IFVALID_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Calls slot 12 of the vtable of the object at `handle` (a tail call) when the handle is not 0. */
void vcallSlot12IfValid(u32 handle);
#ifdef __cplusplus
}
#endif

#endif
