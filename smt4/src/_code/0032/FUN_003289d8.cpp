/* NON_MATCHING: build copies the incoming parameter to r2 before the push; retail loads the node data first (same family as asdMdlNodeInit). */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
struct NodeInitializationData {
    u32 unk00[2];  // 0x00
    u8* begin;     // 0x08
    u32 parameter; // 0x0c
    u8 unk10[8];   // 0x10
    u8* cursor;    // 0x18
};
extern "C" void FUN_002a9834(u8** cursor, AsdMdlNode* node, u32 parameter, u32 flags);
/* Resets the model data cursor and builds the node state. */
extern "C" void FUN_003289d8(AsdMdlNode *node, u32 parameter)
{
    NodeInitializationData* data = static_cast<NodeInitializationData*>(node->data);
    data->cursor = data->begin;
    u8* cursor = static_cast<NodeInitializationData*>(node->data)->begin;
    FUN_002a9834(&cursor, node, parameter, 0);
}
