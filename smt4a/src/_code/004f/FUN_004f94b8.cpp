#include "common.h"

struct VersionLoadRequest {
    u8 recordId; // 0x00
    u8 unk01[3];
    const char *command; // 0x04
    char name[1]; // 0x08: inline zero-terminated name
};
struct VersionLoadState {
    u8 unk0000[0x3054];
    VersionLoadRequest request; // 0x3054
};

extern "C" {
u32 keyedRecordRegisterName(const char *);
u32 FUN_003478dc(u32, const char *);
u32 FUN_003afd30(void);

u32 FUN_004f94b8(VersionLoadState *state)
{
    VersionLoadRequest *request = &state->request;
    const char *command = request->command;
    if (command[0] == 'V' && command[1] == 'E' && command[2] == 'R') {
        u32 id = keyedRecordRegisterName(request->name);
        request->recordId = id;
        request->recordId = FUN_003478dc(id, command);
    }
    FUN_003afd30();
    return 1;
}
}
