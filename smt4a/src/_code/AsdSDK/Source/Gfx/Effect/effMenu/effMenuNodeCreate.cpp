/* NON_MATCHING: two constant registers swap (retail: 8 in r2, 9 in r3; built: 8 in r3, 9 in r2) */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void FUN_002e342c(char *dst, const char *src);

/* Creates a menu effect node named `name`. */
EffMenuNode *effMenuNodeCreate(const char *name)
{
    EffMenuNode *node;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effMenu.cpp", 3521);
    node = (EffMenuNode *)memAlloc(0x10000, 0x100, 0, 0x38, 0x10, 1);

    node->initialKind = 8;
    node->unk04 = 8;
    node->unk08 = 0;
    node->unk10 = 0;
    node->unk14 = 9;
    node->unk0c = 0;
    node->unk18 = 0;

    FUN_002e342c(node->name, name);
    return node;
}

} /* extern "C" */
