#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"


extern "C" {
void FUN_0019afe4(u8** cursor, AsdMdlNode* node, u32 parameter, u32 flags);
void asdModelBuildFlaggedAttributeRecords(AsdMdlNode* node, u8* data);
void asdMdlNodeBuildMotionTables(AsdMdlNode* node);

// Rewinds the node's data cursor and builds its records from the beginning of the data.
static __inline void asdMdlNodeBuildRecords(AsdMdlNode* node, u32 parameter)
{
    AsdModelFile* file = node->file;
    file->cursor = file->begin;
    u8* cursor = node->file->begin;
    FUN_0019afe4(&cursor, node, parameter, 0);
}

// Resets the model data cursor, initializes its records, and builds the node state.
void asdMdlNodeInit(AsdMdlNode* node, u32 drawMask)
{
    asdMdlNodeBuildRecords(node, drawMask);
    asdModelBuildFlaggedAttributeRecords(node, node->file->data);
    asdMdlNodeBuildMotionTables(node);
}
}
