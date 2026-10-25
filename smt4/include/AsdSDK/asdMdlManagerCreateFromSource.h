#ifndef ASDSDK_ASDMDLMANAGERCREATEFROMSOURCE_H
#define ASDSDK_ASDMDLMANAGERCREATEFROMSOURCE_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

#ifdef __cplusplus
extern "C" {
#endif

AsdMdlObject *asdMdlManagerCreateFromSource(void *source, void *arg, u32 param);

#ifdef __cplusplus
}
#endif

#endif
