/* NON_MATCHING: argument scheduling retains the archive pointer until late and reserves 36 bytes with LR only; retail loads the archive early, saves R4/LR, and uses STRD for the size/output pair. */
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
ArchiveState* FUN_003f6db4(void);
extern FileSystemSession g_titleContentFileSystem;
u32 nn_fs_ipc_FileSystem_ControlArchive(const u32* session, u64 archive, u32 action,
                                       const void* input, u32 inputSize, void* output, u32 outputSize);

// Issues archive control action zero for the current archive, or reports no archive.
u32 FUN_00354c04()
{
    ArchiveState* state = FUN_003f6db4();
    if (state == NULL) {
        return 0xc8804465;
    }
    u32 session = g_titleContentFileSystem.handle;
    u8 input;
    u8 output;
    return nn_fs_ipc_FileSystem_ControlArchive(&session, state->archive, 0, &input, 1, &output, 1);
}
}
