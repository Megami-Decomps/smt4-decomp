#pragma once
#include "common.h"
#include "shard/W5_W5Match2_LinkedItems.h"

/* List, list-box and linked-container helpers of the Asd SDK. */
extern "C" {

LinkedItem *linkedFindItemByIndex(const LinkedItems *owner,u32 index);

} /* extern "C" */
