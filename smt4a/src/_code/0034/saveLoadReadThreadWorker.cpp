/* NON_MATCHING: pointer lifetimes/branch layout differ, and independent format symbols do not fold to native folder-minus20 addressing; candidate -O2 for scheduling. */
#include "runtime/Stdio.h"
#include "AsdSDK/Source/Sys/Save/AsdSaveCommon.h"
#include "shard/Sys43e310.h"

struct SaveReadRequest {
    u32 unk00;
    s32 archive;
    s32 slot;
    u8 unk0c[8];
    void *payload;
    u32 payloadSize;
};
struct SaveReadThreadView {
    Sys43e310 flags;
    u32 unk04;
    SaveReadRequest *request;
    u32 unk0c;
    s32 state;
};
extern "C" {
extern char DAT_005e2114[128];
extern const char DAT_00531000[];
extern const char g_saveFilenamePrefixedFormat[];
extern const char DAT_00530ff8[];
void rt_aeabi_memclr(void *buffer, u32 size);
char *libc_strcpy(char *destination, const char *source);
u32 FUN_003416a0(s32 archive, u32 path);
u32 asdSaveReadBlock(u32 archive, u32 path, void *header, void *payload, u32 payloadSize);
u32 fsResultReportNotice(u32 context, s32 path, s32 operation, s32 slot);
s32 fsResultClassifyRestriction(u32 context, const char *path);

void saveLoadReadThreadWorker(u32 context)
{
    char filename[128];
    u8 header[ASD_SAVE_HEADER_SIZE];
    SaveReadThreadView *thread = (SaveReadThreadView *)&g_saveLoadThread;
    thread->flags.unk01 = 1;
    s32 archive = thread->request->archive;
    s32 slot = thread->request->slot;
    if (archive == 1) {
        rt_aeabi_memclr(DAT_005e2114, sizeof(DAT_005e2114));
        __2sprintf(DAT_005e2114, g_saveFilenamePrefixedFormat, DAT_00530ff8, slot);
    } else {
        rt_aeabi_memclr(DAT_005e2114, sizeof(DAT_005e2114));
        __2sprintf(DAT_005e2114, DAT_00531000, slot);
    }
    libc_strcpy(filename, DAT_005e2114);
    SaveReadRequest *request = thread->request;
    void *payload = request->payload;
    u32 payloadSize = request->payloadSize;
    if (FUN_003416a0(request->archive, (u32)filename)) {
        if (asdSaveReadBlock(archive, (u32)filename, header, payload, payloadSize) != 0) {
            return;
        }
        if (archive == 0) {
            if (fsResultClassifyRestriction(context, filename) == 1) {
                thread->state = 6;
            } else {
                thread->state = -1;
            }
        } else if (archive == 1) {
            fsResultReportNotice(context, (s32)filename, 0, 0);
        }
    } else {
        if (archive == 1) {
            fsResultReportNotice(context, (s32)filename, 0, 0);
        }
        thread->state = -1;
    }
    thread->flags.unk01 = 0;
}
}
