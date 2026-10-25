/* NON_MATCHING: the reloaded previous list tail uses r1 instead of retail's r2. */
#include "AsdSDK/AsdDebug.h"
#include "battle/btlHelp.h"


extern "C" {
extern BtlHelpListIV *DAT_00435d78;

void *asdMemAlloc(s32 heap, s32 alignment, s32 flags, s32 size, s32 clear);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);

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
    BtlHelpListIV *list = DAT_00435d78;
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
    return node;
}
}
