#pragma once
#include "common.h"

/* Functions in the 0x00370000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct NamedObject;
extern "C" {

s32 namedObjectFormatName(NamedObject *object, char *buffer);

} /* extern "C" */
