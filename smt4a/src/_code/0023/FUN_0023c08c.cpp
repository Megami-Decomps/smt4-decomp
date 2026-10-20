#include "common.h"

extern "C" {

void sysPlaySe(s32 id);
s32 FUN_00224880(u32 handle);
s32 FUN_003343f0(s32 value);
s32 FUN_00275f44(u32 handle, s32 request);

typedef struct Record {
    /* 0x000 */ u8 unk000[0x42C];
    /* 0x42C */ u32 handle;
    /* 0x430 */ u8 busy;
    /* 0x431 */ u8 unk431[3];
    /* 0x434 */ s32 request;
    /* 0x438 */ u8 unk438[0x50];
    /* 0x488 */ s32 pending;
} Record;
extern Record *DAT_0057f290;

/* Queues `request`: while busy it is kept as the pending request; otherwise, if FUN_00275f44 accepts it, it starts (requests 8..0xC and 0xE also play sound effect 0xA0) and the record becomes busy. Returns whether it started. */
u32 FUN_0023c08c(s32 request)
{
    Record *record;
    s32 accepted;

    record = DAT_0057f290;
    if (DAT_0057f290 != NULL) {
        if (DAT_0057f290->busy != 0) {
            DAT_0057f290->pending = request;
        } else {
            accepted = FUN_00275f44(DAT_0057f290->handle, request);
            if (accepted != 0) {
                FUN_00224880(record->handle);
                if (((!(request == 8 || request == 9)) && (!(request == 10 || request == 0xB))) &&
                    (!(request == 0xC || request == 0xE))) {
                    if (request == 0xD) {
                        FUN_003343f0(1);
                    }
                } else {
                    FUN_003343f0(1);
                    sysPlaySe(0xA0);
                }
                record->pending = 0xFFFFFFFF;
                record->request = request;
                record->busy = 1;
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
