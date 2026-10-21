/* NON_MATCHING: retail tail-calls the final node builder; the escaped local cursor keeps the compiled frame live, and initial argument setup is scheduled differently. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

struct NodeInitializationData {
    u32 unk00[2];  // 0x00
    u8* begin;     // 0x08
    u32 parameter; // 0x0c
    u8 unk10[8];   // 0x10
    u8* cursor;    // 0x18
};

extern "C" {
void FUN_0019afe4(u8** cursor, AsdMdlNode* node, u32 parameter, u32 flags);
void FUN_0019d57c(AsdMdlNode* node, u32 parameter);
void FUN_0019cbf8(AsdMdlNode* node);

// Resets the model data cursor, initializes its records, and builds the node state.
void asdMdlNodeInit(AsdMdlNode* node, u32 parameter)
{
    NodeInitializationData* data = static_cast<NodeInitializationData*>(node->data);
    data->cursor = data->begin;
    u8* cursor = static_cast<NodeInitializationData*>(node->data)->begin;
    FUN_0019afe4(&cursor, node, parameter, 0);
    FUN_0019d57c(node, static_cast<NodeInitializationData*>(node->data)->parameter);
    FUN_0019cbf8(node);
}
}
