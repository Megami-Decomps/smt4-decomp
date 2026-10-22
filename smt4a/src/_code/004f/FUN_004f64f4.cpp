/* NON_MATCHING: the request stride product (i * 35) lands in r1 in retail; armcc reuses r0. */
#include "common.h"

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
void btlGetMainState(void);
s32 btlScriptUnitHasFlags(void);
u32 keyedRecordRegisterName(const char *);
u32 FUN_003478dc(u32, const char *);
void FUN_004f8790(VersionLoadSet *set);
void FUN_004f7cd0(VersionLoadSet *set);
void FUN_004f9278(VersionLoadSet *set);
void FUN_004f9e0c(VersionLoadSet *set);
void FUN_003afd30(void);

/* Unless the script unit holds its flags, registers every "VER" request's record, then runs the set's follow-up loaders. */
void FUN_004f64f4(VersionLoadSet *set)
{
    btlGetMainState();
    if (btlScriptUnitHasFlags() != 0) {
        return;
    }
    for (s32 i = 0; i < 11; i++) {
        VersionLoadRequest *request = &set->requests[i];
        const char *command = request->command;
        if (command[0] == 'V' && command[1] == 'E' && command[2] == 'R') {
            u32 id = keyedRecordRegisterName(request->name);
            request->recordId = id;
            request->recordId = FUN_003478dc(id, command);
        }
    }
    FUN_004f8790(set);
    FUN_004f7cd0(set);
    FUN_004f9278(set);
    FUN_004f9e0c(set);
    FUN_003afd30();
}

} /* extern "C" */
