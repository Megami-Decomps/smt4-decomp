#include "battle/BtlMainAccess.h"
#include "common.h"
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

struct VersionLoadRequest {
    u8 recordId; // 0x00
    u8 unk01[3];
    const char *command; // 0x04
    char name[0x84]; // 0x08: inline zero-terminated name
}; // 0x8c
struct VersionLoadSet {
    u8 unk0000[0x281C];
    VersionLoadRequest requests[11]; // 0x281c
};

extern "C" {
struct BtlMainStateA;
s32 btlScriptUnitHasFlags(void);
u32 FUN_003478dc(u32, const char *);
void btlEffectResolveNames(VersionLoadSet *set);
void FUN_004f7cd0(VersionLoadSet *set);
void FUN_004f9278(VersionLoadSet *set);
void FUN_004f9e0c(VersionLoadSet *set);
void textureCachePollReady(void);

/* Registers every "VER" request's record: the body of nameEntriesRegisterVerNames, which retail inlines here. */
static __inline void registerVersionRecords(VersionLoadSet *set)
{
    s32 i;

    for (i = 0; i < 11; i++) {
        VersionLoadRequest *request = &set->requests[i];
        const char *command = request->command;

        if (command[0] == 'V' && command[1] == 'E' && command[2] == 'R') {
            u32 id = keyedRecordRegisterName(request->name);
            request->recordId = id;
            request->recordId = FUN_003478dc(id, command);
        }
    }
}

/* Unless the script unit holds its flags, registers every "VER" request's record, then runs the set's follow-up loaders. */
void btlEffectLoadVersionedSet(VersionLoadSet *set)
{
    btlGetMainState();
    if (btlScriptUnitHasFlags() != 0) {
        return;
    }
    registerVersionRecords(set);
    btlEffectResolveNames(set);
    FUN_004f7cd0(set);
    FUN_004f9278(set);
    FUN_004f9e0c(set);
    textureCachePollReady();
}

} /* extern "C" */
