/* NON_MATCHING: build copies the incoming parameter to r2 before the push; retail loads the node data first (same family as asdMdlNodeInit). */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
extern "C" void asdMdlNodeBuildScene(u8** cursor, AsdMdlNode* node, u32 parameter, u32 flags);
/* Resets the model data cursor and builds the node state. */
extern "C" void FUN_003289d8(AsdMdlNode *node, u32 parameter)
{
    AsdModelFile* file = node->file;
    file->cursor = file->begin;
    u8* cursor = node->file->begin;
    asdMdlNodeBuildScene(&cursor, node, parameter, 0);
}
