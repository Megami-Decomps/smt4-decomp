/* NON_MATCHING: retail keeps the zero action argument in r4 for `stm sp, {r4, ip}` and stores the 1 and the session handle separately; this build merges them with stm and uses r4 for the handle. */
#include "common.h"

struct ArchiveState {
    u8 unk00[8]; // 0x00
    u64 archive;   // 0x08
};
struct FileSystemSession {
    u8 unk00[0x10]; // 0x00
    u32 handle;      // 0x10
};

extern "C" {
ArchiveState* FUN_00514964(void);
extern FileSystemSession DAT_00589398;
u32 nn_fs_ipc_FileSystem_ControlArchive(const u32* session, u64 archive, u32 action,
                                       const void* input, u32 inputSize, void* output, u32 outputSize);

// Issues archive control action zero for the current archive, or reports no archive.
u32 FUN_00429e64()
{
    ArchiveState* state = FUN_00514964();
    if (state == NULL) {
        return 0xc8804465;
    }
    u64 archive = state->archive;
    u32 session = DAT_00589398.handle;
    u8 input;
    u8 output;
    return nn_fs_ipc_FileSystem_ControlArchive(&session, archive, 0, &input, 1, &output, 1);
}
}
