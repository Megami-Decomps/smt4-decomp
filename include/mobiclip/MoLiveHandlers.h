#ifndef MOBICLIP_MOLIVEHANDLERS_H
#define MOBICLIP_MOLIVEHANDLERS_H

#include "classes/AllocatedSelection.h"
#include "mobiclip/MoLiveTree.h"
#include <stddef.h>

struct MessageHandlerTable;

extern "C" {
void registerFour4AD02C(MessageHandlerTable *table);
bool FUN_004ad02c(MessageHandlerTable *table, u32 mode, u8 enabled, SelectionObjectCreate create);
} /* extern "C" */

/* What a message mode is handled with. */
struct MessageHandler {
    MessageHandler(u8 enabled, SelectionObjectCreate callback) : enabled(enabled), callback(callback) {}

    /* 0x00 */ u8 enabled;
    /* 0x04 */ SelectionObjectCreate callback;
};

/* Handlers by message mode, owned by the player. */
struct MessageHandlerTable {
    MessageHandlerTable(MoLive::Allocator *allocator, void (*hook)())
        : allocator(allocator), handlers(allocator, hook)
    {
        registerFour4AD02C(this);
    }

    /* 0x00 */ MoLive::Allocator *allocator;
    /* 0x04 */ MoLive::Tree<MessageHandler> handlers;
};

typedef char MessageHandlerSizeCheck[sizeof(MessageHandler) == 8 && offsetof(MessageHandler, callback) == 4 ? 1 : -1];

#endif
