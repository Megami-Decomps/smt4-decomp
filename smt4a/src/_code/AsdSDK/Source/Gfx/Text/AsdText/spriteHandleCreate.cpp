#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/Text/AsdTextA.h"
#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern AsdTextDefaultsA g_asdTextDefaults;
extern AsdText *asdMemAllocByHeapFlags(u32 size, u32 type);
extern void rt_aeabi_memclr(void *block, u32 size);

__inline void AsdText::initialize()
{
    unk34 = 0x402;
    unkAC = 0;
    drawLayer = -1;
    unkB0 = 0;
    positionMode = -1;
    color = g_asdTextDefaults.color & 0xffffff00;
    rt_aeabi_memclr(unkB4, sizeof(unkB4));
}

/* Creates a text object with its defaults. */
AsdText *spriteHandleCreate(u32 type)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Text\\AsdText.cpp", 144);
    AsdText *text = asdMemAllocByHeapFlags(sizeof(AsdText), type);
    text->initialize();
    return text;
}

} /* extern "C" */
