/* NON_MATCHING: readable rebuild of the network session state machine; retail's shared tail (`state = next; return 1`) and the case-8 fallthrough into the wait state are arranged by armcc here with separate returns. */
#include "common.h"

/* A network object the session owns (slot 1 of its vtable is its deleting destructor). */
class SessionObject {
public:
    virtual ~SessionObject();
};

/* The online result record (an error code with two details). */
struct OnlineResult {
    s32 code;
    u32 detailA;
    u32 detailB;
};

/* The session, as the connect state machine reads it. */
struct NetSession {
    /* 0x00 */ u32 state;
    /* 0x04 */ u32 nextState;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u8 failed;
    /* 0x0D */ u8 failedA;
    /* 0x0E */ u8 failedB;
    /* 0x0F */ u8 unk0F;
    /* 0x10 */ u32 failureStage;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 result;
    /* 0x1C */ OnlineResult onlineResult;
    /* 0x28 */ u32 detail;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ s32 operation;
    /* 0x34 */ SessionObject *requestObject;
    /* 0x38 */ void *unk38;
    /* 0x3C */ SessionObject *sessionObject;
    /* 0x40 */ SessionObject *clientObject;
    /* 0x44 */ u32 buffer;
};

struct RequestStatus {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 done;
    /* 0x14 */ u8 unk14[0x24];
    /* 0x38 */ s32 resultA;
    /* 0x3C */ u32 resultB;
    /* 0x40 */ u32 resultC;
};

struct FlagObject {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 *child;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 flags;
};

extern "C" {
extern u8 DAT_00594968;

void FUN_0010d300(void);
void FUN_0010d35c(void);
void asdOperatorDelete(void *block);
void _ZN18OnlineResultRecordaSERKS_(OnlineResult *dest, const OnlineResult *source);
s32 _ZNK18OnlineResultRecord7isValidEv(const OnlineResult *record);
s32 asyncOperationStartOrPoll(s32 operation, s32 *result, u32 *detail);
void FUN_003fa1c8(NetSession *session);
NetSession *FUN_003fa580(NetSession *session);
void FUN_00414a24(void);
void FUN_004321a0(void);
s32 ctrNetInitialize(s32 *result);
s32 FUN_00441f84(void);
void FUN_00442630(void);
void FUN_00442a94(void);
void nexUtilInit(void);
void nexUtilShutdown(void);
u32 FUN_00111800(OnlineResult *record);
FlagObject *FUN_00122220(void);
FlagObject *FUN_001224a0(void);

/* Steps the connect/disconnect state machine: initialise the network stack and its helpers, wait
 * for the request, build the online result and on the way out release the objects it created.
 * Returns 1 to be called again next frame. */
NetSession *FUN_003fa83c(NetSession *session)
{
    u32 next;
    switch (session->state) {
    case 0:
        next = 1;
        break;
    case 1:
        if (asyncOperationStartOrPoll(session->operation, &session->result, &session->detail) == 0) {
            if (session->result < 0) {
                session->failed = 1;
                session->failedA = 1;
                session->failedB = 1;
                session->failureStage = 14;
            }
            return NULL;
        }
        next = 2;
        break;
    case 2:
        if (ctrNetInitialize(&session->result) == 0)
            return (NetSession *)1;
        next = 3;
        break;
    case 3:
        nexUtilInit();
        next = 4;
        break;
    case 4:
        session->result = FUN_00441f84();
        session->nextState = 5;
        return (NetSession *)1;
    case 5:
        FUN_0010d300();
        DAT_00594968 = 2;
        *(u8 *)&FUN_00122220()->flags = 1;
        FUN_001224a0()->flags |= 1;
        FUN_00122220()->child[0xF] = 1;
        FUN_001224a0()->child[0xF] = 1;
        next = 6;
        break;
    case 6:
        FUN_003fa1c8(session);
        return session;
    case 7:
        return FUN_003fa580(session);
    case 8: {
        RequestStatus *status = (RequestStatus *)session->sessionObject;
        if (status->done != 1) {
            OnlineResult fresh = { status->resultA, status->resultB, status->resultC };
            _ZN18OnlineResultRecordaSERKS_(&session->onlineResult, &fresh);
            if (_ZNK18OnlineResultRecord7isValidEv(&session->onlineResult)) {
                next = 9;
                break;
            }
            session->detail = FUN_00111800(&session->onlineResult);
            FUN_00442630();
            session->failed = 1;
            session->failedA = 1;
            session->failedB = 1;
            session->failureStage = 9;
        }
        return NULL;
    }
    case 9:
        if (session->sessionObject != NULL) {
            delete session->sessionObject;
            session->sessionObject = NULL;
        }
        if (session->clientObject != NULL) {
            delete session->clientObject;
            session->clientObject = NULL;
        }
        if (session->requestObject != NULL) {
            delete session->requestObject;
            session->requestObject = NULL;
        }
        if (session->buffer != 0) {
            FUN_00414a24();
            asdOperatorDelete((void *)session->buffer);
            session->buffer = 0;
        }
        next = 10;
        break;
    case 10:
        FUN_0010d35c();
        next = 11;
        break;
    case 11:
        FUN_00442a94();
        next = 12;
        break;
    case 12:
        nexUtilShutdown();
        next = 13;
        break;
    case 13:
        FUN_004321a0();
        session->nextState = 14;
        return (NetSession *)1;
    case 14:
        return NULL;
    default:
        return (NetSession *)1;
    }
    session->nextState = next;
    return (NetSession *)1;
}

} /* extern "C" */
