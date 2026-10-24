/* NON_MATCHING: register allocation differs: retail keeps the record's argument in a stack slot and copies the functor fields into separate registers for each listener loop (extra moves, [sp] locals); structure, bitfield test and ldrd pairs otherwise match. */
/* Retail draws every record of a callback list through std::for_each. */
#include "gfx/DrawCallbackRecord.h"
#include <algorithm>

extern "C" void FUN_00148748(u32 state, u32 argument, DrawCallbackOwner *owner);

/* Notifies one listener of a draw. */
struct DrawListenerNotify {
    DrawCallbackOwner *owner;
    u32 argument;
    u32 context;

    DrawListenerNotify(DrawCallbackOwner *ownerValue, u32 argumentValue, u32 contextValue)
        : owner(ownerValue), argument(argumentValue), context(contextValue) {}

    void operator()(DrawCallbackListener *listener) const { listener->onDraw(owner, argument, context); }
};

/* Dispatches a record: its direct callback, or the owner's listeners around the owner's own update. */
struct DrawCallbackDispatch {
    u32 context;
    u32 state;

    DrawCallbackDispatch(u32 contextValue, u32 stateValue) : context(contextValue), state(stateValue) {}

    void operator()(const DrawCallbackRecord &record) const
    {
        if (record.mode < 0) {
            record.callback->invoke(context);
            return;
        }
        u32 argument = record.argument;
        DrawCallbackOwner *owner = record.owner;
        std::for_each(owner->beforeListeners->begin, owner->beforeListeners->end, DrawListenerNotify(owner, argument, context));
        FUN_00148748(state, argument, owner);
        std::for_each(owner->afterListeners->begin, owner->afterListeners->end, DrawListenerNotify(owner, argument, context));
    }
};

/* Draws a record list twice, as the scene passes do. */
extern "C" void drawCallbackRecordsTwice(DrawCallbackRecord *first, DrawCallbackRecord *last, u32 context, u32 state)
{
    std::for_each(first, last, DrawCallbackDispatch(context, state));
    std::for_each(first, last, DrawCallbackDispatch(context, state));
    std::for_each(first, last, DrawCallbackDispatch(context, state));
    std::for_each(first, last, DrawCallbackDispatch(context, state));
    std::for_each(first, last, DrawCallbackDispatch(context, state));
    std::for_each(first, last, DrawCallbackDispatch(context, state));
    std::for_each(first, last, DrawCallbackDispatch(context, state));
    std::for_each(first, last, DrawCallbackDispatch(context, state));
}
