#include "common.h"

class OnlineRequestState {
public:
    virtual ~OnlineRequestState();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void update();
    virtual void vfunc1c();
    virtual s32 start();
    virtual s32 poll();

    u8 unk04[0x10]; // 0x04
    u16 state;       // 0x14
};

extern "C" void FUN_002f9f28(OnlineRequestState* request, s32 state, s32 flags);

// Update the request, start it from pending states, and finish once its virtual operation completes.
extern "C" u16 FUN_002fd210(OnlineRequestState* request)
{
    request->update();
    switch (request->state) {
    case 1:
    case 0x40:
        FUN_002f9f28(request, 2, 0);
        if (request->start() != 0) {
            FUN_002f9f28(request, 4, 0);
        }
        break;
    case 2:
        if (request->poll() != 0) {
            FUN_002f9f28(request, 4, 0);
        }
        break;
    case 4:
        return 4;
    case 8:
        return 8;
    default:
        return request->state;
    }
    return request->state;
}
