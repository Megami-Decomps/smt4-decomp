#include "common.h"
#include "gamedata/DataTable40.h"
#include "gamedata/GameDataAccess_Smt4.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unk28Low : 5;
    /* 0x28 */ u32 kind : 4;
    /* 0x28 */ u32 unk28High : 23;
} Record;


/* Maps an id's record kind to a rank: kinds 0, 2 and 7 give 1, kind 6 gives 2, kind 4 gives 3, others 0; id 0 gives 99. */
u32 recordKindRank(u32 id)
{
    Record *record;
    u32 rank;

    if (id == 0) {
        return 99;
    }
    record = reinterpret_cast<Record *>(dataTable40FindById(id));
    rank = 0;
    switch (record->kind) {
    case 0:
    case 2:
    case 7:
        rank = 1;
        break;
    case 6:
        rank = 2;
        break;
    case 4:
        rank = 3;
        break;
    }
    return rank;
}

} /* extern "C" */
