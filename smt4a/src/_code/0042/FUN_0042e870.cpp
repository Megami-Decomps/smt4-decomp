/* NON_MATCHING: critical-section/global pointer caching, temporary stack placement and message-header clear ordering differ. */
#include "shard/CecMessageBox.h"
#include "shard/W6_W6Match6_CecMessageBox.h"

extern "C" {
extern CecModuleFlags g_asdCecModuleFlags;
extern u32 g_asdCecMessageBoxCriticalSection, DAT_006426cc;
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
u32 nn_cec_CTR_MessageBox_WriteBoxInfo(MessageBox *box, s32 kind, const void *header, const void *data);
u32 nn_cec_CTR_MessageBox_WriteMessageBoxInfo(MessageBox *box);
void sysMemClear(void *data, u32 size);
void FUN_00430e58(u32 handle);
void FUN_0042d5b4(s32 mode);

void FUN_0042e870(MessageBox *box, s32 preserveOpen)
{
    union IndexHeader { u32 words[8]; u16 signature; };
    struct ResetView {
        MessageBox prefix;
        u8 unk1E0[0x1C];
        IndexHeader inbox;
        u8 inboxData[0x18C];
        u32 inboxHandle;
        IndexHeader outbox;
        u8 outboxData[0x18C];
        u32 outboxHandle;
        union { u32 words[2]; u16 signature; } message;
        u8 messageData[0x318];
    };
    struct ModuleView { CecModuleFlags prefix; u8 unk02; s8 inboxOwned, outboxOwned; };
    typedef char ResetViewOffsetsCheck[offsetof(ResetView, inbox) == 0x1FC &&
        offsetof(ResetView, outbox) == 0x3AC && offsetof(ResetView, message) == 0x55C &&
        offsetof(ModuleView, inboxOwned) == 3 ? 1 : -1];
    ResetView *work = reinterpret_cast<ResetView *>(box);
    ModuleView *flags = reinterpret_cast<ModuleView *>(&g_asdCecModuleFlags);
    nn_os_CriticalSection_Enter(&g_asdCecMessageBoxCriticalSection);
    if (preserveOpen == 0) {
        if (box->id != 0) {
            if (box->unk008[2])
                nn_cec_CTR_MessageBox_WriteBoxInfo(box, 0, &work->inbox, work->inboxData);
            if (box->unk008[3])
                nn_cec_CTR_MessageBox_WriteBoxInfo(box, 1, &work->outbox, work->outboxData);
            if (g_asdCecModuleFlags.open) {
                u32 result[2];
                box->vtbl->read(box, box->id, 0x96, 0x14, result);
                nn_cec_CTR_MessageBox_WriteMessageBoxInfo(box);
            }
        }
        box->vtbl->closeBox(box, box->id, 0, 0, 5);
    }
    box->id = 0;
    for (s32 index = 0; index < 8; ++index)
        work->inbox.words[index] = 0;
    for (s32 index = 0; index < 8; ++index)
        work->outbox.words[index] = 0;
    sysMemClear(work->inboxData, sizeof(work->inboxData));
    sysMemClear(work->outboxData, sizeof(work->outboxData));
    work->message.words[0] = work->message.words[1] = 0;
    sysMemClear(work->messageData, sizeof(work->messageData));
    nn_os_CriticalSection_Enter(&DAT_006426cc);
    if (flags->inboxOwned) {
        FUN_00430e58(work->inboxHandle);
        flags->inboxOwned = 0;
    }
    nn_os_CriticalSection_Leave(&DAT_006426cc);
    nn_os_CriticalSection_Enter(&DAT_006426cc);
    if (flags->outboxOwned) {
        FUN_00430e58(work->outboxHandle);
        flags->outboxOwned = 0;
    }
    nn_os_CriticalSection_Leave(&DAT_006426cc);
    work->inbox.signature = 0x6262;
    work->outbox.signature = 0x6262;
    work->message.signature = 0x6767;
    if (preserveOpen == 0) {
        FUN_0042d5b4(0);
        g_asdCecModuleFlags.started = 0;
    }
    g_asdCecModuleFlags.open = 0;
    nn_os_CriticalSection_Leave(&g_asdCecMessageBoxCriticalSection);
}
}
