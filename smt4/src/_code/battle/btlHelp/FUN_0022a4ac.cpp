#include "AsdSDK/AsdDebug.h"
#include "battle/btlHelp.h"
#include "AsdSDK/AsdMemAlloc.h"


extern "C" {
extern BtlHelpListIV *DAT_00435d78;

void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);

/* Appends a help entry to the list. */
static inline void btlHelpListAppend(BtlHelpListIV *list, BtlHelpEntryIV *node)
{
    if (list->head == NULL) {
        list->head = node;
    }
    if (list->tail == NULL) {
        list->tail = node;
    } else {
        list->tail->next = node;
        node->previous = list->tail;
        list->tail = node;
    }
    list->count++;
}

/* Creates a help entry and appends it to the help list. */
BtlHelpEntryIV *FUN_0022a4ac(u16 id, s16 style, u32 argument, u32 resource, const void *body, u8 option, BtlHelpValue value)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlHelp.cpp", 142);
    BtlHelpEntryIV *node = (BtlHelpEntryIV *)asdMemAlloc(0x100, 0x100, 0, sizeof(BtlHelpEntryIV), 1);
    node->id = id;
    node->style = style;
    node->unk002 = 0;
    node->argument = argument;
    node->flags = 0;
    node->resource = resource;
    if (body != NULL) {
        __aeabi_memcpy4(node->body, body, sizeof(node->body));
    }
    node->option = option;
    node->value.real = value.real;
    node->unk2A0 = 0;
    node->active = 1;
    node->next = NULL;
    node->previous = NULL;
    btlHelpListAppend(DAT_00435d78, node);
    return node;
}
}
