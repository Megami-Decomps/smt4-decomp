/* NON_MATCHING: texture-request staging saves an extra register and schedules cache flag tests differently. */
/* Starts a versioned texture request once, then polls the texture cache until completion. */
#include "common.h"

extern "C" {
u32 keyedRecordRegisterName(const char *name);
u32 FUN_003478dc(u32 key, const char *data);
s32 FUN_003afd30(void);
s32 FUN_003c5d8c(void);
void rt_memcpy_w(void *destination, const void *source, u32 size);

u32 FUN_004f6d34(void *object)
{
    struct TextureRequest {
        u8 key;
        u8 unk01[3];
        const char *data;
        char name[0x80];
        u8 flags;
        u8 unk89[3];
    };
    struct TextureRequestWork {
        u8 unk0000[0x339C];
        u32 flags;
        u8 unk33A0[0x1EC];
        TextureRequest request;
    };
    TextureRequestWork *work = (TextureRequestWork *)object;
    u32 flags = work->flags;
    if (flags & 0x10000) {
        if (flags & 0x20000) {
            return 1;
        }
        if (FUN_003c5d8c() != 0) {
            work->flags |= 0x20000;
        }
    } else {
        TextureRequest snapshot;
        rt_memcpy_w(&snapshot, &work->request, sizeof(snapshot));
        if ((snapshot.flags & 1) && snapshot.data == NULL) {
            return 0;
        }
        work->flags = flags | 0x10000;
        const char *data = work->request.data;
        if (data[0] == 'V' && data[1] == 'E' && data[2] == 'R') {
            u32 key = keyedRecordRegisterName(work->request.name);
            work->request.key = (u8)key;
            work->request.key = (u8)FUN_003478dc(key, data);
        }
        FUN_003afd30();
    }
    return (work->flags & 0x10000) != 0 && (work->flags & 0x20000) != 0;
}
}
