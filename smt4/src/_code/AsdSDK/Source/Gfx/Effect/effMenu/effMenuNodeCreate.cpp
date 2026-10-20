#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void FUN_002bf694(char *dst, const char *src);

/* Creates a menu effect node named `name`. */
EffMenuNode *effMenuNodeCreate(const char *name)
{
    EffMenuNode *node;

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Effect\\effMenu.cpp", 3507);
    node = (EffMenuNode *)memAlloc(0x10000, 0x100, 0, 0x38, 0x10, 1);

    node->initialKind = 8;
    node->unk04 = 8;
    node->unk08 = 0;
    node->unk14 = 9;
    node->unk10 = 0;
    node->unk0c = 0;
    node->unk18 = 0;
    FUN_002bf694(node->name, name);
    return node;
}

} /* extern "C" */
