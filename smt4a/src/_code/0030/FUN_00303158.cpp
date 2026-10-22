/* NON_MATCHING: Raw storage for the still-unnamed native parser initializer has different stack placement and cleanup joins. */
#include "classes/Obj558c00.h"

struct ResourceReadWork { u32 unk00[0x2C]; };
struct ResourceDataBuffer { u32 unk00[8]; };
extern "C" {
void FUN_002f7a28(ResourceReadWork*);
s32 FUN_002f7ac4(ResourceReadWork*, const void*);
void FUN_002ec70c(ResourceReadWork*);
void FUN_002ece14(ResourceDataBuffer*, const ResourceDataBuffer*);
s32 FUN_002fdef8(ResourceReadWork*, ResourceDataBuffer*);
void strDestroy(ResourceDataBuffer*);
Obj558c00* FUN_002ecd54(Obj558c00*);
s32 FUN_002ecb04(Obj558c00*, const void*);

// Initializes a resource reader, copies its input, and decodes the requested range.
u32 FUN_00303158(void* unused, const ResourceDataBuffer* input,
    Obj558c00Range* range, const void* configuration)
{
    ResourceReadWork reader;
    FUN_002f7a28(&reader);
    if (FUN_002f7ac4(&reader, configuration) == 0) {
        FUN_002ec70c(&reader);
        return 0;
    }
    ResourceDataBuffer buffer;
    FUN_002ece14(&buffer, input);
    if (FUN_002fdef8(&reader, &buffer) == 0) {
        strDestroy(&buffer);
        FUN_002ec70c(&reader);
        return 0;
    }
    // The still-unnamed native initializer starts the parser's lifetime in this storage.
    u32 parserStorage[sizeof(Obj558c00) / sizeof(u32)];
    Obj558c00* parser = reinterpret_cast<Obj558c00*>(parserStorage);
    FUN_002ecd54(parser);
    if (FUN_002ecb04(parser, configuration) == 0) {
        parser->Obj558c00::~Obj558c00();
        strDestroy(&buffer);
        FUN_002ec70c(&reader);
        return 0;
    }
    u32 result = parser->Obj558c00::vfunc10((s32)&buffer, range) == 0;
    parser->Obj558c00::~Obj558c00();
    strDestroy(&buffer);
    FUN_002ec70c(&reader);
    return result;
}
}
