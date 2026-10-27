#include "classes/Obj4221bc.h"

struct AocMain {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 resources[1];
};

extern "C" {
extern AocMain *g_aocMain;
void kernelThreadJoinAndClose(void *resources);
void asdMemFreeNonNull(void *memory);
}

inline void Obj4221bc::operator delete(void *memory)
{
    asdMemFreeNonNull(memory);
}

/* Release the resources associated with this status window. */
Obj4221bc::~Obj4221bc()
{
    kernelThreadJoinAndClose(g_aocMain->resources);
}
