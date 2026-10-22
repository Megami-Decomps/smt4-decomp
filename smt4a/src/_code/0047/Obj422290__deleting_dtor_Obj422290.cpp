#include "classes/Obj422290.h"
struct Obj422290Manager { u8 unk00[0x88]; u8 queue[4]; };
extern "C" {
extern Obj422290Manager *g_aocMain;
void FUN_001b3428(void *queue);
void asdOperatorDelete(void *block);
}

Obj422290::~Obj422290()
{
    FUN_001b3428(g_aocMain->queue);
}

void Obj422290::operator delete(void *block)
{
    asdOperatorDelete(block);
}
