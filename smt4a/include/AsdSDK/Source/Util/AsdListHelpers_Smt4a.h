#pragma once
#include "common.h"

/* AsdListHelpers (declarations migrated from callers). */
struct LinkHolder;
extern "C" {

void linkHolderRunAll(LinkHolder *holder, u32 *arg);

void linkHolderCheckFirst(LinkHolder *holder);

} /* extern "C" */
