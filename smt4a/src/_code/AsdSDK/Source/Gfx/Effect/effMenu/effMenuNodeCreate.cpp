#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void libc_strcpy(char *dst, const char *src);

static inline void initializeMenuNode(EffMenuNode *node)
{
    node->initialKind = 8;
    node->unk04 = 8;
    node->unk08 = 0;
    node->unk10 = 0;
    node->unk14 = 9;
    node->unk0c = 0;
    node->unk18 = 0;
}

/* Creates a menu effect node named `name`. */
EffMenuNode *effMenuNodeCreate(const char *name)
{
    EffMenuNode *node;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effMenu.cpp", 3521);
    node = (EffMenuNode *)memAlloc(0x10000, 0x100, 0, 0x38, 0x10, 1);

    initializeMenuNode(node);

    libc_strcpy(node->name, name);
    return node;
}

} /* extern "C" */
