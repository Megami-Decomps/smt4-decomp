#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"


extern "C" {
void FUN_002a9834(u8** cursor, AsdMdlNode* node, u32 parameter, u32 flags);
void FUN_001457ec(AsdMdlNode* node, u8* data);
void FUN_002a9244(AsdMdlNode* node);

// Rewinds the node's data cursor and builds its records from the beginning of the data.
static __inline void asdMdlNodeBuildRecords(AsdMdlNode* node, u32 parameter)
{
    AsdModelFile* file = node->file;
    file->cursor = file->begin;
    u8* cursor = node->file->begin;
    FUN_002a9834(&cursor, node, parameter, 0);
}

// Resets the model data cursor, initializes its records, and builds the node state.
void asdMdlNodeInit(AsdMdlNode* node, u32 drawMask)
{
    asdMdlNodeBuildRecords(node, drawMask);
    FUN_001457ec(node, node->file->data);
    FUN_002a9244(node);
}
}
