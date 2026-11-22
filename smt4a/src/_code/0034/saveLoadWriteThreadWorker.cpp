/* NON_MATCHING: 119 lines off. Retail addresses the filename buffer as a section anchor (`add r0, r7, #0`: a
 * static of the file, shared with saveLoadReadThreadWorker) and the prefixed format as the folder string minus 20
 * (one object); it also keeps the request block in r8 and the job in r6. */
#include "runtime/Stdio.h"
#include "gamedata/SaveLoadThreadRequest.h"
#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"
#include "shard/Sys43e310.h"
#include <stddef.h>

extern "C" {
void rt_aeabi_memclr(void *, u32);
char *libc_strcpy(char *, const char *);
void FUN_00399c90(u32, const char *);
s32 FUN_0032c8c8(void);
void fsResultReportNotice(u32, const char *, u32, u32);
void asdSaveHeaderInit(AsdSaveHeader *, u32, u32, u32, u32, u32, u32);
s32 asdSaveWriteBlock(u32, const char *, const AsdSaveHeader *, const void *, u32);
s32 fsResultClassifyRestriction(u32, const char *);
void colorForMode(u32);
extern char DAT_005e2114[128];
extern const char DAT_00531000[];
extern const char g_saveFilenamePrefixedFormat[];
extern const char DAT_00530ff8[];

/* The save thread's write job: builds the save file name for the request's slot (on the SD card or in the
 * extra save data), writes the request's payload under a save header and reports a failed write. */
void saveLoadWriteThreadWorker(u32 job)
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
    if (backend == 1) {
        FUN_00399c90(backend, "sdds4/");
        if (FUN_0032c8c8()) {
            fsResultReportNotice(job, "sdds4/", 1, 0);
            return;
        }
        u32 slot = state->request->slot;
        rt_aeabi_memclr(DAT_005e2114, sizeof(DAT_005e2114));
        __2sprintf(DAT_005e2114, g_saveFilenamePrefixedFormat, DAT_00530ff8, slot);
    } else {
        u32 slot = state->request->slot;
        rt_aeabi_memclr(DAT_005e2114, sizeof(DAT_005e2114));
        __2sprintf(DAT_005e2114, DAT_00531000, slot);
    }
    char filename[128];
    AsdSaveHeader header;
    libc_strcpy(filename, DAT_005e2114);
    asdSaveHeaderInit(&header, 0x34534444, 0x454d4147, 0, state->request->payloadSize, 0, 0);
    if (!asdSaveWriteBlock(backend, filename, &header, state->request->payload, state->request->payloadSize)) {
        if (backend == 0) {
            state->result = fsResultClassifyRestriction(job, filename) == 1 ? 6 : -1;
        } else if (backend == 1) {
            fsResultReportNotice(job, filename, 1, 0);
            state->busy = 0;
            return;
        }
        state->busy = 0;
    }
    colorForMode(backend);
}
}
