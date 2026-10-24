/* NON_MATCHING: retail receives the final f32 on the stack ([sp+72]) where the hard-float build passes it in s0 (--apcs=/softfp reproduces it but was rejected); the reloaded list tail also takes r2 */
#include "AsdSDK/AsdDebug.h"

/* One battle help entry: a message header, a 0x288-byte body copy and the list links. */
struct HelpNode {
    /* 0x000 */ u16 id;
    /* 0x002 */ u16 unk002;
    /* 0x004 */ u16 style;
    /* 0x006 */ u16 unk006;
    /* 0x008 */ u32 arg0;
    /* 0x00C */ u32 arg1;
    /* 0x010 */ u8 body[0x288];
    /* 0x298 */ u8 flag;
    /* 0x299 */ u8 unk299[3];
    /* 0x29C */ f32 duration;
    /* 0x2A0 */ u16 unk2A0;
    /* 0x2A2 */ u16 active;
    /* 0x2A4 */ HelpNode *next;
    /* 0x2A8 */ HelpNode *previous;
    /* 0x2AC */ u8 unk2AC[4];
};

typedef char HelpNodeSize[sizeof(HelpNode) == 0x2B0 ? 1 : -1];

/* The doubly linked list of live help entries. */
struct HelpList {
    /* 0x0 */ HelpNode *head;
    /* 0x4 */ HelpNode *tail;
    /* 0x8 */ s32 count;
};

extern "C" {
extern HelpList *DAT_00435d78;

void *asdMemAlloc(s32 heap, s32 alignment, s32 flags, s32 size, s32 clear);
void rt_memcpy_w(void *destination, const void *source, u32 bytes);

/* Creates a help entry and appends it to the help list. */
HelpNode *FUN_0022a4ac(u16 id, u16 style, u32 arg0, u32 arg1, const void *body, u8 flag, f32 duration)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlHelp.cpp", 142);
    HelpNode *node = (HelpNode *)asdMemAlloc(0x100, 0x100, 0, sizeof(HelpNode), 1);
    node->id = id;
    node->style = style;
    node->unk002 = 0;
    node->arg0 = arg0;
    node->unk006 = 0;
    node->arg1 = arg1;
    if (body != NULL) {
        rt_memcpy_w(node->body, body, sizeof(node->body));
    }
    node->flag = flag;
    node->duration = duration;
    node->unk2A0 = 0;
    node->active = 1;
    node->next = NULL;
    node->previous = NULL;
    HelpList *list = DAT_00435d78;
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
