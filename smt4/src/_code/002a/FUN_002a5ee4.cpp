#include "shard/S1AsdTexTable.h"
#include "addon/AocPackage.h"
#include "addon/aocMain.h"
#include "AsdSDK/AsdMemUtil.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
AocPackageFile *FUN_002a6e7c(AocSystem *system, s32 type, s32 id, char *path);
TexTableNamedEntry *asdTMTexTableCallFileB(u32 table, u32 id);
u32 optionalWorkGetValue();
char *libc_strcat(char *destination, const char *source);
u32 libc_strlen(const char *text);
void FUN_00151cd8(void *data);
void FUN_00151b98(AocDisplay *display, const char *packagePath, const char *texturePath,
    s32 offset, u32 flags, void (*callback)(void *), TexTableNamedEntry *entry, u32 size,
    AocPackageFile *file);
extern AocDisplay *g_aocDisplay;

TexTableNamedEntry *FUN_002a5ee4(AocSystem *system, u32 table, u32 id, u32 mode)
{
    char texturePath[128];
    char packagePath[128];
    char requestPath[128];
    s32 type = FUN_002a6f48(table);
    if (type == -1)
        return NULL;
    memClear(packagePath, sizeof(packagePath));
    AocPackageFile *file = FUN_002a6e7c(system, type, id, packagePath);
    if (file == NULL)
        return NULL;
    file->texture.completion = 0;
    file->texture.result = 0;
    TexTableNamedEntry *entry = asdTMTexTableCallFileB(table, id);
    if (entry == NULL)
        return NULL;
    TexTableNode *node = entry->node;
    optionalWorkGetValue();
    libc_strcpy(reinterpret_cast<unsigned int *>(texturePath), reinterpret_cast<unsigned int *>(entry->file->directory));
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
    libc_strcpy(reinterpret_cast<unsigned int *>(requestPath), reinterpret_cast<unsigned int *>(packagePath));
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
    FUN_00151b98(g_aocDisplay, requestPath, texturePath, 0, loadFlags,
        FUN_00151cd8, entry, 0x80, file);
    return entry;
}
}
