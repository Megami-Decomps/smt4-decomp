#include "classes/Obj422248.h"

struct AocManager {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 resources[1];
};
extern "C" AocManager *g_aocMain;
extern "C" void FUN_001b3428(void *);
extern "C" void asdOperatorDelete(void *);

void Obj422248::operator delete(void *memory)
{
    asdOperatorDelete(memory);
}

Obj422248::~Obj422248()
{
    FUN_001b3428(g_aocMain->resources);
}
