/* NON_MATCHING: filename literal grouping, backend branch layout and completion-tail scheduling differ. */
#include "gamedata/SaveLoadThreadRequest.h"
#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"
#include "shard/Sys43e310.h"
#include <stddef.h>

extern "C" {
void rt_aeabi_memclr(void *, u32);
s32 textFormatBuffer(char *, const char *, ...);
char *libc_strcpy(char *, const char *);
void FUN_00399c90(u32, const char *);
s32 FUN_0032c8c8(void);
void FUN_002c7388(u32, const char *, u32, u32);
void FUN_00280bd0(AsdSaveHeader *, u32, u32, u32, u32, u32, u32);
s32 asdSaveWriteBlock(u32, const char *, const AsdSaveHeader *, const void *, u32);
s32 FUN_002ef7f0(u32, const char *);
void colorForMode(u32);
extern char DAT_005e2114[128];

void FUN_00349ca4(u32 job)
{
    // Request and result extend beyond the shared controller's four-byte prefix.
    struct SaveThreadWriteView {
        u8 unk00;
        u8 busy;
        u8 unk02[6];
        SaveLoadThreadRequest *request;
        u32 unk0c;
        s32 result;
    };
    typedef char SaveThreadWriteOffsets[offsetof(SaveThreadWriteView, request) == 8 &&
        offsetof(SaveThreadWriteView, result) == 0x10 ? 1 : -1];
    SaveThreadWriteView *state = reinterpret_cast<SaveThreadWriteView *>(&g_saveLoadThread);
    u32 backend = state->request->file;
    state->busy = 1;
    if (backend != 1) {
        u32 slot = state->request->slot;
        rt_aeabi_memclr(DAT_005e2114, 128);
        textFormatBuffer(DAT_005e2114, "sdds4game%d.sav", slot);
    } else {
        FUN_00399c90(1, "sdds4/");
        if (FUN_0032c8c8()) {
            FUN_002c7388(job, "sdds4/", 1, 0);
            return;
        }
        u32 slot = state->request->slot;
        rt_aeabi_memclr(DAT_005e2114, 128);
        textFormatBuffer(DAT_005e2114, "%ssdds4game%d.sav", "sdds4/", slot);
    }
    char filename[128];
    AsdSaveHeader header;
    libc_strcpy(filename, DAT_005e2114);
    FUN_00280bd0(&header, 0x34534444, 0x454d4147, 0, state->request->payloadSize, 0, 0);
    if (!asdSaveWriteBlock(backend, filename, &header, state->request->payload, state->request->payloadSize)) {
        if (backend == 0) {
            state->result = FUN_002ef7f0(job, filename) == 1 ? 6 : -1;
        } else if (backend == 1) {
            FUN_002c7388(job, filename, 1, 0);
            state->busy = 0;
            return;
        }
        state->busy = 0;
    }
    colorForMode(backend);
}
}
