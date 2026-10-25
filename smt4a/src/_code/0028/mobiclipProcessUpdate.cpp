/* NON_MATCHING: inlined UTF-16 path temporaries do not share retail's directory-read workspace; reset/state layout and unused allocator r1 setup also differ. */
#include "mobiclip_ctrl/MobiclipCtrlProcess.h"
#include "nn/Result.h"
#include "addon/aocMain.h"
#include "shard/W4_Match3_AocMainA.h"

struct MovieDirectory;
struct MovieDirectoryVtable {
    void (*destroy)(MovieDirectory *directory);
    void (*deleteSelf)(MovieDirectory *directory);
};
struct MovieDirectory {
    const MovieDirectoryVtable *vtable;
    void *handle;
};
struct MovieDirectoryEntry {
    /* 0x000 */ u16 name[0x106];
    /* 0x20C */ u8 unk20c[0x10];
    /* 0x21C */ u8 directory;
    /* 0x21D */ u8 unk21d[0xb];
};
struct MovieTaskWork {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 state;
    /* 0x14 */ u32 status;
    /* 0x18 */ u8 playing, fadeOut, skippable;
    /* 0x1B */ char path[0x40];
    /* 0x5B */ u8 browse;
    /* 0x5C */ MovieDirectory *directory;
    /* 0x60 */ s32 count;
    /* 0x64 */ MovieDirectoryEntry *entries;
    /* 0x68 */ s32 selected;
    /* 0x6C */ f32 elapsed;
    /* 0x70 */ u32 frame;
    /* 0x74 */ u8 special, stopRequested, error, autoSkip, allowSkip, preset;
    /* 0x7A */ u16 unk7a;
};
struct MovieControlGate {
    u8 unk00[0x98];
    AocObjB event;
    u8 unk0a8[0x6ac];
    u32 flags;
};
typedef char MovieDirectoryEntrySizeCheck[sizeof(MovieDirectoryEntry) == 0x228 ? 1 : -1];
typedef char MovieTaskWorkSizeCheck[sizeof(MovieTaskWork) == 0x7c ? 1 : -1];

extern "C" {
extern MobiclipProcessGlobals g_mobiclipProcess;
extern const MovieDirectoryVtable DAT_00558328;
MovieTaskWork *jobGetWork();
void *asdOperatorNew(u32 size);
void *asdOperatorNewE(u32 size);
s32 refIsNullOrZero(u32 *state);
u32 FUN_00100836(const char *source, u32 size, u32 *state);
s32 FUN_002e3c44(u16 *destination, const char *source, u32 size, u32 *state);
s32 FUN_0042b1e4(void **handle, const u16 *path);
s32 vcallSlot0With3(u32 *read, void *handle, MovieDirectoryEntry *entry, u32 count);
void FUN_0016e800(s32 result, u32 address);
void objectReleaseIfSet(void *handle);
s32 padButtonRepeat(u32 button);
s32 padButtonIsPressed(u32 button);
u32 FUN_00102bbc(char *destination, const u16 *source, u32 size);
void textFormatBuffer(char *destination, const char *format, ...);
void FUN_00139518();
void FUN_00359738();
void soundEffectFreeBuffers();
void engineSetStateFlag();
void FUN_001f4e7c();
s32 asdFsIsSdCardDetected();
s32 FUN_0022655c(const char *path);
void FUN_00213bc8(const char *path);
u32 FUN_003d2eec(const char *path);
void FUN_003d54f8(u32 screen, u32 duration);
u32 sysLightEventTryWait(AocObjB *event);
void FUN_00229104();
s32 moviePumpUntilReady();
s32 slotIsActive(u32 button);
void slotSetRequest(u32 slot, u32 duration, u32 color);
s32 FUN_002e07f4();
void mobiclipCtrlShutdown();
void FUN_001f51ac();
void soundSetupArchiveAndSlots();
void soundInitializePersistentSlots();
void soundEffectInitializeDelay();
void FUN_0013ae58();
void titleConfigApply();
void engineClearStateFlag1();
void FUN_0025c864();
void scriptStartEntryById(const char *entry);
s32 engineIsResourceStateTwo();
}

static inline void checkMovieDirectoryResult(s32 result, u32 address)
{
    if (!nnResultIsSuccess(result))
        FUN_0016e800(result, address);
}

static __forceinline void openMovieDirectory(MovieDirectory *directory)
{
    u16 path[0x106];
    u32 state[2] = {0, 0};
    refIsNullOrZero(state);
    const char *source = "rom:/moflex";
    u16 *destination = path;
    u32 length;
    while ((length = FUN_00100836(source, 0x105, state)) != 0) {
        if (!FUN_002e3c44(destination, source, length, state))
            break;
        ++destination;
        source += length;
    }
    *destination = 0;
    checkMovieDirectoryResult(FUN_0042b1e4(&directory->handle, path), __current_pc());
}

static inline void resetMoviePlayback()
{
    FUN_001f51ac();
    soundSetupArchiveAndSlots();
    soundInitializePersistentSlots();
    soundEffectInitializeDelay();
    FUN_0013ae58();
    titleConfigApply();
    engineClearStateFlag1();
    g_mobiclipProcess.unk00 = 0;
}

extern "C" s32 mobiclipProcessUpdate()
{
    MovieTaskWork *work = jobGetWork();
    switch (work->state) {
    case 0:
        if (work->entries == NULL) {
            MovieDirectory *directory = (MovieDirectory *)asdOperatorNew(sizeof(MovieDirectory));
            if (directory) {
                directory->vtable = &DAT_00558328;
                directory->handle = NULL;
            }
            work->directory = directory;
            openMovieDirectory(work->directory);
            MovieDirectoryEntry entry;
            u32 count;
            for (;;) {
                checkMovieDirectoryResult(vcallSlot0With3(&count, work->directory->handle, &entry, 1), __current_pc());
                if (count == 0)
                    break;
                if (!entry.directory)
                    ++work->count;
            }
            objectReleaseIfSet(work->directory->handle);
            work->directory->handle = NULL;
            work->entries = (MovieDirectoryEntry *)asdOperatorNewE(work->count * sizeof(MovieDirectoryEntry));
            openMovieDirectory(work->directory);
            s32 index = 0;
            for (;;) {
                checkMovieDirectoryResult(vcallSlot0With3(&count, work->directory->handle, &work->entries[index], 1), __current_pc());
                if (count == 0)
                    break;
                if (!work->entries[index].directory)
                    ++index;
            }
            objectReleaseIfSet(work->directory->handle);
            work->directory->handle = NULL;
            if (work->directory)
                work->directory->vtable->deleteSelf(work->directory);
            work->directory = NULL;
        }
        work->state = 1;
        return 0;
    case 1:
        if (padButtonRepeat(5)) {
            if (--work->selected < 0)
                work->selected = work->count - 1;
            return 0;
        }
        if (padButtonRepeat(6)) {
            if (++work->selected >= work->count)
                work->selected = 0;
            return 0;
        }
        if (padButtonIsPressed(0)) {
            char name[0x40];
            FUN_00102bbc(name, work->entries[work->selected].name, sizeof(name));
            textFormatBuffer(work->path, "rom:/moflex/%s", name);
            work->state = 2;
        } else if (padButtonIsPressed(2)) {
            work->state = 14;
        }
        return 0;
    case 2:
        g_mobiclipProcess.unk00 = 1;
        FUN_00139518();
        FUN_00359738();
        soundEffectFreeBuffers();
        engineSetStateFlag();
        FUN_001f4e7c();
        work->state = 3;
    case 3:
        if (work->special) {
            if (!asdFsIsSdCardDetected()) {
                work->state = 9;
                work->error = 1;
                return 0;
            }
            if (FUN_0022655c(work->path)) {
                FUN_00213bc8(work->path);
            } else {
                work->state = 9;
                work->error = 1;
            }
        } else {
            work->status = FUN_003d2eec(work->path);
        }
        if (work->status == 7) {
            work->state = 7;
            return 0;
        }
        FUN_003d54f8(0, 10);
        FUN_003d54f8(1, 10);
        ++work->state;
        return 0;
    case 4:
        if (work->special && sysLightEventTryWait(&((MovieControlGate *)g_aocMain)->event)) {
            ((MovieControlGate *)g_aocMain)->flags &= ~0x10000u;
            work->state = 9;
            return 0;
        }
        FUN_00229104();
        ++work->state;
    case 5:
        if (moviePumpUntilReady()) {
            if (work->autoSkip) {
                if (!work->allowSkip || !work->skippable)
                    return 0;
            } else {
                if ((!slotIsActive(9) && !slotIsActive(6)) || !work->skippable)
                    return 0;
            }
            if (work->fadeOut) {
                slotSetRequest(0, 0, -1u);
                slotSetRequest(1, 10, -1u);
                work->elapsed = 1.0f;
                work->state = 6;
                return 0;
            }
        } else {
            if (work->special && work->stopRequested) {
                work->stopRequested = 0;
                work->state = 9;
                return 0;
            }
            if (work->fadeOut) {
                slotSetRequest(0, 0, -1u);
                slotSetRequest(1, 10, -1u);
                work->state = 6;
                return 0;
            }
        }
        work->state = 7;
        return 0;
    case 6:
        if (FUN_002e07f4())
            work->state = 7;
        return 0;
    case 7:
        mobiclipCtrlShutdown();
        ++work->state;
        return 0;
    case 8:
        resetMoviePlayback();
        if (work->special)
            FUN_0025c864();
        if (work->browse) {
            work->state = 0;
            return 0;
        }
        work->state = 14;
        if (!work->fadeOut) {
            u32 color = work->playing ? -1u : 0xff;
            slotSetRequest(0, 10, color);
            slotSetRequest(1, 10, color);
        }
        return 0;
    case 9:
        mobiclipCtrlShutdown();
        work->state = 10;
        return 0;
    case 10:
        resetMoviePlayback();
        work->state = 11;
        return 0;
    case 11:
        if (work->special)
            FUN_0025c864();
        if (work->error) {
            FUN_003d54f8(0, 10);
            FUN_003d54f8(1, 10);
        }
        work->state = 12;
        return 0;
    case 12:
        if (work->error && !FUN_002e07f4())
            return 0;
        scriptStartEntryById("Add_Movie_SD_ERR");
        work->state = 13;
        return 0;
    case 13:
        if (engineIsResourceStateTwo()) {
            slotSetRequest(0, 1, 0xff);
            slotSetRequest(1, 1, 0xff);
            work->state = 14;
        }
        return 0;
    case 14:
        return FUN_002e07f4() ? -1 : 0;
    default:
        return 0;
    }
}
