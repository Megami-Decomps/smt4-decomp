/* NON_MATCHING: initial vptr/test scheduling differs; native member destruction otherwise matches. */
#include "shard/W6_W6Match1_Obj559374.h"

struct Obj559374Implementation {
    void* object;
    void* buffer;
    u32 unk08;
    u8 borrowed;
    u8 unk0d[3];
};
struct Obj559374Registry {
    u8 unk00[0x64];
    void* registrations;
};

extern "C" {
extern Obj559374Registry g_onlineRegistry;
void FUN_002fb25c(void* registrations, u32 key);
void* FUN_002fb1d4(void* object);
void FUN_002fb244(void* object);
void FUN_001055f4(void* data);
void FUN_002fb1c4(void* object);
void operatorDeleteArray2(void* buffer);
void asdOperatorDeleteArray(void* object);
}

Obj559374::~Obj559374()
{
    if (registered != 0) {
        FUN_002fb25c(g_onlineRegistry.registrations, registration);
    }
    Obj559374Implementation* resource = implementation;
    if (resource != NULL) {
        if (resource->object != NULL) {
            if (resource->borrowed == 0) {
                void* data = FUN_002fb1d4(resource->object);
                FUN_002fb244(resource->object);
                FUN_001055f4(data);
            }
            FUN_002fb1c4(resource->object);
            resource->object = NULL;
        }
        if (resource->buffer != NULL) {
            operatorDeleteArray2(resource->buffer);
            resource->buffer = NULL;
        }
        asdOperatorDeleteArray(resource);
    }
    implementation = NULL;
}
