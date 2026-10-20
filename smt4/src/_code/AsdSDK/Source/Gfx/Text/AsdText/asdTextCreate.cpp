/* NON_MATCHING: retail wraps the object creation in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling (the file name literal is embedded in the function's pool) */
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

extern "C" {

AsdText *FUN_00124bd8(s32 size, u32 arg);

extern u32 DAT_00464d48[];

/* Creates a text object with its defaults. */
AsdText *asdTextCreate(u32 arg)
{
    AsdText *text = FUN_00124bd8(0xb4, arg);

    text->unk34 = 0x402;
    text->unkAC = 0;
    text->unk50 = -1;
    text->unkB0 = 0;
    text->unk9c = -1;
    text->color = DAT_00464d48[2] & 0xffffff00;
    return text;
}

} /* extern "C" */
