/* NON_MATCHING: tree insertion and the out-of-memory message (inline literal) now match in structure; remaining differences are frame layout (retail keeps the result pair at [sp] with its address in r7 and the insert link at [sp+8]; the build keeps both above a larger frame and spills the result address) and the scheduling of the allocator virtual call. */
#include "mobiclip/MoLiveHandlers.h"

/* Registers a handler for a mode; true when the table holds one for it afterwards. */
extern "C" bool FUN_004ad02c(MessageHandlerTable *table, u32 mode, u8 enabled, SelectionObjectCreate callback)
{
    MoLive::Tree<MessageHandler>::InsertResult result =
        table->handlers.insert(mode, MessageHandler(enabled, callback));
    return result.node != table->handlers.end();
}
