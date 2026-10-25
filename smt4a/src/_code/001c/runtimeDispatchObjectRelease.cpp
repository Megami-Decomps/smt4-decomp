#include "common.h"

struct RuntimeExceptionObject {
    s32 kind;
};
typedef void (*RuntimeExceptionRelease)(RuntimeExceptionObject *object);
extern "C" RuntimeExceptionRelease DAT_0059dac8[5];

// Dispatch destruction of a built-in runtime exception by its type code.
extern "C" void runtimeDispatchObjectRelease(RuntimeExceptionObject **exception)
{
    RuntimeExceptionObject *object = *exception;
    switch (object->kind) {
    case 0x20000011: DAT_0059dac8[0](object); break;
    case 0x20000009: DAT_0059dac8[1](object); break;
    case 0x20000004: DAT_0059dac8[2](object); break;
    case 0x20000002: DAT_0059dac8[3](object); break;
    case 0x20000021: DAT_0059dac8[4](object); break;
    }
}
