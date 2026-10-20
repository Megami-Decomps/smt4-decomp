/* NON_MATCHING: register allocation only: retail loads the count into r1 and the ready byte into r2 (keeping r0), built reuses r0 and r1. */
#include "common.h"

extern "C" {

typedef struct Request {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 count;
} Request;

typedef struct Service {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 ready;
    /* 0x05 */ u8 unk05[0x27];
    /* 0x2C */ u8 object[1];
} Service;

extern Service DAT_00647630;

u32 FUN_0043b21c(u8 *object);

/* Returns an error code for an empty request or an unready service, else the service object's result. */
u32 FUN_002fbfac(Request *request)
{
    if (request->count <= 0) {
        return 0xD8A0A064;
    }
    if (DAT_00647630.ready == 0) {
        return 0xD8A0A3F8;
    }
    return FUN_0043b21c(DAT_00647630.object);
}

} /* extern "C" */
