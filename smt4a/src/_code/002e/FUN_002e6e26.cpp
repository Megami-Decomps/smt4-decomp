#include "common.h"
extern "C" {
struct Context { u8 unk00[0x0C]; void *instance; };
Context *onlineInstantiationContextGetCurrent(void);
/* Returns the current context's instance, if a context exists. */
void *FUN_002e6e26(void) {
    Context *context = onlineInstantiationContextGetCurrent();
    return context != NULL ? context->instance : NULL;
}
}
