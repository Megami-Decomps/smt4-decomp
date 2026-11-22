/* NON_MATCHING: 77 lines (110 vs 107 rows): 9-entry jump table, all case bodies, vtables, and tail-calls match; retail passes an uninitialized r5 as asdOperatorNew's second arg and hoists case 6 constants into r5/r7/r8. */
#include "network/DataStore/DataStoreMain.h"
#include "network/Common/CTRNetInit.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "classes/Obj557b58.h"

struct DataStoreLoginReq {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 base[0x0C];
    /* 0x10 */ u8 flag10;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ DataStoreLink *link;
    /* 0x18 */ u32 appId;
    /* 0x1C */ u8 accessKey[8];
    /* 0x24 */ u32 timeout;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u8 resultHeader[0x0C];
    /* 0x3C */ u32 status;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u8 unk44;
    /* 0x45 */ u8 unk45[3];
};

extern "C" {
extern const u32 _ZTV9Obj55cb20[];
extern const u32 _ZTV9Obj55ca5c[];
extern const char DAT_00533030[];

void *_Znwj(u32 size);
u32 wordByteClear(void *ptr);
DataStoreLink *FUN_00122a60(void *ptr);
void *FUN_002e9ff4(void *member);
void *_ZN9Obj55aff4C1EPKt(void *dst, const u16 *str);
u32 FUN_002fafd0(void *ptr, u32 arg);
void FUN_00122a10(void *out, DataStoreLink *link, u32 arg);
void dataStoreSubmitJob(DataStoreWork *work);

static const u16 sAccessKey[] = { '2', '0', '2', '5', '6', 'b', '7', '3', 0 };

/* Advances the DataStore client's login/fetch state machine for states 1, 6, 7, and 8. */
void dataStoreRequestDispatch(DataStoreWork *work)
{
    switch ((u32)work->state) {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
        break;
    case 1:
        if (work->transfer.unk04 == 0) {
            void *mem = asdMemoryAllocTraced(8, DAT_00533030, 0x147);
            work->transfer.unk04 = mem != NULL ? wordByteClear(mem) : 0;
        }
        break;
    case 6:
        if (work->transfer.request == NULL && FUN_00432acc() != 0) {
            void *linkMem = _Znwj(0x150);
            work->transfer.link = linkMem != NULL ? FUN_00122a60(linkMem) : NULL;
            DataStoreLoginReq *req = (DataStoreLoginReq *)asdOperatorNew(sizeof(DataStoreLoginReq));
            if (req != NULL) {
                DataStoreLink *link = work->transfer.link;
                req->vtable = &_ZTV9Obj55cb20[2];
                u8 *m = (u8 *)FUN_002e9ff4(req->base);
                m[0x0C] = 0;
                *(const void **)(m - 4) = &_ZTV9Obj55ca5c[2];
                *(DataStoreLink **)(m + 0x10) = link;
                *(u32 *)(m + 0x14) = 0x00166B00;
                u8 *k = (u8 *)_ZN9Obj55aff4C1EPKt(m + 0x18, sAccessKey);
                *(u32 *)(k + 0x0C) = 0;
                *(u32 *)(k + 0x08) = 60000;
                *(u32 *)(k + 0x10) = 0;
                u8 *r = (u8 *)FUN_002e9ff4(k + 0x14);
                *(u32 *)(r + 0x0C) = 0xE7E3FFFF;
                *(u32 *)(r + 0x10) = 0;
                r[0x14] = 0;
                req = (DataStoreLoginReq *)(r - 0x30);
            }
            work->transfer.request = (DataStoreRequest *)req;
            work->transfer.request->vfn08();
        }
        break;
    case 7:
        dataStoreSubmitJob(work);
        break;
    case 8: {
        void *mem = _Znwj(0x78);
        work->transfer.unk10 = mem != NULL ? FUN_002fafd0(mem, 0) : 0;
        u8 result[16];
        FUN_00122a10(result, work->transfer.link, work->transfer.unk10);
        break;
    }
    }
}
}
