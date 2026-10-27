/* NON_MATCHING: the record-flag test now lowers to TST/MOVNE as in retail; remaining: retail shares one register for the constant 1 and `allowed`, keeps the zero constant in r6 and uses a 300-byte frame, so session/option registers differ. */
#include "shard/Shard0033.h"
#include "gamedata/Table00Lookup.h"

extern "C" {
extern ObjBRef g_gameGlobals;
void FUN_0035ad50(u32 id, void *record);
void FUN_0026fd50(void *display, const void *record, u32 mode, u32 options);

// Load a character into the session display and update whether it can be selected.
void FUN_0034a9c4(u32 id, u32 options)
{
    u8 record[300];
    ObjB *session = g_gameGlobals.instance;
    bool allowed = true;
    session->sessionDisplay.active = 1;
    FUN_0035ad50(id, record);
    session->unk2017 = 5;
    FUN_0026fd50(session->block1390, record, 0, options);
    session->unk20B0 = 1;
    if ((s16)id >= 0) {
        Table00Record *devil = dataTable00FindById(id & 0xffff);
        if (devil == NULL)
            allowed = false;
        else {
            allowed = true;
            if (devil->flags & 0x400)
                allowed = false;
            if (g_gameGlobals.instance && g_gameGlobals.instance->unk2017 == 17)
                allowed = false;
        }
    }
    session->sessionEligibility.allowed = allowed;
    if (!allowed && session->sessionSelection.pending)
        session->sessionSelection.pending = 0;
}
}
