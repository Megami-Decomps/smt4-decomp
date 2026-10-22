#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void* memAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option, u32 mode);
char* libc_strcpy(char* destination, const char* source);

// Allocate a named menu-effect entry and append it to the linked text list.
void effMenuAppendNamedEntry(EffMenuTextList* list, const char* name, u32 kind, u32 resource, u32 value)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effMenu.cpp", 2750);
    EffMenuTextNode* node = static_cast<EffMenuTextNode*>(memAlloc(0x10000, 0x100, 0, 0x44, 0x10, 1));
    node->kind = kind;
    node->resource = resource;
    node->value = value;
    libc_strcpy(node->name, name);
    EffMenuTextNode* tail = list->head;
    if (tail == NULL) {
        list->head = node;
        node->previous = NULL;
        node->next = NULL;
    } else {
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = node;
        node->previous = tail;
        node->next = NULL;
    }
    ++list->count;
}
}
