/* NON_MATCHING: compiler uses different stack-frame allocation and instruction scheduling. */
#include "common.h"
#include <stddef.h>
extern "C" {
struct Object { u8 unk00[0x20]; u32 fields[4]; };
Object *onlineSockAddrConstruct2(Object *object, u32 value);
u32 *clearWords4(u32 *fields);
void FUN_002f8242(void);
/* Constructs the object, initializes its first cleared field, and performs setup. */
Object *FUN_002fff64(Object *object, u32 field, u32 value) {
    object = onlineSockAddrConstruct2(object, value);
    u32 *fields = clearWords4(object->fields);
    fields[0] = field;
    FUN_002f8242();
    return (Object *)((u8 *)fields - offsetof(Object, fields));
}
}
