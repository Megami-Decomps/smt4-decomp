#ifndef SHARD_ASDLISTBOXSETFLOATITEM_H
#define SHARD_ASDLISTBOXSETFLOATITEM_H

#include "common.h"
#include "AsdSDK/Source/Util/AsdListBox.h"

#ifdef __cplusplus
extern "C" {
#endif

void asdListBoxSetFloatItem(AsdListBox *listBox, u32 id, s32 minimum, s32 maximum, f32 value);

#ifdef __cplusplus
}
#endif

#endif
