#ifndef UTIL_ASDLISTBOXCREATEDEFAULT_H
#define UTIL_ASDLISTBOXCREATEDEFAULT_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Creates a debug list box under the job `first` and returns its job handle (the handle the
 * asdListBox* functions take). */
u32 asdListBoxCreateDefault(u32 first, u32 second, u32 third, u32 fourth);

#ifdef __cplusplus
}
#endif

#endif
