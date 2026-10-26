/* NON_MATCHING: same instruction sequence as retail; only the register assignment of the file/list/node/source/entry pointers differs (retail: file r8, list r5, node r6, source r9, entry r4). */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

extern const char g_effPartsSourcePath[]; /* __FILE__ of effParts.cpp */

struct EffPartNode;

/* The 16-byte header words the list and the file both start with. */
typedef struct EffPartHeader {
    u32 words[4];
} EffPartHeader;

/* The part list an effect parts file builds: its header words, a node count and the list ends. */
typedef struct EffPartList {
    /* 0x00 */ EffPartHeader header;
    /* 0x10 */ EffPartHeader header2;
    /* 0x20 */ u8 unk20[0x48];
    /* 0x68 */ u32 unk68;
    /* 0x6C */ u8 unk6c[8];
    /* 0x74 */ u32 unk74;
    /* 0x78 */ u8 unk78[8];
    /* 0x80 */ u32 count;
    /* 0x84 */ u32 unk84;
    /* 0x88 */ struct EffPartNode *tail;
    /* 0x8C */ struct EffPartNode *head;
} EffPartList;

/* One node of the list (0xC0 bytes): its payload, the block it draws from and its links. */
typedef struct EffPartNode {
    /* 0x00 */ u8 payload[0x84];
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u8 unk88;
    /* 0x89 */ u8 unk89;
    /* 0x8A */ u8 unk8a;
    /* 0x8B */ u8 unk8b[5];
    /* 0x90 */ void *block;               /* the block this node draws from (or its file index) */
    /* 0x94 */ u32 parentIndex;           /* index of the node this one is attached to (flag 2) */
    /* 0x98 */ u32 flags;                 /* 1: copy of an earlier node, 2: attached to a parent */
    /* 0x9C */ char name[0x10];
    /* 0xAC */ struct EffPartNode *next;
    /* 0xB0 */ struct EffPartNode *prev;
    /* 0xB4 */ u8 unkb4[0xC];
} EffPartNode;

/* The file image: a header, its node count at 0x80 and the node array at the offset in 0x88. */
typedef struct EffPartsFile {
    /* 0x00 */ EffPartHeader header;
    /* 0x10 */ u8 unk10[0x58];
    /* 0x68 */ u32 unk68;
    /* 0x6C */ u8 unk6c[8];
    /* 0x74 */ u32 unk74;
    /* 0x78 */ u8 unk78[8];
    /* 0x80 */ u32 count;
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u32 nodesOffset;
} EffPartsFile;

void sysMemClear(void *block, s32 size);
void FUN_001b4ddc(void *part);
EffPartNode *FUN_003007a0(void);
void FUN_003c2df0(EffPartList *list, EffPartNode *node, EffPartNode *parent);
EffBlock *FUN_00290edc(EffBlock *src);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
char *libc_strcpy(char *destination, const char *source);
void asdMemFree(void *block);

/* The index'th node of the list, or NULL. */
static EffPartNode *effPartListNth(EffPartList *list, s32 index)
{
    for (EffPartNode *node = list->head; node != NULL; node = node->next) {
        if (index-- == 0) {
            return node;
        }
    }
    return NULL;
}

/* Loads an effect parts file into a part list: node blocks are cloned, copy nodes are spliced in
 * after the node they copy, and attached nodes are linked to their parent. */
EffPartList *FUN_0029127c(const char *path)
{
    u32 size;
    EffPartsFile *file = (EffPartsFile *)asdLoadFileSyncNoContext(path, &size, 1, 0x80);
    asdDebugTrace(g_effPartsSourcePath, 1443);
    EffPartList *list = (EffPartList *)memAlloc(0x10000, 0x100, 0, 0x90, 0x10, 1);

    sysMemClear(list, 0x90);
    list->count = 0;
    list->unk84 = 0;
    FUN_001b4ddc(list);
    list->header = file->header;
    list->header2 = file->header;
    list->unk74 = file->unk74;
    list->unk68 = file->unk68;

    EffPartNode *entry = (EffPartNode *)((u8 *)file + file->nodesOffset);

    for (u32 i = 0; i < file->count; i++, entry++) {
        EffPartNode *node;

        if ((entry->flags & 1) != 0) {
            EffPartNode *source = effPartListNth(list, (s32)entry->block);

            node = FUN_003007a0();
            __aeabi_memcpy4(node, source, 0xC0);
            sysMemClear(node, 0x90);
            node->unk84 = 1;
            node->unk88 = 8;
            node->unk89 = 0;
            node->unk8a = 0;
            FUN_001b4ddc(node);
            node->flags |= 1;
            node->block = source->block;
            if (source->next != NULL) {
                source->next->prev = node;
                node->next = source->next;
            } else {
                node->next = NULL;
                list->tail = node;
            }
            source->next = node;
            node->prev = source;
            list->count++;
        } else {
            void *block = FUN_00290edc((EffBlock *)((u8 *)file + (u32)entry->block));

            node = FUN_003007a0();
            node->block = block;
            node->next = NULL;
            if (list->tail != NULL) {
                list->tail->next = node;
                node->prev = list->tail;
            } else {
                list->head = node;
                node->prev = NULL;
            }
            list->tail = node;
            list->count++;
        }
        if ((entry->flags & 2) != 0) {
            FUN_003c2df0(list, node, effPartListNth(list, entry->parentIndex));
        }
        __aeabi_memcpy4(node, entry, 0x90);
        libc_strcpy(node->name, entry->name);
        node->flags = entry->flags;
    }
    asdMemFree(file);
    return list;
}

}
