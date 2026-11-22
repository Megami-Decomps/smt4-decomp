/* NON_MATCHING: as its twin smt4a fsUnmountByName: the 64-bit pack loop register allocation (retail shifts the high word first and needs only r4/r5) and the registry clear stores differ. */
#include "sys/MountNameKey.h"

// Remove the named mount and release its filesystem unless the registration is borrowed.
extern "C" u32 fsUnmountByName(const char *path)
{
    struct FileSystem;
    struct FileSystemCallbacks {
        void *unk00[12];
        void (*release)(FileSystem *);
    };
    struct FileSystem { FileSystemCallbacks *vtable; };
    struct MountRecord {
        u64 name;
        FileSystem *fileSystem;
        u8 unk0c;
        s8 borrowed;
        u8 unk0e[2];
    };
    struct TitleFileSystemView { u8 unk00[8]; FileSystem *current; };
    extern MountRecord DAT_004d43e0[32];
    extern TitleFileSystemView g_titleContentFileSystem;
    u64 key = mountKeyFromName(reinterpret_cast<const s8 *>(path));
    for (u32 index = 0; index < 32; ++index) {
        MountRecord *mount = &DAT_004d43e0[index];
        if (mount->name == key) {
            FileSystem *fileSystem = mount->fileSystem;
            s8 borrowed = mount->borrowed;
            mount->fileSystem = NULL;
            mount->name = 0;
            if (fileSystem == NULL)
                return 0xc8804465;
            if (!borrowed) {
                fileSystem->vtable->release(fileSystem);
                if (fileSystem == g_titleContentFileSystem.current)
                    g_titleContentFileSystem.current = NULL;
            }
            return 0;
        }
    }
    return 0xc8804465;
}
