#include "shard/W6_W6Match3_UnitStatusRequest.h"
#include "shard/W6_W6Match5_UnitCategory.h"
#include "shard/Shard0033.h"

union UnitStatusRequestState {
    ObjB data;
    struct {
        u8 unk000[0x1390];
        u8 work[0x640];
        u8 unk19d0[0x640];
        u8 open;               // 0x2010
        u8 unk2011[6];
        u8 kind;               // 0x2017
        u8 unk2018[0xc];
        u8 option;             // 0x2024
        u8 phase;              // 0x2025
        u8 unk2026[0xc];
        u8 refresh;            // 0x2032
        u8 unk2033[0x7d];
        u8 enabled;            // 0x20b0
    } request;
};

extern "C" {

extern ObjBRef g_gameGlobals;
void FUN_0026fd50(void* work, const UnitCategoryRecord* unit, u16 id, const void* extra);

void statusRequestUnitDetails(const UnitCategoryRecord* unit, u8 option, const void* extra)
{
    UnitStatusRequestState* state = (UnitStatusRequestState*)g_gameGlobals.instance;
    state->request.open = 1;
    state->request.kind = 4;
    FUN_0026fd50(state->request.work, unit, unit->id, extra);
    state->request.option = option;
    state->request.enabled = 1;
    state->request.phase = 0;
    state->request.refresh = 1;
}

} // extern "C"
