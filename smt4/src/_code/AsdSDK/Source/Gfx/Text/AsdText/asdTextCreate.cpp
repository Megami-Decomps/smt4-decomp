#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

AsdText *FUN_00124bd8(s32 size, u32 arg);

extern u32 g_asdTextDefaults[];

/* Creates a text object with its defaults. */
AsdText *asdTextCreate(u32 arg)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Text\\AsdText.cpp", 137);
    AsdText *text = FUN_00124bd8(0xb4, arg);

    text->unk34 = 0x402;
    text->unkAC = 0;
    text->unk50 = -1;
    text->unkB0 = 0;
    text->unk9c = -1;
    text->color = g_asdTextDefaults[2] & 0xffffff00;
    return text;
}

} /* extern "C" */
