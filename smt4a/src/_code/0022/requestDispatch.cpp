#include "shard/W6_W6Match6_EffectRender.h"

extern "C" {

/* 0x44-byte table entry; the handler pointer sits at +0xc. */
typedef struct {
    u8 unk00[0xc];
    void (*handler)(void *arg);     /* 0x0c */
    u8 unk10[0x34];
} HandlerEntry;


extern HandlerEntry g_handlerTable[];

/* Dispatches the request to its table entry's handler. */
void requestDispatch(void *opaqueRequest)
{
    EffectHandlerRequest *request = static_cast<EffectHandlerRequest *>(opaqueRequest);
    g_handlerTable[request->index].handler(reinterpret_cast<void *>(request->argument));
}

} /* extern "C" */
