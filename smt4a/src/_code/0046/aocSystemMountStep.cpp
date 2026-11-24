/* NON_MATCHING: 297 lines (shape 213). Control flow, calls, block order and the 76-byte frame match. Retail keeps
 * the constant 1 in r8 from the prologue (this build: a scratch register for the constructor, r9 later) and
 * &g_aocMain in r9, which renames most rows; its stack slots for the step result, the missing-content copy and the
 * request copies sit at other offsets; it copies the queued request as three words plus a doubleword (ldm/ldrd)
 * where this build copies five words; it loads the thread launch's arguments in
 * another order. Two single-use inline helpers scored better (301/211: the missing-content
 * test taking the result by value, and a test-and-set of the cancel flag) and were written in place for want of
 * evidence besides the score. */
#include "addon/aocMain.h"
#include "addon/AocSystemA.h"
#include "shard/W6_W6Match1_QueuedRequestToken.h"
#include "nn/Result.h"
#include "nn/os/ThreadLaunch.h"
#include "sys/ResultReport.h"
#include "sys/RuntimeObjects.h"
#include "util/BitsAndBytes.h"
#include "kernel/jyoucyuGetTableEntry.h"

/* AocSystemA::state: the steps of mounting the add-on packages. */
enum {
    AOC_MOUNT_ENUMERATE = 0,   /* open the content archive and list the packages */
    AOC_MOUNT_START_THREAD = 1,
    AOC_MOUNT_JOIN_THREAD = 2,
    AOC_MOUNT_LOAD_DIRECTORIES = 3,
    AOC_MOUNT_LOAD_FILES = 4,
    AOC_MOUNT_BUILD_TABLES = 5,
    AOC_MOUNT_DONE = 6
};

enum {
    AOC_REQUEST_IDLE = 0,
    AOC_REQUEST_ACTIVE = 1,
    AOC_REQUEST_CANCELLED = 200,
    AOC_MOUNT_RETRIES = 3,
    AOC_MOUNT_THREAD_PRIORITY = 17
};

extern "C" {

void _ZN9Obj4221d4D1Ev(void *package);
void __aeabi_vec_delete(void *array, void (*destructor)(void *));
s32 sysLightEventTryWait(LightEvent *event);
s32 asdFsIsSdCardDetected(void);
RequestParameters aocFinishHandleOperation(AocSystemA *system);
RequestParameters aocEnumerateContentRecords(AocSystemA *system);
void aocPackageOwnerFreeTables(AocSystemA *owner);
s32 FUN_002fb0d4(AocWorkerThread *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(AocSystemA *),
                 AocSystemA **argument, u32 stackTop, s32 priority, s32 processor, u32 flags);
void FUN_00471adc(AocSystemA *system);
void FUN_00514a94(void);
void FUN_00514b90(void);
void FUN_00514b38(void);
s32 threadTryJoinAndClose(AocWorkerThread *thread);
u8 objGetFlagBit0(const u16 *state);
s32 recordIsEnabledAndPresent(const AocPackage *package);
void aocEntryBeginBaseLoad(AocPackage *package);
void FUN_004740b4(AocPackage *package);
void aocRequestDataEntryFiles(AocPackage *entry);
u32 aocPackageAllRequestedFilesReady(AocPackage *entry);
void FUN_0046c528(AocSystemA *system);
u32 aocMainQueueRequest(AocMain *main, const RequestParameters *parameters, u32 token);

/* nn::os::Thread::Start: runs `entry(argument)` on the AOC worker thread's stack; a failure is reported
 * (the same helper as in Obj422248::vfunc0c, with this unit's argument type). */
static __inline void aocStartWorkerThread(AocWorkerThread *thread, void (*entry)(AocSystemA *), AocSystemA *argument,
                                          AocThreadStack &stack, s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = FUN_00514a94;
    descriptor.callbacks[1] = FUN_00514b90;
    descriptor.callbacks[2] = FUN_00514b38;
    s32 status = FUN_002fb0d4(thread, &descriptor, entry, &argument, stack.base + stack.size, priority, processor, 0);
    if ((status & 0x7e00000) != 0x600000) {
        bool failed = nnResultIsFailure(status);
        if (failed) {
            resultHandleFailure(status, failed);
        }
    }
}

/* Whether the package's content is in use (its state bit 0). A plain static: with its six calls armcc inlines it
 * late, as retail's code has it (357 lines as `static __inline`). */
static u8 aocPackageIsActive(AocPackage *package)
{
    return objGetFlagBit0(&package->id);
}

/* Bit `bit` of a flag word, as 0 or 1. */
static __inline u32 flagBit(u32 flags, u32 bit)
{
    return (flags & (1u << bit)) >> bit;
}

/* Destroys the package array. */
static __inline void aocSystemDeletePackages(AocSystemA *system)
{
    if (system->packages != NULL) {
        __aeabi_vec_delete(system->packages, _ZN9Obj4221d4D1Ev);
        system->packages = NULL;
    }
}

/* The body of aocReleasePackageOwner, which retail inlines here. */
static __inline void aocSystemReleasePackages(AocSystemA *system)
{
    system->packageCount = 0;
    system->packageHandle = 0;
    system->unk350 = 0;
    aocSystemDeletePackages(system);
    aocPackageOwnerFreeTables(system);
    g_aocMain->flags &= ~0x10000u;
}

/* One step of mounting the add-on packages. Returns the request the caller keeps polling with: active
 * while the mount goes on, idle once it is done, or the failure, which is also queued on the AOC process. */
RequestParameters aocSystemMountStep(AocSystemA *system)
{
    RequestParameters request;

    if (sysLightEventTryWait(&g_aocMain->operationDone) != 0) {
        g_aocMain->flags &= ~0x10000u;
        system->state = AOC_MOUNT_DONE;
        request.kind = AOC_REQUEST_CANCELLED;
    } else {
        switch (system->state) {
        case AOC_MOUNT_ENUMERATE: {
            if (!asdFsIsSdCardDetected()) {
                jyoucyuGetTableEntry(0);
                request.kind = AOC_REQUEST_IDLE;
                return request;
            }
            aocSystemDeletePackages(system);

            RequestParameters step = aocFinishHandleOperation(system);

            if (byteIsAtLeast100(&step.kind)) {
                /* Without the SD card or the content there is nothing to mount, which is no failure. */
                WindowStatusResult failure = step.result;
                bool missing = false;

                if (legacyResourceIdRemap(&failure) == 0xc8813894) {
                    missing = true;
                }
                if (legacyResourceIdRemap(&failure) == 0xc8813887) {
                    missing = true;
                }
                if (missing) {
                    request.kind = AOC_REQUEST_IDLE;
                    return request;
                }
                request = step;
                break;
            }
            step = aocEnumerateContentRecords(system);
            if (!byteIsAtLeast100(&step.kind)) {
                system->state = AOC_MOUNT_START_THREAD;
                return request;
            }
            request = step;
            break;
        }
        case AOC_MOUNT_START_THREAD:
            if ((s32)system->phase > system->waitFrames) {
                system->waitFrames++;
            } else {
                aocStartWorkerThread(&g_aocMain->thread, FUN_00471adc, system, *g_aocMain->thread.stack,
                                     AOC_MOUNT_THREAD_PRIORITY, -2);
                system->state = AOC_MOUNT_JOIN_THREAD;
            }
            return request;
        case AOC_MOUNT_JOIN_THREAD:
            if (!threadTryJoinAndClose(&g_aocMain->thread)) {
                return request;
            }
            if (byteIsAtLeast100(&system->mountResult.kind)) {
                request = system->mountResult;
                break;
            }
            for (s32 i = 0; i < system->packageCount; i++) {
                if (aocPackageIsActive(&system->packages[i])) {
                    aocEntryBeginBaseLoad(&system->packages[i]);
                }
            }
            system->state = AOC_MOUNT_LOAD_DIRECTORIES;
            return request;
        case AOC_MOUNT_LOAD_DIRECTORIES:
            for (s32 i = 0; i < system->packageCount; i++) {
                if (aocPackageIsActive(&system->packages[i]) && !recordIsEnabledAndPresent(&system->packages[i])) {
                    return request;
                }
            }
            for (s32 i = 0; i < system->packageCount; i++) {
                if (aocPackageIsActive(&system->packages[i]) && recordIsEnabledAndPresent(&system->packages[i])) {
                    FUN_004740b4(&system->packages[i]);
                }
            }
            system->loadIndex = 0;
            system->state = AOC_MOUNT_LOAD_FILES;
            system->loadStep = 0;
            return request;
        case AOC_MOUNT_LOAD_FILES:
            if (system->packageCount != 0) {
                switch (system->loadStep) {
                case 0:
                    for (; system->loadIndex < system->packageCount; system->loadIndex++) {
                        if (aocPackageIsActive(&system->packages[system->loadIndex]) &&
                            recordIsEnabledAndPresent(&system->packages[system->loadIndex])) {
                            aocRequestDataEntryFiles(&system->packages[system->loadIndex]);
                            system->loadStep = 1;
                            break;
                        }
                    }
                    break;
                case 1:
                    if (aocPackageAllRequestedFilesReady(&system->packages[system->loadIndex])) {
                        system->loadIndex++;
                        system->loadStep = 0;
                    }
                    break;
                }
                if (system->loadIndex < system->packageCount) {
                    return request;
                }
            }
            system->state = AOC_MOUNT_BUILD_TABLES;
            return request;
        case AOC_MOUNT_BUILD_TABLES:
            FUN_0046c528(system);
            request.kind = AOC_REQUEST_IDLE;
            system->state = AOC_MOUNT_DONE;
            return request;
        default:
            return request;
        }
    }

    /* The mount failed or was cancelled: drop the packages and hand the request to the AOC process. */
    aocSystemReleasePackages(system);
    jyoucyuGetTableEntry(0);

    u32 flags = g_aocMain->flags;
    u32 cancelled = flagBit(flags, 4);

    if (!cancelled) {
        flags |= 0x10;
        g_aocMain->flags = flags;
    }
    if (cancelled) {
        return request;
    }
    g_aocMain->flags |= 0x40;
    system->state = AOC_MOUNT_DONE;
    if (legacyResourceIdRemap(&request.result) == 0xc9413891) {
        return request;
    }
    if (sysLightEventTryWait(&g_aocMain->operationDone) != 0) {
        g_aocMain->flags &= ~0x10000u;
    } else if (request.kind != AOC_REQUEST_CANCELLED) {
        if (g_aocMain->submitTokenRequest(request, *reinterpret_cast<QueuedRequestHandle *>(&request.result)) != 0) {
            return request;
        }
        if (request.kind == 105) {
            RequestParameters parameters = request;

            aocMainQueueRequest(g_aocMain, &parameters, request.word3);
            return request;
        }
        if (request.kind == 106) {
            g_aocMain->queueRequest(request, request.word4, 0);
            return request;
        }
        legacyResourceIdRemap(&request.result);
        if (nnResultLevel(legacyResourceIdRemap(&request.result)) == -4 ||
            nnResultLevel(legacyResourceIdRemap(&request.result)) == -5) {
            g_aocMain->queueRequest(request, (g_aocMain->flags & 0x100) ? 50 : 150, 0);
            return request;
        }
        if (++system->unk350 >= AOC_MOUNT_RETRIES) {
            return request;
        }
        system->state = AOC_MOUNT_ENUMERATE;
        request.kind = AOC_REQUEST_ACTIVE;
        request.word3 = 0;
        request.result = WindowStatusResult(request.word3);
        return request;
    }
    g_aocMain->queueRequest(request, (g_aocMain->flags & 0x100) ? 102 : 101, 0);
    return request;
}

} /* extern "C" */
