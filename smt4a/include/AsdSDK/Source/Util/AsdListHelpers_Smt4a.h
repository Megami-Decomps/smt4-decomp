#pragma once
#include "common.h"

/* AsdListHelpers (declarations migrated from callers). */
struct LinkHolder;
extern "C" {

void linkHolderRunAll(LinkHolder *holder, u32 *arg);

/* Whether the first link's animation channels have all finished (0 without data): callers test the result. */
u32 linkHolderCheckFirst(LinkHolder *holder);

} /* extern "C" */
