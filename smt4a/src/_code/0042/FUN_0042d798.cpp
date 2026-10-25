/* NON_MATCHING: register allocation and block layout differ (retail pushes r0-r3, keeps entries on the stack and does not merge the per-kind free/allocate blocks) */
#include "nn/Result.h"
#include "shard/CecMessageBox.h"
#include "shard/W6_W6Match6_CecMessageBox.h"
#include "shard/W6_W6Match1_CriticalSection.h"

#define CEC_ERROR_BOX_CLOSED ((s32)0xc8810bea)
#define CEC_ERROR_NO_DATA ((s32)0xc8810bef)
#define CEC_ERROR_NO_MEMORY ((s32)0xc8610bf3)
#define CEC_ERROR_BAD_INDEX ((s32)0xc8e1086a)

/* One 0x70-byte message record of an index. */
struct CecMessageRecord {
    /* 0x00 */ u16 signature; /* 0x6060 */
    /* 0x02 */ u8 unk02[0xe];
    /* 0x10 */ u32 boxId;
    /* 0x14 */ u8 unk14[0x5c];
};

/* The message box with the two index buffers' handles. */
struct CecBoxView {
    /* 0x000 */ MessageBox box;
    /* 0x1e0 */ u8 unk1e0[0x1c8];
    /* 0x3a8 */ u32 inboxBuffer;
    /* 0x3ac */ u8 unk3ac[0x1ac];
    /* 0x558 */ u32 outboxBuffer;
};

/* The module's flags: whether each index buffer is currently allocated. */
struct CecModuleView {
    CecModuleFlags prefix;
    u8 unk02;
    s8 inboxOwned;
    s8 outboxOwned;
};

extern "C" {
extern CecModuleFlags g_asdCecModuleFlags;
extern CriticalSection g_asdCecMessageBoxCriticalSection, DAT_006426cc;
u32 handlerRefForward(u32 size, u32 alignment);
void FUN_00430e58(u32 buffer);
void rt_memcpy(void *destination, const void *source, u32 bytes);

/* Reads the inbox (kind 0) or outbox (kind 1) index of an open message box into `header`, keeping
   the raw buffer allocated and listing each message record's address in `entries`. */
s32 FUN_0042d798(MessageBox *box, CecMessageIndexHeader *header, const void **entries, u32 capacity, s32 kind)
{
    CecBoxView *view = reinterpret_cast<CecBoxView *>(box);
    CecModuleView *flags = reinterpret_cast<CecModuleView *>(&g_asdCecModuleFlags);
    nn_os_CriticalSection_Enter(&g_asdCecMessageBoxCriticalSection);
    s32 result;
    if (box->id == 0) {
        result = CEC_ERROR_BOX_CLOSED;
    } else {
        u32 indexSize = 0;
        u32 bufferSize = 0;
        if (kind != 0) {
            box->vtbl->read(box, box->id, 4, 2, &bufferSize);
        } else {
            box->vtbl->read(box, box->id, 3, 2, &bufferSize);
        }
        if (bufferSize != 0) {
            s32 status = CEC_ERROR_NO_MEMORY;
            u32 buffer;
            if (kind != 0) {
                if (kind == 1 && flags->outboxOwned) {
                    header->count = 0;
                    nn_os_CriticalSection_Enter(&DAT_006426cc);
                    if (flags->outboxOwned) {
                        FUN_00430e58(view->outboxBuffer);
                        flags->outboxOwned = 0;
                    }
                    nn_os_CriticalSection_Leave(&DAT_006426cc);
                }
                nn_os_CriticalSection_Enter(&DAT_006426cc);
                if (flags->outboxOwned) {
                    FUN_00430e58(view->outboxBuffer);
                    flags->outboxOwned = 0;
                }
                view->outboxBuffer = handlerRefForward(bufferSize, 4);
                if (view->outboxBuffer != 0) {
                    flags->outboxOwned = 1;
                    status = 0;
                    nn_os_CriticalSection_Leave(&DAT_006426cc);
                } else {
                    flags->outboxOwned = 0;
                    nn_os_CriticalSection_Leave(&DAT_006426cc);
                }
                if (nnResultIsFailure(status)) {
                    header->count = 0;
                    nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
                    return CEC_ERROR_NO_MEMORY;
                }
                status = box->vtbl->writeListKeyed(box, reinterpret_cast<void *>(view->outboxBuffer), bufferSize,
                                                   &indexSize, box->id, 4, 18);
                buffer = view->outboxBuffer;
            } else {
                if (flags->inboxOwned) {
                    header->count = 0;
                    nn_os_CriticalSection_Enter(&DAT_006426cc);
                    if (flags->inboxOwned) {
                        FUN_00430e58(view->inboxBuffer);
                        flags->inboxOwned = 0;
                    }
                    nn_os_CriticalSection_Leave(&DAT_006426cc);
                }
                nn_os_CriticalSection_Enter(&DAT_006426cc);
                if (flags->inboxOwned) {
                    FUN_00430e58(view->inboxBuffer);
                    flags->inboxOwned = 0;
                }
                view->inboxBuffer = handlerRefForward(bufferSize, 4);
                if (view->inboxBuffer != 0) {
                    flags->inboxOwned = 1;
                    status = 0;
                    nn_os_CriticalSection_Leave(&DAT_006426cc);
                } else {
                    flags->inboxOwned = 0;
                    nn_os_CriticalSection_Leave(&DAT_006426cc);
                }
                if (nnResultIsFailure(status)) {
                    header->count = 0;
                    nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
                    return CEC_ERROR_NO_MEMORY;
                }
                status = box->vtbl->writeListKeyed(box, reinterpret_cast<void *>(view->inboxBuffer), bufferSize,
                                                   &indexSize, box->id, 3, 18);
                buffer = view->inboxBuffer;
            }
            if (nnResultIsSuccess(status) && indexSize != 0) {
                if (indexSize < 32 || (rt_memcpy(header, reinterpret_cast<void *>(buffer), 32), header->size != indexSize) ||
                    indexSize < header->count * 0x70 + 32U) {
                    nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
                    return CEC_ERROR_BAD_INDEX;
                }
                u32 record = buffer + 32;
                for (u32 i = 0; i < header->count; i++) {
                    CecMessageRecord copy;
                    rt_memcpy(&copy, reinterpret_cast<void *>(record), 0x70);
                    if (copy.signature != 0x6060 || copy.boxId != box->id) {
                        nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
                        return CEC_ERROR_BAD_INDEX;
                    }
                    entries[i] = reinterpret_cast<void *>(record);
                    record += 0x70;
                }
                if (bufferSize != 0) {
                    result = 0;
                    nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
                    return result;
                }
            } else {
                header->count = 0;
                if (kind != 0) {
                    nn_os_CriticalSection_Enter(&DAT_006426cc);
                    if (flags->outboxOwned) {
                        FUN_00430e58(view->outboxBuffer);
                        flags->outboxOwned = 0;
                    }
                } else {
                    nn_os_CriticalSection_Enter(&DAT_006426cc);
                    if (flags->inboxOwned) {
                        FUN_00430e58(view->inboxBuffer);
                        flags->inboxOwned = 0;
                    }
                }
                nn_os_CriticalSection_Leave(&DAT_006426cc);
            }
        }
        result = CEC_ERROR_NO_DATA;
    }
    nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
    return result;
}

} /* extern "C" */
