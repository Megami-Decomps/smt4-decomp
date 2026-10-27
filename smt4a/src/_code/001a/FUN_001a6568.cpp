#include "shard/S1AsdTexTable.h"
#include "addon/AocPackage.h"
#include "addon/aocMain.h"

extern "C" {
s32 FUN_001b3214(u32 table);
AocPackageFile *FUN_001b2bd8(AocSystem *system, s32 type, s32 id, char *path);
TexTableNamedEntry *asdTMTexTableGetNode(u32 table, u32 id);
u32 optionalWorkGetValue();
void sysMemClear(void *buffer, u32 size);
char *libc_strcpy(char *destination, const char *source);
char *libc_strcat(char *destination, const char *source);
u32 libc_strlen(const char *text);
void FUN_001b32a4(void *data);
void FUN_001b3008(AocDisplay *display, const char *packagePath, const char *texturePath,
    s32 offset, u32 flags, void (*callback)(void *), TexTableNamedEntry *entry, u32 size,
    AocPackageFile *file);
extern AocDisplay *g_aocDisplay;

TexTableNamedEntry *FUN_001a6568(AocSystem *system, u32 table, u32 id, u32 mode)
{
    char texturePath[128];
    char packagePath[128];
    char requestPath[128];
    s32 type = FUN_001b3214(table);
    if (type == -1)
        return NULL;
    sysMemClear(packagePath, sizeof(packagePath));
    AocPackageFile *file = FUN_001b2bd8(system, type, id, packagePath);
    if (file == NULL)
        return NULL;
    file->texture.completion = 0;
    file->texture.result = 0;
    TexTableNamedEntry *entry = asdTMTexTableGetNode(table, id);
    if (entry == NULL)
        return NULL;
    TexTableNode *node = entry->node;
    optionalWorkGetValue();
    libc_strcpy(texturePath, entry->file->directory);
    if (node->name[0] == '-')
        libc_strcat(texturePath, entry->slots[-static_cast<s8>(node->name[1])].node->name);
    else
        libc_strcat(texturePath, node->name);
    if (entry->node->compressed)
        libc_strcat(texturePath, ".cmp");
    else
        libc_strcat(texturePath, ".stex");
    if (libc_strlen(node->name) == 0) {
        entry->state = 0;
        return entry;
    }
    libc_strcpy(requestPath, packagePath);
    u32 flags = entry->flags;
    if ((flags & ~TEXENTRY_RETRY) != 0)
        return entry;
    if (mode == 0x20000) {
        flags |= TEXENTRY_MODE_20;
        entry->flags = flags;
    } else if (mode == 0x30000) {
        flags |= TEXENTRY_MODE_40;
        entry->flags = flags;
    }
    flags |= TEXENTRY_LOADING;
    entry->flags = flags;
    u32 loadFlags = 1;
    if ((flags & TEXENTRY_RETRY) != 0)
        loadFlags = 3;
    if (entry->node->compressed) {
        if ((loadFlags & 2) != 0)
            loadFlags &= ~2;
        else
            loadFlags |= 2;
    }
    FUN_001b3008(g_aocDisplay, requestPath, texturePath, 0, loadFlags,
        FUN_001b32a4, entry, 0x80, file);
    return entry;
}
}
