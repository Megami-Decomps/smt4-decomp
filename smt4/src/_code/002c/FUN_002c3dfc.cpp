/* NON_MATCHING: name-parse fallback layout, packed-key registers, and registry clear stores differ. */
#include "common.h"

extern "C" void asdFatalError(void);
extern "C" const char DAT_00407ecc[];

static __inline u64 mountNameKey(const char *name)
{
    u64 key = 0;
    for (s32 index = 0; index < 8; ++index) {
        s32 character = static_cast<s8>(name[index]);
        if (character == ':')
            return key;
        key = (key << 8) | static_cast<s64>(character);
    }
    return 0;
}

// Remove the named mount and release its filesystem unless the registration is borrowed.
extern "C" u32 FUN_002c3dfc(const char *path)
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
    char name[8];
    s32 length;
    for (length = 0; length < 8; ++length) {
        s8 character = path[length];
        if (character == 0 || character == ':') {
            name[length] = ':';
            break;
        }
        name[length] = character;
    }
    u64 key;
    if (length == 8) {
        asdFatalError();
        key = mountNameKey(DAT_00407ecc);
    } else {
        key = mountNameKey(name);
    }
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
